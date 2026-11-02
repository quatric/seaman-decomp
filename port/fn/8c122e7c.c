#include "../decls.h"
int FUN_8c122e7c_def(undefined4 *ar4,int *ar5,undefined4 ar6,uint ar7,int s0)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  ushort *a6;
  undefined4 *puVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 *puVar19;
  int *piVar20;
  int ar5_00;
  int *piStack_64;
  int *piStack_60;
  int iStack_5c;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 *puStack_4c;
  int *piStack_48;
  int iStack_44;
  int *piStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  piStack_48 = (int *)*ar4;
  ar5_00 = *piStack_48;
  piStack_40 = (int *)(0xb4 + ar5_00);
  uStack_30 = (int)piStack_40 + *(int *)(0xa4 + ar5_00) * 2 + 3U & 0xfffffffc;
  iVar9 = *(int *)(0x88 + ar5_00);
  piStack_34 = (int *)((iVar9 + 1) * 4 + uStack_30);
  puStack_4c = (undefined4 *)((int)piStack_34 + (*(int *)(0x90 + ar5_00) + 1) * 4);
  iVar6 = *(int *)(0xa8 + -0x1c + ar5_00);
  iVar11 = (*(int *)(0xa8 + ar5_00) * 2 + (int)puStack_4c + 3U & 0xfffffffc) +
           (iVar6 + 1) * 4;
  iVar6 = iVar6 + iVar9;
  iStack_44 = (*(int *)(0x94 + ar5_00) + 1) * 4 + iVar11;
  iVar18 = iVar6 + 1;
  piVar20 = (int *)(iVar6 * 2 + iStack_44 + 3U & 0xfffffffc);
  iStack_5c = 0;
  iStack_50 = *ar5;
  puVar17 = (undefined4 *)(iVar9 + ar7 + 0x80000000);
  uStack_28 = *(undefined4 *)(iStack_50 + 4);
  uStack_24 = 0;
  if ((ar7 < 0x80000000) || (*(uint *)(0x8c + ar5_00) <= ar7 + 0x80000000)) {
LAB_8c123014:
    iVar9 = (int)0x8c;
  }
  else {
    iVar6 = ar7 - 0x80000000;
    if (piStack_48[1] == 0) {
      puVar13 = &uStack_38;
      iVar9 = FUN_8c10ca58(ar5,ar6,&uStack_54,puVar13);
      if (iVar9 == 0) {
        puVar19 = (undefined4 *)(s0 + (int)puVar17);
        puVar4 = (ushort *)((int)puVar17 * 2 + iStack_44);
        for (puVar5 = puVar17; puVar5 < puVar19; puVar5 = (undefined4 *)((int)puVar5 + 1)) {
          uVar12 = (uint)(*puVar4 >> 8);
          iVar9 = FUN_8c10cb4c(uStack_54,uStack_38,uVar12,puVar13);
          if (iVar9 == 0) {
            (**(code **)(iStack_50 + 0xc))(uStack_54,&uStack_28,uVar12,puVar13);
            goto LAB_8c123014;
          }
          puVar4 = puVar4 + 1;
        }
        puVar4 = (ushort *)((int)puVar17 * 2 + iStack_44);
        for (puVar5 = puVar17; puVar5 < puVar19; puVar5 = (undefined4 *)((int)puVar5 + 1)) {
          if ((*puVar4 & 0x40) != 0) {
            (**(code **)(iStack_50 + 0xc))(uStack_54,&uStack_28,0x40,puVar13);
            goto LAB_8c123014;
          }
          puVar4 = puVar4 + 1;
        }
        (**(code **)(iStack_50 + 0xc))(uStack_54,&uStack_28,0x40,puVar13);
        iStack_2c = iVar6 * 4;
        uVar12 = 0;
        iVar9 = (*(int *)(iVar11 + (iVar6 + 1) * 4) - *(int *)(iVar11 + iStack_2c)) * 2;
        if (*(int *)(0x98 + ar5_00) != 0) {
          do {
            if ((puVar17 <= (undefined4 *)piVar20[iVar18 + uVar12]) &&
               ((undefined4 *)piVar20[iVar18 + uVar12] < puVar19)) {
              iStack_5c = iStack_5c + 1;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)(0x98 + ar5_00));
        }
        puVar10 = (uint *)(piVar20 + (int)puVar17 + 1);
        puVar1 = (uint *)(piVar20 + (int)puVar17);
        for (puVar5 = puVar17; puVar5 < puVar19; puVar5 = (undefined4 *)((int)puVar5 + 1)) {
          uVar12 = *puVar1;
          if (uVar12 < *puVar10) {
            do {
              puVar13 = (undefined4 *)piVar20[uVar12];
              if ((puVar13 < puVar17) || (puVar19 <= puVar13)) {
                iStack_5c = iStack_5c + 1;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < *puVar10);
          }
          puVar10 = puVar10 + 1;
          puVar1 = puVar1 + 1;
        }
        iVar2 = (int)0xa8;
        uVar12 = (uint)(s0 * iVar9) >> 1;
        uVar7 = *(int *)(iVar2 + -0x20 + ar5_00) + *(int *)(iVar2 + -0x1c + ar5_00);
        iStack_3c = (*(int *)(ar5_00 + 4) - (iVar9 + 0xe) * s0) + iStack_5c * -4 +
                    ((*(uint *)(iVar2 + ar5_00) & 1) + (uVar7 & 1)) * -2 +
                    ((*(uint *)(iVar2 + ar5_00) - uVar12 & 1) + (uVar7 - s0 & 1)) * 2;
        iVar2 = (**(code **)(iStack_50 + 8))(iStack_3c,&uStack_28,puVar5,puVar13);
        if (iVar2 == 0) {
          iVar9 = 1;
        }
        else {
          memmove(iVar2,ar5_00,(int)0xb4,puVar13);
          iVar9 = (int)0xb4;
          (*(code *)(&memmove))
                    (iVar2 + iVar9,piStack_40,*(int *)(0xa4 + ar5_00) << 1,puVar13);
          uVar7 = iVar2 + iVar9 + *(int *)(0xa4 + ar5_00) * 2 + 3U & 0xfffffffc;
          (*(code *)(&memmove))
                    (uVar7,uStack_30,(*(int *)(0x88 + ar5_00) + 1) * 4,puVar13);
          iVar9 = uVar7 + (*(int *)(0x88 + ar5_00) + 1) * 4;
          (*(code *)(&memmove))
                    (iVar9,piStack_34,(*(int *)(0x90 + ar5_00) + 1) * 4,puVar13);
          iVar9 = iVar9 + (*(int *)(0x90 + ar5_00) + 1) * 4;
          piStack_40 = (int *)(iStack_2c + iVar11);
          memmove(iVar9,puStack_4c,*piStack_40 << 1,puVar13);
          iVar9 = iVar9 + *piStack_40 * 2;
          piStack_34 = (int *)((iVar6 + s0) * 4 + iVar11);
          uStack_30 = *piStack_34;
          piStack_40 = (int *)(iVar6 + s0);
          (*(code *)(&memmove))
                    (iVar9,uStack_30 * 2 + (int)puStack_4c,
                     (*(int *)(iVar11 + *(int *)(0x94 + ar5_00) * 4) - uStack_30) * 2,
                     puVar13);
          uVar7 = 0;
          iVar6 = (int)0x8c;
          piVar15 = (int *)(iVar9 + (*(int *)(iVar11 + *(int *)(0x94 + ar5_00) * 4) -
                                    *piStack_34) * 2 + 3U & 0xfffffffc);
          if (*(int *)(iVar6 + ar5_00) - s0 != -1) {
            do {
              iVar9 = (*(int *)(iVar6 + ar5_00) - s0) + uVar7;
              uVar7 = uVar7 + 1;
              *piVar15 = iVar9 + 1;
              piVar15 = piVar15 + 1;
            } while (uVar7 < (*(int *)(iVar6 + ar5_00) - s0) + 1U);
          }
          memmove(piVar15,iVar11,iStack_2c,puVar13);
          piVar15 = (int *)((int)piVar15 + iStack_2c);
          piVar8 = piStack_40;
          if (piStack_40 < *(int *)(0x94 + ar5_00) + 1U) {
            do {
              iVar9 = (int)piVar8 * 4;
              piVar8 = (int *)((int)piVar8 + 1);
              iVar6 = (int)0x94;
              *piVar15 = *(int *)(iVar11 + iVar9) - uVar12;
              piVar15 = piVar15 + 1;
            } while (piVar8 < *(int *)(iVar6 + ar5_00) + 1U);
          }
          iVar11 = (int)puVar17 * 2;
          memmove(piVar15,iStack_44,iVar11,puVar13);
          (*(code *)(&memmove))
                    ((int)piVar15 + iVar11,s0 * 2 + iVar11 + iStack_44,
                     (((*(int *)(0x8c + -4 + ar5_00) + *(int *)(0x8c + ar5_00)) -
                      (int)puVar17) - s0) * 2,puVar13);
          iVar9 = (int)0x8c;
          iVar6 = 0;
          piVar8 = piVar20 + 1;
          piVar14 = (int *)((int)piVar15 + iVar11 +
                            (((*(int *)(iVar9 + -4 + ar5_00) + *(int *)(iVar9 + ar5_00)) -
                             (int)puVar17) - s0) * 2 + 3U & 0xfffffffc);
          *piVar14 = *piVar20 - s0;
          piVar14 = piVar14 + 1;
          iVar9 = (*(int *)(iVar9 + -4 + ar5_00) + *(int *)(iVar9 + ar5_00)) - s0;
          puStack_4c = (undefined4 *)0x0;
          piVar15 = piVar14;
          piStack_64 = piVar20;
          piStack_60 = piVar8;
          if (puVar17 != (undefined4 *)0x0) {
            do {
              uVar7 = *piStack_64 - *piVar20;
              if (uVar7 < (uint)(*piVar8 - *piVar20)) {
                do {
                  if ((undefined4 *)piVar20[iVar18 + uVar7] < puVar17) {
                    iVar11 = piVar20[iVar18 + uVar7];
LAB_8c1233aa:
                    piVar14[iVar9 + (uVar7 - iVar6)] = iVar11;
                  }
                  else {
                    if (puVar19 <= (undefined4 *)piVar20[iVar18 + uVar7]) {
                      iVar11 = piVar20[iVar18 + uVar7] - s0;
                      goto LAB_8c1233aa;
                    }
                    iVar6 = iVar6 + 1;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 < (uint)(*piVar8 - *piVar20));
              }
              piVar8 = piVar8 + 1;
              *piVar15 = (*piStack_60 - s0) - iVar6;
              piVar15 = piVar15 + 1;
              puStack_4c = (undefined4 *)((int)puStack_4c + 1);
              piStack_60 = piStack_60 + 1;
              piStack_64 = piStack_64 + 1;
            } while (puStack_4c < puVar17);
          }
          piVar8 = piVar20 + (int)puVar17 + 1;
          piVar16 = piVar20 + (int)puVar17;
          for (puVar13 = puVar17; puVar13 < puVar19; puVar13 = (undefined4 *)((int)puVar13 + 1)) {
            iVar3 = *piVar16;
            piVar16 = piVar16 + 1;
            iVar11 = *piVar8;
            piVar8 = piVar8 + 1;
            iVar6 = iVar6 + (iVar11 - iVar3);
          }
          puVar13 = puVar19;
          if (puVar19 < (undefined4 *)
                        (*(int *)(0x8c + -4 + ar5_00) + *(int *)(0x8c + ar5_00))) {
            do {
              uVar7 = piVar20[(int)puVar13] - *piVar20;
              if (uVar7 < (uint)(piVar20[(int)puVar13 + 1] - *piVar20)) {
                do {
                  if ((undefined4 *)piVar20[iVar18 + uVar7] < puVar17) {
                    piVar14[iVar9 + (uVar7 - iVar6)] = piVar20[iVar18 + uVar7];
                  }
                  else if ((undefined4 *)piVar20[iVar18 + uVar7] < puVar19) {
                    iVar6 = iVar6 + 1;
                  }
                  else {
                    piVar14[iVar9 + (uVar7 - iVar6)] = piVar20[iVar18 + uVar7] - s0;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 < (uint)(piVar20[(int)puVar13 + 1] - *piVar20));
              }
              iVar11 = (int)puVar13 + 1;
              puVar13 = (undefined4 *)((int)puVar13 + 1);
              iVar3 = (int)0x8c;
              *piVar15 = (piVar20[iVar11] - s0) - iVar6;
              piVar15 = piVar15 + 1;
            } while (puVar13 < (undefined4 *)
                               (*(int *)(iVar3 + -4 + ar5_00) + *(int *)(iVar3 + ar5_00)));
          }
          iVar9 = (int)0x8c;
          *(int *)(iVar2 + 4) = iStack_3c;
          *(int *)(iVar9 + iVar2) = *(int *)(iVar9 + iVar2) - s0;
          *(int *)(iVar9 + 8 + iVar2) = *(int *)(iVar9 + 8 + iVar2) - s0;
          *(int *)(iVar9 + 0xc + iVar2) = *(int *)(iVar9 + 0xc + iVar2) - iVar6;
          puVar4 = (ushort *)((int)puVar17 * 2 + iStack_44);
          a6 = puVar4;
          while (puVar17 < puVar19) {
            if ((*a6 & 1) != 0) {
              *(int *)(0x9c + iVar2) = *(int *)(0x9c + iVar2) + -1;
            }
            puVar17 = (undefined4 *)((int)puVar17 + 1);
            if ((*puVar4 & 2) != 0) {
              *(int *)(0xa0 + iVar2) = *(int *)(0xa0 + iVar2) + -1;
            }
            puVar4 = puVar4 + 1;
            a6 = a6 + 1;
          }
          *(uint *)(0xa8 + iVar2) = *(int *)(0xa8 + iVar2) - uVar12;
          if (piStack_48[2] != 0) {
            (**(code **)(iStack_50 + 0xc))(*piStack_48,&uStack_28,a6,2);
          }
          iVar9 = 0;
          *piStack_48 = iVar2;
          piStack_48[2] = 1;
        }
      }
    }
    else {
      iVar9 = 5;
    }
  }
  return iVar9;
}

__asm__(".globl _FUN_8c122e7c\n.set _FUN_8c122e7c, _FUN_8c122e7c_def\n");
