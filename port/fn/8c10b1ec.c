#include "../decls.h"
undefined4 FUN_8c10b1ec_def(int *ar4,int *ar5,undefined4 *ar6,int *ar7)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int a4;
  int iVar11;
  int iVar12;
  int iVar13;
  int iStack_64;
  int iStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *piStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int *piStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  piStack_2c = (int *)0x0;
  piStack_30 = (int *)0x0;
  puStack_34 = (undefined4 *)0x0;
  iVar13 = *ar5;
  uStack_28 = *(undefined4 *)(iVar13 + 4);
  uStack_24 = 0;
  if (ar5[1] != 0) {
    uStack_24 = *(undefined4 *)(ar5[1] + 8);
  }
  piVar5 = ar5;
  piVar3 = (int *)FUN_8c11eb6c(*(undefined4 *)(uint)ar5[1],ar5,ar6,ar7);
  a4 = *piVar3;
  iVar4 = FUN_8c10afbe(a4,piVar5,ar6,ar7);
  uVar1 = 0x80;
  iVar6 = *ar4;
  puStack_58 = (undefined4 *)0x0;
  piStack_44 = (int *)0x0;
  iVar12 = 0;
  piStack_3c = ar7;
  puStack_38 = (undefined4 *)(uint)ar4[1];
  if (0 < iVar6) {
    do {
      piStack_3c = (int *)*puStack_38;
      iStack_64 = 0;
      iVar11 = 0;
      piStack_4c = (int *)puStack_38[5];
      if (0 < (int)piStack_3c) {
        do {
          iVar9 = 0;
          iVar8 = *piStack_4c;
          ar6 = (undefined4 *)0x0;
          iStack_60 = piStack_4c[3];
          if (0 < iVar8) {
            do {
              ar6 = (undefined4 *)((int)ar6 + 1);
              if ((*(ushort *)(iVar4 + *(int *)(iStack_60 + 8) * 2) & 0x80) == 0) {
                iVar9 = iVar9 + 1;
              }
              iStack_60 = iStack_60 + 0xc;
            } while ((int)ar6 < iVar8);
          }
          iVar12 = (iVar12 + iVar8) - iVar9;
          if (iVar9 == iVar8) {
            iStack_64 = iStack_64 + 1;
          }
          iVar11 = iVar11 + 1;
          piStack_4c = piStack_4c + 4;
        } while (iVar11 < (int)piStack_3c);
      }
      puStack_58 = (undefined4 *)((int)piStack_3c + ((int)puStack_58 - iStack_64));
      piStack_44 = (int *)((int)piStack_44 + 1);
      puStack_38 = puStack_38 + 6;
    } while ((int)piStack_44 < iVar6);
  }
  piVar5 = (int *)(**(code **)(iVar13 + 8))(0xc,&uStack_28,ar6,piStack_3c);
  if (piVar5 != (int *)0x0) {
    if (iVar6 < 1) {
LAB_8c10b3fc:
      *piVar5 = *ar4;
      piVar5[1] = (int)piStack_2c;
      piStack_4c = (int *)0x0;
      puStack_58 = ar6;
      piVar3 = piStack_30;
      puStack_5c = puStack_34;
      piStack_44 = (int *)(uint)ar4[1];
      piVar2 = piStack_2c;
      if (0 < iVar6) {
        do {
          piStack_3c = piVar2;
          piStack_48 = (int *)piStack_44[5];
          iVar12 = *piStack_44;
          *piStack_3c = iVar12;
          piStack_3c[1] = piStack_44[1];
          piStack_3c[2] = piStack_44[2];
          piStack_3c[3] = piStack_44[3];
          piStack_3c[4] = piStack_44[4];
          piStack_3c[5] = (int)piVar3;
          iStack_60 = 0;
          if (0 < iVar12) {
            do {
              puVar7 = (undefined4 *)piStack_48[3];
              iVar8 = *piStack_48;
              *piVar3 = iVar8;
              piVar3[1] = piStack_48[1];
              piVar3[2] = piStack_48[2];
              piVar3[3] = (int)puStack_5c;
              iVar11 = 0;
              if (0 < iVar8) {
                do {
                  puStack_58 = puVar7;
                  uVar10 = puStack_58[2];
                  if ((*(ushort *)(iVar4 + uVar10 * 2) & uVar1) == 0) {
                    *piVar3 = *piVar3 + -1;
                  }
                  else {
                    if (*(uint *)(0x88 + a4) <= uVar10) {
                      puStack_58[2] = (uVar10 - *(int *)(0x88 + a4)) + 0x80000000;
                    }
                    *puStack_5c = *puStack_58;
                    puStack_5c[1] = puStack_58[1];
                    puStack_5c[2] = puStack_58[2];
                    puStack_5c = puStack_5c + 3;
                  }
                  iVar11 = iVar11 + 1;
                  puVar7 = puStack_58 + 3;
                } while (iVar11 < iVar8);
              }
              if (*piVar3 == 0) {
                *piStack_3c = *piStack_3c + -1;
              }
              else {
                piVar3 = piVar3 + 4;
              }
              iStack_60 = iStack_60 + 1;
              piStack_48 = piStack_48 + 4;
            } while (iStack_60 < iVar12);
          }
          piStack_4c = (int *)((int)piStack_4c + 1);
          piStack_44 = piStack_44 + 6;
          piVar2 = piStack_3c + 6;
        } while ((int)piStack_4c < iVar6);
      }
      uVar10 = (**(code **)(ar5[1] + 0xc))(piVar5,&uStack_28,puStack_58,piStack_3c);
      (**(code **)(iVar13 + 0xc))(piVar5,&uStack_28,puStack_58,piStack_3c);
      if (piStack_2c != (int *)0x0) {
        (**(code **)(iVar13 + 0xc))(piStack_2c,&uStack_28,puStack_58,piStack_3c);
      }
      if (piStack_30 != (int *)0x0) {
        (**(code **)(iVar13 + 0xc))(piStack_30,&uStack_28,puStack_58,piStack_3c);
      }
      if (puStack_34 == (undefined4 *)0x0) {
        return uVar10 & 0xff;
      }
      (**(code **)(iVar13 + 0xc))(puStack_34,&uStack_28,puStack_58,piStack_3c);
      return uVar10 & 0xff;
    }
    piStack_2c = (int *)(**(code **)(iVar13 + 8))(iVar6 * 0x18,&uStack_28,ar6,piStack_3c);
    if (piStack_2c == (int *)0x0) {
      (**(code **)(iVar13 + 0xc))(piVar5,&uStack_28,ar6,piStack_3c);
    }
    else {
      piStack_30 = (int *)(**(code **)(iVar13 + 8))
                                    (((int)puStack_58 + 1) * 0x10,&uStack_28,ar6,piStack_3c);
      if (piStack_30 == (int *)0x0) {
        (**(code **)(iVar13 + 0xc))(piVar5,&uStack_28,ar6,piStack_3c);
        (**(code **)(iVar13 + 0xc))(piStack_2c,&uStack_28,ar6,piStack_3c);
      }
      else {
        if ((iVar12 == 0) ||
           (puStack_34 = (undefined4 *)
                         (**(code **)(iVar13 + 8))(iVar12 * 0xc,&uStack_28,ar6,piStack_3c),
           puStack_34 != (undefined4 *)0x0)) goto LAB_8c10b3fc;
        (**(code **)(iVar13 + 0xc))(piVar5,&uStack_28,ar6,piStack_3c);
        (**(code **)(iVar13 + 0xc))(piStack_2c,&uStack_28,ar6,piStack_3c);
        (**(code **)(iVar13 + 0xc))(piStack_30,&uStack_28,ar6,piStack_3c);
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c10b1ec\n.set _FUN_8c10b1ec, _FUN_8c10b1ec_def\n");
