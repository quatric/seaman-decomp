#include "../decls.h"
int * FUN_8c11a0e8_def(int ar4,int *ar5,uint ar6,uint ar7)

{
  int *a5;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *a5_00;
  char cVar6;
  int *piVar7;
  int *ar5_00;
  int *piVar8;
  int *piVar9;
  undefined4 uStack_44;
  int *piStack_40;
  int *piStack_38;
  int iStack_30;
  int *piStack_2c;
  uint uStack_28;
  int iStack_24;
  
  cVar6 = (char)ar6;
  piVar8 = *(int **)(0x8c + ar4);
  piStack_38 = (int *)0x0;
  piVar9 = (int *)(uint)ar5[2];
  piStack_40 = (int *)0x0;
  ar5_00 = *(int **)(0x124 + ar4);
  iStack_24 = 0;
  iStack_30 = 1;
  uStack_28 = 0;
  piStack_2c = (int *)0x0;
  a5_00 = ar5;
  if (piVar9 != (int *)0x0) {
    if (cVar6 == '\0') {
      piStack_2c = (int *)(((int)*(short *)((int)ar5 + 2) + *(int *)(0x1ac + ar4)) -
                          (uint)*(ushort *)(0x1da + ar4) *
                          (int)*(short *)(0x1be + ar4));
      iStack_30 = *(int *)(0x12c + ar4);
      uStack_28 = *(uint *)(*(int *)(0x1d0 + ar4) + iStack_30 * 4);
    }
    if (piVar8[4] == 0) {
      piVar4 = (int *)FUN_8c112d82(ar4,piVar8,ar6,ar7);
    }
    else {
      piVar4 = (int *)piVar8[4];
    }
    uStack_44 = (int *)CONCAT22(*(undefined2 *)(ar5[3] + 4),*(undefined2 *)(ar5[3] + 2));
    piVar8[4] = 0;
    piVar8[3] = 0;
    if (cVar6 == '\0') {
      iVar3 = (int)0xc0;
      *(undefined2 *)(piVar8 + 5) = *(undefined2 *)(0x12c + ar4);
      if ((*(ushort *)((int)uStack_44 * 2 + *(int *)(iVar3 + ar4)) & 0x80) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)*(short *)(0x1be + ar4);
      }
      piVar8[2] = (((int)*(short *)((int)ar5 + 2) + *(int *)(0x1ac + ar4)) - piVar9[3]) -
                  iVar3;
      a5_00 = (int *)piVar8[2];
      ar6 = (uint)*(ushort *)(piVar8 + 5);
      ar7 = piVar9[5] & 0xffff;
      iVar3 = FUN_8c119b16(ar4,a5_00,ar6,ar7);
      piVar8[1] = iVar3;
    }
    else {
      ar6 = ar5[3];
      a5_00 = uStack_44;
      uVar2 = FUN_8c113e64(ar4,uStack_44,ar6,ar7);
      *(short *)((int)piVar8 + 0x16) = (short)uVar2;
    }
    *piVar8 = (int)uStack_44;
    piVar7 = piVar8;
    piStack_38 = piVar8;
    while (piVar1 = piStack_40, piVar8 = piVar4, a5 = piVar9, a5 != (int *)0x0) {
      piVar4 = piVar8;
      if (a5[4] == 0) {
        piVar9 = (int *)0x0;
        piStack_40 = piVar1;
      }
      else {
        piVar9 = (int *)a5[1];
        piStack_40 = piVar7;
        if ((*(ushort *)a5[4] & 2) == 0) {
          if (piVar8[4] == 0) {
            piVar4 = (int *)FUN_8c112d82(ar4,piVar8,ar6,ar7);
          }
          else {
            piVar4 = (int *)piVar8[4];
          }
          uStack_44 = (int *)CONCAT22(*(undefined2 *)(a5[4] + 4),*(undefined2 *)(a5[4] + 2));
          piVar8[4] = (int)piStack_38;
          piVar8[3] = 0;
          if (cVar6 == '\0') {
            ar6 = a5[5];
            ar7 = piVar9[5];
            if (*(ushort *)a5[4] >> 2 == *(ushort *)(0xe2 + ar4)) {
              iStack_30 = iStack_30 - (ar6 - ar7);
              piStack_2c = (int *)((int)piStack_2c - (a5[3] - *(int *)(a5[1] + 0xc)));
              uStack_28 = uStack_28 -
                          (*(int *)(ar6 * 4 + *(int *)(0x1d0 + ar4)) -
                          *(int *)(ar7 * 4 + *(int *)(0x1d0 + ar4)));
            }
            if ((*(ushort *)((int)uStack_44 * 2 + *(int *)(0xc0 + ar4)) & 0x80) == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = (int)*(short *)(0x1be + ar4);
            }
            *(short *)(piVar8 + 5) = (short)ar6;
            a5_00 = (int *)((a5[3] - piVar9[3]) - iVar3);
            piVar8[2] = (int)a5_00;
            iVar3 = FUN_8c119b16(ar4,a5_00,ar6,ar7);
            piVar8[1] = iVar3;
          }
          else {
            ar6 = a5[4];
            a5_00 = uStack_44;
            uVar2 = FUN_8c113e64(ar4,uStack_44,ar6,ar7);
            *(short *)((int)piVar8 + 0x16) = (short)uVar2;
          }
          *piVar8 = (int)uStack_44;
          piVar7 = a5;
          if ((a5 != (int *)(uint)ar5[2]) && (1 < *a5)) {
            a5_00 = a5;
            piVar7 = (int *)FUN_8c11a014(ar4,a5,ar6,ar7);
          }
          ar5_00 = (int *)*ar5_00;
          if (ar5_00 == *(int **)(0x120 + ar4)) {
            a5_00 = ar5_00;
            FUN_8c11318e(ar4,ar5_00,ar6,ar7);
          }
          ar5_00[2] = (int)piVar7;
          piStack_38 = piVar8;
          piStack_40 = piVar7;
          if ((piVar7 != a5) && (piVar1 != (int *)0x0)) {
            *piVar7 = *piVar7 + 1;
            iVar3 = *(int *)piVar1[1] + -1;
            *(int *)piVar1[1] = iVar3;
            if (iVar3 < 1) {
              a5_00 = (int *)piVar1[1];
              FUN_8c115f18(ar4,a5_00,ar6,ar7);
            }
            piVar1[1] = (int)piVar7;
          }
        }
      }
    }
  }
  piVar9 = *(int **)(0x124 + ar4);
  iVar3 = (int)0x124;
  *(int *)(iVar3 + ar4) = *ar5_00;
  if (*(int *)(iVar3 + ar4) == *(int *)(iVar3 + -4 + ar4)) {
    a5_00 = *(int **)(0x124 + ar4);
    FUN_8c11318e(ar4,a5_00,ar6,ar7);
  }
  if (piStack_38 == (int *)0x0) {
    piStack_40 = (int *)0x0;
    piVar4 = piVar8;
  }
  else {
    if (piVar8[4] == 0) {
      a5_00 = piVar8;
      piVar4 = (int *)FUN_8c112d82(ar4,piVar8,ar6,ar7);
    }
    else {
      piVar4 = (int *)piVar8[4];
    }
    piVar8[3] = (int)piStack_38;
    piStack_40 = piVar8;
    if (cVar6 == '\0') {
      piVar8[2] = (int)*(short *)((int)ar5 + 2) + *(int *)(0x1ac + ar4);
      iVar3 = FUN_8c119a18(iStack_30,piStack_2c,uStack_28,ar7);
      piVar8[1] = iVar3;
      a5_00 = piStack_2c;
      ar6 = uStack_28;
    }
  }
  piVar8 = (int *)0x0;
  for (; ar5_00 != piVar9; ar5_00 = (int *)ar5_00[1]) {
    piVar7 = (int *)ar5_00[2];
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)0x0;
      if (piVar7[2] != 0) {
        piVar8 = (int *)FUN_8c11a09e(piVar7[2],a5_00,ar6,ar7);
        iStack_24 = piVar8[3] - piVar7[3];
        *piVar8 = *piVar7 + -1;
        piVar7[2] = 0;
      }
    }
    else {
      iVar3 = FUN_8c11a014(ar4,piVar7,ar6,ar7);
      *piVar8 = *piVar8 + 1;
      iVar5 = **(int **)(iVar3 + 4) + -1;
      **(int **)(iVar3 + 4) = iVar5;
      a5_00 = piVar7;
      if (iVar5 < 1) {
        a5_00 = *(int **)(iVar3 + 4);
        FUN_8c115f18(ar4,a5_00,ar6,ar7);
      }
      *(int **)(iVar3 + 4) = piVar8;
      iVar5 = *(int *)(iVar3 + 0xc);
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + iStack_24;
      piVar8 = (int *)FUN_8c11a09e(iVar3,a5_00,ar6,ar7);
      iStack_24 = piVar8[3] - iVar5;
    }
  }
  if (piVar8 == (int *)0x0) {
    if (ar5[2] != 0) {
      iVar3 = *(int *)(uint)ar5[2] + -1;
      *(int *)(uint)ar5[2] = iVar3;
      if (iVar3 < 1) {
        FUN_8c115f18(ar4,ar5[2],ar6,ar7);
      }
      ar5[2] = 0;
    }
    *(undefined2 *)((int)ar5 + 2) = 0x7fff;
  }
  else {
    *piVar8 = *piVar8 + 1;
    iVar3 = *(int *)(uint)ar5[2] + -1;
    *(int *)(uint)ar5[2] = iVar3;
    if (iVar3 < 1) {
      FUN_8c115f18(ar4,ar5[2],ar6,ar7);
    }
    ar5[2] = (int)piVar8;
    *(short *)((int)ar5 + 2) = (short)iStack_24 + *(short *)((int)ar5 + 2);
  }
  *(int **)(0x124 + ar4) = piVar9;
  *(int **)(0x8c + ar4) = piVar4;
  return piStack_40;
}

__asm__(".globl _FUN_8c11a0e8\n.set _FUN_8c11a0e8, _FUN_8c11a0e8_def\n");
