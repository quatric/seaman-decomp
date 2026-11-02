#include "../decls.h"
int * FUN_8c119c68_def(int ar4,int ar5,uint *ar6,uint *ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *ar5_00;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uStack_84;
  uint *puStack_80;
  uint *puStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  char cStack_6c;
  int iStack_68;
  int iStack_64;
  uint *puStack_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  int iStack_50;
  uint *puStack_4c;
  uint *puStack_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_28;
  
  cStack_6c = (char)ar6;
  puStack_48 = ar7;
  ar5_00 = *(int **)(0x8c + ar4);
  piStack_78 = (int *)0x0;
  puStack_60 = (uint *)0x1;
  iStack_50 = 0;
  iStack_54 = 0;
  puStack_4c = (uint *)**(uint **)((int)&uStack_84 + (int)0x84);
  iStack_3c = 0;
  iStack_40 = 1;
  puVar6 = (undefined4 *)0x0;
  if (*(int *)(ar5 + 8) != 0) {
    uStack_34 = *(undefined4 *)(ar5 + 8);
    puVar6 = &uStack_38;
    uStack_28 = *(undefined4 *)(ar5 + 0xc);
    uStack_38 = 1;
    puStack_7c = *(uint **)(0x12c + ar4);
    iStack_68 = (int)*(short *)(ar5 + 2) + *(int *)(0x1ac + ar4);
  }
  uStack_44 = (uint)((char)ar6 == '\0');
  if (puVar6 != (undefined4 *)0x0) {
    iVar4 = puVar6[4];
    while (iVar4 != 0) {
      uVar1 = (uint)uStack_84 >> 0x10;
      uStack_84 = CONCAT22((short)uVar1,*(undefined2 *)(puVar6[4] + 2));
      uStack_84 = CONCAT22(*(undefined2 *)(puVar6[4] + 4),*(undefined2 *)(puVar6[4] + 2));
      puVar9 = (undefined4 *)puVar6[1];
      puVar7 = (undefined4 *)0x0;
      if (((uStack_44 != 0) && (puVar9[4] != 0)) &&
         (uStack_70 = CONCAT22(*(undefined2 *)(puVar9[4] + 4),*(undefined2 *)(puVar9[4] + 2)),
         *(uint *)(0x108 + ar4) <= uStack_70)) {
        iStack_3c = 1;
        puVar8 = (undefined4 *)puVar9[1];
        if ((*(ushort *)puVar8[4] & 2) == 0) {
          uStack_74 = CONCAT22(*(undefined2 *)(puVar8[4] + 4),*(undefined2 *)(puVar8[4] + 2));
          iVar5 = *(int *)(0x104 + ar4);
          iVar4 = *(int *)(0x104 + -4 + ar4);
          uStack_58 = (uint)*(ushort *)(*(int *)(uStack_74 * 8 + iVar4 + 4) * 0xc + iVar5 + 6);
          if (*(short *)(iVar5 + *(int *)(uStack_84 * 8 + iVar4 + 4) * 0xc + 8) == 0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7 = puVar8;
            if (uStack_58 == 0) {
              puVar7 = (undefined4 *)puVar8[1];
              puVar9 = puVar8;
            }
          }
        }
        else {
          puVar7 = (undefined4 *)puVar8[1];
          puVar9 = puVar8;
        }
      }
      iStack_64 = puVar9[3];
      puStack_80 = (uint *)puVar9[5];
      iStack_5c = iStack_68 - puVar9[3];
      if (iStack_40 != 0) {
        if (puStack_4c < puStack_80) {
          puStack_4c = puStack_80;
          **(int **)((int)&uStack_84 + (int)0x8c) = iStack_5c;
        }
        if (cStack_6c == '\0') {
          iStack_54 = iStack_68 -
                      (uint)*(ushort *)(0x1da + ar4) *
                      (int)*(short *)(0x1da + -0x1c + ar4);
          puStack_60 = puStack_7c;
          iStack_50 = *(int *)(*(int *)(0x1d0 + ar4) + (int)puStack_7c * 4);
        }
        iStack_40 = 0;
      }
      if (ar5_00[4] == 0) {
        piVar3 = (int *)FUN_8c112d82(ar4,ar5_00,ar6,ar7);
      }
      else {
        piVar3 = (int *)ar5_00[4];
      }
      ar5_00[4] = (int)piStack_78;
      piStack_78 = ar5_00;
      ar5_00[3] = 0;
      *ar5_00 = uStack_84;
      if (cStack_6c == '\0') {
        if (*(ushort *)puVar6[4] >> 2 == *(ushort *)(0xe2 + ar4)) {
          puStack_60 = (uint *)((int)puStack_60 - ((int)puStack_7c - (int)puStack_80));
          iStack_54 = iStack_54 - iStack_5c;
          iStack_50 = iStack_50 -
                      (*(int *)((int)puStack_7c * 4 + *(int *)(0x1d0 + ar4)) -
                      *(int *)((int)puStack_80 * 4 + *(int *)(0x1d0 + ar4)));
        }
        if ((*(ushort *)(uStack_84 * 2 + *(int *)(0xc0 + ar4)) & 0x80) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)*(short *)(0x1be + ar4);
        }
        *(undefined2 *)(ar5_00 + 5) = (*(uint*)((uchar*)&puStack_7c+0));
        iVar4 = (iStack_68 - iVar4) - iStack_64;
        ar5_00[2] = iVar4;
        ar7 = puStack_80;
        iVar4 = FUN_8c119b16(ar4,iVar4,puStack_7c,puStack_80);
        ar5_00[1] = iVar4;
        ar6 = puStack_7c;
      }
      else {
        ar6 = (uint *)puVar6[4];
        uVar2 = FUN_8c113e64(ar4,uStack_84,ar6,ar7);
        *(short *)((int)ar5_00 + 0x16) = (short)uVar2;
      }
      if (iStack_3c != 0) {
        if (puVar7 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)puVar9[1];
          if (uStack_58 == 0) {
            puStack_80 = (uint *)puVar9[5];
            iStack_64 = puVar9[3];
          }
        }
        else if (puVar7[4] != 0) {
          if ((*(ushort *)puVar7[4] & 2) != 0) {
            puStack_80 = (uint *)puVar7[5];
            iStack_64 = puVar7[3];
            puVar9 = puVar7;
          }
          puVar9 = (undefined4 *)puVar9[1];
        }
        iStack_3c = 0;
      }
      puStack_7c = puStack_80;
      iStack_68 = iStack_64;
      ar5_00 = piVar3;
      if (puVar9 == (undefined4 *)0x0) break;
      puVar6 = puVar9;
      iVar4 = puVar9[4];
    }
  }
  if (piStack_78 == (int *)0x0) {
    piVar10 = (int *)0x0;
    piVar3 = ar5_00;
  }
  else {
    if (ar5_00[4] == 0) {
      piVar3 = (int *)FUN_8c112d82(ar4,ar5_00,ar6,ar7);
    }
    else {
      piVar3 = (int *)ar5_00[4];
    }
    ar5_00[3] = (int)piStack_78;
    if ((uint)*(ushort *)(piStack_78 + 5) < *puStack_48) {
      *puStack_48 = (uint)*(ushort *)(piStack_78 + 5);
      **(int **)((int)&uStack_84 + (int)0x88) = piStack_78[2];
    }
    piVar10 = ar5_00;
    if (cStack_6c == '\0') {
      ar5_00[2] = iStack_54;
      ar5_00[1] = iStack_50;
      *(short *)(ar5_00 + 5) = (short)puStack_60;
    }
  }
  *(int **)(0x8c + ar4) = piVar3;
  **(uint **)((int)&uStack_84 + (int)0x84) = (uint)puStack_4c;
  return piVar10;
}

__asm__(".globl _FUN_8c119c68\n.set _FUN_8c119c68, _FUN_8c119c68_def\n");
