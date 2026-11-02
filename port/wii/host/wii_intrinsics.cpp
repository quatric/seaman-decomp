/* Host stand-ins for SH-4 / Ghidra intrinsics referenced by the generated units (cache maintenance is a no-op: the guest caches are not modelled). */
#include "host.h"
#include <math.h>
extern "C" {
unsigned halt_baddata() { for (;;) { } }
unsigned halt_unimplemented() { for (;;) { } }
unsigned TrapAlways() { for (;;) { } }
unsigned CacheBlockInvalidate() { return 0; }
unsigned CacheBlockPurge() { return 0; }
extern const char *ring[256]; extern unsigned rp; extern "C" void host_log(const char*,...);
unsigned CacheBlockWriteBack() { static unsigned c_; if (++c_ % 300000 == 0) { host_log("wbhost %u ring:", c_); for (int i = 12; i > 0; i--) host_log(" %s", ring[(rp - i) & 255] ? ring[(rp - i) & 255] : "-"); host_log("\n"); } return 0; }
double SQRT(double x) { return sqrt(x); }
unsigned mac_lOp() { return 0; }
unsigned mac_wOp() { return 0; }
char register0x0000003c[64] __attribute__((aligned(16)));
}
