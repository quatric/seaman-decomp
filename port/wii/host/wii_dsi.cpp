/* Guest address space on the Wii.
   - Guest RAM (16 MB) is mapped by two data BATs at 0x8c000000 and 0xac000000 (same physical MEM2 pages), so guest addresses are host addresses.
   - Everything else the Dreamcast code touches (PVR/system/AICA registers, VRAM, TA FIFO, store queues, cache arrays, SH-4 control registers) has no
     BAT: the access faults (DSI), and wii_dsi_entry emulates the load/store against a sparse page store, with hooks for registers that change.
   This file is compiled -msoft-float: the DSI path must not touch the FPU state of the faulting code. */
#include "host.h"
#include <ogc/machine/processor.h>
#include <tuxedo/ppc/exception.h>
#include <ogc/system.h>

extern "C" {
extern unsigned __ppc_excpt_buf[4];   /* srr0, srr1, cr saved by the exception entry stub */
unsigned wii_dsi_ctx[48] __attribute__((aligned(32)));   /* r0..r31, lr, ctr, xer, msr, srr0, srr1 */
void wii_dsi_entry(void);
void wii_set_bats(void);
}
#define RAM_PHYS 0x12000000u

asm(
".text\n.globl wii_set_bats\nwii_set_bats:\n"
"  mfmsr 9\n  rlwinm 10,9,0,17,15\n  mtmsr 10\n  isync\n"
"  mfspr 5,537\n  mfspr 6,536\n  rlwinm 6,6,0,0,14\n  ori 6,6,0x3ff\n"        /* DBAT0: keep MEM1 mapping, shrink 256 MB -> 32 MB */
"  lis 3,0x8c00\n  ori 3,3,0x1ff\n  lis 4,0x1200\n  ori 4,4,0x2\n"            /* DBAT2: 0x8c000000, 16 MB -> MEM2 0x12000000 */
"  lis 7,0xac00\n  ori 7,7,0x1ff\n"                                            /* DBAT3: 0xac000000, same pages */
"  li 8,0\n"
"  mtspr 536,8\n  isync\n  mtspr 537,5\n  mtspr 536,6\n  isync\n"
"  mtspr 541,4\n  mtspr 540,3\n  mtspr 543,4\n  mtspr 542,7\n  isync\n"
"  sync\n  mtmsr 9\n  isync\n  blr\n"
);

/* DSI entry: r11 = exception id, r12 = this handler; the interrupted r11/r12 are in SPRG0/1 (see libogc's PPCExcptEntryGeneral).
   wii_dsi_ctx layout (words): 0..31 r0..r31, 32 lr, 33 ctr, 34 xer, 35 msr, 36 srr0, 37 srr1, 38 result of the emulator. */
#define DSI_RESTORE \
  "  lis 12,__ppc_excpt_buf@ha\n  addi 12,12,__ppc_excpt_buf@l\n  lwz 0,8(12)\n  mtcrf 0xff,0\n" \
  "  lwz 0,128(11)\n  mtlr 0\n  lwz 0,132(11)\n  mtctr 0\n  lwz 0,136(11)\n  mtxer 0\n" \
  "  mr 12,11\n  lmw 13,52(12)\n" \
  "  lwz 0,0(12)\n  lwz 1,4(12)\n  lwz 2,8(12)\n  lwz 3,12(12)\n  lwz 4,16(12)\n  lwz 5,20(12)\n  lwz 6,24(12)\n  lwz 7,28(12)\n  lwz 8,32(12)\n  lwz 9,36(12)\n  lwz 10,40(12)\n" \
  "  lwz 11,44(12)\n  lwz 12,48(12)\n"
