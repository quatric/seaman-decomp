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
undefined4 FUN_8c1f2f9c_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f2f9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 a4;
  int a4_00;
  int iVar4;
  int *unaff_r14 = 0;
  
  puVar1 = ((void *)(unsigned)0x8c1f88e6);
  iVar4 = unaff_r14[6];
  a4 = (vsp = ((unsigned long)(fr0_ - 32)), sh4_tmu_1f88e6(ar4,ar5,ar6,ar7));
  uVar3 = 0xee6b28;
  puVar2 = ((void *)(unsigned)0x8c1f88f0);
  do {
    (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*unaff_r14 + 0x3c) + 0x48))))(ar4,ar5,ar6,ar7));
    a4_00 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1f364c(unaff_r14,ar5,ar6,ar7));
    if (a4_00 == 0) {
      return 0xffffffe0;
    }
    if (a4_00 == 1) {
      return 0;
    }
    if (((a4_00 != 2) && (a4_00 != 3)) && (a4_00 != 4)) {
      if ((a4_00 != 5) && (a4_00 != 0x40)) {
        return 0xffffffe7;
      }
      return (int)*(short *)(unsigned)((int)unaff_r14 + 0x52);
    }
    if (iVar4 != unaff_r14[6]) {
      a4 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar1)))(a4_00,ar5,ar6,ar7));
      iVar4 = unaff_r14[6];
    }
    ar5 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar1)))(a4_00,ar5,ar6,ar7));
    ar4 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(a4,ar5,ar6,ar7));
  } while (ar4 <= uVar3);
  return 0xffffffeb;
}

__asm__(".globl _FUN_8c1f2f9c\n.set _FUN_8c1f2f9c, _FUN_8c1f2f9c_def\n");
