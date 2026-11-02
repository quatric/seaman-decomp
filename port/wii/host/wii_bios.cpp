/* GD-ROM backend (port of exec/bios.c). Sectors come from the SD card: sd:/seaman/disc.head (ISO9660 metadata) and
   sd:/seaman/disc.map ("<first sector> <sector count> <path>" per file, tools/wii_sdimage.py). */
#include "host.h"
#define ISO_BASE 45150u
static FILE *head, *cur; static char curpath[128];
static unsigned long iso_sectors = 488371;
static int nreq, last_xfer, chk_reads, pending_read;
struct ext { unsigned start, n; char path[120]; };
static ext *map; static int nmap;
static void open_iso(void)
{
  if (head) return;
  head = fopen("sd:/seaman/disc.head", "rb");
  FILE *m = fopen("sd:/seaman/disc.map", "r");
  if (!head || !m) { host_log("[gd] disc.head/disc.map missing\n"); return; }
  map = (ext *)malloc(sizeof(ext) * 2048);
  while (nmap < 2048 && fscanf(m, "%u %u %119[^\n]\n", &map[nmap].start, &map[nmap].n, map[nmap].path) == 3) nmap++;
  fclose(m);
  host_log("[gd] %d files mapped\n", nmap);
}
static void read_sector(unsigned s, unsigned char *dst)
{
  int lo = 0, hi = nmap - 1;
  while (lo <= hi) {
    int mid = (lo + hi) / 2;
    if (s < map[mid].start) hi = mid - 1; else if (s >= map[mid].start + map[mid].n) lo = mid + 1;
    else {
      memset(dst, 0, 2048);
      if (strcmp(curpath, map[mid].path)) { if (cur) fclose(cur); cur = fopen(map[mid].path, "rb"); strncpy(curpath, map[mid].path, sizeof curpath - 1); }
      if (cur) { fseek(cur, (long)(s - map[mid].start) * 2048, SEEK_SET); fread(dst, 1, 2048, cur); }
      return;
    }
  }
  memset(dst, 0, 2048);
  if (head && s < 8192) { fseek(head, (long)s * 2048, SEEK_SET); fread(dst, 1, 2048, head); }
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
#define LOG(...) do { static int n_; if (n_++ < 1500) host_log(__VA_ARGS__); } while (0)
extern "C" {
unsigned long gd_req_cmd(unsigned long cmd, unsigned long param, unsigned long c, unsigned long d)
{
  le<unsigned> *p = (le<unsigned> *)(unsigned long)(unsigned)param;
  open_iso();
  LOG("[gd] cmd %lu param %lx", cmd, param);
  if (p) LOG(" [%x %x %x %x]", (unsigned)p[0], (unsigned)p[1], (unsigned)p[2], (unsigned)p[3]);
  LOG("\n");
  last_xfer = 0;
  if ((cmd == 16 || cmd == 17) && p) {
    read_sectors(p[0], p[1], (unsigned char *)(unsigned long)(((unsigned)p[2] & 0x1fffffff) | 0x8c000000));
    last_xfer = (unsigned)p[1] * 2048; pending_read = 1; chk_reads = 0;
  } else if ((cmd == 18 || cmd == 19) && p) {
    le<unsigned> *toc = (le<unsigned> *)(unsigned long)(unsigned)(cmd == 18 ? (unsigned)p[0] : (unsigned)p[1]);
    memset((void *)toc, 0, 102 * 4);
    toc[2] = (4u << 28) | (1u << 24) | ISO_BASE;
    toc[99] = 0x41030000; toc[100] = 0x41030000; toc[101] = 0x41000000 | (ISO_BASE + (unsigned)iso_sectors);
  }
  return ++nreq;
}
unsigned long gd_check_cmd(unsigned long id, unsigned long res, unsigned long c, unsigned long d)
{
  le<unsigned> *r = (le<unsigned> *)(unsigned long)(unsigned)res;
  if (r) { r[0] = 0; r[1] = 0; r[2] = (unsigned)last_xfer; r[3] = 0; }
  { static int nc_; if (nc_++ < 300) host_log("[gd] check id %lu pending=%d chk=%d\n", id, pending_read, chk_reads); }
  if (pending_read) { chk_reads++; if (chk_reads == 1) return 1; if (chk_reads == 2) return 3; pending_read = 0; }
  return 2;
}
unsigned long gd_exec_server(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { return 0; }
unsigned long gd_init(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { open_iso(); return 0; }
unsigned long gd_drive_status(unsigned long a, unsigned long b, unsigned long c, unsigned long d)
{
  le<unsigned> *p = (le<unsigned> *)(unsigned long)(unsigned)a;
  if (p) { p[0] = 2; p[1] = 0x80; }
  return 0;
}
unsigned long gd_dma_req(unsigned long id, unsigned long out, unsigned long c, unsigned long d)
{
  le<unsigned> *o = (le<unsigned> *)(unsigned long)(unsigned)out;
  if (o) { o[0] = (unsigned)last_xfer; o[1] = 0; }
  return 0;
}
unsigned long gd_dma_check(unsigned long id, unsigned long out, unsigned long c, unsigned long d)
{
  le<unsigned> *o = (le<unsigned> *)(unsigned long)(unsigned)out;
  if (o) { o[0] = 0; o[1] = 0; }
  return 0;
}
unsigned long gd_other(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { return 0; }
unsigned long bios_call(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { return 0; }
}
