/* ADX audio output. CRI's mwRna (the ADXT PCM renderer) writes decoded samples through an MWSND port: an object whose first
   word points at the function table 0x8c278600 (slots from +0x0c: Destroy, Play, Stop, GetBufSize, SetNumChan, GetPlayPos,
   SetSfreq, GetSfreq, SetBps, GetBps, SetOutVol, GetOutVol, SetOutPan, GetOutPan, SetExPrm, GetExPrm, Trns, GetTrnsStat).
   On the Dreamcast the port is a Manatee PCM stream (sdPstm) played by the AICA's ARM7 from a ring in sound RAM, filled by
   sdMemBlk transfers. Nothing runs on an ARM here, so the play/transfer/position slots are taken over: each port keeps its ring
   host-side and the AI DMA interrupt mixes every playing port to 48 kHz stereo, advancing the play position mwRna polls.
   Port object fields: +0x08 channels, +0x0c channels in use, +0x10 bits per sample, +0x14 sample rate, +0x40 ring bytes. */
#include "host.h"
#include <gccore.h>
#include <ogc/audio.h>
#include <ogc/lwp_watchdog.h>
#include <ogc/lwp.h>
#include <math.h>

extern "C" unsigned long xlat_orig(unsigned long);
typedef unsigned long (*hfn)(unsigned long, unsigned long, unsigned long, unsigned long);

#define NPORT 8
#define OUT_FRAMES 1024                      /* per DMA buffer: 21 ms at 48 kHz */
struct Port {
  unsigned obj;                              /* guest MWSND object, 0 = free slot */
  short *ring[2];
  unsigned smp;                              /* ring length in samples */
  unsigned pos;                              /* end of the mixed audio, 16.16 samples */
  unsigned bstart[3], cbpos;                 /* start of each queued output buffer / of the one now playing */
  u64 tcb;                                   /* when that buffer started (the DMA callback) */
  unsigned step;                             /* sample rate / 48000, 16.16 */
  int playing, vol, pan[2], gain;            /* vol: 0.1 dB; pan: -15..15; gain: Q15 */
};
static Port ports[NPORT];
#define NBUF 3
static short outbuf[NBUF][OUT_FRAMES * 2] __attribute__((aligned(32)));
static volatile int playbuf;                 /* output buffer the AI DMA is playing */
static int alog, tlog;                       /* play/stop and transfer calls logged so far */
extern "C" unsigned wii_cur_frame;

static Port *port_of(unsigned obj, int make)
{
  Port *fr = 0;
  for (int i = 0; i < NPORT; i++) { if (ports[i].obj == obj) return &ports[i]; if (!ports[i].obj && !fr) fr = &ports[i]; }
  if (!make || !fr) return 0;
  memset(fr, 0, sizeof *fr); fr->gain = 0x7fff;
  fr->obj = obj;
  return fr;
}
/* size the host ring from the object (the guest sets channels, bits and ring bytes when it opens the port) */
static void port_ring(Port *p)
{
  int bps = GM(int, p->obj + 0x10); unsigned bytes = GM(unsigned, p->obj + 0x40);
  if (bps != 8 && bps != 16) bps = 16;
  unsigned smp = bytes * 8 / bps;
  if (smp == 0 || smp > 0x40000) smp = 0x2000;
  if (p->smp == smp && p->ring[0]) return;
  u32 lev = IRQ_Disable();
  for (int c = 0; c < 2; c++) { free(p->ring[c]); p->ring[c] = (short *)calloc(smp, 2); }
  p->smp = smp; p->pos = 0;
  IRQ_Restore(lev);
}

/* AICA output (44.1 kHz) resampled to the 48 kHz of the AI: linear, carrying the last sample and the phase across buffers */
extern "C" void aica_render(short *out, int n);
#define AICA_STEP 60211u                     /* 44100 / 48000, 16.16 */
static short aica_in[2 * (OUT_FRAMES + 4)];
static unsigned aica_phase;
static void aica_block(int *acc)
{
  unsigned need = (aica_phase + (OUT_FRAMES - 1) * AICA_STEP) >> 16;   /* new samples after the carried one */
  aica_render(aica_in + 2, need + 1);
  unsigned q = aica_phase;
  for (int f = 0; f < OUT_FRAMES; f++) {
    unsigned k = q >> 16, fr = q & 0xffff;
    for (int c = 0; c < 2; c++) { int a = aica_in[2 * k + c], b = aica_in[2 * k + 2 + c]; acc[2 * f + c] += a + (((b - a) * (int)fr) >> 16); }
    q += AICA_STEP;
  }
  unsigned used = q >> 16;
  aica_in[0] = aica_in[2 * used]; aica_in[1] = aica_in[2 * used + 1];
  aica_phase = q & 0xffff;
}

