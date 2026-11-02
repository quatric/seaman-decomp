/* AICA sound chip and its ARM7 (the Manatee driver's CPU). Sound RAM (2 MB, little-endian like the guest) is one buffer that the
   SH-4 side reaches through the DSI handler (0xa0800000) and the ARM sees at 0. The registers (SH-4 0xa0700000, ARM 0x800000) are a
   byte array with read/write hooks. aica_render() runs the ARM and the 64 channels one 44.1 kHz sample at a time.
   Modelled: PCM16/PCM8/ADPCM channels with loops, the AR/D1R/D2R/RR envelope, TL/DISDL/DIPAN/MVOL levels, the channel monitor
   (0x2810/0x2814), timers A/B/C, the ARM FIQ (SCIEB/SCIPD/SCILV, 0x2d00/0x2d04) and SH-4 interrupt (MCIEB/MCIPD) bits, ARM reset.
   Not modelled: LFO, the resonant filter (FEG), the effect DSP (reverb sends), MIDI, AICA DMA. */
#include "host.h"
#include <gccore.h>
#include <math.h>
#include <malloc.h>

typedef unsigned u32; typedef int s32; typedef unsigned short u16; typedef unsigned char u8;

extern "C" { u8 *aica_ram; u8 aica_regs[0x8000]; }
#define RAM_MASK 0x1fffffu

static inline u32 rd32le(const u8 *p) { return p[0] | (p[1] << 8) | (p[2] << 16) | ((u32)p[3] << 24); }
static inline u16 rd16le(const u8 *p) { return (u16)(p[0] | (p[1] << 8)); }
static inline void wr32le(u8 *p, u32 v) { p[0] = (u8)v; p[1] = (u8)(v >> 8); p[2] = (u8)(v >> 16); p[3] = (u8)(v >> 24); }
static inline u16 R16(u32 o) { return rd16le(aica_regs + o); }
static inline void W16(u32 o, u16 v) { aica_regs[o] = (u8)v; aica_regs[o + 1] = (u8)(v >> 8); }

/* ================= channels ================= */
enum { EG_ATTACK, EG_DECAY1, EG_DECAY2, EG_RELEASE, EG_OFF };
struct Chan {
  int active, state;
  u32 pos;                 /* 16.16 sample index from SA */
  s32 eg;                  /* envelope 0..0x3ff << 16, 0x3ff = full volume */
  int lp;                  /* loop passed (monitor) */
  /* ADPCM decoder */
  u32 apos; s32 asmp, aquant, aprev; int aloopsaved; s32 asmp_l, aquant_l;
  s32 cur, nxt;            /* samples at floor(pos) and floor(pos)+1 */
  u32 curidx;
};
static Chan ch[64];
static double ARTimes[64] = { 100000, 100000, 8100.0, 6900.0, 6000.0, 4800.0, 4000.0, 3400.0, 3000.0, 2400.0, 2000.0, 1700.0, 1500.0,
  1200.0, 1000.0, 860.0, 760.0, 600.0, 500.0, 430.0, 380.0, 300.0, 250.0, 220.0, 190.0, 150.0, 130.0, 110.0, 95.0,
  76.0, 63.0, 55.0, 47.0, 38.0, 31.0, 27.0, 24.0, 19.0, 15.0, 13.0, 12.0, 9.4, 7.9, 6.8, 6.0, 4.7, 3.8, 3.4, 3.0, 2.4,
  2.0, 1.8, 1.6, 1.3, 1.1, 0.93, 0.85, 0.65, 0.53, 0.44, 0.40, 0.35, 0.0, 0.0 };
static double DRTimes[64] = { 100000, 100000, 118200.0, 101300.0, 88600.0, 70900.0, 59100.0, 50700.0, 44300.0, 35500.0,
  29600.0, 25300.0, 22200.0, 17700.0, 14800.0, 12700.0, 11100.0, 8900.0, 7400.0, 6300.0, 5500.0, 4400.0, 3700.0, 3200.0, 2800.0, 2200.0, 1800.0, 1600.0, 1400.0, 1100.0,
  920.0, 790.0, 690.0, 550.0, 460.0, 390.0, 340.0, 270.0, 230.0, 200.0, 170.0, 140.0, 110.0, 98.0, 85.0, 68.0, 57.0, 49.0, 43.0, 34.0,
  28.0, 25.0, 22.0, 18.0, 14.0, 12.0, 11.0, 8.5, 7.1, 6.1, 5.4, 4.3, 3.6, 3.1 };
static s32 AR_STEP[64], DR_STEP[64];      /* envelope change per sample, 0x3ff << 16 over the table time */
static s32 ATT_GAIN[0x400];               /* EG 0..0x3ff -> Q15 gain, 0.09375 dB per step */
static s32 TL_GAIN[256], LVL_GAIN[16];    /* TL: 0.375 dB per step; DISDL/pan/MVOL: 3 dB per step, 0 = mute where noted */

static inline u32 creg(int c, u32 o) { return R16(c * 0x80 + o); }

