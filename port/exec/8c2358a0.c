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
undefined4 FUN_8c2358a0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2358a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 556; for (int i_ = 0; i_ < 556; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int a6;
  undefined1 *a7;
  int iVar5;
  int iVar6;
  
  iVar3 = 0;
  iVar5 = ar5 + 1 >> 1;
  a6 = 0;
  a7 = ((undefined1 *)(fr0_ - 0x1ac));
  iVar6 = ar5;
  if (0 < iVar5) {
    do {
      iVar6 = iVar6 + -1;
      (vsp = ((unsigned long)(fr0_ - 556)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x12c)) + iVar3 * 8,a6 * 8 + *(int *)(unsigned)ar4,vr7));
      ((undefined2 *)(fr0_ - 0x22c))[iVar3 * 2] = *(undefined2 *)(unsigned)(*(int *)(unsigned)(ar4 + 8) + a6 * 4);
      iVar2 = a6 * 4;
      iVar4 = iVar3 + 1;
      ((undefined2 *)(fr0_ - 0x22c))[iVar3 * 2 + 1] = *(undefined2 *)(unsigned)(*(int *)(unsigned)(ar4 + 8) + a6 * 4 + 2);
      a6 = a6 + 1;
      *(undefined4 *)(unsigned)(a7 + iVar3 * 4) = *(undefined4 *)(unsigned)(iVar2 + *(int *)(unsigned)(ar4 + 4));
      (vsp = ((unsigned long)(fr0_ - 556)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x12c)) + iVar4 * 8,iVar6 * 8 + *(int *)(unsigned)ar4,vr7));
      ((undefined2 *)(fr0_ - 0x22c))[iVar4 * 2] = *(undefined2 *)(unsigned)(*(int *)(unsigned)(ar4 + 8) + iVar6 * 4);
      iVar3 = iVar4 + 1;
      ((undefined2 *)(fr0_ - 0x22c))[iVar4 * 2 + 1] = *(undefined2 *)(unsigned)(*(int *)(unsigned)(ar4 + 8) + iVar6 * 4 + 2);
      *(undefined4 *)(unsigned)(a7 + iVar4 * 4) = *(undefined4 *)(unsigned)(iVar6 * 4 + *(int *)(unsigned)(ar4 + 4));
    } while (a6 < iVar5);
  }
  (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(((undefined1 *)(fr0_ - 0x12c))));
  (*(unsigned *)(fr0_ - 0x28) = (unsigned)(unsigned long)(a7));
  (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)((undefined1 *)(unsigned)((undefined2 *)(fr0_ - 0x22c))));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 556)), FUN_8c2355c4(((undefined1 * *)(fr0_ - 0x2c)),ar5 + -2,a6,a7));
  return uVar1;
}

__asm__(".globl _FUN_8c2358a0\n.set _FUN_8c2358a0, _FUN_8c2358a0_def\n");
