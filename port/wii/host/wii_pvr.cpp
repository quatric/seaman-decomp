/* PVR2 stand-in: collects the Tile Accelerator stream the game DMAs out and the texture uploads, for the GX renderer */
#include "host.h"
extern "C" {
#define TA_MAX (1u << 20)
static unsigned ta_buf[TA_MAX / 4];
static unsigned ta_len;                       /* bytes collected this frame */
unsigned ta_overflow, ta_frames_seen;
unsigned ta_stats[8];                         /* parameter types seen: end of list, clip, ?, ?, polygon, sprite, ?, vertex */
unsigned vram_bytes;

/* the TA FIFO takes 32-byte parameters; src is a guest address */
unsigned host_ta_dma(unsigned src, unsigned len)
{
  len &= ~31u;
  if (ta_len + len > TA_MAX) { ta_overflow++; return 0; }
  for (unsigned i = 0; i < len; i += 4) ta_buf[(ta_len + i) / 4] = (unsigned)GM(unsigned, src + i);
  ta_len += len;
  return 0;
}

void ta_push_line(const unsigned *w)
{
  if (ta_len + 32 > TA_MAX) { ta_overflow++; return; }
  for (int i = 0; i < 8; i++) ta_buf[ta_len / 4 + i] = w[i];
  ta_len += 32;
}

/* texture memory uploads through the DMAC (64-bit area, linear) */
void host_vram_dma(unsigned off, unsigned src, unsigned len)
{
  for (unsigned i = 0; i < len; i += 4) hw_poke32(0xa4000000u + off + i, (unsigned)GM(unsigned, src + i));
  vram_bytes += len;
  extern unsigned vram_epoch; vram_epoch++;
}

/* 8c202f40: queue a DMAC channel 2 transfer; dst 0x10000000 is the TA polygon FIFO, 0x11000000 + offset is texture memory */
static unsigned dma_n, dma_ta, dma_last, dma_src, dma_len;
unsigned host_dmac(unsigned dst, unsigned src, unsigned len, unsigned flags)
{
  len = (len + 31) & ~31u;
  { extern void sq_end_frame(void); sq_end_frame(); }   /* a store-queue line still pending (e.g. an end-of-list) went to the FIFO before this DMA */
  dma_n++; dma_last = dst; dma_src = src; dma_len = len;
  if ((dst >> 24) == 0x10) { dma_ta++; host_ta_dma(src, len); }
  else if ((dst >> 24) == 0x11) host_vram_dma(dst & 0xffffff, src, len);
  return 0;
}

/* called once per game frame, after the game has submitted its lists */
void pvr_end_frame(unsigned n)
{
  extern void sq_end_frame(void); sq_end_frame();
  extern unsigned sq_stores, sq_lines, sq_ta, sq_qacr;
  if (n % 1000 == 0) host_log("sq: stores=%u lines=%u ta=%u qacr=%x vram=%u\n", sq_stores, sq_lines, sq_ta, sq_qacr, vram_bytes);
  if (n == 600 || n == 3000) { host_log("lists f2c:"); for (int i = 0; i < 24; i++) host_log(" %x", (unsigned)GM(unsigned, 0x8c4a9f2c + 4 * i)); host_log("\nlists f7c:"); for (int i = 0; i < 24; i++) host_log(" %x", (unsigned)GM(unsigned, 0x8c4a9f7c + 4 * i)); host_log("\n"); }
  if (n == 600) { host_log("mode=%d\n", (int)GM(int, 0x8c2b4c34)); for (int m = 0; m < 9; m++) host_log("rec %d: %x %x %x\n", m, (unsigned)GM(unsigned, 0x8c2b4c5c + 12 * m), (unsigned)GM(unsigned, 0x8c2b4c5c + 12 * m + 4), (unsigned)GM(unsigned, 0x8c2b4c5c + 12 * m + 8)); }
  if (n == 600) { host_log("sizes a1a0:"); for (int i = 0; i < 8; i++) host_log(" %x", (unsigned)GM(unsigned, 0x8c4aa1a0 + 4 * i)); host_log("\ntbl a22c:"); for (int i = 0; i < 30; i++) host_log(" %x", (unsigned)GM(unsigned, 0x8c4aa22c + 4 * i)); host_log("\n"); }
  if (n == 600) { unsigned p = GM(unsigned, 0x8c4aa21c); host_log("cursor ptr %x:", p); if (p >= 0x8c000000 && p < 0x8d000000) for (int i = 0; i < 8; i++) host_log(" %x", (unsigned)GM(unsigned, p + 4 * i)); host_log("\nfec=%x ff0=%x a3e4=%x\n", (unsigned)GM(unsigned, 0x8c4a9fec), (unsigned)GM(unsigned, 0x8c4a9ff0), (unsigned)GM(unsigned, 0x8c4aa3e4)); }
  if (n % 100 == 0) {
    unsigned t[8] = {0};
    for (unsigned i = 0; i < ta_len / 4; i += 8) t[(ta_buf[i] >> 29) & 7]++;
    extern unsigned sq_area[8], sq_odd;
    host_log("frame %u: ta %u bytes (end=%u clip=%u poly=%u sprite=%u vtx=%u) dma %u (ta %u, last dst %x src %x len %x) sq areas ta=%u ram=%u vram=%u other=%u (%x)\n", n, ta_len, t[0], t[1], t[4], t[5], t[7], dma_n, dma_ta, dma_last, dma_src, dma_len, sq_area[4], sq_area[3], sq_area[1], sq_area[0] + sq_area[2] + sq_area[5] + sq_area[6] + sq_area[7], sq_odd);
  }
  { extern void gx_frame(const unsigned *, unsigned); gx_frame(ta_buf, ta_len); }
  dma_n = dma_ta = 0; { extern unsigned sq_area[8]; for (int i = 0; i < 8; i++) sq_area[i] = 0; }
  static unsigned seen[8], nseen;
  unsigned known = 0; for (unsigned k = 0; k < nseen; k++) if (seen[k] == ta_len) known = 1;
  if (ta_len && !known && nseen < 8) {
    seen[nseen++] = ta_len;
    unsigned t[8] = {0};
    for (unsigned i = 0; i < ta_len / 4; i += 8) t[(ta_buf[i] >> 29) & 7]++;
    host_log("ta frame %u: %u bytes, params end=%u clip=%u t2=%u t3=%u poly=%u sprite=%u t6=%u vtx=%u; vram %u bytes\n", n, ta_len, t[0], t[1], t[2], t[3], t[4], t[5], t[6], t[7], vram_bytes);
    for (unsigned i = 0; i < ta_len / 4 && i < 8 * 24; i += 8) host_log("TA %08x %08x %08x %08x %08x %08x %08x %08x\n", ta_buf[i], ta_buf[i+1], ta_buf[i+2], ta_buf[i+3], ta_buf[i+4], ta_buf[i+5], ta_buf[i+6], ta_buf[i+7]);
  }
  ta_len = 0;
}
}
