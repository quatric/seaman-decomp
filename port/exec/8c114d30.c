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
int FUN_8c114d30_def(int ar4,uint ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c114d30";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  int *piVar12;
  ushort *puVar13;
  
  piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x104 + ar4));
  iVar2 = (int)0xc8;
  (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)((int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x38) * 4 + *(int *)(unsigned)(ar4 + 0x44) + 4)));
  iVar3 = iVar2 + 0x20;
  iVar9 = *(int *)(unsigned)(iVar3 + ar4);
  piVar12 = (int *)(unsigned)(*(int *)(unsigned)(iVar2 + ar4) * 4 + *(int *)(unsigned)(iVar2 + 8 + ar4));
  (*(uint *)(fr0_ - 0x20)) = 0;
  piVar8 = piVar12 + 2;
  if (ar5 != 0) {
    do {
      piVar12 = piVar12 + 1;
      (*(int *)(fr0_ - 0x28)) = 0;
      puVar13 = (ushort *)(unsigned)(*piVar12 * 2 + *(int *)(unsigned)(0xcc + ar4));
      iVar2 = *(int *)(unsigned)(0xcc + ar4) + *piVar8 * 2;
      puVar10 = (ushort *)(unsigned)(iVar2 + -2);
      *(undefined2 *)(unsigned)((int)piVar7 + 6) =
           *(undefined2 *)(unsigned)(*(int *)(unsigned)((uint)*puVar13 * 4 + iVar9) * 2 + iVar9);
      *(undefined2 *)(unsigned)(piVar7 + 2) =
           *(undefined2 *)(unsigned)((*(int *)(unsigned)((uint)*puVar10 * 4 + iVar9) + 1) * 2 + iVar9);
      iVar3 = 0;
      if (2 < (uint)((int)((iVar2 - (int)puVar13) + (uint)(iVar2 - (int)puVar13 < 0)) >> 1)) {
        uVar1 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar10 = (ushort *)(unsigned)(iVar2 + -4);
        piVar4 = (int *)(unsigned)((uint)uVar1 * 4 + iVar9);
        (*(int *)(fr0_ - 0x28)) = (piVar4[1] - *piVar4) + -2;
      }
      piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) + 1;
      *piVar7 = *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) + (*(int *)(fr0_ - 0x28));
      for (; puVar13 <= puVar10; puVar13 = puVar13 + 1) {
        piVar5 = (int *)(unsigned)((uint)*puVar13 * 4 + iVar9);
        iVar3 = iVar3 + (piVar5[1] - *piVar5) + -2;
      }
      *(short *)(unsigned)(piVar7 + 1) = (short)iVar3;
      piVar8 = piVar8 + 1;
      piVar7 = piVar7 + 3;
      (*(uint *)(fr0_ - 0x20)) = (*(uint *)(fr0_ - 0x20)) + 1;
      (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(piVar4));
    } while ((*(uint *)(fr0_ - 0x20)) < ar5);
  }
  iVar2 = 0xfffe;
  uVar11 = 0;
  iVar9 = *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24));
  if (ar6 != 0) {
    do {
      (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) + 1));
      iVar3 = (int)0xe6;
      iVar6 = *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24));
      *piVar7 = iVar9;
      *(undefined2 *)(unsigned)(piVar7 + 2) = *(undefined2 *)(unsigned)(iVar3 + ar4);
      *(undefined2 *)(unsigned)((int)piVar7 + 6) = *(undefined2 *)(unsigned)(0xe6 + ar4);
      uVar11 = uVar11 + 1;
      iVar3 = (iVar6 - iVar9) + iVar2;
      *(short *)(unsigned)(piVar7 + 1) = (short)iVar3;
      piVar7 = piVar7 + 3;
      iVar9 = iVar6;
    } while (uVar11 < ar6);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c114d30\n.set _FUN_8c114d30, _FUN_8c114d30_def\n");