static int eff_rate(int c, int r)
{
  if (!r) return 0;
  u32 krs = (creg(c, 0x14) >> 10) & 15;
  int rate = 2 * r;
  if (krs != 15) { int oct = (int)((creg(c, 0x18) >> 11) & 15); if (oct & 8) oct -= 16; rate += (oct + (int)krs) * 2 + ((creg(c, 0x18) >> 9) & 1); }
  return rate < 0 ? 0 : rate > 63 ? 63 : rate;
}

static u32 kon_n;   /* key-ons, for the status line */
static void key_on(int c)
{
  Chan &h = ch[c];
  kon_n++;
  h.active = 1; h.state = EG_ATTACK; h.pos = 0; h.lp = 0;
  h.eg = 0;
  if (eff_rate(c, creg(c, 0x10) & 31) >= 62) h.eg = 0x3ff << 16;
  h.apos = 0; h.asmp = 0; h.aquant = 0x7f; h.aloopsaved = 0; h.curidx = 0xffffffffu; h.cur = h.nxt = 0;
}
static s32 peak_out;
static void key_off(int c) { if (ch[c].active && ch[c].state != EG_OFF) ch[c].state = EG_RELEASE; }

static inline u32 chan_sa(int c) { return ((creg(c, 0x00) & 0x7f) << 16) | creg(c, 0x04); }

static const s32 ADPCM_SCALE[8] = { 230, 230, 230, 230, 307, 409, 512, 614 };   /* x/256 */
static const s32 ADPCM_DIFF[16] = { 1, 3, 5, 7, 9, 11, 13, 15, -1, -3, -5, -7, -9, -11, -13, -15 };
static s32 adpcm_step(Chan &h, u32 sa)
{
  u32 a = (sa + (h.apos >> 1)) & RAM_MASK;
  u32 nib = (aica_ram[a] >> ((h.apos & 1) * 4)) & 15;
  s32 x = h.asmp + h.aquant * ADPCM_DIFF[nib] / 8;
  h.asmp = x > 32767 ? 32767 : x < -32768 ? -32768 : x;
  s32 q = (h.aquant * ADPCM_SCALE[nib & 7]) >> 8;
  h.aquant = q < 0x7f ? 0x7f : q > 0x6000 ? 0x6000 : q;
  h.apos++;
  return h.asmp;
}
/* sample at index i (ADPCM only advances forward) */
static s32 fetch(int c, Chan &h, u32 i)
{
  u32 sa = chan_sa(c), pcms = (creg(c, 0) >> 7) & 3;
  if (pcms == 0) return (s16)rd16le(aica_ram + ((sa + 2 * i) & RAM_MASK & ~1u));
  if (pcms == 1) return (s32)(signed char)aica_ram[(sa + i) & RAM_MASK] << 8;
  s32 v = h.asmp;
  while (h.apos <= i) {
    if (h.apos == (creg(c, 0x08)) && !h.aloopsaved && pcms == 2) { h.aloopsaved = 1; h.asmp_l = h.asmp; h.aquant_l = h.aquant; }
    v = adpcm_step(h, sa);
  }
  return v;
}

static int chan_sample(int c)
{
  Chan &h = ch[c];
  u32 lsa = creg(c, 0x08), lea = creg(c, 0x0c), lpctl = (creg(c, 0) >> 9) & 1, pcms = (creg(c, 0) >> 7) & 3;
  u32 i = h.pos >> 16;
  if (i != h.curidx) {
    if (pcms >= 2) h.cur = h.nxt = fetch(c, h, i);
    else { h.cur = fetch(c, h, i); h.nxt = fetch(c, h, i + 1 >= lea && lpctl ? lsa : i + 1); }
    h.curidx = i;
  }
  s32 s = h.cur + (((h.nxt - h.cur) * (s32)((h.pos >> 1) & 0x7fff)) >> 15);
  /* pitch */
  u32 pr = creg(c, 0x18); int oct = (int)((pr >> 11) & 15); if (oct & 8) oct -= 16;
  u32 step = (1024 + (pr & 0x3ff)) << 6; step = oct >= 0 ? step << oct : step >> -oct;
  h.pos += step;
  if ((h.pos >> 16) >= lsa && h.state == EG_ATTACK && ((creg(c, 0x14) >> 14) & 1) && h.eg >= (0x3ff << 16)) h.state = EG_DECAY1;
  if ((h.pos >> 16) >= lea) {
    h.lp = 1;
    if (lpctl && lea > lsa) {
      h.pos -= (lea - lsa) << 16;
      if (pcms >= 2) { h.apos = lsa; if (h.aloopsaved) { h.asmp = h.asmp_l; h.aquant = h.aquant_l; } }
      h.curidx = 0xffffffffu;
    } else { h.active = 0; h.state = EG_OFF; h.eg = 0; return 0; }
  }
  /* envelope */
  switch (h.state) {
    case EG_ATTACK: {
      int r = eff_rate(c, creg(c, 0x10) & 31);
      h.eg += AR_STEP[r];
      if (h.eg >= (0x3ff << 16)) { h.eg = 0x3ff << 16; if (!((creg(c, 0x14) >> 14) & 1)) h.state = EG_DECAY1; }
      break;
    }
    case EG_DECAY1: {
      h.eg -= DR_STEP[eff_rate(c, (creg(c, 0x10) >> 6) & 31)];
      u32 dl = 31 - ((creg(c, 0x14) >> 5) & 31);
      if (h.eg < 0) h.eg = 0;
      if ((u32)(h.eg >> 21) <= dl) h.state = EG_DECAY2;
      break;
    }
    case EG_DECAY2: h.eg -= DR_STEP[eff_rate(c, (creg(c, 0x10) >> 11) & 31)]; if (h.eg < 0) h.eg = 0; break;
    case EG_RELEASE: h.eg -= DR_STEP[eff_rate(c, creg(c, 0x14) & 31)]; if (h.eg <= 0) { h.eg = 0; h.active = 0; h.state = EG_OFF; return 0; } break;
  }
  return (s * ATT_GAIN[h.eg >> 16]) >> 15;
}

