#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c119706_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c119706";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  (*(int *)(fr0_ - 0x10)) = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c11b5a0(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x1b4) == 0) {
    (*(int *)(fr0_ - 0x18)) = 0;
    (*(int *)(fr0_ - 0x14)) = *(int *)(unsigned)(ar4 + 300) + 1;
    (*(int *)(fr0_ - 0x24)) = (int)*(short *)(unsigned)(ar4 + 0x1b0) + *(int *)(unsigned)(ar4 + 0x1ac);
  }
  else {
    (*(int *)(fr0_ - 0x14)) = *(int *)(unsigned)((*(int *)(fr0_ - 0x10)) + 0x14);
    iVar3 = (*(int *)(fr0_ - 0x10));
    for (iVar2 = (*(int *)(fr0_ - 0x10)); iVar2 != 0; iVar2 = *(int *)(unsigned)(iVar2 + 4)) {
      if ((*(uint *)(unsigned)(ar4 + 0x1b8) == (*(uint *)(unsigned)(iVar2 + 0x10) & 0xffff)) &&
         (*(int *)(unsigned)(iVar2 + 4) != 0)) {
        iVar3 = iVar2;
      }
    }
    (*(int *)(fr0_ - 0x18)) = *(int *)(unsigned)(iVar3 + 0x14);
    (*(int *)(fr0_ - 0x24)) = *(int *)(unsigned)((*(int *)(fr0_ - 0x10)) + 0xc) - *(int *)(unsigned)(iVar3 + 0xc);
  }
  (*(int *)(fr0_ - 0x20)) = (*(int *)(fr0_ - 0x14)) - (*(int *)(fr0_ - 0x18));
  (*(float *)(fr0_ - 0x1c)) = (float)(*(int *)(fr0_ - 0x24));
  if ((*(int *)(fr0_ - 0x24)) < 0) {
    (*(float *)(fr0_ - 0x1c)) = (*(float *)(fr0_ - 0x1c)) + 4.2949673e+09;
  }
  fVar4 = (float)(*(int *)(fr0_ - 0x20));
  if ((*(int *)(fr0_ - 0x20)) < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  (*(float *)(fr0_ - 0x1c)) = (*(float *)(fr0_ - 0x1c)) / fVar4;
  (*(int *)(fr0_ - 0x28)) = (int)*(short *)(unsigned)(ar4 + 0x1b0) + *(int *)(unsigned)(ar4 + 0x1ac);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c120348(ar4,0xc,&(*(int *)(fr0_ - 0x28)),2));
  return uVar1;
}

__asm__(".globl _FUN_8c119706\n.set _FUN_8c119706, _FUN_8c119706_def\n");