asm(
".text\n.globl wii_dsi_entry\nwii_dsi_entry:\n"
"  lis 11,wii_dsi_ctx@ha\n  addi 11,11,wii_dsi_ctx@l\n  stmw 0,0(11)\n"
"  mfsprg 0,0\n  stw 0,44(11)\n  mfsprg 0,1\n  stw 0,48(11)\n"
"  mflr 0\n  stw 0,128(11)\n  mfctr 0\n  stw 0,132(11)\n  mfxer 0\n  stw 0,136(11)\n"
"  lis 12,__ppc_excpt_buf@ha\n  addi 12,12,__ppc_excpt_buf@l\n  lwz 0,0(12)\n  stw 0,144(11)\n  lwz 0,4(12)\n  stw 0,148(11)\n"
"  mfmsr 3\n  stw 3,140(11)\n  ori 3,3,0x2000\n  mtmsr 3\n  isync\n"
"  stwu 1,-32(1)\n  mr 3,11\n  bl wii_dsi_emulate\n  addi 1,1,32\n"
"  lis 11,wii_dsi_ctx@ha\n  addi 11,11,wii_dsi_ctx@l\n"
"  cmpwi 3,0\n  beq 2f\n"
/* handled: resume after the emulated instruction */
"  lwz 0,144(11)\n  mtsrr0 0\n  lwz 0,148(11)\n  mtsrr1 0\n"
DSI_RESTORE
"  rfi\n"
/* not ours: restore everything and hand over to libogc's default handler (a real fault) */
"2:\n"
DSI_RESTORE
"  li 11,3\n  b PPCExcptDefaultHandler\n"
);

/* ---- sparse page store ---- */
struct Page { unsigned key; unsigned char *mem; };
static Page tab[8192];
static unsigned char *pool = (unsigned char *)0x91000000, *poolend = (unsigned char *)0x92000000;   /* above the heap (main caps MEM2 at 0x91000000) */
static unsigned npages;
static unsigned char *page(unsigned ea)
{
  unsigned key = (ea >> 12) + 1, h = (key * 2654435761u) >> 19;
  for (;;) {
    if (tab[h].key == key) return tab[h].mem;
    if (!tab[h].key) {
      if (pool + 4096 > poolend || npages >= 4096) return 0;
      tab[h].key = key; tab[h].mem = pool; memset(pool, 0, 4096); pool += 4096; npages++;
      return tab[h].mem;
    }
    h = (h + 1) & 8191;
  }
}
static unsigned char dummy;
/* sound RAM and the AICA registers live in wii_aica.cpp, where the ARM7 sees them too */
extern "C" { extern unsigned char *aica_ram, aica_regs[0x8000]; extern volatile int aica_wake; void aica_sh_read(unsigned), aica_sh_pre_write(unsigned), aica_sh_write(unsigned, int); }
static inline int is_aram(unsigned ea) { return ea - 0xa0800000u < 0x800000u && aica_ram; }
static inline int is_areg(unsigned ea) { return ea - 0xa0700000u < 0x8000u; }
static unsigned char &hw_byte(unsigned ea)
{
  if (is_aram(ea)) return aica_ram[ea & 0x1fffff];
  if (is_areg(ea)) return aica_regs[ea & 0x7fff];
  unsigned char *p = page(ea); if (!p) { dummy = 0; return dummy; } return p[ea & 4095];
}
extern "C" unsigned hw_pages_used(void) { return npages; }
/* G2 DMA (0xa05f7800, four channels of 0x20: G2 address, SH-4 address, length, direction, mode, enable, start): the copy is done
   at once when the game sets the start bit; the end interrupt is raised in ISTNRM and the host runs the completion (wii_main) */