/* ================= timers, interrupts ================= */
static u32 tim_sub[3];
static int fiq_line;
static void update_sh4_irq(void)
{
  if (!R16(0x28b4)) return;               /* the SH-4 has not enabled AICA interrupts: leave the page store alone (other thread) */
  u32 p = R16(0x28b8) & R16(0x28b4);
  u32 ist = hw_peek32(0xa05f6908);
  hw_poke32(0xa05f6908, p ? (ist | 2) : (ist & ~2u));
}
static void update_arm_irq(void)
{
  if (fiq_line) return;
  u32 p = R16(0x28a0) & R16(0x289c);
  if (!p) return;
  int b = 0; while (!((p >> b) & 1)) b++;
  int lb = b > 7 ? 7 : b;
  u32 lv = ((R16(0x28a8) >> lb) & 1) | (((R16(0x28ac) >> lb) & 1) << 1) | (((R16(0x28b0) >> lb) & 1) << 2);
  W16(0x2d00, (u16)lv);
  fiq_line = 1;
}
static void raise_bit(u32 b)
{
  W16(0x28a0, R16(0x28a0) | (1u << b));
  if (b >= 6 && b <= 8) W16(0x28b8, R16(0x28b8) | (1u << b));
  update_arm_irq(); update_sh4_irq();
}
static void tick_timers(void)
{
  for (int t = 0; t < 3; t++) {
    u32 o = 0x2890 + 4 * t, v = R16(o), pre = (v >> 8) & 7, cnt = v & 0xff;
    if (cnt == 0xff) continue;
    if (++tim_sub[t] >= (1u << pre)) {
      tim_sub[t] = 0; cnt++;
      W16(o, (u16)((v & 0x700) | cnt));
      if (cnt == 0xff) raise_bit(6 + t);
    }
  }
  if (R16(0x289c) & 0x400) raise_bit(10);   /* one per sample */
}

/* ================= ARM7 ================= */
struct Arm { u32 r[16], cpsr, spsr; u32 bank13[6], bank14[6], bankspsr[6], fiq8[5], usr8[5]; int running; };
static Arm A;
static int mode_idx(u32 m) { switch (m & 31) { case 0x11: return 1; case 0x12: return 2; case 0x13: return 3; case 0x17: return 4; case 0x1b: return 5; default: return 0; } }
static void set_mode(u32 nm)
{
  u32 om = A.cpsr & 31; nm &= 31;
  if (om == nm) return;
  int oi = mode_idx(om), ni = mode_idx(nm);
  A.bank13[oi] = A.r[13]; A.bank14[oi] = A.r[14]; A.bankspsr[oi] = A.spsr;
  if (om == 0x11) for (int i = 0; i < 5; i++) { A.fiq8[i] = A.r[8 + i]; A.r[8 + i] = A.usr8[i]; }
  if (nm == 0x11) for (int i = 0; i < 5; i++) { A.usr8[i] = A.r[8 + i]; A.r[8 + i] = A.fiq8[i]; }
  A.r[13] = A.bank13[ni]; A.r[14] = A.bank14[ni]; A.spsr = A.bankspsr[ni];
  A.cpsr = (A.cpsr & ~31u) | nm;
}
static void arm_reset(void)
{
  memset(&A, 0, sizeof A);
  A.cpsr = 0xd3;   /* SVC, IRQ and FIQ masked */
  A.r[15] = 0; A.running = 1; fiq_line = 0;
}

