#include "../decls.h"
undefined4 * FUN_8c120c7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint d;
  ushort *ar4_00;
  uint ar5_00;
  float *ar6_00;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uStack_38;
  
  d = (uint)*(ushort *)(ar4 + 0x288);
  fVar12 = *(float *)(ar4 + 0x2a4);
  puVar2 = (undefined4 *)0x2a0;
  fVar13 = *(float *)(ar4 + 0x2a0);
  for (piVar8 = *(int **)(ar4 + 0x284); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[4]) {
    uVar3 = libgcc_divide_helper_01051c(piVar8[1],d);
    fVar10 = (float)(int)uVar3;
    if ((int)uVar3 < 0) {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    puVar2 = &DAT_8c120dd8;
    uStack_38 = 0;
    fVar11 = fVar13 * fVar10 + 1.0;
    puVar4 = (undefined2 *)*piVar8;
    iVar7 = 0;
    fVar10 = fVar13;
    if (d != 0) {
      do {
        uVar1 = *(ushort *)(piVar8[2] + iVar7);
        ar4_00 = (ushort *)(*piVar8 + iVar7);
        ar6_00 = *(float **)(ar4 + 0x2a8);
        ar5_00 = 0;
        if (uVar3 != 0) {
          do {
            ar5_00 = ar5_00 + 1;
            *ar6_00 = ((float)*ar4_00 / (float)uVar1 + fVar13) / fVar11;
            ar4_00 = ar4_00 + d;
            ar6_00 = ar6_00 + 1;
          } while (ar5_00 < uVar3);
        }
        puVar2 = (undefined4 *)0x2a8;
        uVar6 = 0;
        puVar5 = puVar4;
        fVar9 = fVar10;
        if (uVar3 != 0) {
          do {
            thunk_FUN_8c013dfc(ar4_00,ar5_00,ar6_00,ar7);
            uVar6 = uVar6 + 1;
            fVar9 = -fVar10;
            puVar2 = (undefined4 *)&DAT_8c120ddc;
            fVar10 = 1.75;
            *puVar5 = (short)(int)((fVar9 * 255.0) / fVar12 + 0.5);
            puVar5 = puVar5 + d;
            fVar9 = 1.75;
          } while (uVar6 < uVar3);
        }
        fVar10 = fVar9;
        puVar4 = puVar4 + 1;
        uStack_38 = uStack_38 + 1;
        iVar7 = iVar7 + 2;
      } while (uStack_38 < d);
    }
  }
  return puVar2;
}

__asm__(".globl _FUN_8c120c7c\n.set _FUN_8c120c7c, _FUN_8c120c7c_def\n");