static inline unsigned hw_rd32(unsigned ea) { return hw_byte(ea) | hw_byte(ea + 1) << 8 | hw_byte(ea + 2) << 16 | (unsigned)hw_byte(ea + 3) << 24; }
extern "C" { unsigned g2dma_count; }
static void g2dma_store(unsigned ea)
{
  unsigned b = ea & ~0x1fu;
  if ((ea & 0x1c) != 0x18 || !(hw_rd32(b + 0x18) & 1) || !(hw_rd32(b + 0x14) & 1)) return;
  unsigned g2 = hw_rd32(b) & 0x1fffffff, sh = hw_rd32(b + 4) & 0x1fffffff, len = hw_rd32(b + 8) & 0x7fffffe0, dir = hw_rd32(b + 0xc) & 1;
  if (g2 - 0x00800000u < 0x800000u && aica_ram && sh - 0x0c000000u < 0x01000000u) {
    unsigned off = g2 & 0x1fffff; if (len > 0x200000 - off) len = 0x200000 - off;
    unsigned char *m = (unsigned char *)(unsigned long)(0x80000000u | sh);
    if (dir) memcpy(m, aica_ram + off, len); else memcpy(aica_ram + off, m, len);
    aica_wake = 1;
  }
  hw_poke32(b + 0x18, 0);
  hw_poke32(0xa05f6900, hw_rd32(0xa05f6900) | 1u << (15 + ((ea >> 5) & 3)));
  g2dma_count++;
}
static unsigned rdbe(unsigned ea, int n) { unsigned v = 0; for (int i = 0; i < n; i++) v = (v << 8) | hw_byte(ea + i); return v; }
static void wrbe(unsigned ea, unsigned v, int n) { for (int i = n - 1; i >= 0; i--) { hw_byte(ea + i) = (unsigned char)v; v >>= 8; } }
extern "C" void hw_poke32(unsigned ea, unsigned v) { for (int i = 0; i < 4; i++) hw_byte(ea + i) = (unsigned char)(v >> (8 * i)); }
/* bulk read of emulated hardware memory (texture memory for the renderer); unbacked pages read as 0 */
static unsigned char *page_find(unsigned ea)
{
  unsigned key = (ea >> 12) + 1, h = (key * 2654435761u) >> 19;
  for (;;) {
    if (tab[h].key == key) return tab[h].mem;
    if (!tab[h].key) return 0;
    h = (h + 1) & 8191;
  }
}
extern "C" void hw_read(unsigned ea, void *dst, unsigned len)
{
  unsigned char *d = (unsigned char *)dst;
  while (len) {
    unsigned n = 4096 - (ea & 4095); if (n > len) n = len;
    unsigned char *p = page_find(ea);
    if (p) memcpy(d, p + (ea & 4095), n); else memset(d, 0, n);
    ea += n; d += n; len -= n;
  }
}
extern "C" { unsigned vram_epoch; }
extern "C" unsigned hw_peek32(unsigned ea) { unsigned v = 0; for (int i = 3; i >= 0; i--) v = (v << 8) | hw_byte(ea + i); return v; }

/* registers whose value changes without a guest write */
static unsigned spg_line;
/* last emulated accesses (pc, address, store flag, value), for the watchdog */
extern "C" { unsigned hw_trace[16][4]; unsigned hw_trace_n; unsigned hw_count; }
static void trace(unsigned pc, unsigned ea, int st, unsigned v) { unsigned i = hw_trace_n++ & 15; hw_trace[i][0] = pc; hw_trace[i][1] = ea; hw_trace[i][2] = st; hw_trace[i][3] = v; hw_count++; }
static void pre_read(unsigned ea)
{
  if (is_areg(ea)) { aica_sh_read(ea); return; }
  if ((ea & ~3u) == 0xa05f810c) {             /* PVR SPG_STATUS: scanline in bits 0-9, vsync flag bit 13; raises vblank-in in SB_ISTNRM */
    spg_line = (spg_line + 1) % 525;
    hw_poke32(0xa05f810c, spg_line | (spg_line < 3 ? 0x2000 : 0));
    if (spg_line == 480) hw_poke32(0xa05f6900, hw_peek32(0xa05f6900) | 8);
  }
}
extern "C" { extern const char *ring[256]; extern unsigned rp; }
static void report_fault(const char *why, unsigned *c, unsigned dar, unsigned insn)
{
  { extern unsigned sh4_pc; SYS_Report("[sh4 pc %08x] ", sh4_pc); }
  SYS_Report("DSI %s: dar=%08x pc=%08x insn=%08x r3=%08x r4=%08x r5=%08x r6=%08x r9=%08x r10=%08x\n", why, dar, c[36], insn, c[3], c[4], c[5], c[6], c[9], c[10]);
  for (int i = 12; i > 0; i--) SYS_Report("  call %s\n", ring[(rp - i) & 255] ? ring[(rp - i) & 255] : "-");
}
static bool is_hw(unsigned ea)
{
  unsigned top = ea >> 24;
  return ea < 0x00400000u || (ea >= 0xa0000000u && ea < 0xa1000000u) || top == 0xa4 || top == 0xa5 || top == 0xa6 || top == 0xa7 || top >= 0xe0 || top == 0x10 || top == 0x04 || (ea >= 0x10000000u && ea < 0x10800000u);
}
#define LFS(n) case n: __asm__ volatile("lfs " #n ",0(%0)" : : "r"(&v)); break;
#define LFD(n) case n: __asm__ volatile("lfd " #n ",0(%0)" : : "r"(buf)); break;
#define STFS(n) case n: __asm__ volatile("stfs " #n ",0(%0)" : : "r"(&v) : "memory"); break;
#define STFD(n) case n: __asm__ volatile("stfd " #n ",0(%0)" : : "r"(buf) : "memory"); break;
#define R32(M) M(0) M(1) M(2) M(3) M(4) M(5) M(6) M(7) M(8) M(9) M(10) M(11) M(12) M(13) M(14) M(15) M(16) M(17) M(18) M(19) M(20) M(21) M(22) M(23) M(24) M(25) M(26) M(27) M(28) M(29) M(30) M(31)
static void fp_load(unsigned n, int dbl, unsigned hi, unsigned lo)
{
  unsigned v = hi; unsigned buf[2] = { hi, lo };
  if (!dbl) { switch (n) { R32(LFS) } } else { switch (n) { R32(LFD) } }
}
static void fp_store(unsigned n, int dbl, unsigned *hi, unsigned *lo)
{
  unsigned v = 0; unsigned buf[2] = { 0, 0 };
  if (!dbl) { switch (n) { R32(STFS) } *hi = v; } else { switch (n) { R32(STFD) } *hi = buf[0]; *lo = buf[1]; }
}

