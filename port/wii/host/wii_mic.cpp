/* Microphone: a Wii Speak or a USB Audio Class microphone (libwiiinput) stands in for the Dreamcast microphone in socket 2 of
   controller port A.
   The game's speech code (8c01cb54, 8c01d0cc) talks to Sega's Maple microphone library at 8c201994-8c202a80. Its device records
   (four of 0x4c bytes at 0x8c47e6f0) hold a state byte (+0: 0 none, 1 ready, 2 sampling, 3 error), the requested command (+0x28:
   1 start, 2 stop, 4 set gain), the Maple unit (+0x24), the sample format (+8: 0 = 16-bit), the ring buffer (+0x48, +0x14 samples)
   and the number of samples written so far as a 64-bit count (high word +0x3c, low word +0x40). The library's own server
   (8c201b10) runs from the Maple DMA-end interrupt, which the port never raises; host_mic_frame does its work once a frame
   instead: it answers commands at once and writes the host microphone's samples into the ring. The game's readers (8c201e14)
   take them from there as on the Dreamcast, at 11,025 Hz, and pass them to the recogniser.
   The Wii Speak needs Nintendo's PMIC firmware (97,480 bytes), which is not included: put it at sd:/seaman/pmic_firm.bin (or where
   RecordMii looks for it), or build it in by placing it at port/wii/data/pmic_firm.bin (ignored by git; tools/wii_link.sh then
   builds it into libwiiinput, whose WS_BuiltinFirmware returns it). Without a host microphone the game still sees one, which never hears anything.
   As in RecordMii, the boot first makes sure the running IOS offers /dev/usb/oh0 (the Wii Speak's USB interface), reloading a
   USB-capable IOS if it does not, and the microphone is stopped and closed before the port exits to the loader. */
#include "host.h"
#include <gccore.h>
#include <unistd.h>
extern "C" {                                             /* C headers without their own guards */
#include <input_wiispeak.h>
#include <input_usbmic.h>
}

#define MIC_RATE 11025
#define MIC_DEV 0x8c47e6f0u                              /* the library's device records */
#define MIC_NDEV 4
#define PERIPH_TAB 0x8c4727b4u                           /* Shinobi peripheral info: *tab + 0x44c + unit * 0x78, function bits at +0 */
#define MIC_UNIT 2                                       /* port A, expansion socket 2 */

enum { SRC_NONE, SRC_WIISPEAK, SRC_USB };
static volatile int src;
static um_info um;

static const char *const FIRM[] = { "sd:/seaman/pmic_firm.bin", "sd:/wiispeak/pmic_firm.bin", "sd:/apps/wiispeakrec/pmic_firm.bin" };
static void *firm; static u32 firm_size;

static void load_firmware(void)
{
  if (const u8 *b = WS_BuiltinFirmware(&firm_size)) {    /* built into libwiiinput (tools/wii_link.sh) */
    firm = (void *)b;
    host_log("mic: Wii Speak firmware built in (%u bytes)\n", (unsigned)firm_size);
    return;
  }
  for (unsigned i = 0; i < sizeof FIRM / sizeof FIRM[0] && !firm; i++) {
    FILE *f = fopen(FIRM[i], "rb");
    if (!f) continue;
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    void *p = n > 0 ? malloc(n) : 0;
    if (p && fread(p, 1, n, f) == (size_t)n) { firm = p; firm_size = (u32)n; host_log("mic: Wii Speak firmware %s (%ld bytes)\n", FIRM[i], n); }
    else free(p);
    fclose(f);
  }
  if (!firm) host_log("mic: no pmic_firm.bin, Wii Speak not used\n");
}

/* opening a microphone can take seconds (the Wii Speak boots its DSP), so it runs here; it looks again every two seconds until
   one is found, so a microphone can be plugged in while the game runs */
static int mic_log(const char *fmt, ...)               /* the libraries' boot steps, into the port's log; quiet after a while */
{
  static int n; if (n++ >= 60) return 0;
  char b[256]; va_list ap; va_start(ap, fmt); int r = vsnprintf(b, sizeof b, fmt, ap); va_end(ap);
  host_log("mic: %s%s", b, r > 0 && b[r < (int)sizeof b ? r - 1 : sizeof b - 2] == '\n' ? "" : "\n");
  return r;
}