static u16 pend_old[2];   /* SCIPD, MCIPD before the store being handled */
static inline void snap(void) { pend_old[0] = R16(0x28a0); pend_old[1] = R16(0x28b8); }
static void reg_write(u32 o, int size);
static void reg_read(u32 o);
static u32 arm_stores;   /* ARM stores so far: a polling loop makes none */
static inline u32 mem_r32(u32 a)
{
  if (a < 0x800000) { u32 v = rd32le(aica_ram + (a & RAM_MASK & ~3u)); if (a & 3) { u32 s = (a & 3) * 8; v = (v >> s) | (v << (32 - s)); } return v; }
  if (a < 0x808000) { reg_read((a - 0x800000) & ~3u); return rd32le(aica_regs + ((a - 0x800000) & ~3u)); }
  return 0;
}
static inline u32 mem_r8(u32 a)
{
  if (a < 0x800000) return aica_ram[a & RAM_MASK];
  if (a < 0x808000) { reg_read((a - 0x800000) & ~3u); return aica_regs[a - 0x800000]; }
  return 0;
}
static inline u32 mem_r16(u32 a)
{
  if (a < 0x800000) return rd16le(aica_ram + (a & RAM_MASK & ~1u));
  if (a < 0x808000) { reg_read((a - 0x800000) & ~3u); return rd16le(aica_regs + ((a - 0x800000) & ~1u)); }
  return 0;
}
static inline void mem_w32(u32 a, u32 v)
{
  arm_stores++;
  if (a < 0x800000) { wr32le(aica_ram + (a & RAM_MASK & ~3u), v); return; }
  if (a < 0x808000) { snap(); wr32le(aica_regs + ((a - 0x800000) & ~3u), v); reg_write((a - 0x800000) & ~3u, 4); }
}
static inline void mem_w16(u32 a, u32 v)
{
  arm_stores++;
  if (a < 0x800000) { u8 *p = aica_ram + (a & RAM_MASK & ~1u); p[0] = (u8)v; p[1] = (u8)(v >> 8); return; }
  if (a < 0x808000) { snap(); u8 *p = aica_regs + ((a - 0x800000) & ~1u); p[0] = (u8)v; p[1] = (u8)(v >> 8); reg_write((a - 0x800000) & ~3u, 2); }
}
static inline void mem_w8(u32 a, u32 v)
{
  arm_stores++;
  if (a < 0x800000) { aica_ram[a & RAM_MASK] = (u8)v; return; }
  if (a < 0x808000) { snap(); aica_regs[a - 0x800000] = (u8)v; reg_write((a - 0x800000) & ~3u, 1); }
}

#define FN 0x80000000u
#define FZ 0x40000000u
#define FC 0x20000000u
#define FV 0x10000000u
static inline int cond_ok(u32 c)
{
  u32 f = A.cpsr;
  switch (c) {
    case 0: return (f & FZ) != 0;           case 1: return !(f & FZ);
    case 2: return (f & FC) != 0;           case 3: return !(f & FC);
    case 4: return (f & FN) != 0;           case 5: return !(f & FN);
    case 6: return (f & FV) != 0;           case 7: return !(f & FV);
    case 8: return (f & FC) && !(f & FZ);   case 9: return !(f & FC) || (f & FZ);
    case 10: return !(f & FN) == !(f & FV); case 11: return !(f & FN) != !(f & FV);
    case 12: return !(f & FZ) && (!(f & FN) == !(f & FV));
    case 13: return (f & FZ) || (!(f & FN) != !(f & FV));
    case 14: return 1; default: return 0;
  }
}
static inline u32 ror32(u32 v, u32 s) { s &= 31; return s ? (v >> s) | (v << (32 - s)) : v; }

/* shifter operand of a data-processing instruction; *carry gets the shifter carry out */
static u32 shifter(u32 op, u32 *carry, u32 pcoff)
{
  u32 c = (A.cpsr >> 29) & 1;
  if (op & (1u << 25)) {
    u32 rot = ((op >> 8) & 15) * 2, v = ror32(op & 0xff, rot);
    *carry = rot ? v >> 31 : c; return v;
  }
  u32 rm = op & 15, v = rm == 15 ? A.r[15] + pcoff : A.r[rm], type = (op >> 5) & 3, amt;
  if (op & 0x10) {
    amt = A.r[(op >> 8) & 15] & 0xff;
    if (!amt) { *carry = c; return v; }
    switch (type) {
      case 0: if (amt < 32) { *carry = (v >> (32 - amt)) & 1; return v << amt; } *carry = amt == 32 ? v & 1 : 0; return 0;
      case 1: if (amt < 32) { *carry = (v >> (amt - 1)) & 1; return v >> amt; } *carry = amt == 32 ? v >> 31 : 0; return 0;
      case 2: if (amt < 32) { *carry = ((s32)v >> (amt - 1)) & 1; return (u32)((s32)v >> amt); } *carry = v >> 31; return (u32)((s32)v >> 31);
      default: amt &= 31; if (!amt) { *carry = v >> 31; return v; } *carry = (v >> (amt - 1)) & 1; return ror32(v, amt);
    }
  }
  amt = (op >> 7) & 31;
  switch (type) {
    case 0: if (!amt) { *carry = c; return v; } *carry = (v >> (32 - amt)) & 1; return v << amt;
    case 1: if (!amt) { *carry = v >> 31; return 0; } *carry = (v >> (amt - 1)) & 1; return v >> amt;
    case 2: if (!amt) { *carry = v >> 31; return (u32)((s32)v >> 31); } *carry = ((s32)v >> (amt - 1)) & 1; return (u32)((s32)v >> amt);
    default: if (!amt) { *carry = v & 1; return (c << 31) | (v >> 1); } *carry = (v >> (amt - 1)) & 1; return ror32(v, amt);
  }
}
static inline void set_nz(u32 v) { A.cpsr = (A.cpsr & ~(FN | FZ)) | (v & FN) | (v ? 0 : FZ); }

