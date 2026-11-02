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
undefined4 * FUN_8c11c5e4_def(int ar4,undefined4 *ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c11c5e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int a6;
  int a7;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  
  iVar7 = 0;
  iVar5 = *((int *)(unsigned long)*(unsigned *)(unsigned)(0x230 + ar4));
  a6 = ar6;
  a7 = ar7;
  piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + ar4) + 0x14))))(0xc,0xf4 + ar4,ar6,ar7))
  ;
  *ar5 = piVar1;
  puVar2 = (undefined4 *)(unsigned)(int)0x13c;
  if (*(uint *)(unsigned)(ar4 + 0x78) < *(uint *)(unsigned)((int)puVar2 + ar4)) {
    piVar1[2] = 2;
  }
  else {
    piVar1[2] = 0;
  }
  if (ar6 == 0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  else {
    bVar10 = true;
    iVar9 = ar6;
    while (bVar10) {
      iVar9 = *(int *)(unsigned)(iVar9 + 0x10);
      bVar10 = iVar9 != 0;
      iVar7 = iVar7 + 1;
    }
    piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + ar4) + 0x14))))
                              (iVar7 * 0x18,0xf4 + ar4,a6,a7));
    *piVar1 = iVar7;
    piVar1[1] = (int)piVar3;
    puVar2 = (undefined4 *)(unsigned)(uint)(ar7 == 0);
    for (; ar6 != 0; ar6 = *(int *)(unsigned)(ar6 + 0x10)) {
      piVar1 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 0xc));
      iVar7 = 0;
      uVar6 = iVar5 * 0x6e;
      if ((char)s0 == '\0') {
        uVar6 = 0;
      }
      for (; piVar1 != (int *)(unsigned)0x0; piVar1 = (int *)(unsigned)piVar1[4]) {
        if (((undefined4 *)(unsigned)(uint)(ar7 == 0) != (undefined4 *)(unsigned)0x0) ||
           (*(int *)(unsigned)(*piVar1 * 8 + ar7) != -1)) {
          iVar7 = iVar7 + 1;
        }
      }
      puVar2 = (undefined4 *)(unsigned)
               (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + ar4) + 0x14))))
                         (iVar7 << 4,0xf4 + ar4,a6,a7));
      *piVar3 = iVar7;
      piVar3[1] = *(int *)(unsigned)(ar6 + 4);
      piVar3[2] = *(int *)(unsigned)(ar6 + 8);
      piVar3[3] = -1;
      piVar3[5] = (int)puVar2;
      puVar8 = puVar2;
      for (piVar1 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 0xc)); piVar1 != (int *)(unsigned)0x0; piVar1 = (int *)(unsigned)piVar1[4]) {
        if ((char)s0 == '\0') {
          uVar11 = (uint)*(ushort *)(unsigned)(piVar1 + 5);
        }
        else {
          uVar11 = ((uint)*(ushort *)(unsigned)(piVar1 + 5) + iVar5) * 0x6e;
        }
        if ((ar7 == 0) ||
           (puVar2 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*piVar1 * 8 + ar7)), puVar2 != (undefined4 *)(unsigned)0xffffffff)) {
          piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + ar4) + 0x14))))
                                    (0xc,0xf4 + ar4,a6,a7));
          puVar2 = (undefined4 *)(unsigned)piVar3[3];
          if (puVar2 == (undefined4 *)(unsigned)0xffffffff) {
            piVar3[3] = uVar6;
          }
          *puVar8 = 1;
          puVar8[1] = uVar6;
          puVar8[2] = uVar11;
          puVar8[3] = piVar4;
          *piVar4 = piVar1[1];
          piVar4[1] = piVar1[2];
          if (ar7 == 0) {
            piVar4[2] = *piVar1;
          }
          else {
            piVar4[2] = *(int *)(unsigned)(*piVar1 * 8 + ar7);
          }
          puVar8 = puVar8 + 4;
        }
        uVar6 = uVar11;
      }
      piVar3[4] = uVar6;
      piVar3 = piVar3 + 6;
    }
  }
  return puVar2;
}

__asm__(".globl _FUN_8c11c5e4\n.set _FUN_8c11c5e4, _FUN_8c11c5e4_def\n");
