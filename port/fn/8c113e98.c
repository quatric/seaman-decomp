#include "../decls.h"
undefined4 FUN_8c113e98_def(int *ar4,int ar5,undefined4 ar6,uint ar7)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  short *psVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  ushort *puVar19;
  int *ar7_00;
  int *piVar20;
  int a4;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  uint *puStack_8c;
  short *psStack_88;
  int *piStack_84;
  int *piStack_7c;
  int *piStack_74;
  int *piStack_70;
  int iStack_6c;
  int *piStack_68;
  int *piStack_64;
  int iStack_60;
  ushort *puStack_5c;
  int *piStack_58;
  uint *puStack_54;
  int *piStack_50;
  int iStack_4c;
  int iStack_48;
  short *psStack_44;
  int iStack_40;
  int *piStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int iStack_24;
  
  puStack_5c = (ushort *)(uint)ar4[0x41];
  iVar21 = 0;
  uVar22 = 0;
  piVar20 = (int *)(uint)ar4[0x11];
  puStack_54 = (uint *)*piVar20;
  a4 = *ar4;
  iStack_34 = 0;
  iStack_40 = 0;
  iStack_38 = ar4[0x3b];
  iVar12 = ar4[0x3c];
  iStack_4c = 0;
  iStack_60 = 0;
  piStack_30 = (int *)(uint)ar4[0x12];
  uVar8 = 1;
  uVar7 = 0;
  for (iVar17 = ar5; iVar17 != 0; iVar17 = *(int *)(iVar17 + 0x10)) {
    iStack_34 = iStack_34 + 1;
    for (piVar16 = *(int **)(iVar17 + 0xc); piVar16 != (int *)0x0; piVar16 = (int *)piVar16[4]) {
      iVar13 = piVar20[*piVar16 + 1] - piVar20[*piVar16];
      if (iVar13 < 0) {
        iVar13 = iVar13 + 3;
      }
      uVar14 = iVar13 >> 2;
      iVar21 = iVar21 + uVar14;
      if (uVar22 < uVar14) {
        uVar22 = uVar14;
      }
    }
  }
  iVar13 = (**(code **)(a4 + 0x10))(a4,(iVar21 + 1) * 0xc,0,ar7);
  iVar21 = (**(code **)(a4 + 0x10))(a4,iVar21 * uVar22 * 6,iVar17,ar7);
  *(undefined2 *)(iVar13 + 8) = 0xffff;
  do {
    if (ar5 == 0) {
      for (uVar5 = *(ushort *)(iVar13 + 8); uVar5 != 0xffff;
          uVar5 = *(ushort *)((uint)uVar5 * 6 + iVar21 + 2)) {
        iStack_40 = iStack_40 + 1;
      }
      piVar10 = (int *)(uVar8 - 1);
      piStack_50 = (int *)(iVar13 + 0xc);
      iStack_6c = (uint)uVar7 - iStack_40;
      piVar15 = piStack_50;
      piVar16 = piStack_50;
      piVar20 = piVar10;
      piStack_84 = piVar10;
      for (piVar24 = (int *)0x1; piVar24 <= piVar10; piVar24 = (int *)((int)piVar24 + 1)) {
        uVar22 = (uint)*(ushort *)(piVar16 + 2);
        if (uVar22 != 0) {
          iStack_4c = iStack_4c + (uint)puStack_5c[piVar15[1] * 6 + 2];
          uVar7 = puStack_5c[piVar15[1] * 6 + 4];
          while (uVar22 != 0xffff) {
            uVar8 = puStack_5c
                    [*(int *)((uint)*(ushort *)(uVar22 * 6 + iVar21) * 0xc + iVar13 + 4) * 6 + 3] +
                    uVar7 * (short)ar4[0x3d];
            puVar19 = (ushort *)((uint)uVar8 * 2 + iVar12);
            iVar17 = (uint)*(ushort *)((uint)puVar19[1] * 2 + iVar12) -
                     (uint)*(ushort *)((uint)*puVar19 * 2 + iVar12);
            if (iVar17 == 0) {
              uVar8 = 0xffff;
            }
            else {
              iStack_4c = iStack_4c + iVar17;
              piStack_84 = (int *)((int)piStack_84 + 1);
              iStack_6c = iStack_6c + 1;
              puVar19 = (ushort *)((uint)uVar8 * 2 + iVar12);
              piVar20 = (int *)((int)piVar20 + ((uint)puVar19[1] - (uint)*puVar19));
            }
            iVar17 = uVar22 * 6 + iVar21;
            *(ushort *)(iVar17 + 4) = uVar8;
            uVar22 = (uint)*(ushort *)(iVar17 + 2);
          }
        }
        piVar16 = piVar16 + 3;
        piVar15 = piVar15 + 3;
      }
      piStack_64 = piVar10;
      piStack_74 = (int *)(**(code **)(a4 + 0x10))(a4,((int)piStack_84 + 1U) * 4,piVar15,piVar16);
      piStack_2c = piStack_74;
      puStack_54 = (uint *)(**(code **)(a4 + 0x10))(a4,iStack_6c << 2,piVar15,piVar16);
      puVar19 = (ushort *)0x2;
      psStack_88 = (short *)(**(code **)(a4 + 0x14))(a4,piStack_84,2,piVar16);
      psStack_44 = psStack_88;
      iVar17 = (**(code **)(a4 + 0x10))(a4,(int)piStack_84 << 1,puVar19,piVar16);
      ar4[0x70] = iVar17;
      piStack_70 = (int *)(**(code **)(a4 + 0x10))
                                    (a4,((int)piStack_84 + (int)piVar20 + 2) * 4,puVar19,piVar16);
      piStack_68 = piStack_70 + (int)piStack_84 + 1;
      piStack_58 = piStack_70;
      iStack_48 = (**(code **)(a4 + 0x10))(a4,((int)piVar20 * 2 + iStack_4c) * 2,puVar19,piVar16);
      iStack_24 = iStack_48;
      piVar20 = (int *)(**(code **)(a4 + 0x10))(a4,iStack_40 << 2,puVar19,piVar16);
      piStack_28 = piVar20;
      piVar15 = (int *)(**(code **)(a4 + 0x10))(a4,(int)piStack_84 << 3,puVar19,piVar16);
      ar4[0x40] = (int)piVar15;
      iStack_60 = 0;
      uVar7 = *(ushort *)(iVar13 + 8);
      while (uVar7 != 0xffff) {
        puVar19 = (ushort *)((uint)uVar7 * 6 + iVar21);
        piVar16 = (int *)(uint)*puVar19;
        *piVar20 = (int)piVar16 + -1;
        psStack_88[(int)piVar16 + -1] = 1;
        piVar20 = piVar20 + 1;
        uVar7 = puVar19[1];
      }
      puStack_8c = puStack_54;
      piVar20 = piStack_50;
      for (piStack_3c = (int *)0x1; piStack_3c <= piVar10; piStack_3c = (int *)((int)piStack_3c + 1)
          ) {
        iStack_4c = CONCAT22((*(uint*)((uchar*)&iStack_4c+2)),*(undefined2 *)(ar4[0x30] + *piVar20 * 2));
        uVar7 = *(ushort *)(piVar20 + 2);
        *piVar15 = *piVar20;
        uVar22 = (uint)uVar7;
        piVar15[1] = piVar20[1];
        piVar15 = piVar15 + 2;
        *piStack_74 = (int)puStack_8c;
        *piStack_68 = iStack_60;
        *piStack_70 = (int)piStack_68;
        puVar19 = (ushort *)&iStack_48;
        piVar16 = piStack_30;
        piStack_68 = piStack_68 + 1;
        FUN_8c113dfa(puStack_5c + piVar20[1] * 6,&iStack_60,puVar19,piStack_30);
        if (uVar22 != 0) {
          if (uVar22 == 0xffff) {
            *psStack_88 = 2;
          }
          else if (*psStack_88 != 1) {
            *psStack_88 = (short)iStack_4c;
          }
          psStack_88 = psStack_88 + 1;
          piVar24 = piStack_64;
          for (; piStack_64 = piVar24, uVar22 != 0xffff;
              uVar22 = (uint)*(ushort *)(uVar22 * 6 + iVar21 + 2)) {
            if (*(short *)(uVar22 * 6 + iVar21 + 4) == -1) {
              *puStack_8c = *(ushort *)(uVar22 * 6 + iVar21) - 1;
            }
            else {
              piStack_64 = (int *)((int)piVar24 + 1);
              *puStack_8c = (uint)piVar24;
            }
            puStack_8c = puStack_8c + 1;
            piVar24 = piStack_64;
          }
        }
        piVar20 = piVar20 + 3;
        piStack_74 = piStack_74 + 1;
        piStack_70 = piStack_70 + 1;
      }
      *piStack_74 = (int)puStack_8c;
      *piStack_70 = (int)piStack_68;
      piVar24 = piStack_50;
      piStack_74 = piStack_74 + 1;
      piStack_70 = piStack_70 + 1;
      piStack_64 = piVar10;
      for (piStack_7c = (int *)0x1; piStack_7c <= piVar10; piStack_7c = (int *)((int)piStack_7c + 1)
          ) {
        uVar22 = (uint)*(ushort *)(piVar24 + 2);
        puVar1 = puStack_8c;
        piVar2 = piStack_74;
        piVar3 = piStack_70;
        ar7_00 = piStack_64;
        if (uVar22 != 0) {
          for (; puStack_8c = puVar1, piStack_74 = piVar2, piStack_70 = piVar3, piStack_64 = ar7_00,
              uVar22 != 0xffff; uVar22 = (uint)*(ushort *)(uVar22 * 6 + iVar21 + 2)) {
            uVar7 = *(ushort *)(uVar22 * 6 + iVar21 + 4);
            piVar20 = (int *)CONCAT22((short)((uint)piVar20 >> 0x10),uVar7);
            if (uVar7 != 0xffff) {
              *piVar15 = -1;
              piVar15[1] = -1;
              piVar15 = piVar15 + 2;
              puStack_5c = (ushort *)((uint)uVar7 * 2 + iVar12);
              puVar19 = (ushort *)&iStack_48;
              piStack_64 = (int *)((int)ar7_00 + 1);
              FUN_8c113d68(&piStack_68,&iStack_60,puVar19,ar7_00,(uint)*puStack_5c * 2 + iVar12,
                           (uint)puStack_5c[1] * 2 + iVar12,iStack_38,piVar20);
              piStack_70 = piVar3 + 1;
              *piVar3 = (int)piStack_68;
              puStack_8c = puVar1 + 1;
              *puVar1 = *(ushort *)(uVar22 * 6 + iVar21) - 1;
              piStack_74 = piVar2 + 1;
              *piVar2 = (int)puStack_8c;
              piVar16 = ar7_00;
            }
            puVar1 = puStack_8c;
            piVar2 = piStack_74;
            piVar3 = piStack_70;
            ar7_00 = piStack_64;
          }
        }
        piVar24 = piVar24 + 3;
      }
      *piStack_68 = iStack_60;
      uVar22 = ar4[0x56];
      if (uVar22 < (uint)(iStack_34 * 0x14)) {
        uVar22 = iStack_34 * 0x14;
      }
      ar4[0x56] = uVar22;
      ar4[0x42] = (int)piVar10;
      ar4[0x51] = iStack_40;
      ar4[0xe] = (int)piStack_84;
      ar4[0x11] = (int)piStack_58;
      ar4[0x12] = iStack_24;
      ar4[0x30] = (int)psStack_44;
      ar4[0x26] = (int)piStack_2c;
      ar4[0x27] = (int)puStack_54;
      ar4[0x2d] = iStack_6c;
      piStack_68 = piStack_68 + 1;
      FUN_8c112b1c(ar4,(int)*(short *)((int)ar4 + 0x1be),puVar19,piVar16);
      ar4[0x52] = (int)piStack_28;
      (**(code **)(a4 + 0x18))(a4,iVar13,puVar19,piVar16);
      (**(code **)(a4 + 0x18))(a4,iVar21,puVar19,piVar16);
      if ((((code *)(uint)ar4[0x4c] == FUN_8c11617a) &&
          (uVar22 = FUN_8c1155a0(ar4,iVar21,puVar19,piVar16), (uVar22 & 0xff) != 0)) ||
         (((code *)(uint)ar4[0x4c] == FUN_8c117bac &&
          (uVar22 = FUN_8c115732(ar4,iVar21,puVar19,piVar16), (uVar22 & 0xff) != 0)))) {
        uVar11 = 1;
      }
      else {
        *(undefined1 *)(ar4 + 0x1f) = 1;
        uVar11 = 0;
      }
      return uVar11;
    }
    piStack_70 = (int *)0x0;
    piStack_84 = (int *)0x0;
    piVar16 = *(int **)(ar5 + 0xc);
    uVar22 = 0;
    if (piVar16 != (int *)0x0) {
      do {
        if (piVar16 == (int *)0x0) break;
        piStack_84 = (int *)*piVar16;
        uVar5 = *(ushort *)(uVar22 * 0xc + iVar13 + 8);
        iVar17 = piVar20[(int)piStack_84] - (int)puStack_54;
        if (iVar17 < 0) {
          iVar17 = iVar17 + 3;
        }
        piStack_70 = (int *)(iVar17 >> 2);
        while (uVar14 = (uint)uVar5, uVar14 != 0xffff) {
          if ((int *)*(int *)((uint)*(ushort *)(uVar14 * 6 + iVar21) * 0xc + iVar13 + 4) ==
              piStack_70) {
            uVar22 = (uint)*(ushort *)(uVar14 * 6 + iVar21);
            piVar16 = (int *)piVar16[4];
            goto LAB_8c11405a;
          }
          uVar5 = *(ushort *)(uVar14 * 6 + iVar21 + 2);
        }
        if (uVar22 == 0) {
          ar7 = 1;
        }
        else {
          iVar17 = piVar20[*(int *)(uVar22 * 0xc + iVar13) + 1] -
                   piVar20[*(int *)(uVar22 * 0xc + iVar13)];
          if (iVar17 < 0) {
            iVar17 = iVar17 + 3;
          }
          ar7 = iVar17 >> 2;
        }
LAB_8c11405a:
      } while (uVar14 != 0xffff);
      uVar5 = *(ushort *)(uVar22 * 0xc + iVar13 + 8);
      uVar14 = ar7;
      while( true ) {
        iVar17 = piVar20[(int)piStack_84 + 1] - piVar20[(int)piStack_84];
        if (iVar17 < 0) {
          iVar17 = iVar17 + 3;
        }
        ar7 = iVar17 >> 2;
        psStack_44 = (short *)(ar7 - 1);
        piStack_58 = (int *)(uint)uVar8;
        uVar18 = 0;
        uVar4 = uVar7;
        if (ar7 != 0) {
          do {
            psVar9 = (short *)((uint)uVar4 * 6 + iVar21);
            uVar7 = uVar5;
            for (piStack_7c = (int *)0x0; piStack_7c < uVar14;
                piStack_7c = (int *)((int)piStack_7c + 1)) {
              *psVar9 = uVar8 + (short)uVar18;
              uVar6 = uVar7;
              if (uVar5 == 0xffff) {
                uVar6 = 0xffff;
              }
              psVar9[1] = uVar6;
              uVar7 = uVar7 + 1;
              psVar9 = psVar9 + 3;
            }
            if ((short *)uVar18 == psStack_44) {
              for (uVar23 = 0; uVar23 < uVar14; uVar23 = uVar23 + 1) {
                *(ushort *)((uVar23 + uVar22) * 0xc + iVar13 + 8) = uVar4 + (short)uVar23;
              }
            }
            uVar7 = uVar4 + (short)uVar14;
            piVar15 = (int *)(((int)piStack_58 + uVar18) * 0xc + iVar13);
            piVar15[1] = (int)piStack_70 + uVar18;
            uVar18 = uVar18 + 1;
            *piVar15 = (int)piStack_84;
            uVar5 = uVar4;
            uVar4 = uVar7;
          } while (uVar18 < ar7);
        }
        (*(uint*)((uchar*)&psStack_88+0)) = (short)ar7;
        uVar8 = (short)psStack_88 + uVar8;
        piVar16 = (int *)piVar16[4];
        if (piVar16 == (int *)0x0) break;
        piStack_84 = (int *)*piVar16;
        iVar17 = piVar20[(int)piStack_84] - (int)puStack_54;
        if (iVar17 < 0) {
          iVar17 = iVar17 + 3;
        }
        piStack_70 = (int *)(iVar17 >> 2);
        uVar5 = 0xffff;
        uVar22 = (uint)piStack_58;
        uVar14 = ar7;
      }
      uVar14 = 0;
      uVar22 = (uint)piStack_58;
      if (ar7 != 0) {
        do {
          iVar17 = uVar22 * 0xc;
          uVar22 = uVar22 + 1;
          uVar14 = uVar14 + 1;
          *(undefined2 *)(iVar17 + iVar13 + 8) = 0xffff;
        } while (uVar14 < ar7);
      }
    }
    ar5 = *(int *)(ar5 + 0x10);
  } while( true );
}

__asm__(".globl _FUN_8c113e98\n.set _FUN_8c113e98, _FUN_8c113e98_def\n");