static int arm_branched;
static inline void write_pc(u32 v) { A.r[15] = v & ~3u; arm_branched = 1; }
static void fiq_enter(void)
{
  u32 ret = A.r[15] + 4, cp = A.cpsr;
  set_mode(0x11);
  A.spsr = cp; A.r[14] = ret;
  A.cpsr |= 0xc0;
  A.r[15] = 0x1c;
}
/* run one instruction; A.r[15] holds the address of the instruction; returns a cost in cycles */
static int arm_step(void)
{
  u32 pc = A.r[15], op = rd32le(aica_ram + (pc & RAM_MASK & ~3u));
  arm_branched = 0;
  A.r[15] = pc + 8;
  int cost = 1;
  if (cond_ok(op >> 28)) {
    switch ((op >> 25) & 7) {
      case 0: case 1: {
        if ((op & 0x0fc000f0) == 0x00000090) {                         /* MUL, MLA */
          u32 rd = (op >> 16) & 15, rn = (op >> 12) & 15, rs = (op >> 8) & 15, rm = op & 15;
          u32 v = A.r[rm] * A.r[rs]; if (op & (1u << 21)) v += A.r[rn];
          A.r[rd] = v; if (op & (1u << 20)) set_nz(v); cost = 3; break;
        }
        if ((op & 0x0f8000f0) == 0x00800090) {                         /* UMULL, UMLAL, SMULL, SMLAL */
          u32 hi = (op >> 16) & 15, lo = (op >> 12) & 15, rs = (op >> 8) & 15, rm = op & 15;
          unsigned long long v = (op & (1u << 22)) ? (unsigned long long)((long long)(s32)A.r[rm] * (s32)A.r[rs]) : (unsigned long long)A.r[rm] * A.r[rs];
          if (op & (1u << 21)) v += ((unsigned long long)A.r[hi] << 32) | A.r[lo];
          A.r[lo] = (u32)v; A.r[hi] = (u32)(v >> 32);
          if (op & (1u << 20)) A.cpsr = (A.cpsr & ~(FN | FZ)) | (A.r[hi] & FN) | (v ? 0 : FZ);
          cost = 4; break;
        }
        if ((op & 0x0fb00ff0) == 0x01000090) {                         /* SWP, SWPB */
          u32 rn = (op >> 16) & 15, rd = (op >> 12) & 15, rm = op & 15, a = A.r[rn];
          if (op & (1u << 22)) { u32 t = mem_r8(a); mem_w8(a, A.r[rm]); A.r[rd] = t; }
          else { u32 t = mem_r32(a); mem_w32(a, A.r[rm]); A.r[rd] = t; }
          cost = 4; break;
        }
        if ((op & 0x0e000090) == 0x00000090 && (op & 0x60)) {          /* LDRH, STRH, LDRSB, LDRSH */
          u32 rn = (op >> 16) & 15, rd = (op >> 12) & 15, base = A.r[rn];
          u32 off = (op & (1u << 22)) ? (((op >> 4) & 0xf0) | (op & 15)) : A.r[op & 15];
          u32 a = (op & (1u << 24)) ? ((op & (1u << 23)) ? base + off : base - off) : base;
          if (op & (1u << 20)) {
            u32 v = ((op >> 5) & 3) == 1 ? mem_r16(a) : ((op >> 5) & 3) == 2 ? (u32)(s32)(signed char)mem_r8(a) : (u32)(s32)(s16)mem_r16(a);
            if (!(op & (1u << 24))) A.r[rn] = (op & (1u << 23)) ? base + off : base - off; else if (op & (1u << 21)) A.r[rn] = a;
            if (rd == 15) write_pc(v); else A.r[rd] = v;
          } else {
            mem_w16(a, rd == 15 ? pc + 12 : A.r[rd]);
            if (!(op & (1u << 24))) A.r[rn] = (op & (1u << 23)) ? base + off : base - off; else if (op & (1u << 21)) A.r[rn] = a;
          }
          cost = 3; break;
        }
        if ((op & 0x0fffffd0) == 0x012fff10) { write_pc(A.r[op & 15]); cost = 3; break; }   /* BX */
        u32 opc = (op >> 21) & 15; int s = (op >> 20) & 1;
        if (!s && opc >= 8 && opc <= 11) {                             /* MRS, MSR */
          if ((op & 0x0fbf0fff) == 0x010f0000) { A.r[(op >> 12) & 15] = (op & (1u << 22)) ? A.spsr : A.cpsr; break; }
          u32 v = (op & (1u << 25)) ? ror32(op & 0xff, ((op >> 8) & 15) * 2) : A.r[op & 15];
          u32 mask = ((op & (1u << 19)) ? 0xff000000u : 0) | ((op & (1u << 16)) ? 0xffu : 0);
          if (op & (1u << 22)) A.spsr = (A.spsr & ~mask) | (v & mask);
          else {
            if ((A.cpsr & 31) == 0x10) mask &= 0xff000000u;
            u32 nv = (A.cpsr & ~mask) | (v & mask);
            if ((nv ^ A.cpsr) & 31) set_mode(nv & 31);
            A.cpsr = nv;
          }
          break;
        }
        u32 rn = (op >> 16) & 15, rd = (op >> 12) & 15, carry;
        u32 pcoff = (!(op & (1u << 25)) && (op & 0x10)) ? 4 : 0;
        u32 b = shifter(op, &carry, pcoff), a = rn == 15 ? A.r[15] + pcoff : A.r[rn], v = 0;
        int logical = 0, wr = 1; u32 cf = (A.cpsr >> 29) & 1, vf = (A.cpsr >> 28) & 1;
        switch (opc) {
          case 0: v = a & b; logical = 1; break;
          case 1: v = a ^ b; logical = 1; break;
          case 2: v = a - b; cf = a >= b; vf = ((a ^ b) & (a ^ v)) >> 31; break;
          case 3: v = b - a; cf = b >= a; vf = ((b ^ a) & (b ^ v)) >> 31; break;
          case 4: v = a + b; cf = v < a; vf = (~(a ^ b) & (a ^ v)) >> 31; break;
          case 5: { unsigned long long t = (unsigned long long)a + b + cf; v = (u32)t; cf = (u32)(t >> 32); vf = (~(a ^ b) & (a ^ v)) >> 31; break; }
          case 6: { unsigned long long t = (unsigned long long)a + (u32)~b + cf; v = (u32)t; cf = (u32)(t >> 32); vf = ((a ^ b) & (a ^ v)) >> 31; break; }
          case 7: { unsigned long long t = (unsigned long long)b + (u32)~a + cf; v = (u32)t; cf = (u32)(t >> 32); vf = ((b ^ a) & (b ^ v)) >> 31; break; }
          case 8: v = a & b; logical = 1; wr = 0; break;
          case 9: v = a ^ b; logical = 1; wr = 0; break;
          case 10: v = a - b; cf = a >= b; vf = ((a ^ b) & (a ^ v)) >> 31; wr = 0; break;
          case 11: v = a + b; cf = v < a; vf = (~(a ^ b) & (a ^ v)) >> 31; wr = 0; break;
          case 12: v = a | b; logical = 1; break;
          case 13: v = b; logical = 1; break;
          case 14: v = a & ~b; logical = 1; break;
          case 15: v = ~b; logical = 1; break;
        }
        if (s) {
          if (rd == 15 && wr) { u32 sp = A.spsr; set_mode(sp & 31); A.cpsr = sp; }
          else {
            if (logical) cf = carry;
            A.cpsr = (A.cpsr & 0x0fffffffu) | (v & FN) | (v ? 0 : FZ) | (cf << 29) | (vf << 28);
          }
        }
        if (wr) { if (rd == 15) write_pc(v); else A.r[rd] = v; }
        break;
      }
      case 2: case 3: {                                                /* LDR, STR */
        if ((op & (1u << 25)) && (op & 0x10)) break;                  /* undefined */
        u32 rn = (op >> 16) & 15, rd = (op >> 12) & 15, base = A.r[rn], off, carry;
        if (op & (1u << 25)) off = shifter(op & ~(1u << 25), &carry, 0); else off = op & 0xfff;
        u32 a = (op & (1u << 24)) ? ((op & (1u << 23)) ? base + off : base - off) : base;
        u32 nb = (op & (1u << 23)) ? base + off : base - off;
        if (op & (1u << 20)) {
          u32 v = (op & (1u << 22)) ? mem_r8(a) : mem_r32(a);
          if (!(op & (1u << 24)) || (op & (1u << 21))) A.r[rn] = nb;
          if (rd == 15) write_pc(v); else A.r[rd] = v;
          cost = 3;
        } else {
          u32 v = rd == 15 ? pc + 12 : A.r[rd];
          if (op & (1u << 22)) mem_w8(a, v); else mem_w32(a, v);
          if (!(op & (1u << 24)) || (op & (1u << 21))) A.r[rn] = nb;
          cost = 2;
        }
        break;
      }
      case 4: {                                                        /* LDM, STM */
        u32 rn = (op >> 16) & 15, list = op & 0xffff, n = __builtin_popcount(list), base = A.r[rn], a;
        int up = (op >> 23) & 1, pre = (op >> 24) & 1, sbit = (op >> 22) & 1, wb = (op >> 21) & 1, ld = (op >> 20) & 1;
        if (up) a = pre ? base + 4 : base; else a = pre ? base - 4 * n : base - 4 * n + 4;
        u32 nbase = up ? base + 4 * n : base - 4 * n;
        int user = sbit && !(ld && (list & 0x8000));
        u32 om = A.cpsr & 31; if (user) set_mode(0x10);
        if (ld) {
          if (wb) A.r[rn] = nbase;
          for (int i = 0; i < 16; i++) if (list & (1u << i)) {
            u32 v = mem_r32(a); a += 4;
            if (i == 15) { write_pc(v); if (sbit) { u32 sp = A.spsr; set_mode(sp & 31); A.cpsr = sp; } } else A.r[i] = v;
          }
        } else {
          int first = 1;
          for (int i = 0; i < 16; i++) if (list & (1u << i)) {
            u32 v = i == 15 ? pc + 12 : (i == (int)rn && !first && wb) ? nbase : A.r[i];
            mem_w32(a, v); a += 4; first = 0;
          }
          if (wb) A.r[rn] = nbase;
        }
        if (user) set_mode(om);
        cost = 2 + n;
        break;
      }
      case 5: {                                                        /* B, BL */
        s32 off = (s32)(op << 8) >> 6;
        if (op & (1u << 24)) A.r[14] = pc + 4;
        write_pc(pc + 8 + off); cost = 3;
        break;
      }
      case 7:
        if ((op >> 24) & 1) {                                          /* SWI */
          u32 cp = A.cpsr; set_mode(0x13); A.spsr = cp; A.r[14] = pc + 4; A.cpsr |= 0x80; write_pc(0x08); cost = 3;
        }
        break;
      default: break;                                                  /* coprocessor: no coprocessors here */
    }
  }
  if (!arm_branched) A.r[15] = pc + 4;
  return cost;
}

