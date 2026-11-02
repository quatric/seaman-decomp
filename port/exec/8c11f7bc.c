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
int FUN_8c11f7bc_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c11f7bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar5 = *(int *)(unsigned)(0xfc + ar4);
  iVar1 = (int)0x2b0;
  piVar6 = (int *)(unsigned)(ar5 * 0xc + *(int *)(unsigned)(iVar1 + ar4) + ar6 * 4);
  if ((ar5 == 0) && (ar6 == 0)) {
    uVar4 = 0;
    iVar7 = 0;
    piVar2 = (int *)(unsigned)(0x268 + ar4);
    do {
      uVar4 = uVar4 + 3;
      iVar7 = iVar7 + *piVar2 + piVar2[2] + piVar2[4] + 6;
      piVar2 = piVar2 + 6;
    } while (uVar4 < 3);
    if (*((int *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + ar4)) != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar5 + 0x18))))(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + ar4)),0xf4 + ar4,0,vr7));
    }
    piVar2 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x2b0 + ar4));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar5 + 0x14))))(iVar7 * 6,0xf4 + ar4,vr6,vr7));
    *piVar2 = iVar1;
  }
  puVar3 = (undefined2 *)(unsigned)*piVar6;
  if (ar7 == 0) {
    *puVar3 = (short)0xffff;
  }
  else {
    for (; ar7 != 0; ar7 = *(int *)(unsigned)(ar7 + 4)) {
      *puVar3 = (short)*(undefined4 *)(unsigned)(ar7 + 0x14);
      puVar3 = puVar3 + 1;
    }
  }
  piVar6[1] = (int)puVar3;
  return iVar1;
}

__asm__(".globl _FUN_8c11f7bc\n.set _FUN_8c11f7bc, _FUN_8c11f7bc_def\n");
