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
int FUN_8c10d7f4_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10d7f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  ushort *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *ar7_00;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  
  iVar9 = *(int *)(unsigned)(0xac + ar4);
  piVar11 = (int *)(unsigned)(ar4 + 0x34);
  iVar1 = (int)0x9c;
  piVar12 = piVar11 + ar6 + -1;
  uVar3 = (uint)*((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x28));
  (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + 0x14 + ar4))));
  iVar13 = ar6 * *(short *)(unsigned)(iVar1 + 4 + ar4);
  iVar10 = *((int *)(unsigned long)*(unsigned *)(unsigned)(0xac + -0x24 + ar4)) + iVar13 * 2;
  if (uVar3 == *(ushort *)(unsigned)(0x9a + ar4)) {
    puVar4 = (ushort *)(unsigned)(uVar3 * 2 + ar5);
    ar7_00 = (ushort *)(unsigned)((uint)*(ushort *)(unsigned)(iVar1 + ar4) * 2 + ar5);
    puVar8 = (ushort *)(unsigned)(ar6 * uVar3 * 2 + iVar10 + -2);
    while (puVar4 = puVar4 + -1, ar7_00 <= puVar4) {
      *puVar4 = (ushort)*(byte *)(unsigned)(*piVar12 + (uint)*puVar8);
      for (piVar5 = piVar11 + ar6 + -2; puVar8 = puVar8 + -1, piVar11 <= piVar5;
          piVar5 = piVar5 + -1) {
        *puVar4 = (ushort)*(byte *)(unsigned)(*piVar5 + (uint)*puVar8) + *puVar4;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ff8))))
              (*(int *)(unsigned)(ar4 + 0x2c) + (uint)*(ushort *)(unsigned)(0x9c + ar4),0,
               uVar3 - *(ushort *)(unsigned)(0x9c + ar4),ar7_00));
  }
  else {
    uVar7 = *(ushort *)(unsigned)(iVar1 + ar4) + 1;
    puVar4 = (ushort *)(unsigned)(uVar7 * 2 + *(int *)(unsigned)(ar4 + 0x28));
    if (uVar7 <= uVar3) {
      do {
        uVar6 = (uint)*puVar4;
        (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)((ushort *)(unsigned)(ar6 * uVar6 * 2 + iVar10)));
        puVar8 = (ushort *)(unsigned)(uVar6 * 2 + ar5);
        *puVar8 = (ushort)*(byte *)(unsigned)(*piVar11 + (uint)*((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x38)));
        for (piVar5 = (int *)(unsigned)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
          (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)(((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) + 1));
          *puVar8 = (ushort)*(byte *)(unsigned)(*piVar5 + (uint)*((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x38))) + *puVar8;
        }
        uVar7 = uVar7 + 1;
        *(undefined1 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + uVar6) = 0;
        puVar4 = puVar4 + 1;
      } while ((int)uVar7 <= (int)uVar3);
    }
  }
  (*(int *)(fr0_ - 0x3c)) = 0;
  puVar4 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(0xa4 + ar4)) + *((ushort *)(unsigned long)*(unsigned *)(unsigned)(0xa4 + ar4));
  if (*(short *)(unsigned)(0x98 + ar4) != 0) {
    do {
      uVar3 = ar6 * 0xff;
      while (puVar4 < (ushort *)(unsigned)
                      ((uint)*(ushort *)(unsigned)((*(int *)(fr0_ - 0x3c)) * 2 + *(int *)(unsigned)(0xa4 + ar4) + 2) * 2 +
                      *(int *)(unsigned)(0xa4 + ar4))) {
        if (*puVar4 == *(ushort *)(unsigned)(0xe8 + ar4)) {
          uVar7 = (uint)(ushort)ar7;
        }
        else {
          puVar8 = (ushort *)(unsigned)((uint)*puVar4 * ar6 * 2 + iVar10 + iVar13 * -2);
          uVar7 = (uint)*(byte *)(unsigned)(*piVar11 + (uint)*puVar8);
          for (piVar5 = (int *)(unsigned)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
            puVar8 = puVar8 + 1;
            uVar7 = uVar7 + *(byte *)(unsigned)(*piVar5 + (uint)*puVar8);
          }
        }
        puVar4 = puVar4 + 1;
        if (uVar7 < uVar3) {
          uVar3 = uVar7;
        }
      }
      *(short *)(unsigned)((*(int *)(fr0_ - 0x3c)) * 2 + iVar9) = (short)uVar3;
      (*(int *)(fr0_ - 0x3c)) = (*(int *)(fr0_ - 0x3c)) + 1;
    } while ((*(int *)(fr0_ - 0x3c)) < (int)(uint)*(ushort *)(unsigned)(0x98 + ar4));
  }
  puVar4 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(0xa8 + ar4));
  iVar1 = 0xa8 + -0xc;
  puVar4 = puVar4 + *puVar4;
  iVar10 = 0;
  if (*(short *)(unsigned)(iVar1 + ar4) != 0) {
    do {
      iVar1 = (uint)*(ushort *)(unsigned)((uint)*puVar4 * 2 + iVar9) + (int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x30));
      while( true ) {
        puVar4 = puVar4 + 1;
        (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x30)) + 1));
        if ((ushort *)(unsigned)
            ((uint)*(ushort *)(unsigned)(iVar10 * 2 + *(int *)(unsigned)(0xa8 + ar4) + 2) * 2 +
            *(int *)(unsigned)(0xa8 + ar4)) <= puVar4) break;
        iVar13 = (uint)*(ushort *)(unsigned)((uint)*puVar4 * 2 + iVar9) + (int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x30));
        if (iVar13 < iVar1) {
          iVar1 = iVar13;
        }
      }
      if (iVar1 < 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = (undefined2)iVar1;
      }
      *(undefined2 *)(unsigned)(ar5 + iVar10 * 2) = uVar2;
      iVar10 = iVar10 + 1;
      iVar1 = (int)0x9c;
    } while (iVar10 < (int)(uint)*(ushort *)(unsigned)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10d7f4\n.set _FUN_8c10d7f4, _FUN_8c10d7f4_def\n");