/* run the ARM for one sample's worth of cycles. MANATEE.DRV spends its idle time polling: the SH-4 command queue, the flags its
   FIQ handler sets, the host command flag. When the first backward branch of the slice (a loop or a subroutine return) comes round
   again with no store in between, nothing it can see has changed, so it sleeps until something it could see changes (an FIQ, an
   SH-4 store to sound RAM or the registers) or 64 samples pass */
extern "C" { unsigned aica_arm_steps, aica_arm_idle; volatile int aica_wake; extern unsigned g2dma_count; }
static int arm_sleep, sleep_age;
static u32 host_cmd_runs;
static void arm_run(int cycles)
{
  if (!A.running || (R16(0x2c00) & 1)) return;
  if (arm_sleep) {
    if (!(fiq_line && !(A.cpsr & 0x40)) && !aica_wake && ++sleep_age < 64) return;
    arm_sleep = 0;
  }
  aica_wake = 0;
  u32 loop_pc = 0xffffffffu, loop_stores = 0;
  while (cycles > 0) {
    if (fiq_line && !(A.cpsr & 0x40)) fiq_enter();
    u32 pc = A.r[15];
    if (pc == 0x4948) host_cmd_runs++;   /* MANATEE.DRV's host command handler (commands at 0x13200, flag 0x13400) */
    cycles -= arm_step(); aica_arm_steps++;
    if (arm_branched && A.r[15] <= pc) {
      if (loop_pc == 0xffffffffu) { loop_pc = pc; loop_stores = arm_stores; }
      else if (pc == loop_pc) {
        if (arm_stores == loop_stores) { aica_arm_idle++; arm_sleep = 1; sleep_age = 0; return; }
        loop_stores = arm_stores;
      }
    }
  }
}

