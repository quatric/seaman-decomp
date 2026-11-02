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
int FUN_8c10da96_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10da96";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  ushort *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  
  piVar11 = (int *)(unsigned)(ar4 + 0x34);
  iVar3 = *(int *)(unsigned)(0xac + ar4);
  iVar1 = (int)0x88;
  (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + 0x28 + ar4))));
  (*(uint *)(fr0_ - 0x44)) = (uint)*(ushort *)(unsigned)(iVar1 + 0x14 + ar4);
  uVar10 = (uint)*((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x28));
  iVar13 = *(short *)(unsigned)(iVar1 + 0x18 + ar4) * ar6;
  piVar12 = piVar11 + ar6 + -1;
  iVar1 = *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + ar4)) + iVar13 * 2;
  if (uVar10 == *(ushort *)(unsigned)(0x9a + ar4)) {
    puVar4 = (ushort *)(unsigned)(uVar10 * 2 + ar5);
    puVar8 = (ushort *)(unsigned)(ar6 * uVar10 * 2 + iVar1 + -2);
    while (puVar4 = puVar4 + -1, (ushort *)(unsigned)((*(uint *)(fr0_ - 0x44)) * 2 + ar5) <= puVar4) {
      *puVar4 = (ushort)*(byte *)(unsigned)(*piVar12 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2) & 0xf0;
      for (piVar5 = piVar11 + ar6 + -2; puVar8 = puVar8 + -1, piVar11 <= piVar5;
          piVar5 = piVar5 + -1) {
        *puVar4 = ((ushort)*(byte *)(unsigned)(*piVar5 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2) & 0xf0)
                  + *puVar4;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ff8))))
              (*(int *)(unsigned)(ar4 + 0x2c) + (uint)*(ushort *)(unsigned)(0x9c + ar4),0,
               uVar10 - *(ushort *)(unsigned)(0x9c + ar4),puVar8));
  }
  else {
    (*(uint *)(fr0_ - 0x44)) = (*(uint *)(fr0_ - 0x44)) + 1;
    (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)((ushort *)(unsigned)((*(uint *)(fr0_ - 0x44)) * 2 + *(int *)(unsigned)(ar4 + 0x28))));
    if ((*(uint *)(fr0_ - 0x44)) <= uVar10) {
      do {
        uVar6 = (uint)*((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x40));
        puVar4 = (ushort *)(unsigned)(ar6 * uVar6 * 2 + iVar1);
        puVar8 = (ushort *)(unsigned)(uVar6 * 2 + ar5);
        *puVar8 = (ushort)*(byte *)(unsigned)((uint)(*puVar4 >> 1) + *piVar11) << ((*puVar4 & 1) << 2) & 0xf0;
        for (piVar5 = (int *)(unsigned)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
          puVar4 = puVar4 + 1;
          *puVar8 = ((ushort)*(byte *)(unsigned)((uint)(*puVar4 >> 1) + *piVar5) << ((*puVar4 & 1) << 2) &
                    0xf0) + *puVar8;
        }
        *(undefined1 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + uVar6) = 0;
        (*(uint *)(fr0_ - 0x44)) = (*(uint *)(fr0_ - 0x44)) + 1;
        (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x40)) + 1));
      } while ((int)(*(uint *)(fr0_ - 0x44)) <= (int)uVar10);
    }
  }
  uVar10 = (uint)0xf0;
  (*(uint *)(fr0_ - 0x44)) = 0;
  puVar4 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(0xa4 + ar4)) + *((ushort *)(unsigned long)*(unsigned *)(unsigned)(0xa4 + ar4));
  if (*(short *)(unsigned)((uVar10 - 0x58) + ar4) != 0) {
    do {
      uVar6 = ar6 * 0xff;
      while (puVar4 < (ushort *)(unsigned)
                      ((uint)*(ushort *)(unsigned)((*(uint *)(fr0_ - 0x44)) * 2 + *(int *)(unsigned)(0xa4 + ar4) + 2) * 2 +
                      *(int *)(unsigned)(0xa4 + ar4))) {
        if (*puVar4 == *(ushort *)(unsigned)(0xe8 + ar4)) {
          uVar7 = (uint)(ushort)ar7;
        }
        else {
          puVar8 = (ushort *)(unsigned)((uint)*puVar4 * ar6 * 2 + iVar1 + iVar13 * -2);
          uVar7 = (uint)*(byte *)(unsigned)(*piVar11 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2) & uVar10;
          for (piVar5 = (int *)(unsigned)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
            puVar8 = puVar8 + 1;
            uVar7 = uVar7 + ((uint)*(byte *)(unsigned)(*piVar5 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2)
                            & uVar10);
          }
        }
        puVar4 = puVar4 + 1;
        if (uVar7 < uVar6) {
          uVar6 = uVar7;
        }
      }
      *(short *)(unsigned)(iVar3 + (*(uint *)(fr0_ - 0x44)) * 2) = (short)uVar6;
      (*(uint *)(fr0_ - 0x44)) = (*(uint *)(fr0_ - 0x44)) + 1;
    } while ((int)(*(uint *)(fr0_ - 0x44)) < (int)(uint)*(ushort *)(unsigned)(0x98 + ar4));
  }
  puVar4 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(0xa8 + ar4));
  iVar1 = 0xa8 + -0xc;
  puVar4 = puVar4 + *puVar4;
  iVar13 = 0;
  if (*(short *)(unsigned)(iVar1 + ar4) != 0) {
    do {
      iVar1 = (uint)*(ushort *)(unsigned)(iVar3 + (uint)*puVar4 * 2) + (int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x2c));
      while( true ) {
        puVar4 = puVar4 + 1;
        (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)) + 1));
        if ((ushort *)(unsigned)
            ((uint)*(ushort *)(unsigned)(iVar13 * 2 + *(int *)(unsigned)(0xa8 + ar4) + 2) * 2 +
            *(int *)(unsigned)(0xa8 + ar4)) <= puVar4) break;
        iVar9 = (uint)*(ushort *)(unsigned)(iVar3 + (uint)*puVar4 * 2) + (int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x2c));
        if (iVar9 < iVar1) {
          iVar1 = iVar9;
        }
      }
      if (iVar1 < 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = (undefined2)iVar1;
      }
      *(undefined2 *)(unsigned)(ar5 + iVar13 * 2) = uVar2;
      iVar13 = iVar13 + 1;
      iVar1 = (int)0x9c;
    } while (iVar13 < (int)(uint)*(ushort *)(unsigned)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10da96\n.set _FUN_8c10da96, _FUN_8c10da96_def\n");
