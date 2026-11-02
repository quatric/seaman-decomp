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
le<uint>*  FUN_8c25d780_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25d780");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<uint>* puVar1;
  le<uint>* puVar2;
  undefined4 ar4_00;
  undefined4 ar5_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,1,ar6,ar7));
  ar5_00 = 0;
  ar4_00 = 8;
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), sh4_dmac_202e20(ar4_00,ar5_00,ar6,ar7));
  puVar1 = 0x8c4a9ff4;
  *(le<undefined4>* )(unsigned)0x8c4a9ff4 = 0x800000;
  puVar2 = 0x8c4a9ffc;
  *(le<undefined4>* )(unsigned)0x8c4a9ffc = 0x600000;
  puVar1[3] = *puVar2;
  puVar2[7] = *(le<undefined4>* )(unsigned)0x8c4a9ff4 >> 1;
  puVar2[0xf] = 0;
  *(le<undefined4>* )(unsigned)0x8c4aa058 = 1;
  return puVar2 + 7;
}

__asm__(".globl FUN_8c25d780\n.set FUN_8c25d780, FUN_8c25d780_def\n");

}