/* ================= registers ================= */
static void reg_read(u32 o)
{
  if (o == 0x2810 || o == 0x2814) {
    int c = (R16(0x280c) >> 8) & 63; Chan &h = ch[c];
    if (o == 0x2810) {
      u32 eg = h.active ? (0x3ff - (h.eg >> 16)) << 3 : 0x1fff;
      W16(0x2810, (u16)((h.lp ? 0x8000 : 0) | ((h.state > 3 ? 3 : h.state) << 13) | (eg & 0x1fff)));
      h.lp = 0;
    } else W16(0x2814, (u16)(h.pos >> 16));
  } else if (o == 0x2808) W16(0x2808, (u16)(R16(0x2808) | 0x0800));   /* MIDI input buffer empty */
}
extern "C" void aica_start_arm(void);
static void reg_write(u32 o, int size)
{
  if (o < 0x2000) {
    u32 c = o >> 7, r = o & 0x7f;
    if (r == 0 && (R16(o) & 0x8000)) {                                /* KYONEX: key on/off every channel by its KYONB */
      W16(o, (u16)(R16(o) & 0x7fff));
      for (int i = 0; i < 64; i++) { if (creg(i, 0) & 0x4000) { if (!ch[i].active || ch[i].state == EG_RELEASE || ch[i].state == EG_OFF) key_on(i); } else key_off(i); }
    }
    (void)c;
    return;
  }
  switch (o) {
    case 0x28a0: { u32 v = R16(0x28a0); W16(0x28a0, pend_old[0]); if (v & 0x20) raise_bit(5); break; }   /* a write can only set bit 5 */
    case 0x28a4: W16(0x28a0, (u16)(R16(0x28a0) & ~R16(0x28a4))); W16(0x28a4, 0); break;
    case 0x28b8: { u32 v = R16(0x28b8); W16(0x28b8, (u16)(pend_old[1] | (v & 0x20))); update_sh4_irq(); break; }
    case 0x28bc: W16(0x28b8, (u16)(R16(0x28b8) & ~R16(0x28bc))); W16(0x28bc, 0); update_sh4_irq(); break;
    case 0x289c: case 0x28b4: update_arm_irq(); update_sh4_irq(); break;
    case 0x2890: case 0x2894: case 0x2898: tim_sub[(o - 0x2890) / 4] = 0; break;
    case 0x2c00: aica_start_arm(); break;
    case 0x2d04: if (R16(0x2d04) & 1) { fiq_line = 0; update_arm_irq(); } W16(0x2d04, 0); break;
  }
  (void)size;
}
/* SH-4 side (DSI handler): pre_write before the bytes are stored, write after */
extern "C" void aica_sh_pre_write(unsigned) { snap(); }
extern "C" void aica_sh_write(unsigned ea, int size) { aica_wake = 1; reg_write(ea & 0x7ffc, size); }
extern "C" void aica_sh_read(unsigned ea) { reg_read(ea & 0x7ffc); }

