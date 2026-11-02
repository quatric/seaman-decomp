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
undefined4 FUN_8c1f2f98_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f2f98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  
  puVar1 = ((void *)(unsigned)0x8c1f88e6);
  pcVar8 = ((void *)0x8c1f302a);
  iVar7 = ar4[6];
  uVar4 = (vsp = ((unsigned long)(fr0_ - 32)), sh4_tmu_1f88e6(((void *)0x8c1f302a),vr5,vr6,vr7));
  uVar3 = 0xee6b28;
  puVar2 = ((void *)(unsigned)0x8c1f88f0);
  do {
    (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar4 + 0x3c) + 0x48))))(vr4,vr5,vr6,vr7));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1f364c(ar4,ar5,ar6,ar7));
    if (iVar5 == 0) {
      return 0xffffffe0;
    }
    if (iVar5 == 1) {
      return 0;
    }
    if (((iVar5 != 2) && (iVar5 != 3)) && (iVar5 != 4)) {
      if ((iVar5 != 5) && (iVar5 != 0x40)) {
        return 0xffffffe7;
      }
      return (int)*(short *)(unsigned)((int)ar4 + 0x52);
    }
    if (iVar7 != ar4[6]) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar1)))(iVar5,pcVar8,vr6,vr7));
      iVar7 = ar4[6];
    }
    ar5 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar1)))(vr4,vr5,vr6,vr7));
    uVar6 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(uVar4,ar5,vr6,vr7));
  } while (uVar6 <= uVar3);
  return 0xffffffeb;
}

__asm__(".globl _FUN_8c1f2f98\n.set _FUN_8c1f2f98, _FUN_8c1f2f98_def\n");
