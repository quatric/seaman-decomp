/* PVR2 renderer on GX: draws the Tile Accelerator stream of a frame (collected by wii_pvr.cpp) into the Wii framebuffer.
   Screen-space vertices (640x480, z = 1/w), polygon and sprite parameters, the three main lists in PVR order (opaque, punch-through,
   translucent), PVR blend and texture-shading instructions, and the PVR texture formats decoded to RGBA8 (twiddled, VQ, stride, mipmap,
   palette) with a small cache keyed by texture word and texture-memory epoch. Offset colour is a second vertex colour added by a second TEV
   stage. Fog (look-up table, or per vertex from the offset alpha) is a factor in the second colour's alpha, blended towards the fog
   colour by the last TEV stage. Modifier volumes and bump maps are not drawn yet. */
#include "host.h"
#include <gccore.h>
#include <malloc.h>
#include <math.h>

extern "C" {
void hw_read(unsigned ea, void *dst, unsigned len);
extern unsigned vram_epoch;
}

namespace {
GXRModeObj *rmode;
void *xfb[2];
int cur_fb;
void *gx_fifo;
const unsigned FIFO_SIZE = 256 * 1024;
bool ready;

inline unsigned rd_vram(unsigned off) { return hw_peek32(0xa4000000u + (off & 0x7ffffcu)); }
inline float w2f(unsigned v) { union { unsigned u; float f; } x; x.u = v; return x.f; }

/* ---- textures ---- */
struct Tex { unsigned tcw, tsp_size, epoch, w, h, used; void *data; unsigned bytes; GXTexObj obj; };
const int NTEX = 96;
Tex texs[NTEX];
unsigned tex_bytes_total, tex_frame;
const unsigned TEX_BUDGET = 8u << 20;

/* PVR twiddled order: texel bits interleaved, y in the even bits; non-square textures are runs of square blocks */
inline unsigned twiddle(unsigned x, unsigned y, unsigned w, unsigned h)
{
  unsigned s = w < h ? w : h, r = 0;
  unsigned bx = x / s, by = y / s; x %= s; y %= s;
  for (unsigned b = 0, k = 0; (1u << b) < s; b++, k += 2) r |= ((y >> b) & 1) << k | ((x >> b) & 1) << (k + 1);
  return r + (bx + by) * s * s;
}
inline unsigned argb1555(unsigned v) { unsigned a = (v & 0x8000) ? 0xff : 0, r = (v >> 10) & 31, g = (v >> 5) & 31, b = v & 31; return a << 24 | (r << 3 | r >> 2) << 16 | (g << 3 | g >> 2) << 8 | (b << 3 | b >> 2); }
inline unsigned rgb565(unsigned v) { unsigned r = (v >> 11) & 31, g = (v >> 5) & 63, b = v & 31; return 0xff000000u | (r << 3 | r >> 2) << 16 | (g << 2 | g >> 4) << 8 | (b << 3 | b >> 2); }
inline unsigned argb4444(unsigned v) { unsigned a = (v >> 12) & 15, r = (v >> 8) & 15, g = (v >> 4) & 15, b = v & 15; return (a * 17) << 24 | (r * 17) << 16 | (g * 17) << 8 | (b * 17); }
inline unsigned px16(unsigned fmt, unsigned v) { return fmt == 1 ? rgb565(v) : fmt == 2 ? argb4444(v) : argb1555(v); }
inline unsigned clamp8(int v) { return v < 0 ? 0 : v > 255 ? 255 : v; }
unsigned yuv(int y, int u, int v)
{
  int r = y + ((v - 128) * 1436 >> 10), g = y - ((u - 128) * 352 >> 10) - ((v - 128) * 731 >> 10), b = y + ((u - 128) * 1815 >> 10);
  return 0xff000000u | clamp8(r) << 16 | clamp8(g) << 8 | clamp8(b);
}
unsigned palette(unsigned i)
{
  unsigned v = hw_peek32(0xa05f9000u + 4 * (i & 1023));
  switch (hw_peek32(0xa05f7404u) & 3) {
    case 0: return argb1555(v);
    case 1: return rgb565(v);
    case 2: return argb4444(v);
    default: return v;
  }
}
/* offsets of the largest mipmap level, indexed by log2(size): in texels for 16 bpp / palettes, in index bytes for VQ */
const unsigned MIP_TEXELS[11] = { 0x3, 0x4, 0x8, 0x18, 0x58, 0x158, 0x558, 0x1558, 0x5558, 0x15558, 0x55558 };
const unsigned MIP_VQ[11] = { 0x0, 0x1, 0x2, 0x6, 0x16, 0x56, 0x156, 0x556, 0x1556, 0x5556, 0x15556 };
inline unsigned log2u(unsigned v) { unsigned r = 0; while ((1u << r) < v) r++; return r; }

/* decode a PVR texture into ARGB8888 (w*h words) */
void decode(unsigned tcw, unsigned w, unsigned h, unsigned *out)
{
  unsigned addr = (tcw & 0x1fffff) << 3, fmt = (tcw >> 27) & 7;
  bool mip = tcw >> 31, vq = (tcw >> 30) & 1, linear = (tcw >> 26) & 1, stride = (tcw >> 25) & 1;
  if (linear) { mip = false; vq = false; }
  unsigned sw = w;
  if (linear && stride) { unsigned s = (hw_peek32(0xa05f80e4u) & 31) * 32; if (s) sw = s; }
  if (vq) {
    static unsigned short cb[1024];
    hw_read(0xa4000000u + addr, cb, 2048);
    unsigned ioff = addr + 2048 + (mip ? MIP_VQ[log2u(w)] : 0), n = (w / 2) * (h / 2);
    static unsigned char idx[512 * 512];
    if (n > sizeof idx) n = sizeof idx;
    hw_read(0xa4000000u + ioff, idx, n);
    for (unsigned y = 0; y < h; y++)
      for (unsigned x = 0; x < w; x++) {
        unsigned e = idx[twiddle(x / 2, y / 2, w / 2, h / 2) % n];
        unsigned t = (x & 1) * 2 + (y & 1);                       /* entry texels: (0,0) (0,1) (1,0) (1,1) */
        unsigned short v = cb[e * 4 + t]; v = (unsigned short)((v >> 8) | (v << 8));
        out[y * w + x] = fmt == 3 ? 0xff808080u : px16(fmt, v);
      }
    return;
  }
  if (fmt == 5 || fmt == 6) {                                     /* 4 / 8 bpp palettised */
    unsigned bank = fmt == 5 ? ((tcw >> 21) & 63) << 4 : ((tcw >> 25) & 3) << 8;
    unsigned off = addr + (mip ? MIP_TEXELS[log2u(w)] * (fmt == 5 ? 1 : 2) / 2 : 0);
    unsigned nb = fmt == 5 ? w * h / 2 : w * h;
    unsigned char *buf = (unsigned char *)malloc(nb);
    if (!buf) return;
    hw_read(0xa4000000u + off, buf, nb);
    for (unsigned y = 0; y < h; y++)
      for (unsigned x = 0; x < w; x++) {
        unsigned i = twiddle(x, y, w, h);
        unsigned p = fmt == 5 ? (buf[i / 2] >> ((i & 1) * 4)) & 15 : buf[i];
        out[y * w + x] = palette(bank + p);
      }
    free(buf);
    return;
  }
  unsigned off = addr + (mip ? MIP_TEXELS[log2u(w)] * 2 : 0);
  unsigned nb = (linear ? sw * h : w * h) * 2;
  unsigned short *buf = (unsigned short *)malloc(nb);
  if (!buf) return;
  hw_read(0xa4000000u + off, buf, nb);
  for (unsigned y = 0; y < h; y++)
    for (unsigned x = 0; x < w; x++) {
      unsigned i = linear ? y * sw + x : twiddle(x, y, w, h);
      unsigned short v = buf[i]; v = (unsigned short)((v >> 8) | (v << 8));
      if (fmt == 3) {                                             /* YUV422: a texel pair shares U and V */
        unsigned i0 = linear ? y * sw + (x & ~1u) : twiddle(x & ~1u, y, w, h), i1 = linear ? i0 + 1 : twiddle(x | 1, y, w, h);
        unsigned short a = buf[i0], b = buf[i1]; a = (unsigned short)((a >> 8) | (a << 8)); b = (unsigned short)((b >> 8) | (b << 8));
        out[y * w + x] = yuv((x & 1) ? b >> 8 : a >> 8, a & 0xff, b & 0xff);
      } else out[y * w + x] = px16(fmt, v);
    }
  free(buf);
}

/* ARGB8888 -> GX RGBA8 (4x4 tiles, AR plane then GB plane) */
void to_gx(const unsigned *src, unsigned w, unsigned h, unsigned char *dst)
{
  for (unsigned ty = 0; ty < h; ty += 4)
    for (unsigned tx = 0; tx < w; tx += 4) {
      for (unsigned y = 0; y < 4; y++)
        for (unsigned x = 0; x < 4; x++) {
          unsigned c = src[(ty + y) * w + tx + x], k = (y * 4 + x) * 2;
          dst[k] = c >> 24; dst[k + 1] = c >> 16; dst[32 + k] = c >> 8; dst[32 + k + 1] = c;
        }
      dst += 64;
    }
}

Tex *get_tex(unsigned tcw, unsigned tsp)
{
  unsigned w = 8u << ((tsp >> 3) & 7), h = 8u << (tsp & 7), key = tsp & 0x3f;
  tex_frame++;
  for (int i = 0; i < NTEX; i++)
    if (texs[i].data && texs[i].tcw == tcw && texs[i].tsp_size == key) {
      if (texs[i].epoch != vram_epoch) { texs[i].epoch = vram_epoch; goto refresh_i; }
      texs[i].used = tex_frame; return &texs[i];
      refresh_i:
      {
        unsigned *argb = (unsigned *)malloc(w * h * 4);
        if (argb) { decode(tcw, w, h, argb); to_gx(argb, w, h, (unsigned char *)texs[i].data); free(argb); DCFlushRange(texs[i].data, texs[i].bytes); GX_InvalidateTexAll(); }
        texs[i].used = tex_frame; return &texs[i];
      }
    }
  unsigned bytes = w * h * 4;
  int slot = -1;
  for (int i = 0; i < NTEX; i++) if (!texs[i].data) { slot = i; break; }
  while (slot < 0 || tex_bytes_total + bytes > TEX_BUDGET) {      /* evict the least recently used */
    int lru = -1;
    for (int i = 0; i < NTEX; i++) if (texs[i].data && (lru < 0 || texs[i].used < texs[lru].used)) lru = i;
    if (lru < 0) break;
    free(texs[lru].data); tex_bytes_total -= texs[lru].bytes; texs[lru].data = 0;
    if (slot < 0) slot = lru;
  }
  if (slot < 0) return 0;
  Tex &t = texs[slot];
  t.data = memalign(32, bytes);
  if (!t.data) return 0;
  unsigned *argb = (unsigned *)malloc(w * h * 4);
  if (!argb) { free(t.data); t.data = 0; return 0; }
  decode(tcw, w, h, argb);
  to_gx(argb, w, h, (unsigned char *)t.data);
  free(argb);
  DCFlushRange(t.data, bytes);
  t.tcw = tcw; t.tsp_size = key; t.epoch = vram_epoch; t.w = w; t.h = h; t.used = tex_frame; t.bytes = bytes;
  tex_bytes_total += bytes;
  GX_InvalidateTexAll();
  return &t;
}

/* ---- render state ---- */
const u8 BLEND[8] = { GX_BL_ZERO, GX_BL_ONE, GX_BL_DSTCLR, GX_BL_INVDSTCLR, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_BL_DSTALPHA, GX_BL_INVDSTALPHA };
const u8 BLEND_DST[8] = { GX_BL_ZERO, GX_BL_ONE, GX_BL_SRCCLR, GX_BL_INVSRCCLR, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_BL_DSTALPHA, GX_BL_INVDSTALPHA };
/* PVR depth compare is on 1/w (bigger = nearer); GX compares the depth written below (smaller = nearer) */
const u8 ZCMP[8] = { GX_NEVER, GX_GREATER, GX_EQUAL, GX_GEQUAL, GX_LESS, GX_NEQUAL, GX_LEQUAL, GX_ALWAYS };

struct Poly { unsigned pcw, isp, tsp, tcw; float face[4], foff[4]; };

/* PVR table fog: index from 1/w * FOG_DENSITY as a pseudo-float (4-bit mantissa, exponent 0..7), each table word holds the fog
   amount at the start (bits 15-8) and end (bits 7-0) of its step */
float fog_density; unsigned fog_tab[128];
void fog_load(void)
{
  unsigned d = hw_peek32(0xa05f80b8);
  fog_density = (float)((d >> 8) & 0xff) / 128.0f * ldexpf(1.0f, (signed char)(d & 0xff));
  for (int k = 0; k < 128; k++) fog_tab[k] = hw_peek32(0xa05f8200 + 4 * k) & 0xffff;
  unsigned c = hw_peek32(0xa05f80b0);
  GXColor fc = { (u8)(c >> 16), (u8)(c >> 8), (u8)c, 255 };
  GX_SetTevColor(GX_TEVREG0, fc);
}
inline unsigned fog_table(float invw)
{
  float z = invw * fog_density;
  if (!(z >= 1.0f)) z = 1.0f; else if (z > 255.999f) z = 255.999f;
  int e = 0; while (z >= (float)(2 << e)) e++;
  float m = z * 16.0f / (float)(1 << e) - 16.0f;
  int mi = (int)m; float fr = m - mi;
  unsigned w = fog_tab[(e * 16 + mi) & 127];
  return clamp8((int)(((w >> 8) & 0xff) * (1.0f - fr) + (w & 0xff) * fr));
}

void set_state(const Poly &p, int list)
{
  bool tex = (p.pcw >> 3) & 1;
  unsigned isp = p.isp, tsp = p.tsp;
  bool zw = !((isp >> 26) & 1);
  GX_SetZMode(GX_TRUE, ZCMP[(isp >> 29) & 7], zw ? GX_TRUE : GX_FALSE);
  if (list == 0 || list == 4) GX_SetBlendMode(GX_BM_NONE, GX_BL_ONE, GX_BL_ZERO, GX_LO_CLEAR);
  else GX_SetBlendMode(GX_BM_BLEND, BLEND[(tsp >> 29) & 7], BLEND_DST[(tsp >> 26) & 7], GX_LO_CLEAR);
  if (list == 4) GX_SetAlphaCompare(GX_GEQUAL, (u8)(hw_peek32(0xa05f811cu) & 0xff), GX_AOP_AND, GX_ALWAYS, 0);
  else GX_SetAlphaCompare(GX_ALWAYS, 0, GX_AOP_AND, GX_ALWAYS, 0);
  Tex *t = tex ? get_tex(p.tcw, tsp) : 0;
  if (t) {
    u8 ws = (tsp >> 16) & 1 ? GX_CLAMP : (tsp >> 18) & 1 ? GX_MIRROR : GX_REPEAT;
    u8 wt = (tsp >> 15) & 1 ? GX_CLAMP : (tsp >> 17) & 1 ? GX_MIRROR : GX_REPEAT;
    GX_InitTexObj(&t->obj, t->data, t->w, t->h, GX_TF_RGBA8, ws, wt, GX_FALSE);
    bool point = ((tsp >> 13) & 3) == 0;
    GX_InitTexObjLOD(&t->obj, point ? GX_NEAR : GX_LINEAR, point ? GX_NEAR : GX_LINEAR, 0, 0, 0, GX_FALSE, GX_FALSE, GX_ANISO_1);
    GX_LoadTexObj(&t->obj, GX_TEXMAP0);
    GX_SetNumTexGens(1);
    GX_SetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
    switch ((tsp >> 6) & 3) {
      case 0: GX_SetTevOp(GX_TEVSTAGE0, GX_REPLACE); break;       /* decal */
      case 1:                                                       /* modulate: colour = tex * vertex, alpha = tex */
        GX_SetTevOp(GX_TEVSTAGE0, GX_MODULATE);
        GX_SetTevAlphaIn(GX_TEVSTAGE0, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO, GX_CA_TEXA);
        break;
      case 2: GX_SetTevOp(GX_TEVSTAGE0, GX_DECAL); break;         /* decal alpha */
      default: GX_SetTevOp(GX_TEVSTAGE0, GX_MODULATE); break;     /* modulate alpha */
    }
    if ((p.pcw >> 2) & 1) {                                         /* offset colour: added to the shaded texel, alpha untouched */
      GX_SetNumTevStages(2);
      GX_SetTevOrder(GX_TEVSTAGE1, GX_TEXCOORDNULL, GX_TEXMAP_NULL, GX_COLOR1A1);
      GX_SetTevColorIn(GX_TEVSTAGE1, GX_CC_RASC, GX_CC_ZERO, GX_CC_ZERO, GX_CC_CPREV);
      GX_SetTevAlphaIn(GX_TEVSTAGE1, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO, GX_CA_APREV);
      GX_SetTevColorOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
      GX_SetTevAlphaOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
    } else GX_SetNumTevStages(1);
  } else {
    GX_SetNumTevStages(1);
    GX_SetNumTexGens(0);
    GX_SetTevOrder(GX_TEVSTAGE0, GX_TEXCOORDNULL, GX_TEXMAP_NULL, GX_COLOR0A0);
    GX_SetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
  }
  if (((tsp >> 22) & 3) <= 1) {                                     /* fog: colour = mix(colour, fog colour, factor), alpha untouched */
    u8 st = (t && ((p.pcw >> 2) & 1)) ? GX_TEVSTAGE2 : GX_TEVSTAGE1;
    GX_SetNumTevStages(st + 1);
    GX_SetTevOrder(st, GX_TEXCOORDNULL, GX_TEXMAP_NULL, GX_COLOR1A1);
    GX_SetTevColorIn(st, GX_CC_CPREV, GX_CC_C0, GX_CC_RASA, GX_CC_ZERO);
    GX_SetTevAlphaIn(st, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO, GX_CA_APREV);
    GX_SetTevColorOp(st, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
    GX_SetTevAlphaOp(st, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
  }
}

struct V { float x, y, z, u, v; unsigned c, o; };
unsigned fog_mode;                                                  /* TSP fog bits of the current polygon */
inline void emit(const V &v)
{
  GX_Position3f32(v.x, v.y, -1.0f / (1.0f + (v.z > 0 ? v.z : 0)));
  GX_Color1u32((v.c << 8) | (v.c >> 24));                         /* ARGB -> RGBA */
  unsigned f = fog_mode == 0 ? fog_table(v.z) : fog_mode == 1 ? v.o >> 24 : 0;
  GX_Color1u32((v.o << 8) | f);                                    /* offset colour RGB, fog factor in alpha */
  GX_TexCoord2f32(v.u, v.v);
}
inline unsigned fcol(float a, float r, float g, float b)
{
  return clamp8((int)(a * 255)) << 24 | clamp8((int)(r * 255)) << 16 | clamp8((int)(g * 255)) << 8 | clamp8((int)(b * 255));
}
inline float u16f(unsigned v) { return w2f(v << 16); }

/* translucent list with auto-sort (ISP_FEED_CFG bit 0 clear): the PVR sorts per pixel; here strips and sprites are queued and drawn
   far to near by their mean 1/w, without depth writes */
struct Prim { Poly p; unsigned fog; bool quad; int n, first; float key; };
const int MAXPRIM = 8192, MAXPV = 65536;
Prim prims[MAXPRIM]; V pverts[MAXPV]; int nprim, npv; bool sorting;
void out_prim(const Poly &p, int list, bool quad, const V *v, int n)
{
  if (sorting) {
    if (nprim >= MAXPRIM || npv + n > MAXPV) return;
    Prim &q = prims[nprim++]; q.p = p; q.fog = fog_mode; q.quad = quad; q.n = n; q.first = npv;
    float z = 0; for (int k = 0; k < n; k++) { pverts[npv++] = v[k]; z += v[k].z; } q.key = z / n;
    return;
  }
  GX_Begin(quad ? GX_QUADS : GX_TRIANGLESTRIP, GX_VTXFMT0, n);
  for (int k = 0; k < n; k++) emit(v[k]);
  GX_End();
}
void flush_sorted(void)
{
  static int order[MAXPRIM];
  for (int k = 0; k < nprim; k++) order[k] = k;
  /* insertion sort: farthest (smallest 1/w) first, submission order kept for ties */
  for (int k = 1; k < nprim; k++) { int o = order[k], j = k; while (j > 0 && prims[order[j - 1]].key > prims[o].key) { order[j] = order[j - 1]; j--; } order[j] = o; }
  for (int k = 0; k < nprim; k++) {
    Prim &q = prims[order[k]];
    fog_mode = q.fog; set_state(q.p, 2);
    GX_SetZMode(GX_TRUE, ZCMP[(q.p.isp >> 29) & 7], GX_FALSE);
    GX_Begin(q.quad ? GX_QUADS : GX_TRIANGLESTRIP, GX_VTXFMT0, q.n);
    for (int i = 0; i < q.n; i++) emit(pverts[q.first + i]);
    GX_End();
  }
  nprim = npv = 0;
}

/* draw the parameters of one list type from the frame's stream */
void draw_list(const unsigned *ta, unsigned n, int want)
{
  int list = -1;
  Poly p = {};
  bool sprite = false, have = false;
  unsigned base = 0xffffffffu, soff = 0;
  V strip[256]; int ns = 0;
  for (unsigned i = 0; i + 8 <= n; ) {
    unsigned pcw = ta[i], type = pcw >> 29;
    if (type == 0) { list = -1; i += 8; continue; }                 /* end of list */
    if (type == 1 || type == 2) { i += 8; continue; }               /* user clip, object list set */
    if (type == 4 || type == 5) {                                   /* polygon / sprite global parameter */
      if (list < 0) list = (pcw >> 24) & 7;
      p.pcw = pcw; p.isp = ta[i + 1]; p.tsp = ta[i + 2]; p.tcw = ta[i + 3];
      sprite = type == 5; ns = 0;
      bool big = ((pcw >> 4) & 3) == 2 && ((pcw >> 2) & 1);          /* intensity with offset colour */
      if (!sprite && ((pcw >> 4) & 3) == 2) { p.face[0] = w2f(ta[i + (big ? 8 : 4)]); p.face[1] = w2f(ta[i + (big ? 9 : 5)]); p.face[2] = w2f(ta[i + (big ? 10 : 6)]); p.face[3] = w2f(ta[i + (big ? 11 : 7)]); }
      if (!sprite && ((pcw >> 4) & 3) == 2) for (int k = 0; k < 4; k++) p.foff[k] = big ? w2f(ta[i + 12 + k]) : 0;
      if (sprite) { base = ta[i + 4]; soff = (pcw >> 3) & (pcw >> 2) & 1 ? ta[i + 5] : 0; }
      have = list == want;
      fog_mode = (p.tsp >> 22) & 3;
      if (have && !sorting) set_state(p, list);
      i += big || ((pcw >> 6) & 1) ? 16 : 8;
      continue;
    }
    if (type != 7) { i += 8; continue; }
    unsigned col = (p.pcw >> 4) & 3; bool tex = (p.pcw >> 3) & 1, uv16 = p.pcw & 1;
    if (sprite) {                                                   /* four corners in 64 bytes; D's z from the plane */
      if (have) {
        const unsigned *s = ta + i;
        V v[4];
        for (int k = 0; k < 3; k++) { v[k].x = w2f(s[1 + 3 * k]); v[k].y = w2f(s[2 + 3 * k]); v[k].z = w2f(s[3 + 3 * k]); }
        v[3].x = w2f(s[10]); v[3].y = w2f(s[11]); v[3].z = v[2].z;
        v[0].u = u16f(s[13] >> 16); v[0].v = u16f(s[13] & 0xffff);
        v[1].u = u16f(s[14] >> 16); v[1].v = u16f(s[14] & 0xffff);
        v[2].u = u16f(s[15] >> 16); v[2].v = u16f(s[15] & 0xffff);
        v[3].u = v[0].u + v[2].u - v[1].u; v[3].v = v[0].v + v[2].v - v[1].v;
        for (int k = 0; k < 4; k++) { v[k].c = base; v[k].o = soff; }
        out_prim(p, list, true, v, 4);
      }
      i += 16; continue;
    }
    bool wide = (tex && col == 1) || ((p.pcw >> 6) & 1);
    if (have && ns < 256) {
      const unsigned *s = ta + i;
      V &v = strip[ns++];
      v.x = w2f(s[1]); v.y = w2f(s[2]); v.z = w2f(s[3]); v.u = v.v = 0; v.o = 0;
      bool off = tex && ((p.pcw >> 2) & 1);
      if (!tex) {
        if (col == 0) v.c = s[6];
        else if (col == 1) v.c = fcol(w2f(s[4]), w2f(s[5]), w2f(s[6]), w2f(s[7]));
        else { float k = w2f(s[6]); v.c = fcol(p.face[0], p.face[1] * k, p.face[2] * k, p.face[3] * k); }
      } else {
        if (uv16) { v.u = u16f(s[4] >> 16); v.v = u16f(s[4] & 0xffff); } else { v.u = w2f(s[4]); v.v = w2f(s[5]); }
        if (col == 0) { v.c = s[6]; if (off) v.o = s[7]; }
        else if (col == 1) { v.c = fcol(w2f(s[8]), w2f(s[9]), w2f(s[10]), w2f(s[11])); if (off) v.o = fcol(w2f(s[12]), w2f(s[13]), w2f(s[14]), w2f(s[15])); }
        else { float k = w2f(s[6]); v.c = fcol(p.face[0], p.face[1] * k, p.face[2] * k, p.face[3] * k); if (off) { float ko = w2f(s[7]); v.o = fcol(p.foff[0], p.foff[1] * ko, p.foff[2] * ko, p.foff[3] * ko); } }
      }
    }
    if ((pcw >> 28) & 1) {                                          /* end of strip */
      if (have && ns >= 3) {
        if (!((p.tsp >> 20) & 1)) for (int k = 0; k < ns; k++) strip[k].c |= 0xff000000u;   /* "use alpha" off: opaque vertex colour */
        out_prim(p, list, false, strip, ns);
      }
      ns = 0;
    }
    i += wide ? 16 : 8;
  }
}
}

extern "C" void gx_init(void)
{
  VIDEO_Init();
  rmode = VIDEO_GetPreferredMode(NULL);
  xfb[0] = MEM_K0_TO_K1(SYS_AllocateFramebuffer(rmode));
  xfb[1] = MEM_K0_TO_K1(SYS_AllocateFramebuffer(rmode));
  VIDEO_Configure(rmode);
  VIDEO_SetNextFramebuffer(xfb[0]);
  VIDEO_SetBlack(FALSE);
  VIDEO_Flush();
  VIDEO_WaitVSync();
  if (rmode->viTVMode & VI_NON_INTERLACE) VIDEO_WaitVSync();
  gx_fifo = memalign(32, FIFO_SIZE);
  memset(gx_fifo, 0, FIFO_SIZE);
  GX_Init(gx_fifo, FIFO_SIZE);
  GXColor black = { 0, 0, 0, 255 };
  GX_SetCopyClear(black, GX_MAX_Z24);
  GX_SetViewport(0, 0, rmode->fbWidth, rmode->efbHeight, 0, 1);
  f32 ys = GX_GetYScaleFactor(rmode->efbHeight, rmode->xfbHeight);
  u32 xh = GX_SetDispCopyYScale(ys);
  GX_SetScissor(0, 0, rmode->fbWidth, rmode->efbHeight);
  GX_SetDispCopySrc(0, 0, rmode->fbWidth, rmode->efbHeight);
  GX_SetDispCopyDst(rmode->fbWidth, xh);
  GX_SetCopyFilter(rmode->aa, rmode->sample_pattern, GX_TRUE, rmode->vfilter);
  GX_SetFieldMode(rmode->field_rendering, ((rmode->viHeight == 2 * rmode->xfbHeight) ? GX_ENABLE : GX_DISABLE));
  GX_SetPixelFmt(GX_PF_RGB8_Z24, GX_ZC_LINEAR);
  GX_SetCullMode(GX_CULL_NONE);
  GX_CopyDisp(xfb[0], GX_TRUE);
  GX_SetDispCopyGamma(GX_GM_1_0);
  GX_ClearVtxDesc();
  GX_SetVtxDesc(GX_VA_POS, GX_DIRECT);
  GX_SetVtxDesc(GX_VA_CLR0, GX_DIRECT);
  GX_SetVtxDesc(GX_VA_CLR1, GX_DIRECT);
  GX_SetVtxDesc(GX_VA_TEX0, GX_DIRECT);
  GX_SetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
  GX_SetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);
  GX_SetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR1, GX_CLR_RGBA, GX_RGBA8, 0);
  GX_SetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_TEX_ST, GX_F32, 0);
  GX_SetNumChans(2);
  GX_SetChanCtrl(GX_COLOR0A0, GX_DISABLE, GX_SRC_REG, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);
  GX_SetChanCtrl(GX_COLOR1A1, GX_DISABLE, GX_SRC_REG, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);
  GX_SetTexCoordGen(GX_TEXCOORD0, GX_TG_MTX2x4, GX_TG_TEX0, GX_IDENTITY);
  GX_SetNumTevStages(1);
  Mtx44 proj; guOrtho(proj, 0, 480, 0, 640, 0, 1);
  GX_LoadProjectionMtx(proj, GX_ORTHOGRAPHIC);
  Mtx mv; guMtxIdentity(mv);
  GX_LoadPosMtxImm(mv, GX_PNMTX0);
  GX_SetCurrentMtx(GX_PNMTX0);
  ready = true;
}

/* draw one frame's TA stream and show it */
extern "C" void gx_frame(const unsigned *ta, unsigned bytes)
{
  if (!ready) return;
  GX_InvVtxCache();
  fog_load();
  GX_SetZMode(GX_TRUE, GX_LEQUAL, GX_TRUE);
  unsigned n = bytes / 4;
  draw_list(ta, n, 0);                                              /* opaque */
  draw_list(ta, n, 4);                                              /* punch-through */
  sorting = !(hw_peek32(0xa05f8098) & 1);
  draw_list(ta, n, 2);                                              /* translucent */
  if (sorting) flush_sorted();
  sorting = false;
  GX_DrawDone();
  cur_fb ^= 1;
  GX_SetZMode(GX_TRUE, GX_LEQUAL, GX_TRUE);
  GX_SetColorUpdate(GX_TRUE);
  GX_CopyDisp(xfb[cur_fb], GX_TRUE);
  GX_Flush();
  VIDEO_SetNextFramebuffer(xfb[cur_fb]);
  VIDEO_Flush();
}