static int arm_held = 1; static volatile int arm_released;
extern "C" void aica_start_arm(void)
{
  int hold = R16(0x2c00) & 1;
  if (arm_held && !hold) { arm_reset(); arm_released = 1; }   /* logged by aica_render: this runs in the DSI handler, which must not touch the SD card */
  arm_held = hold;
}

/* ================= output ================= */
extern "C" void aica_init(void)
{
  static u8 *buf;
  if (!buf) buf = (u8 *)memalign(32, RAM_MASK + 1);
  aica_ram = buf; memset(aica_ram, 0, RAM_MASK + 1);
  memset(aica_regs, 0, sizeof aica_regs);
  W16(0x2c00, 1);
  hw_poke32(0xa05f6908, hw_peek32(0xa05f6908));   /* create the SB_ISTEXT page now, from this (the main) thread */
  for (int i = 0; i < 64; i++) {
    AR_STEP[i] = ARTimes[i] <= 0.0 ? (0x3ff << 16) : (s32)((double)(0x3ff << 16) / (ARTimes[i] * 44.1));
    DR_STEP[i] = (s32)((double)(0x3ff << 16) / (DRTimes[i] * 44.1));
  }
  AR_STEP[0] = AR_STEP[1] = DR_STEP[0] = DR_STEP[1] = 0;
  for (int i = 0; i < 0x400; i++) ATT_GAIN[i] = (s32)(32767.0 * pow(10.0, -(0x3ff - i) * 0.09375 / 20.0));
  for (int i = 0; i < 256; i++) TL_GAIN[i] = (s32)(32767.0 * pow(10.0, -i * 0.375 / 20.0));
  for (int i = 0; i < 16; i++) LVL_GAIN[i] = (s32)(32767.0 * pow(10.0, -i * 3.0 / 20.0));
}

/* produce n stereo samples at 44.1 kHz */
static u32 stat_samples;
extern "C" void aica_render(short *out, int n)
{
  if (arm_released) { arm_released = 0; host_log("aica: ARM released, vector %08x %08x\n", rd32le(aica_ram), rd32le(aica_ram + 4)); }
  if ((stat_samples += n) >= 441000) {   /* status every 10 s of audio */
    stat_samples = 0; int na = 0; for (int c = 0; c < 64; c++) na += ch[c].active;
    host_log("aica: arm %s pc %08x steps %u idle %u, %d channels, %u key ons, peak %d, %u G2 DMAs, %u host command runs\n", (A.running && !(R16(0x2c00) & 1)) ? "run" : "held",
             A.r[15], aica_arm_steps, aica_arm_idle, na, kon_n, peak_out, g2dma_count, host_cmd_runs);
    peak_out = 0;
  }
  for (int k = 0; k < n; k++) {
    tick_timers();
    arm_run(64);   /* the AICA ARM7 manages about 2.8 MIPS behind its sound-RAM wait states */
    s32 l = 0, r = 0;
    for (int c = 0; c < 64; c++) {
      if (!ch[c].active) continue;
      s32 s = chan_sample(c);
      u32 disdl = (creg(c, 0x24) >> 8) & 15;
      if (!disdl) continue;
      s = (s * TL_GAIN[creg(c, 0x28) >> 8]) >> 15;
      s = (s * LVL_GAIN[15 - disdl]) >> 15;
      u32 pan = creg(c, 0x24) & 31, pl = pan & 15;
      s32 att = pl == 15 ? 0 : LVL_GAIN[pl];
      if (pan & 0x10) { l += s; r += (s * att) >> 15; } else { l += (s * att) >> 15; r += s; }
    }
    u32 mv = R16(0x2800) & 15; s32 mg = mv ? LVL_GAIN[15 - mv] : 0;
    l = (l * mg) >> 15; r = (r * mg) >> 15;
    { s32 al = l < 0 ? -l : l; if (al > peak_out) peak_out = al; }
    out[2 * k] = (short)(l > 32767 ? 32767 : l < -32768 ? -32768 : l);
    out[2 * k + 1] = (short)(r > 32767 ? 32767 : r < -32768 ? -32768 : r);
  }
}
