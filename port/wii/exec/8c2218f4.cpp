#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c2218f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2218f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  
  puVar1 = ((undefined1 *)(fr0_ - 0x20));
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0107a0(0x1c,((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(unsigned)0x8c26d7e8),vr7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0ed0) = *(le<undefined4>* )(unsigned)(puVar1 + ar4 * 4);
  return ar4 * 4;
}

__asm__(".globl FUN_8c2218f4\n.set FUN_8c2218f4, FUN_8c2218f4_def\n");

}
