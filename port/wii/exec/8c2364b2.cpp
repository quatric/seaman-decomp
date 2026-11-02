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
int FUN_8c2364b2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2364b2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  le<undefined4>* puVar2;
  le<int>* piVar3;
  le<uint>* puVar4;
  int iVar5;
  
  puVar4 = 0x8c4aa4f0;
  puVar2 = 0x8c4ab238;
  piVar1 = 0x8c4aabbc;
  iVar5 = (int)0x90;
  *(le<undefined4>* )(unsigned)(iVar5 + *(le<undefined4>* )(unsigned)0x8c4aabbc) = *(le<undefined4>* )(unsigned)0x8c4ab238;
  *(le<undefined4>* )(unsigned)(iVar5 + 4 + *piVar1) = puVar2[1];
  *(le<undefined4>* )(unsigned)(iVar5 + 8 + *piVar1) = puVar2[2];
  piVar3 = 0x8c4aabdc;
  *(le<undefined4>* )(unsigned)(iVar5 + 0xc + *piVar1) = puVar2[3];
  *(le<undefined4>* )(unsigned)*piVar3 = puVar2[4];
  *(le<undefined4>* )(unsigned)(*piVar3 + 4) = puVar2[7];
  *(le<undefined4>* )(unsigned)(*piVar3 + 0xc) = puVar2[8];
  if ((*puVar4 & (int)0x4000) == 0) {
    *(le<undefined4>* )(unsigned)(*piVar3 + 8) = puVar2[5];
    *(le<undefined4>* )(unsigned)(*piVar3 + 0x10) = puVar2[6];
  }
  else {
    *(le<undefined4>* )(unsigned)(*piVar3 + 0x10) = puVar2[5];
    *(le<undefined4>* )(unsigned)(*piVar3 + 8) = puVar2[6];
  }
  return iVar5 + 0xc;
}

__asm__(".globl FUN_8c2364b2\n.set FUN_8c2364b2, FUN_8c2364b2_def\n");

}