static void *mic_thread(void *)
{
  load_firmware();
  WS_SetLog(mic_log); UM_SetLog(mic_log);
  for (;;) {
    if (src == SRC_NONE) {
      if (firm && WS_Open(firm, firm_size) == WS_OK) {
        /* the settings RecordMii records with on a real Wii Speak, in its order. WS_SetGain sends the SDK's 0x0300 mask (libwiiinput
           0394f1c); a gain written without it locks the mic's sampler, which then repeats one 8 ms block. The echo canceller stays
           off: there is no far-end audio for it to remove, and it is the untested path on hardware */
        WS_SetGain(WS_GAIN_30dB);
        WS_SetFreq(WS_FREQ_11KHZ);                       /* the Dreamcast microphone's own rate */
        WS_SetSignalProcessing(false);
        WS_SetMute(false);
        if (WS_Start() == WS_OK) { host_log("mic: Wii Speak at %u Hz\n", (unsigned)WS_FreqToHz(WS_FREQ_11KHZ)); src = SRC_WIISPEAK; }
        else WS_Close();
      } else if (UM_Open(&um) == UM_OK) {
        if (um.has_volume) UM_SetVolume(80);
        if (UM_Start() == UM_OK) { host_log("mic: USB microphone '%s' at %u Hz, %u channel(s), %u bits\n", um.name, (unsigned)um.rate, um.channels, um.bits); src = SRC_USB; }
        else UM_Close();
      }
    }
    if (src != SRC_NONE) return 0;
    usleep(2000000);
  }
}

/* RecordMii's ensure_usb_ios: the Wii Speak is reached through /dev/usb/oh0, which only some IOS versions offer (the Homebrew
   Channel normally starts apps on IOS58, which does). Called first in main, before WPAD and the SD card, which an IOS reload would
   tear down */
extern "C" void host_usb_ios(void)
{
  static const int candidates[] = { 58, 56, 55, 53, 38, 37, 36 };
  s32 fd = IOS_Open("/dev/usb/oh0", 0);
  if (fd >= 0) { IOS_Close(fd); return; }
  int was = IOS_GetVersion();
  for (unsigned i = 0; i < sizeof candidates / sizeof candidates[0]; i++) {
    if (candidates[i] == was || IOS_ReloadIOS(candidates[i]) < 0) continue;
    fd = IOS_Open("/dev/usb/oh0", 0);
    if (fd >= 0) { IOS_Close(fd); return; }
  }
}

/* before the port exits: a microphone left streaming can hang the loader */
extern "C" void host_mic_shutdown(void)
{
  if (src == SRC_WIISPEAK) { WS_Stop(); WS_Close(); }
  else if (src == SRC_USB) { UM_Stop(); UM_Close(); }
  src = SRC_NONE;
}

extern "C" void host_mic_init(void)
{
  static lwp_t th; static char stk[32768] __attribute__((aligned(32)));
  LWP_CreateThread(&th, mic_thread, 0, stk, sizeof stk, 40);
}

/* USB microphones deliver 44.1 or 48 kHz: average the input samples that fall into each 1/11025 s (a box filter, enough for
   speech) */
static s16 uin[4096]; static unsigned nin, frac;         /* frac: position inside uin in 1/65536 sample */
static unsigned usb_read(s16 *dst, unsigned max)
{
  nin += UM_Read(uin + nin, sizeof uin / sizeof uin[0] - nin);
  if (!um.rate) return 0;
  unsigned step = (unsigned)(((unsigned long long)um.rate << 16) / MIC_RATE), out = 0;
  while (out < max) {
    unsigned a = frac >> 16, b = (frac + step) >> 16;
    if (b > nin || b == a) break;
    int s = 0; for (unsigned i = a; i < b; i++) s += uin[i];
    dst[out++] = (s16)(s / (int)(b - a));
    frac += step;
  }
  unsigned used = frac >> 16;
  memmove(uin, uin + used, (nin - used) * sizeof uin[0]); nin -= used; frac &= 0xffff;
  return out;
}

#ifdef MIC_TEST
/* test builds (no microphone in headless Dolphin): sd:/seaman/mictest.raw (11,025 Hz, 16-bit big-endian mono) is heard at the
   real rate from the start, then silence, again every MIC_TEST seconds */
