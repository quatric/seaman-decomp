#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* GD-ROM BIOS layer (vector 0x8c0000bc, r6 = 0, r7 = function). Sectors come from port/disc.head (ISO9660 metadata made by mkisofs from disc/)
   and port/disc.map (tools/make_discmap.py: first sector, sector count, host path per file). The guest wrappers at 8c1f10d8.. are replaced
   by the gd_* functions below; their arguments are the guest r4/r5. */
#define ISO_BASE 45150u
static FILE *head;
static unsigned long iso_sectors = 488371;
static int nreq, last_xfer, chk_reads, pending_read;
struct ext { unsigned start, n; char path[512]; };
static struct ext *map; static int nmap;
static void open_iso(void)
{
  if (head) return;
  head = fopen("disc.head", "rb");
  FILE *m = fopen("disc.map", "r");
  if (!head || !m) { fprintf(stderr, "[gd] disc.head/disc.map missing\n"); exit(3); }
  map = malloc(sizeof(struct ext) * 4096);
  while (nmap < 4096 && fscanf(m, "%u %u %511[^\n]\n", &map[nmap].start, &map[nmap].n, map[nmap].path) == 3) nmap++;
  fclose(m);
}
static void read_sector(unsigned s, unsigned char *dst)
{
  int lo = 0, hi = nmap - 1;
  while (lo <= hi) {
    int mid = (lo + hi) / 2;
    if (s < map[mid].start) hi = mid - 1; else if (s >= map[mid].start + map[mid].n) lo = mid + 1;
    else {
      FILE *f = fopen(map[mid].path, "rb");
      memset(dst, 0, 2048);
      if (f) { fseek(f, (long)(s - map[mid].start) * 2048, SEEK_SET); fread(dst, 1, 2048, f); fclose(f); }
      return;
    }
  }
  memset(dst, 0, 2048);
  if (s < 8192) { fseek(head, (long)s * 2048, SEEK_SET); fread(dst, 1, 2048, head); }
}
static void read_sectors(unsigned lba, unsigned n, unsigned char *dst)
{
  open_iso();
  for (unsigned i = 0; i < n; i++) {
    unsigned s = lba + i;
    if (s < ISO_BASE || s - ISO_BASE >= iso_sectors) { memset(dst + i * 2048, 0, 2048); continue; }
    read_sector(s - ISO_BASE, dst + i * 2048);
  }
}
extern const char *ring[256]; extern unsigned rp;
static void dump_ring(int n) { for (int i = n; i > 0; i--) fprintf(stderr, "   %s\n", ring[(rp - i) & 255]); }
static int logn;
#define LOG(...) do { if (logn++ < 300) fprintf(stderr, __VA_ARGS__); } while (0)
unsigned long gd_req_cmd(unsigned long cmd, unsigned long param, unsigned long c, unsigned long d)
{
  unsigned *p = (unsigned *)(unsigned long)(unsigned)param;
  open_iso();
  LOG("[gd] cmd %lu param %lx", cmd, param);
  if (p) LOG(" [%x %x %x %x]", p[0], p[1], p[2], p[3]);
  LOG("\n");
  if (cmd == 24 && nreq >= 6 && nreq < 8) dump_ring(60);
  last_xfer = 0;
  if ((cmd == 16 || cmd == 17) && p) {
    read_sectors(p[0], p[1], (unsigned char *)(unsigned long)((p[2] & 0x1fffffff) | 0x8c000000));
    last_xfer = p[1] * 2048; pending_read = 1; chk_reads = 0;
    { unsigned char *q = (unsigned char *)(unsigned long)((p[2] & 0x1fffffff) | 0x8c000000); LOG("[gd] read -> %02x %02x %02x %02x %02x %02x\n", q[0], q[1], q[2], q[3], q[4], q[5]); }
  } else if ((cmd == 18 || cmd == 19) && p) {
    unsigned *toc = (unsigned *)(unsigned long)(unsigned)(cmd == 18 ? p[0] : p[1]);
    memset(toc, 0, 102 * 4);
    toc[2] = (4u << 28) | (1u << 24) | ISO_BASE;
    toc[99] = 0x41030000; toc[100] = 0x41030000; toc[101] = 0x41000000 | (ISO_BASE + (unsigned)iso_sectors);
  }
  return ++nreq;
}
unsigned long gd_check_cmd(unsigned long id, unsigned long res, unsigned long c, unsigned long d)
{
  LOG("[gd] check %lx\n", id);
  unsigned *r = (unsigned *)(unsigned long)(unsigned)res;
  if (r) { r[0] = 0; r[1] = 0; r[2] = last_xfer; r[3] = 0; }
  if (pending_read) { chk_reads++; if (chk_reads == 1) return 1; if (chk_reads == 2) return 3; pending_read = 0; }
  return 2;
}
unsigned long gd_exec_server(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { LOG("[gd] exec\n"); return 0; }
unsigned long gd_init(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { open_iso(); return 0; }
unsigned long gd_drive_status(unsigned long a, unsigned long b, unsigned long c, unsigned long d)
{
  unsigned *p = (unsigned *)(unsigned long)(unsigned)a;
  LOG("[gd] drive status\n");
  if (p) { p[0] = 2; p[1] = 0x80; }
  return 0;
}
unsigned long gd_dma_req(unsigned long id, unsigned long out, unsigned long c, unsigned long d)
{
  unsigned *o = (unsigned *)(unsigned long)(unsigned)out;
  LOG("[gd] dma_req id=%lx\n", id);
  if (o) { o[0] = last_xfer; o[1] = 0; }
  return 0;
}
unsigned long gd_dma_check(unsigned long id, unsigned long out, unsigned long c, unsigned long d)
{
  unsigned *o = (unsigned *)(unsigned long)(unsigned)out;
  LOG("[gd] dma_check id=%lx\n", id);
  if (o) { o[0] = 0; o[1] = 0; }
  return 0;
}
unsigned long gd_other(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { LOG("[gd] other r4=%lx r5=%lx\n", a, b); return 0; }
unsigned long bios_call(unsigned long a, unsigned long b, unsigned long c, unsigned long d)
{
  LOG("[bios] r4=%lx r5=%lx r6=%lx r7=%lx\n", a, b, c, d);
  return 0;
}
void dbg_log(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { fprintf(stderr, "[dbg] h=%lx hstate=%lu stm=%lx sstate=%lu\n", a, b, c, d); }
void dbg_dump(unsigned long a, int n) { unsigned *p = (unsigned *)(unsigned long)(unsigned)a; fprintf(stderr, "[dump %lx]", a); for (int i = 0; i < n; i++) fprintf(stderr, " %x", p[i]); fprintf(stderr, "\n"); }
/* library debug printf: r4 = format string (guest or host address), r5-r7 = the first arguments; prints the format and raw values */
void dbg_bt(void);
unsigned long mw_debug_printf(unsigned long fmt, unsigned long a, unsigned long b, unsigned long c)
{
  const char *f = (const char *)((fmt >> 32) == 0xffffffffUL ? (fmt & 0xffffffffUL) : fmt);
  unsigned long q = (unsigned long)f;
  if (q > 0x100000 && (q >= 0x8c000000UL && q < 0x8d000000UL)) fprintf(stderr, "[mwlog] %.80s  (%lx %lx %lx)\n", f, a, b, c);
  else { static int n; if (n++ < 3) { fprintf(stderr, "[mwlog] <%lx> (%lx %lx %lx)\n", fmt, a, b, c); dbg_bt(); } }
  return 0;
}
extern const char *hostname(void *p);
/* debug: print the guest call chain (host frames) of the caller */
void dbg_bt(void)
{
  unsigned long *fp = (unsigned long *)__builtin_frame_address(0);
  fprintf(stderr, "[bt]");
  for (int i = 0; i < 12 && fp && (unsigned long)fp > 0x100000; i++) { const char *m = hostname((void *)fp[1]); fprintf(stderr, " <- %s", m ? m : "?"); fp = (unsigned long *)fp[0]; }
  fprintf(stderr, "\n");
}
/* debug: two guest strings and two values */
void dbg_str(const char *a, const char *b, long x, long y)
{
  unsigned long p = (unsigned long)a, q = (unsigned long)b;
  fprintf(stderr, "[str] '%.40s' '%.40s' %ld %ld\n", p > 0x100000 ? a : "?", q > 0x100000 ? b : "?", x, y);
}
extern const char *ring[256]; extern unsigned rp;
/* debug: the last n guest calls, oldest first */
void dbg_ring(int n)
{
  fprintf(stderr, "[ring]");
  for (int i = n; i > 0; i--) fprintf(stderr, " %s", ring[(rp - i) & 255] ? ring[(rp - i) & 255] : "-");
  fprintf(stderr, "\n");
}