/* SH-4 store queues (0xe0000000-0xe3ffffff): the decompiled code carries no pref, so a line is flushed to the TA FIFO (QACR = 0x10000000)
   when it fills, when the next store goes to another line or backwards, and at the end of the frame. Words never written stay as the queue last held them. */
extern "C" void ta_push_line(const unsigned *w);
extern "C" { unsigned sq_stores, sq_lines, sq_ta, sq_qacr, sq_area[8], sq_odd; }
extern "C" { unsigned sq_line; int sq_dirty; }   /* shared with the inline store path in sh4_core.h */
static unsigned sq_last;
/* texture memory seen through the 32-bit path (0x05/0xa5): the two 4 MB banks interleave every 32 bits in the 64-bit view the
   renderer reads, so 32-bit offset o lands at (o & 3) | (o & 0x3ffffc) << 1 | bank << 2 */
static inline unsigned vram32to64(unsigned o) { o &= 0x7fffffu; return (o & 3) | ((o & 0x3ffffcu) << 1) | (((o >> 22) & 1) << 2); }
static inline unsigned vram_ea(unsigned ea) { return (ea >> 24) == 0xa5 ? 0xa4000000u | vram32to64(ea) : ea; }
/* the two 32-byte queues; address bit 5 selects one, the other address bits only matter for the destination at flush time */
extern "C" { unsigned char sq_buf[64] __attribute__((aligned(32))); }
static inline void sq_put(unsigned ea, unsigned char b) { sq_buf[ea & 63] = b; }
static void sq_flush(void)
{
  if (!sq_dirty) return;
  sq_dirty = 0; sq_lines++;
  static unsigned char *qp;                    /* the page holding QACR0/1: pages never move once allocated */
  if (!qp) qp = page(0xff000000u);
  unsigned qacr = qp ? (unsigned)*(le<unsigned> *)(qp + ((sq_line & 0x20) ? 0x3c : 0x38)) : hw_peek32((sq_line & 0x20) ? 0xff00003c : 0xff000038);
  unsigned phys = (sq_line & 0x03ffffe0u) | ((qacr & 0x1c) << 24);
  unsigned w[8]; const unsigned char *b = sq_buf + (sq_line & 0x20);
  for (int i = 0; i < 8; i++) w[i] = *(const le<unsigned> *)(b + 4 * i);
  sq_qacr = qacr;
  { static int nlog; if (sq_lines > 400000 && nlog < 16) { nlog++; SYS_Report("sqflush line=%08x qacr=%x phys=%08x w=%x %x %x %x\n", sq_line, qacr, phys, w[0], w[1], w[2], w[3]); } }
  sq_area[(phys >> 26) & 7]++; if ((phys >> 26) != 4 && (phys >> 26) != 3 && (phys >> 26) != 1) sq_odd = sq_line;
  switch (phys >> 26) {
    case 4:  sq_ta++; ta_push_line(w); break;                                              /* 0x10000000: TA polygon FIFO */
    case 3:  for (int i = 0; i < 8; i++) *(volatile le<unsigned> *)(0x8c000000u | ((phys + 4 * i) & 0x00ffffffu)) = w[i]; break;   /* 0x0c000000: system RAM */
    case 1:  for (int i = 0; i < 8; i++) hw_poke32((phys & 0x01000000u) ? 0xa4000000u | vram32to64(phys + 4 * i) : 0xa4000000u + ((phys + 4 * i) & 0x7fffffu), w[i]); vram_epoch++; break;   /* 0x04000000 (64-bit) / 0x05000000 (32-bit): texture memory */
  }
}
extern "C" void sq_end_frame(void) { sq_flush(); }
/* store-queue writes from the SH-4 interpreter: buffered as on the hardware and sent by pref. An interpreted function can fill a line
   for a compiled caller whose pref the decompiler dropped (the 32-byte copy 8c207300 writing Kamui's padding lines), so a line whose
   32 bytes have all been written is sent at once, and the pref that follows for that same line is then skipped. */
