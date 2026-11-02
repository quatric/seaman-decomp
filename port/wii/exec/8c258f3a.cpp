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
le<undefined4>*  FUN_8c258f3a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c258f3a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  le<int>* ar4_00;
  undefined4 uVar2;
  le<undefined4>* puVar3;
  le<undefined4>* puVar4;
  
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4,ar5,ar6,ar7));
  puVar1 = ((void *)(unsigned)0x8c20b260);
  *(le<undefined4>* )(unsigned)0x8c4aad24 = uVar2;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,ar5,ar6,ar7));
  ar4_00 = 0x8c4aa540;
  puVar1 = ((void *)(unsigned)0x8c1f88e6);
  *(le<undefined4>* )(unsigned)0x8c4aa540 = *(le<undefined4>* )(unsigned)0x8c4aa540 + 1;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4_00,ar5,ar6,ar7));
  puVar4 = 0x8c4aabdc;
  *(le<undefined4>* )(unsigned)0x8c4aad28 = uVar2;
  puVar4 = (le<undefined4>* )(unsigned)*puVar4;
  *(le<undefined4>* )(unsigned)0x8c4aa4f4 = *puVar4;
  *(le<undefined4>* )(unsigned)0x8c4aa4f8 = puVar4[1];
  puVar3 = 0x8c4aa4fc;
  *(le<undefined4>* )(unsigned)0x8c4aa4fc = puVar4[2];
  *(le<undefined4>* )(unsigned)0x8c4aa500 = puVar4[3];
  *(le<undefined4>* )(unsigned)0x8c4aa504 = puVar4[4];
  return puVar3;
}

__asm__(".globl FUN_8c258f3a\n.set FUN_8c258f3a, FUN_8c258f3a_def\n");

}