static void mix(int b)
{
  static int acc[OUT_FRAMES * 2];
  short *o = outbuf[b];
  memset(acc, 0, sizeof acc);
  aica_block(acc);
  for (int i = 0; i < NPORT; i++) {
    Port *p = &ports[i];
    if (!p->obj || !p->playing || !p->ring[0]) continue;
    p->bstart[b] = p->pos;
    int nch = GM(int, p->obj + 0x0c); if (nch < 1 || nch > 2) nch = 1;
    unsigned lim = p->smp << 16, pos = p->pos, step = p->step;
    int g = p->gain;
    for (int c = 0; c < nch; c++) {
      int pn = nch == 2 ? (c ? 15 : -15) : p->pan[0];
      if (pn < -15 || pn > 15) pn = 0;
      int gl = g * (pn <= 0 ? 15 : 15 - pn) / 15, gr = g * (pn >= 0 ? 15 : 15 + pn) / 15;
      const short *r = p->ring[c]; unsigned q = pos;
      for (int f = 0; f < OUT_FRAMES; f++) {
        unsigned k = q >> 16, k1 = k + 1 == p->smp ? 0 : k + 1; int fr = (q >> 1) & 0x7fff;
        int s = r[k] + (((r[k1] - r[k]) * fr) >> 15);
        acc[2 * f] += (s * gl) >> 15; acc[2 * f + 1] += (s * gr) >> 15;
        q += step; if (q >= lim) q -= lim;
      }
      if (c == nch - 1) p->pos = q;
    }
  }
  for (int f = 0; f < OUT_FRAMES * 2; f++) { int s = acc[f]; o[f] = s > 32767 ? 32767 : s < -32768 ? -32768 : s; }
  DCFlushRange(o, sizeof outbuf[0]);
}
/* the DMA callback fires when the buffer queued last starts playing: note where each port is in it, queue the next buffer (mixed
   ahead by the sound thread) and wake the thread to mix the one after; the ARM7 and the AICA run in that thread */
static lwpq_t snd_q;
static void dma_cb(void)
{
  int b = (playbuf + 1) % NBUF;
  u64 now = gettime();
  for (int i = 0; i < NPORT; i++) { Port *p = &ports[i]; if (p->obj && p->playing) { p->cbpos = p->bstart[b]; p->tcb = now; } }
  playbuf = b;
  AUDIO_InitDMA((u32)outbuf[(b + 1) % NBUF], sizeof outbuf[0]);
  LWP_ThreadSignal(snd_q);
}
static void *snd_thread(void *)
{
  for (;;) {
    LWP_ThreadSleep(snd_q);
    mix((playbuf + 2) % NBUF);
  }
  return 0;
}

extern "C" void aica_init(void);
extern "C" void host_audio_init(void)
{
  aica_init();
  AUDIO_Init(0);
  AUDIO_SetDSPSampleRate(AI_SAMPLERATE_48KHZ);
  memset(outbuf, 0, sizeof outbuf);
  DCFlushRange(outbuf, sizeof outbuf);
  LWP_InitQueue(&snd_q);
  static char stk[32768] __attribute__((aligned(32)));
  lwp_t t; LWP_CreateThread(&t, snd_thread, 0, stk, sizeof stk, 80);
  playbuf = 0;
  AUDIO_RegisterDMACallback(dma_cb);
  AUDIO_InitDMA((u32)outbuf[0], sizeof outbuf[0]);
  AUDIO_StartDMA();
}