extern "C" { unsigned sqd_mask[2], sqd_line[2], sqd_sent[2] = { ~0u, ~0u }; }
#if defined(SH4_PROF) && defined(PROF_SQ)   /* timing every store-queue call costs about as much as the call */
extern "C" int sh4_prof_mode(int m);
#define PROF_IN(m) int pm_ = sh4_prof_mode(m)
#define PROF_OUT() sh4_prof_mode(pm_)
#else
#define PROF_IN(m)
#define PROF_OUT()
#endif
static void sq_direct_(unsigned ea, unsigned v, int size);
extern "C" void sq_direct(unsigned ea, unsigned v, int size) { PROF_IN(2); sq_direct_(ea, v, size); PROF_OUT(); }
static void sq_direct_(unsigned ea, unsigned v, int size)
{
  if (sq_dirty && ((ea ^ sq_line) & 0x20) == 0 && (ea & ~31u) != sq_line) sq_flush();
  if (size == 4) *(le<unsigned> *)(sq_buf + (ea & 60)) = v;
  else for (int i = 0; i < size; i++) sq_put(ea + i, (unsigned char)(v >> (8 * i)));
  sq_stores++;
  unsigned q = (ea >> 5) & 1, line = ea & ~31u;
  if (line != sqd_line[q]) { sqd_line[q] = line; sqd_mask[q] = 0; }
  sqd_mask[q] |= ((1u << size) - 1) << (ea & 31);
  sqd_sent[q] = ~0u;
  if (sqd_mask[q] == ~0u) {
    if (sq_dirty) sq_flush();
    sq_line = line; sq_dirty = 1; sq_flush();
    sqd_mask[q] = 0; sqd_sent[q] = line;
  }
}
static void sq_pref_(unsigned ea);
extern "C" void sq_pref(unsigned ea) { if ((ea >> 26) != 0x38) return; PROF_IN(2); sq_pref_(ea); PROF_OUT(); }
static void sq_pref_(unsigned ea)
{
  unsigned q = (ea >> 5) & 1, line = ea & ~31u;
  if (sqd_sent[q] == line) { sqd_sent[q] = ~0u; return; }
  sqd_mask[q] = 0; sqd_sent[q] = ~0u;
  if (sq_dirty) sq_flush();
  sq_line = line; sq_dirty = 1; sq_flush();
}
static void sq_store(unsigned ea, int size)
{
  if ((ea >> 26) != 0x38) return;
  sq_stores++;
  for (int i = 0; i < size; i++) sq_put(ea + i, hw_byte(ea + i));
  unsigned line = ea & ~31u;
  if (sq_dirty && (line != sq_line || ea <= sq_last)) sq_flush();
  sq_line = line; sq_last = ea; sq_dirty = 1;
  if ((ea & 31) + size >= 32) sq_flush();
}
static int wii_dsi_emulate_(unsigned *c);
extern "C" int wii_dsi_emulate(unsigned *c) { PROF_IN(3); int r = wii_dsi_emulate_(c); PROF_OUT(); return r; }
static int wii_dsi_emulate_(unsigned *c)
{
  unsigned dar; __asm__ volatile("mfspr %0,19" : "=r"(dar));
  if (!is_hw(dar)) { report_fault("not hw", c, dar, *(volatile unsigned *)c[36]); return 0; }
  unsigned srr0 = c[36];
  unsigned insn = *(volatile unsigned *)srr0;
  unsigned op = insn >> 26, rt = (insn >> 21) & 31, ra = (insn >> 16) & 31;
  int size = 0, store = 0, upd = 0, fp = 0, sext = 0, brev = 0;
  switch (op) {
    case 32: size = 4; break;               case 33: size = 4; upd = 1; break;
    case 34: size = 1; break;               case 35: size = 1; upd = 1; break;
    case 40: size = 2; break;               case 41: size = 2; upd = 1; break;
    case 42: size = 2; sext = 1; break;     case 43: size = 2; sext = 1; upd = 1; break;
    case 36: size = 4; store = 1; break;    case 37: size = 4; store = 1; upd = 1; break;
    case 38: size = 1; store = 1; break;    case 39: size = 1; store = 1; upd = 1; break;
    case 44: size = 2; store = 1; break;    case 45: size = 2; store = 1; upd = 1; break;
    case 48: size = 4; fp = 1; break;       case 49: size = 4; fp = 1; upd = 1; break;
    case 50: size = 8; fp = 1; break;       case 51: size = 8; fp = 1; upd = 1; break;
    case 52: size = 4; fp = 1; store = 1; break;  case 53: size = 4; fp = 1; store = 1; upd = 1; break;
    case 54: size = 8; fp = 1; store = 1; break;  case 55: size = 8; fp = 1; store = 1; upd = 1; break;
    case 31:
      switch ((insn >> 1) & 0x3ff) {
        case 23: size = 4; break;   case 55: size = 4; upd = 1; break;
        case 87: size = 1; break;   case 119: size = 1; upd = 1; break;
        case 279: size = 2; break;  case 311: size = 2; upd = 1; break;
        case 343: size = 2; sext = 1; break;  case 375: size = 2; sext = 1; upd = 1; break;
        case 151: size = 4; store = 1; break; case 183: size = 4; store = 1; upd = 1; break;
        case 215: size = 1; store = 1; break; case 247: size = 1; store = 1; upd = 1; break;
        case 407: size = 2; store = 1; break; case 439: size = 2; store = 1; upd = 1; break;
        case 534: size = 4; brev = 1; break;  case 790: size = 2; brev = 1; break;
        case 662: size = 4; store = 1; brev = 1; break; case 918: size = 2; store = 1; brev = 1; break;
        case 535: size = 4; fp = 1; break;   case 567: size = 4; fp = 1; upd = 1; break;
        case 599: size = 8; fp = 1; break;   case 631: size = 8; fp = 1; upd = 1; break;
        case 663: size = 4; fp = 1; store = 1; break; case 695: size = 4; fp = 1; store = 1; upd = 1; break;
        case 727: size = 8; fp = 1; store = 1; break; case 759: size = 8; fp = 1; store = 1; upd = 1; break;
      }
      break;
  }
  if (!size) { report_fault("undecoded", c, dar, insn); return 0; }
  /* 0x06/0x07 mirror texture memory 0x04/0x05 */
  unsigned ea = ((dar >> 24) == 0xa6 || (dar >> 24) == 0xa7) ? dar - 0x02000000u : dar;
  if (store) {
    if (fp) {
      unsigned hi, lo = 0; fp_store(rt, size == 8, &hi, &lo);
      if (size == 8) { wrbe(vram_ea(ea), hi, 4); wrbe(vram_ea(ea + 4), lo, 4); } else wrbe(vram_ea(ea), hi, 4);
      sq_store(ea, size);
      if ((ea >> 25) == (0xa4u >> 1)) vram_epoch++;
    } else {
      unsigned v = c[rt];
      if (brev) v = size == 4 ? __builtin_bswap32(v) : (unsigned)__builtin_bswap16((unsigned short)v);
      if ((ea & ~4u) == 0xff000038u && sq_dirty) sq_flush();   /* a pending line goes out with the QACR it was written under */
      if (is_areg(ea)) { aica_sh_pre_write(ea); wrbe(ea, v, size); aica_sh_write(ea, size); trace(srr0, ea, 1, v); goto stored; }
      if (is_aram(ea)) aica_wake = 1;
      wrbe(vram_ea(ea), v, size); trace(srr0, ea, 1, v); sq_store(ea, size);
      if (ea - 0xa05f7800u < 0x80u) g2dma_store(ea);
      if ((ea >> 25) == (0xa4u >> 1)) vram_epoch++;
      if ((ea & ~4u) == 0xff000038u) { static unsigned nq, lastv[2] = {1, 1}; unsigned lv = __builtin_bswap32(v); if (lv != lastv[(ea >> 2) & 1] && nq < 40) { nq++; extern unsigned sh4_pc; SYS_Report("qacr%d = %x (ppc %08x, sh4 %08x)\n", (ea >> 2) & 1, lv, srr0, sh4_pc); } lastv[(ea >> 2) & 1] = lv; }
    }
  stored:;
  } else {
    pre_read(ea);
    if (fp) {
      if (size == 8) fp_load(rt, 1, rdbe(vram_ea(ea), 4), rdbe(vram_ea(ea + 4), 4)); else fp_load(rt, 0, rdbe(vram_ea(ea), 4), 0);
    } else {
      unsigned v = rdbe(vram_ea(ea), size);
      if (brev) v = size == 4 ? __builtin_bswap32(v) : (unsigned)__builtin_bswap16((unsigned short)v);
      if (sext && size == 2) v = (unsigned)(int)(short)v;
      c[rt] = v; trace(srr0, ea, 0, v);
    }
  }
  if (upd) c[ra] = dar;
  c[36] = srr0 + 4;
  return 1;
}

