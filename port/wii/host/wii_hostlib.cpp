/* Guest library routines the decompiler left as raw calls, plus host stand-ins for peripherals (port of exec/hostlib.c). */
#include "host.h"
#include <time.h>
extern "C" {
static unsigned char *P(unsigned long a) { return (unsigned char *)(unsigned)a; }
/* 8c1f093c: r4 = a, r5 = b, r6 = n; 1 when the first n bytes are equal */
unsigned long func_0x8c1f093c(unsigned long a, unsigned long b, unsigned long n, unsigned long d)
{
  unsigned char *x = P(a), *y = P(b); int c = (int)n;
  while (c > 0) { if (*y++ != *x++) return 0; c--; }
  return 1;
}
/* 8c1f0974: r4 = source, r5 = destination, r6 = byte count */
unsigned long func_0x8c1f0974(unsigned long a, unsigned long b, unsigned long n, unsigned long d)
{
  unsigned char *s = P(a), *t = P(b); int c = (int)n;
  while (c > 0) { *t++ = *s++; c--; }
  return 0;
}
/* 8c1f2ac0: r4 = a, r5 = b; 1 when the strings are equal */
unsigned long func_0x8c1f2ac0(unsigned long a, unsigned long b, unsigned long c, unsigned long d)
{
  unsigned char *x = P(a), *y = P(b);
  while (*x) { if (*y++ != *x++) return 0; }
  return *y == 0;
}
/* 8c0109e8: strcmp */
unsigned long host_strcmp(unsigned long a, unsigned long b, unsigned long c, unsigned long d)
{
  const unsigned char *x = P(a), *y = P(b);
  while (*x && *x == *y) { x++; y++; }
  return (unsigned long)(long)(int)((signed char)*x - (signed char)*y);
}
/* 8c0101bc: call through a pointer-to-member record {this delta, vtable byte offset or -1, function or vptr offset} */
unsigned long pmf_last[5];
unsigned long host_pmf_call(unsigned long rec, unsigned long self, unsigned long a, unsigned long b, unsigned long c)
{
  le<unsigned> *r = (le<unsigned> *)P(rec);
  unsigned fn = r[2], th = (unsigned)self + (unsigned)r[0];
  pmf_last[0] = rec; pmf_last[1] = self; pmf_last[2] = r[0]; pmf_last[3] = r[1]; pmf_last[4] = r[2];
  /* the index field is a signed byte (0xff = -1 = not virtual), the word may carry only that byte */
  int idx = (signed char)((unsigned)r[1] & 0xff);
  if (idx >= 0) { unsigned vt = GM(unsigned, th + fn); fn = GM(unsigned, vt + (unsigned)idx); }
  return ((unsigned long (*)(unsigned long, unsigned long, unsigned long, unsigned long))xlat(fn))(th, a, b, c);
}
/* 8c013ff8: memset(r4 = dest, r5 = value, r6 = count) */
unsigned long host_memset(unsigned long d, unsigned long v, unsigned long n, unsigned long x)
{
  memset(P(d), (int)(v & 0xff), (unsigned)n);
  return d;
}
/* 8c010794 / 8c0107a0 (libgcc block copy): r0 = byte count, r1 = destination, r2 = source */
unsigned long host_movstr(unsigned long n, unsigned long dst, unsigned long src, unsigned long x)
{
  memmove(P(dst), P(src), (unsigned)n);
  return 0;
}
/* peripheral probes answered as "present" (microphone + speech model): no audio input yet */
unsigned long host_ret1(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { return 1; }
/* 8c1f8544: battery-backed RTC (seconds since 1950-01-01) into *r4; returns 0 on success */
unsigned long host_rtc_read(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { GM(unsigned, a) = (unsigned)time(0) + 631152000u; return 0; }
/* debug hooks the patches call */
void dbg_log(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { host_log("[dbg] h=%lx hstate=%lu stm=%lx sstate=%lu\n", a, b, c, d); }
void dbg_dump(unsigned long a, int n) { host_log("[dump %lx]", a); for (int i = 0; i < n; i++) host_log(" %x", (unsigned)GM(unsigned, a + 4 * i)); host_log("\n"); }
void dbg_str(const char *a, const char *b, long x, long y)
{
  unsigned long p = (unsigned long)a, q = (unsigned long)b;
  host_log("[str] '%.40s' '%.40s' %ld %ld\n", p > 0x100000 ? a : "?", q > 0x100000 ? b : "?", x, y);
}
void dbg_ring(int n) { host_log("[ring]"); for (int i = n; i > 0; i--) host_log(" %s", ring[(rp - i) & 255] ? ring[(rp - i) & 255] : "-"); host_log("\n"); }
/* 8c014334: sprintf(r4 = buffer, format, ...): the SH-4 caller pushes the format and then every argument as 32-bit words
   (doubles as two words, low word first), so the format is at sp[0] and the va_list starts at sp+4. Returns the length. */
unsigned long host_sprintf(unsigned long buf, unsigned long b, unsigned long c, unsigned long d)
{
  char *out = (char *)P(buf);
  const char *f = (const char *)P(GM(unsigned, vsp));
  unsigned ap = (unsigned)vsp + 4;
  int n = 0;
  if (!out) return 0;
  while (*f) {
    if (*f != '%') { out[n++] = *f++; continue; }
    char spec[24]; int k = 0;
    spec[k++] = *f++;
    while (*f && strchr("-+ #0", *f) && k < 20) spec[k++] = *f++;
    if (*f == '*') { k += snprintf(spec + k, sizeof spec - k, "%d", (int)GM(unsigned, ap)); ap += 4; f++; }
    while (*f >= '0' && *f <= '9' && k < 20) spec[k++] = *f++;
    if (*f == '.') { spec[k++] = *f++; if (*f == '*') { k += snprintf(spec + k, sizeof spec - k, "%d", (int)GM(unsigned, ap)); ap += 4; f++; } while (*f >= '0' && *f <= '9' && k < 20) spec[k++] = *f++; }
    while (*f == 'l' || *f == 'h' || *f == 'L') f++;   /* int and long are both 32 bits on the SH-4 */
    char cv = *f ? *f++ : 0;
    char tmp[256]; tmp[0] = 0;
    switch (cv) {
    case 'd': case 'i': case 'u': case 'x': case 'X': case 'o': case 'c':
      spec[k++] = cv; spec[k] = 0; snprintf(tmp, sizeof tmp, spec, (int)GM(unsigned, ap)); ap += 4; break;
    case 'p':
      spec[k++] = 'x'; spec[k] = 0; snprintf(tmp, sizeof tmp, spec, (unsigned)GM(unsigned, ap)); ap += 4; break;
    case 's': {
      unsigned s = GM(unsigned, ap); ap += 4;
      spec[k++] = 's'; spec[k] = 0; snprintf(tmp, sizeof tmp, spec, (s >= 0x8c000000u && s < 0x8d000000u) ? (const char *)P(s) : "(null)"); break; }
    case 'f': case 'F': case 'e': case 'E': case 'g': case 'G': {
      union { unsigned long long u; double v; } x;
      x.u = (unsigned long long)(unsigned)GM(unsigned, ap) | ((unsigned long long)(unsigned)GM(unsigned, ap + 4) << 32); ap += 8;
      spec[k++] = cv; spec[k] = 0; snprintf(tmp, sizeof tmp, spec, x.v); break; }
    case '%': tmp[0] = '%'; tmp[1] = 0; break;
    default: break;
    }
    for (const char *t = tmp; *t; t++) out[n++] = *t;
  }
  out[n] = 0;
  return n;
}
/* library debug printf: r4 = format string */
unsigned long mw_debug_printf(unsigned long fmt, unsigned long a, unsigned long b, unsigned long c)
{
  if (fmt >= 0x8c000000UL && fmt < 0x8d000000UL) host_log("[mwlog] %.80s  (%lx %lx %lx)\n", (const char *)P(fmt), a, b, c);
  return 0;
}
}
