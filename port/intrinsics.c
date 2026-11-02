/* Host stand-ins for SH-4 / Ghidra intrinsics referenced by the decompiled units. Link-level only: these do not emulate the hardware. */
#include <math.h>
typedef unsigned long long ulonglong;
ulonglong halt_baddata() { __builtin_trap(); }
ulonglong halt_unimplemented() { __builtin_trap(); }
ulonglong TrapAlways() { __builtin_trap(); }
ulonglong CacheBlockInvalidate() { return 0; }
ulonglong CacheBlockPurge() { return 0; }
ulonglong CacheBlockWriteBack() { return 0; }
double SQRT(double x) { return sqrt(x); }
ulonglong mac_lOp() { return 0; }
ulonglong mac_wOp() { return 0; }