#include <ogc/lwp_watchdog.h>
extern "C" unsigned long FUN_8c01d4c4(unsigned long, unsigned long, unsigned long, unsigned long);   /* queue a speech job */
static s16 *tst; static unsigned tst_n; static unsigned long long tst_done; static u64 tst_t0;
#ifdef TALK_TEST
extern "C" { volatile int mic_test_go; }                /* set by the TALK_TEST pad script: play the clip now */
/* queue the speech jobs a conversation script would (FUN_8c01d4c4 on the speech object 0x8c3e1028): load the context
   SPEECH/0303A_DATE_CTX.cwp (yes / of course / never / ...), then job 2, which turns on push-to-talk (8c01d78c sets 0x8c27924c, so
   an A press in the tank starts listening through 8c01d9e0 and its release stops it through 8c01da60) */
/* the words the recogniser can answer with now: the table (0x8c279250, count 0x8c279254) the result handler looks words up in */
extern "C" void mic_test_vocab(void)
{
  unsigned t = GM(unsigned, 0x8c279250), n = GM(unsigned, 0x8c279254); char line[400]; unsigned k = 0;
  line[0] = 0;
  for (unsigned i = 0; i < n && i < 400 && t >= 0x8c000000u && t < 0x8d000000u && k < sizeof line - 40; i++) {
    unsigned p = GM(unsigned, t + 4 * i); if (p < 0x8c000000u || p >= 0x8d000000u) continue;
    line[k++] = '|'; for (unsigned j = 0; j < 30 && GM(char, p + j) && k < sizeof line - 2; j++) line[k++] = GM(char, p + j);
    line[k] = 0;
  }
  host_log("mic: vocabulary %u words: %s\n", n, line);
  /* the speech script's current record (speech object 0x8c35468c + 0x1054, +0x88): its answer table, which s_SPEECH_0fbf2e
     (8c0fbf28) searches for the recognised words: count at +0x6c, entries of 0x68 bytes from +0x70 (the words first) */
  unsigned rec = GM(unsigned, 0x8c35468c + 0x1054 + 0x88);
  if (rec >= 0x8c000000u && rec < 0x8d000000u) {
    unsigned cnt = GM(unsigned, rec + 0x6c); k = 0; line[0] = 0;
    for (unsigned i = 0; i < cnt && i < 24 && k < sizeof line - 80; i++) {
      /* word +0, alternative +0x20, command +0x40, jump label +0x44 */
      unsigned e = rec + 0x70 + i * 0x68; static const unsigned char fo[4] = { 0, 0x20, 0x40, 0x44 }, fl[4] = { 0x20, 0x20, 4, 0x20 };
      line[k++] = '|';
      for (int f = 0; f < 4; f++) { if (f) line[k++] = '/'; for (unsigned j = 0; j < fl[f] && GM(char, e + fo[f] + j) && k < sizeof line - 4; j++) line[k++] = GM(char, e + fo[f] + j); }
      line[k] = 0;
    }
    host_log("mic: script record %x type %d, %u answers: %s\n", rec, (int)GM(int, rec + 0x20), cnt, line);
  }
  /* the history of heard words that history_push_string (8c0fc44c) keeps: 16 strings of 0x20 bytes at (+0x10)->+0x40 + 200 */
  unsigned o = GM(unsigned, 0x8c35468c + 0x1054 + 0x10), h = o >= 0x8c000000u && o < 0x8d000000u ? GM(unsigned, o + 0x40) : 0;
  if (h >= 0x8c000000u && h < 0x8d000000u) {
    k = 0; line[0] = 0;
    for (unsigned i = 0; i < 4; i++) { line[k++] = '|'; for (unsigned j = 0; j < 0x20 && GM(char, h + 200 + i * 0x20 + j); j++) line[k++] = GM(char, h + 200 + i * 0x20 + j); line[k] = 0; }
    host_log("mic: heard-word history: %s\n", line);
  }
}
extern "C" void mic_test_jobs(void)
{
  static char ctx[] = "0303A_DATE_CTX", dir[] = "SPEECH", none[] = "";
  if (GM(unsigned, 0x8c2791b8) != 4) { host_log("mic: recogniser not ready, no test jobs\n"); return; }
  unsigned long a = FUN_8c01d4c4(0x8c3e1028, 0, (unsigned long)ctx, (unsigned long)dir), b = FUN_8c01d4c4(0x8c3e1028, 2, (unsigned long)none, (unsigned long)none);
  host_log("mic: test jobs queued (%lu, %lu)\n", a, b);
}
#endif
static unsigned test_read(s16 *dst, unsigned max)
{
  if (!tst_t0) {
    tst_t0 = gettime();
    FILE *f = fopen("sd:/seaman/mictest.raw", "rb");
    if (f) { fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET); tst = (s16 *)malloc(n); tst_n = fread(tst, 2, n / 2, f); fclose(f); }
    host_log("mic: test sound, %u samples\n", tst_n);
  }
  unsigned long long due = ticks_to_millisecs(gettime() - tst_t0) * MIC_RATE / 1000;
  unsigned n = 0, period = MIC_TEST * MIC_RATE;
