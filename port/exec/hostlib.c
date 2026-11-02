/* Guest library routines that Ghidra left as raw calls (no function entry): memory compare, byte copy, string equality. Same register conventions as the SH-4 code. */
static unsigned char *P(unsigned long a) { return (unsigned char *)((a >> 32) == 0xffffffffUL ? (a & 0xffffffffUL) : a); }
/* 8c1f093c: r4 = a, r5 = b, r6 = n; 1 when the first n bytes are equal, else 0 */
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
/* 8c1f2ac0: r4 = a, r5 = b; 1 when the strings are equal, else 0 */
unsigned long func_0x8c1f2ac0(unsigned long a, unsigned long b, unsigned long c, unsigned long d)
{
  unsigned char *x = P(a), *y = P(b);
  while (*x) { if (*y++ != *x++) return 0; }
  return *y == 0;
}
/* 8c0109e8: strcmp (r4, r5); the guest version compares a word at a time with cmp/str, which the decompile renders unreliably */
unsigned long host_strcmp(unsigned long a, unsigned long b, unsigned long c, unsigned long d)
{
  const unsigned char *x = P(a), *y = P(b);
  while (*x && *x == *y) { x++; y++; }
  return (unsigned long)(long)(int)((signed char)*x - (signed char)*y);
}
/* 8c0101bc: call through a pointer-to-member record {this delta, vtable byte offset or -1, function or vptr offset}; r0 = record, r4 = this, then the arguments */
#include <stdio.h>
unsigned long xlat(unsigned long);
unsigned long pmf_last[5];
unsigned long host_pmf_call(unsigned long rec, unsigned long self, unsigned long a, unsigned long b, unsigned long c)
{
  unsigned *r = (unsigned *)P(rec);
  if ((unsigned)rec < 0x8c000000u || (unsigned)rec >= 0x8d000000u) { unsigned *o = (unsigned *)P(self); fprintf(stderr, "pmf_call: bad record %lx self=%lx obj[0..8]=%x %x %x %x\n", rec, self, o[0], o[1], o[2], o[3]); }
  unsigned fn = r[2], th = (unsigned)self + r[0];
  pmf_last[0] = rec; pmf_last[1] = self; pmf_last[2] = r[0]; pmf_last[3] = r[1]; pmf_last[4] = r[2];
  if ((int)r[1] >= 0) { unsigned vt = *(unsigned *)(unsigned long)(th + fn); fn = *(unsigned *)(unsigned long)(vt + r[1]); }
  return ((unsigned long (*)(unsigned long, unsigned long, unsigned long, unsigned long))xlat(fn))(th, a, b, c);
}
/* 8c013ff8: memset(r4 = dest, r5 = value, r6 = count); logs a clear of the 8c4aabdc cell */
#include <stdio.h>
#include <string.h>
extern const char *ring[256]; extern unsigned rp;
unsigned long host_memset(unsigned long d, unsigned long v, unsigned long n, unsigned long x)
{
  unsigned char *p = P(d); unsigned c = (unsigned)n;
  if ((unsigned long)p <= 0x8c4aabdcUL && (unsigned long)p + c > 0x8c4aabdcUL) {
    fprintf(stderr, "memset covers 8c4aabdc: dst=%lx val=%lx n=%x calls:", (unsigned long)p, v & 0xff, c);
    for (int i = 10; i > 0; i--) fprintf(stderr, " %s", ring[(rp - i) & 255] ? ring[(rp - i) & 255] : "-");
    fprintf(stderr, "\n");
  }
  for (unsigned i = 0; i < c; i++) p[i] = (unsigned char)v;
  return d;
}
/* 8c010794 / 8c0107a0 (libgcc block copy): r0 = byte count (multiple of 4), r1 = destination, r2 = source; the decompile gives them (n, dst, src) */
unsigned long host_movstr(unsigned long n, unsigned long dst, unsigned long src, unsigned long x)
{
  unsigned char *d = P(dst), *s = P(src); unsigned c = (unsigned)n;
  for (unsigned i = 0; i < c; i++) d[i] = s[i];
  return 0;
}
/* peripheral probes answered as "present": 8c01a3b4 (VM user icon / memory card check) and 8c01cb54 (microphone + speech model load); there is no Maple bus or audio input on the host */
unsigned long host_ret1(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { return 1; }
/* 8c01b9e4: free bytes on the memory card (blocks << 9); report plenty since no VMU is emulated */
unsigned long host_vmu_free(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { return 0x30000; }
/* 8c1f8544: read the battery-backed RTC (seconds since 1950-01-01) into *r4; returns 0 on success */
#include <time.h>
unsigned long host_rtc_read(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { *(unsigned *)P(a) = (unsigned)time(0) + 631152000u; return 0; }
/* the fake VMU holds the game's own save files (SM2000US.USR and SM2000US._VM) and none of the other game's (SEAMANDC.*): stat reports presence by exact name */
unsigned long host_vmu_stat(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { const char *n = (const char *)b; return n && !strcmp(n, "SM2000US.USR") ? 1 : 0; }
unsigned long host_vmu_stat_vm(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { const char *n = (const char *)b; return n && !strcmp(n, "SM2000US._VM") ? 1 : 0; }