/* ---- MWSND slots ---- */
static unsigned long orig(unsigned a, unsigned long r4, unsigned long r5, unsigned long r6, unsigned long r7)
{
  unsigned long h = xlat_orig(a);
  return h ? ((hfn)h)(r4, r5, r6, r7) : 0;
}
static unsigned long snd_destroy(unsigned long o, unsigned long b, unsigned long c, unsigned long d)
{
  Port *p = port_of(o, 0);
  if (p) { u32 lev = IRQ_Disable(); p->playing = 0; free(p->ring[0]); free(p->ring[1]); memset(p, 0, sizeof *p); IRQ_Restore(lev); }
  return orig(0x8c26a5d6, o, b, c, d);
}
static unsigned long snd_play(unsigned long o, unsigned long b, unsigned long c, unsigned long d)
{
  Port *p = port_of(o, 1); if (!p) return 0;
  port_ring(p);
  int fs = GM(int, o + 0x14); if (fs < 4000 || fs > 96000) fs = 22050;
  p->step = (unsigned)(((unsigned long long)fs << 16) / 48000);
  p->pos = p->cbpos = 0; p->bstart[0] = p->bstart[1] = p->bstart[2] = 0; p->tcb = gettime(); p->playing = 1;
  if (alog < 200) { alog++; host_log("snd play %x at frame %u nch=%d use=%d bps=%d fs=%d bytes=%x\n", (unsigned)o, wii_cur_frame, (int)GM(int, o + 8), (int)GM(int, o + 0xc), (int)GM(int, o + 0x10), fs, (unsigned)GM(unsigned, o + 0x40)); }
  return 0;
}
static unsigned long snd_stop(unsigned long o, unsigned long, unsigned long, unsigned long)
{
  Port *p = port_of(o, 0); if (p) p->playing = 0;
  if (alog < 200) { alog++; host_log("snd stop %x at frame %u\n", (unsigned)o, wii_cur_frame); }
  return 0;
}
static unsigned long snd_getpos(unsigned long o, unsigned long, unsigned long, unsigned long)
{
  Port *p = port_of(o, 0);
  if (!p || !p->playing) return 0;
  /* the AICA reports where it is playing right now: interpolate from the start of the playing buffer by the real time since its
     DMA started (mwRna and the game's stall check poll several times per DMA buffer and need to see the position move) */
  u32 lev = IRQ_Disable();
  unsigned base = p->cbpos, step = p->step; u64 t = p->tcb;
  IRQ_Restore(lev);
  unsigned long long us = ticks_to_microsecs(gettime() - t);
  unsigned long long adv = us * 48 * step / 1000;
  unsigned long long cap = (unsigned long long)OUT_FRAMES * step;
  if (adv > cap) adv = cap;
  return (unsigned)((((unsigned long long)base + adv) >> 16) % p->smp);
}
static unsigned long snd_setvol(unsigned long o, unsigned long v, unsigned long, unsigned long)
{
  Port *p = port_of(o, 1); if (!p) return 0;
  int db = (int)v; if (db > 0) db = 0; if (db < -960) db = -960;
  p->vol = db; p->gain = db <= -960 ? 0 : (int)(32767.0 * pow(10.0, db / 200.0));
  return 0;
}
static unsigned long snd_getvol(unsigned long o, unsigned long, unsigned long, unsigned long) { Port *p = port_of(o, 0); return p ? (unsigned long)(long)p->vol : 0; }
static unsigned long snd_setpan(unsigned long o, unsigned long ch, unsigned long pan, unsigned long)
{
  Port *p = port_of(o, 1); if (p && ch < 2) p->pan[ch] = (int)pan;
  return 0;
}
static unsigned long snd_getpan(unsigned long o, unsigned long ch, unsigned long, unsigned long) { Port *p = port_of(o, 0); return p && ch < 2 ? (unsigned long)(long)p->pan[ch] : 0; }
/* Trns(port, ch, ring position in samples, source, samples on the stack) */
static unsigned long snd_trns(unsigned long o, unsigned long ch, unsigned long at, unsigned long src)
{
  unsigned n = GM(unsigned, vsp);
  Port *p = port_of(o, 1); if (!p) return 0;
  port_ring(p);
  if (tlog < 8) { tlog++; host_log("snd trns %x ch=%u at=%u src=%x n=%u data %08x %08x\n", (unsigned)o, (unsigned)ch, (unsigned)at, (unsigned)src, n, (unsigned)GM(unsigned, src), (unsigned)GM(unsigned, src + 4)); }
  if (ch > 1 || n > p->smp || src < 0x8c000000u || src >= 0x8d000000u) return 0;
  int bps = GM(int, o + 0x10);
  short *r = p->ring[ch]; unsigned k = at % p->smp;
  for (unsigned i = 0; i < n; i++) {
    r[k] = bps == 8 ? (short)(GM(signed char, src + i) << 8) : (short)GM(short, src + 2 * i);
    if (++k == p->smp) k = 0;
  }
  return 0;
}
static unsigned long snd_trnsstat(unsigned long, unsigned long, unsigned long, unsigned long) { return 1; }

struct Ovr { unsigned a; hfn f; };
static const Ovr ovr[] = {
  {0x8c26a5d6, snd_destroy}, {0x8c26a6fc, snd_play}, {0x8c26a74c, snd_stop}, {0x8c26a7b4, snd_getpos},
  {0x8c26a860, snd_setvol}, {0x8c26a8e4, snd_getvol}, {0x8c26a914, snd_setpan}, {0x8c26a956, snd_getpan},
  {0x8c26ad32, snd_trns}, {0x8c26ada4, snd_trnsstat},
};
extern "C" unsigned long host_audio_override(unsigned long a)
{
  for (unsigned i = 0; i < sizeof ovr / sizeof ovr[0]; i++) if (ovr[i].a == a) return (unsigned long)ovr[i].f;
  return 0;
}