#ifdef TALK_TEST
  /* once each time the pad script asks, silence otherwise */
  static unsigned long long go_at = ~0ull; (void)period;
  if (mic_test_go) { mic_test_go = 0; go_at = due; host_log("mic: test clip starts (asr state %u)\n", (unsigned)GM(unsigned, 0x8c279248)); }
  for (; n < max && tst_done < due; n++, tst_done++) dst[n] = tst_done >= go_at && tst_done - go_at < tst_n ? tst[tst_done - go_at] : 0;
#else
  for (; n < max && tst_done < due; n++, tst_done++) { unsigned i = (unsigned)(tst_done % period); dst[n] = i < tst_n ? tst[i] : 0; }
#endif
  return n;
}
#endif
static unsigned mic_read(s16 *dst, unsigned max)
{
#ifdef MIC_TEST
  return test_read(dst, max);
#endif
  if (src == SRC_WIISPEAK) return WS_Read(dst, max);
  if (src == SRC_USB) return usb_read(dst, max);
  return 0;
}

extern "C" void host_mic_frame(void)
{
  unsigned tab = GM(unsigned, PERIPH_TAB);
  if (tab >= 0x8c000000u && tab < 0x8d000000u) GM(unsigned, tab + 0x44c + MIC_UNIT * 0x78) = GM(unsigned, tab + 0x44c + MIC_UNIT * 0x78) | 0x10;   /* Maple function: microphone */
  static s16 buf[1024];
  bool sampled = false;
  for (unsigned d = MIC_DEV; d < MIC_DEV + MIC_NDEV * 0x4c; d += 0x4c) {
    if (GM(unsigned char, d + 2) != 1) continue;         /* record not in use */
    unsigned st = GM(unsigned char, d), cmd = GM(unsigned, d + 0x28);
    if (st == 0) st = 1;                                 /* the device-info exchange: done at once */
    if (cmd == 1) st = 2; else if (cmd == 2) st = 1;
    if (cmd) { static int nl; if (nl++ < 40) host_log("mic: command %u, state %u, ring %x, %u samples\n", cmd, st, (unsigned)GM(unsigned, d + 0x48), (unsigned)GM(unsigned, d + 0x14)); }
    GM(unsigned, d + 0x2c) = cmd; GM(unsigned, d + 0x28) = 0;
    GM(unsigned, d + 0x20) = 0;                          /* no Maple transfer outstanding */
    GM(unsigned char, d) = (unsigned char)st;
    unsigned size = GM(unsigned, d + 0x14), ring = GM(unsigned, d + 0x48);
    if (st != 2 || GM(unsigned, d + 8) != 0 || !size || ring < 0x8c000000u || ring >= 0x8d000000u) continue;
    unsigned long long pos = (unsigned long long)GM(unsigned, d + 0x3c) << 32 | GM(unsigned, d + 0x40);
    for (;;) {
      unsigned n = mic_read(buf, size < 1024 ? size : 1024);
      if (!n) break;
      for (unsigned i = 0; i < n; i++) GM(short, ring + 2 * (unsigned)((pos + i) % size)) = buf[i];
      pos += n;
    }
    GM(unsigned, d + 0x3c) = (unsigned)(pos >> 32); GM(unsigned, d + 0x40) = (unsigned)pos;
    sampled = true;
  }
  if (!sampled) while (mic_read(buf, 1024)) { }          /* not listening: drop what the microphone heard meanwhile */
#ifdef MIC_TEST
  { /* test builds: the recogniser's state (0x8c279248), its mode words, the library's write position and its first reader's */
    static unsigned last = ~0u, nf, last284 = ~0u; unsigned rs = GM(unsigned, 0x8c279248);
    /* once the recogniser is up, queue two speech jobs as the game's scripts do (FUN_8c01d4c4 on the speech object 0x8c3e1028):
       load the context SPEECH/0303A_DATE_CTX.cwp (yes / of course / ...), then listen */
    static char ctx[] = "0303A_DATE_CTX", dir[] = "SPEECH", none[] = "";
#ifndef TALK_TEST
    if (nf == 3000 && GM(unsigned, 0x8c2791b8) == 4) {
      unsigned long a = FUN_8c01d4c4(0x8c3e1028, 0, (unsigned long)ctx, (unsigned long)dir), b = FUN_8c01d4c4(0x8c3e1028, 4, (unsigned long)none, (unsigned long)none);
      host_log("mic: test jobs queued (%lu, %lu)\n", a, b);
    }
#else
    (void)ctx; (void)dir; (void)none;
#endif
    { /* the speech job queue of the speech object 0x8c3e1028 (FUN_8c01d4c4 adds, FUN_8c01d338 runs): log each job as it starts */
      static int lj = -2, ln; int j = GM(int, 0x8c3e1028 + 0x5630);
      if (j != lj && ln < 400) { ln++; lj = j;
        if (j >= 0 && j < 16) { unsigned e = 0x8c3e1028 + j * 0x50;
          char nm[33], dr[33]; for (int i = 0; i < 32; i++) { nm[i] = GM(char, e + 0x5644 + i); dr[i] = GM(char, e + 0x5664 + i); } nm[32] = dr[32] = 0;
          host_log("mic: job %d type %d status %d '%s' '%s' at call %u\n", j, (int)GM(int, e + 0x563c), (int)GM(int, e + 0x5638), nm, dr, nf); }
        else host_log("mic: job queue empty at call %u\n", nf); }
    }
    { /* the recogniser's answer, as speech_get_result (8c01d684) reads it: a flag (0x8c27924c), a code (0x8c2791bc) and the
         words heard (0x8c2791c8) */
      static unsigned lf = ~0u, lc = ~0u, lg = ~0u, l0 = ~0u; static char lw[32];
      unsigned f = GM(unsigned, 0x8c27924c), c = GM(unsigned, 0x8c2791bc); char w[32];
      unsigned g = GM(unsigned, 0x8c279274), r0 = GM(unsigned, 0x8c2791c0);    /* the result handler's gain and its status word */
      if (g != lg || r0 != l0) { host_log("mic: gain %u status %u at call %u\n", g, r0, nf); lg = g; l0 = r0; }
      for (unsigned i = 0; i < sizeof w; i++) w[i] = (char)GM(unsigned char, 0x8c2791c8 + i);
      w[sizeof w - 1] = 0;
      if (f != lf || c != lc || strcmp(w, lw)) { host_log("mic: result flag %u code %u words '%s' at call %u\n", f, c, w, nf); lf = f; lc = c; strcpy(lw, w); }
    }
    if (GM(unsigned, 0x8c279284) != last284) { last284 = GM(unsigned, 0x8c279284); host_log("mic: 284 -> %u (298=%u) at call %u\n", last284, (unsigned)GM(unsigned, 0x8c279298), nf); }
    if (rs != last || ++nf % 600 == 0) {
      host_log("mic: asr state %u (was %d) at call %u 284=%u 2791b8=%u dev %u pos %u reader pos %u\n", rs, (int)last, nf, (unsigned)GM(unsigned, 0x8c279284), (unsigned)GM(unsigned, 0x8c2791b8),
               (unsigned)GM(unsigned char, MIC_DEV), (unsigned)GM(unsigned, MIC_DEV + 0x40), (unsigned)GM(unsigned, 0x8c47e820 + 0xc));
      unsigned rd = GM(unsigned, 0x8c279270), dv = GM(unsigned, 0x8c27926c);
      if (rd >= 0x8c000000u && rd < 0x8d000000u) host_log("mic: reader %x: %02x %02x dev %x pos %x:%x; device %x (MIC_DEV %x)\n", rd, (unsigned)GM(unsigned char, rd), (unsigned)GM(unsigned char, rd + 1),
               (unsigned)GM(unsigned, rd + 4), (unsigned)GM(unsigned, rd + 8), (unsigned)GM(unsigned, rd + 12), dv, MIC_DEV);
      last = rs;
    }
  }
#endif
}