/* U0 alias of guest RAM: a spare extended data BAT (DBAT4-7, HID4.SBE) maps EA 0x0c000000 onto the same 16 MB as 0x8c000000, so the
   SH-4 memory helpers (sh4_core.h) use guest addresses as they are, with no compare for the 0x0c... form */
#define SPR_R(n) ({ unsigned v_; __asm__ volatile("mfspr %0," #n : "=r"(v_)); v_; })
#define SPR_W(n, v) __asm__ volatile("mtspr " #n ",%0" : : "r"(v))
static int map_u0_ram(void)
{
  unsigned hid4 = SPR_R(1011), up[4] = { SPR_R(568), SPR_R(570), SPR_R(572), SPR_R(574) };
  SYS_Report("bats: hid4 %08x dbat4-7 %08x %08x %08x %08x\n", hid4, up[0], up[1], up[2], up[3]);
  if (!(hid4 & 0x02000000u)) return 0;                                    /* SBE: BATs 4-7 enabled */
  int k = 0; while (k < 4 && (up[k] & 3)) k++;
  if (k == 4) return 0;
  unsigned u = 0x0c000000u | 0x1ff, l = RAM_PHYS | 2, msr; __asm__ volatile("mfmsr %0" : "=r"(msr));
  __asm__ volatile("mtmsr %0\n isync" : : "r"(msr & ~0x8000u));            /* no interrupts while the BAT changes */
  switch (k) {
    case 0: SPR_W(568, 0); __asm__ volatile("isync"); SPR_W(569, l); SPR_W(568, u); break;
    case 1: SPR_W(570, 0); __asm__ volatile("isync"); SPR_W(571, l); SPR_W(570, u); break;
    case 2: SPR_W(572, 0); __asm__ volatile("isync"); SPR_W(573, l); SPR_W(572, u); break;
    default: SPR_W(574, 0); __asm__ volatile("isync"); SPR_W(575, l); SPR_W(574, u); break;
  }
  __asm__ volatile("isync\n sync\n mtmsr %0\n isync" : : "r"(msr));
  return k + 4;
}
extern "C" void wii_setup_memory(void)
{
  wii_set_bats();
  { int k = map_u0_ram(); volatile unsigned *a = (volatile unsigned *)0x8c00fff0u, *b = (volatile unsigned *)0x0c00fff0u; unsigned o = *a; *a = 0x5ea3a11u;
    int ok = k && *b == 0x5ea3a11u; *a = o;
    SYS_Report("bats: guest RAM at 0x0c000000 %s (DBAT%d)\n", ok ? "mapped" : "NOT MAPPED", k);
    if (!ok) for (;;) ; }                                                 /* sh4_core.h relies on it */
  PPCExcptSetHandler(PPC_EXCPT_DSI, (PPCExcptHandlerFn)wii_dsi_entry);
  /* power-on values the game reads back: PVR core ID/revision, system bus revision */
  hw_poke32(0xa05f8000, 0x17fd11db);
  hw_poke32(0xa05f8004, 0x11);
  hw_poke32(0xa05f689c, 0x0b);
}
