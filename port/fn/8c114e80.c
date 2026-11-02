#include "../decls.h"
undefined4 FUN_8c114e80_def(int *ar4,int ar5,undefined4 ar6,short *ar7)

{
  ushort uVar1;
  short sVar2;
  undefined4 *puVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  int *a6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ushort *puVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  ushort *puVar14;
  ushort *puVar15;
  int *a5;
  int *piVar16;
  int *piVar17;
  int *a7;
  int iVar18;
  short *psVar19;
  short *psVar20;
  int a4;
  float extraout_fr0;
  float extraout_fr0_00;
  float fVar21;
  bool bVar22;
  undefined4 uStack_54;
  int *piStack_50;
  int *piStack_4c;
  undefined4 *puStack_44;
  ushort *puStack_40;
  int *piStack_2c;
  
  a4 = *ar4;
  iVar18 = ar4[0x3a];
  uVar5 = (short)ar4[0x37] << 2 | 1;
  iVar12 = ar5;
  iVar6 = (**(code **)(ar5 + 0x10))(ar5,ar5,ar6,ar7);
  a6 = (int *)(**(code **)(ar5 + 0x14))(ar5,iVar12,ar6,ar7);
  iVar7 = (**(code **)(ar5 + 0x1c))(ar5,iVar12,ar6,ar7);
  ar4[0x51] = iVar7;
  iVar7 = (**(code **)(ar5 + 8))(ar5,iVar12,ar6,ar7);
  ar4[0x32] = iVar7;
  iVar7 = (**(code **)(ar5 + 8))(ar5,iVar12,ar6,ar7);
  iVar8 = (**(code **)(ar5 + 0xc))(ar5,iVar12,ar6,ar7);
  ar4[0xe] = iVar8 + iVar7;
  ar4[0xf] = ((iVar8 + iVar7) - 1U >> 3) + 1;
  ar4[0x2f] = iVar6 + (int)a6;
  ar4[0x42] = ar4[0xe];
  uVar9 = FUN_8c1133f6(ar4,iVar12,ar6,ar7);
  if ((uVar9 & 0xff) != 0) {
    return 1;
  }
  puVar10 = (ushort *)(**(code **)(ar5 + 0x34))(ar5,iVar12,ar6,ar7);
  ar4[0x33] = (int)puVar10;
  iVar7 = (**(code **)(ar5 + 0x38))(ar5,iVar12,ar6,ar7);
  ar4[0x34] = iVar7;
  iVar7 = (**(code **)(ar5 + 0x3c))(ar5,iVar12,ar6,ar7);
  ar4[0x35] = iVar7;
  iVar7 = (**(code **)(ar5 + 0x40))(ar5,iVar12,ar6,ar7);
  ar4[0x36] = iVar7;
  iVar7 = (**(code **)(ar5 + 0x28))(ar5,iVar12,ar6,ar7);
  piVar11 = (int *)(**(code **)(ar5 + 0x24))(ar5,iVar12,ar6,ar7);
  piVar17 = (int *)0x0;
  if (piVar11 != (int *)0x0) {
    do {
      uVar1 = *puVar10;
      puVar10 = puVar10 + 1;
      piVar17 = (int *)((int)piVar17 + 1);
      iVar7 = iVar7 + (*(int *)((uVar1 + 1) * 4 + iVar18) - *(int *)((uint)uVar1 * 4 + iVar18));
    } while (piVar17 < piVar11);
  }
  ar4[0x10] = iVar7 + (int)piVar11 * -2 + ar4[0x2f] * 3;
  iVar12 = (**(code **)(a4 + 0x10))(a4,ar4[0x51] << 2,piVar17,ar7);
  ar4[0x52] = iVar12;
  iVar12 = (**(code **)(a4 + 0x10))(a4,ar4[0xe] << 1,piVar17,ar7);
  ar4[0x70] = iVar12;
  iVar12 = (**(code **)(a4 + 0x10))(a4,(ar4[0xe] + ar4[0x2f] + 2) * 4,piVar17,ar7);
  ar4[0x11] = iVar12;
  iVar12 = (**(code **)(a4 + 0x10))(a4,ar4[0x10] << 1,piVar17,ar7);
  ar4[0x12] = iVar12;
  if ((((ar4[0x52] != 0) && (ar4[0x70] != 0)) && (ar4[0x11] != 0)) && (ar4[0x12] != 0)) {
    iVar12 = 0;
    puVar10 = (ushort *)(uint)ar4[0x12];
    uStack_54 = -1;
    bVar4 = false;
    puVar14 = (ushort *)(uint)ar4[0x33];
    a5 = (int *)(uint)ar4[0x34];
    a7 = a5 + *a5;
    puVar3 = (undefined4 *)(uint)ar4[0x11];
    piVar16 = (undefined4 *)(uint)ar4[0x11] + ar4[0xe] + 1;
    puStack_40 = puVar14;
    piStack_50 = a5;
    piStack_2c = a7;
    iVar7 = uStack_54;
    for (puVar15 = puVar14; uStack_54 = iVar7, piStack_4c = piVar16, puStack_44 = puVar3,
        puVar15 < puVar14 + (int)piVar11; puVar15 = puVar15 + 1) {
      if (puVar15 == puStack_40) {
        if (bVar4) {
          if (*(char *)((int)ar4 + 0x1e6) == '\0') {
            puVar10[-1] = puVar10[-1] | 1;
          }
          else {
            *puVar10 = uVar5;
            puVar10 = puVar10 + 1;
            iVar12 = iVar12 + 1;
          }
          (*(uint*)((uchar*)&uStack_54+0)) = (ushort)iVar7;
          *puVar10 = (ushort)uStack_54;
          (*(uint*)((uchar*)&uStack_54+2)) = (ushort)((uint)iVar7 >> 0x10);
          puVar10[1] = (*(uint*)((uchar*)&uStack_54+2));
          puVar10 = puVar10 + 2;
          iVar12 = iVar12 + 2;
        }
        else {
          bVar4 = true;
        }
        bVar22 = a7 == piStack_2c;
        a7 = a7 + 1;
        if (bVar22) {
          piStack_50 = piStack_50 + 1;
          uStack_54 = iVar7 + 1;
          piStack_2c = (int *)(*piStack_50 * 4 + ar4[0x34]);
          puStack_44 = puVar3 + 1;
          *puVar3 = piVar16;
        }
        puStack_40 = puVar14 + *a7;
        piStack_4c = piVar16 + 1;
        *piVar16 = iVar12;
      }
      piVar16 = (int *)((uint)*puVar15 * 4 + iVar18);
      piVar17 = (int *)(piVar16[1] * 2 + iVar18);
      for (a5 = (int *)(*piVar16 * 2 + iVar18 + 4); a5 < piVar17; a5 = (int *)((int)a5 + 2)) {
        iVar12 = iVar12 + 1;
        *puVar10 = (short)*a5 << 2;
        puVar10 = puVar10 + 1;
      }
      puVar3 = puStack_44;
      piVar16 = piStack_4c;
      iVar7 = uStack_54;
    }
    psVar19 = (short *)(uint)ar4[0x35];
    iVar7 = (**(code **)(ar5 + 0x28))(ar5,a5,piVar17,a7);
    ar7 = psVar19 + iVar7;
    piVar11 = (int *)(uint)ar4[0x36];
    piVar16 = piVar11 + *piVar11;
    piVar17 = piVar16;
    psVar20 = psVar19;
    puStack_40 = (ushort *)psVar19;
    do {
      if ((ushort *)psVar20 == puStack_40) {
        if (bVar4) {
          if (*(char *)((int)ar4 + 0x1e6) == '\0') {
            puVar10[-1] = puVar10[-1] | 1;
          }
          else {
            *puVar10 = uVar5;
            puVar10 = puVar10 + 1;
            iVar12 = iVar12 + 1;
          }
          *puVar10 = (ushort)uStack_54;
          puVar10[1] = (*(uint*)((uchar*)&uStack_54+2));
          puVar10 = puVar10 + 2;
          iVar12 = iVar12 + 2;
        }
        else {
          bVar4 = true;
        }
        bVar22 = piVar16 == piVar17;
        piVar16 = piVar16 + 1;
        if (bVar22) {
          piVar11 = piVar11 + 1;
          uStack_54 = uStack_54 + 1;
          piVar17 = (int *)(*piVar11 * 4 + ar4[0x36]);
          *puStack_44 = piStack_4c;
          puStack_44 = puStack_44 + 1;
        }
        puStack_40 = (ushort *)(psVar19 + *piVar16);
        *piStack_4c = iVar12;
        piStack_4c = piStack_4c + 1;
        if (psVar20 == ar7) goto LAB_8c115274;
      }
      sVar2 = *psVar20;
      psVar20 = psVar20 + 1;
      iVar12 = iVar12 + 1;
      *puVar10 = sVar2 << 2;
      puVar10 = puVar10 + 1;
    } while( true );
  }
LAB_8c115402:
  uVar13 = FUN_8c1204c4(ar4,0x71,piVar17,ar7);
  return uVar13;
LAB_8c115274:
  iVar12 = (**(code **)(a4 + 0x10))(a4,ar4[0x2f] * 0xc,piVar17,ar7);
  ar4[0x41] = iVar12;
  FUN_8c114d30(ar4,iVar6,a6,ar7);
  iVar12 = (**(code **)(ar5 + 0x48))(ar5,iVar6,a6,ar7);
  ar4[0x24] = iVar12;
  iVar12 = (**(code **)(ar5 + 0x44))(ar5,iVar6,a6,ar7);
  ar4[0x30] = iVar12;
  *(undefined1 *)(ar4 + 0x31) = 0;
  uVar13 = (**(code **)(ar5 + 0x30))(ar5,iVar6,a6,ar7);
  *(char *)((int)ar4 + 0xf9) = (char)uVar13;
  if (*(char *)((int)ar4 + 0xf9) == '\0') {
    FUN_8c120550(ar4,0xf,a6,ar7);
    piVar17 = a6;
    fVar21 = extraout_fr0;
  }
  else {
    FUN_8c120550(ar4,0x17,a6,ar7);
    piVar17 = a6;
    fVar21 = extraout_fr0_00;
  }
  FUN_8c112b1c(ar4,(int)fVar21,piVar17,ar7);
  iVar12 = 0;
  uVar9 = 0;
  if (ar4[0xe] != 0) {
    do {
      if ((*(ushort *)(uVar9 * 2 + ar4[0x30]) & 1) != 0) {
        iVar6 = iVar12 * 4;
        iVar12 = iVar12 + 1;
        *(uint *)(ar4[0x52] + iVar6) = uVar9;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)ar4[0xe]);
  }
  iVar12 = (**(code **)(a4 + 0x10))(a4,(ar4[0xe] + 1) * 4,piVar17,ar7);
  ar4[0x26] = iVar12;
  iVar12 = (**(code **)(a4 + 0x10))(a4,ar4[0xf],piVar17,ar7);
  ar4[0x25] = iVar12;
  iVar12 = (**(code **)(a4 + 0x10))
                     (a4,(((int *)(uint)ar4[0x24])[ar4[0xe]] - *(int *)(uint)ar4[0x24]) * 4,piVar17,ar7);
  ar4[0x27] = iVar12;
  if (((ar4[0x26] != 0) && (ar4[0x25] != 0)) && (ar4[0x27] != 0)) {
    uVar9 = 0;
    if (ar4[0xf] != 1) {
      do {
        *(undefined1 *)(ar4[0x25] + uVar9) = 0xff;
        uVar9 = uVar9 + 1;
      } while (uVar9 < ar4[0xf] - 1U);
    }
    uVar13 = 7;
    iVar6 = 0xff << (8 - (ar4[0xe] & 7U) & 7);
    *(char *)(ar4[0x25] + uVar9) = (char)iVar6;
    FUN_8c113ac8(ar4,iVar6,7,ar7);
    iVar12 = ((int *)(uint)ar4[0x26])[ar4[0xe]] - *(int *)(uint)ar4[0x26];
    if (iVar12 < 0) {
      iVar12 = iVar12 + 3;
    }
    ar4[0x2d] = iVar12 >> 2;
    if ((((code *)(uint)ar4[0x4c] != FUN_8c11617a) ||
        (uVar9 = FUN_8c1155a0(ar4,iVar6,uVar13,ar7), (uVar9 & 0xff) == 0)) &&
       (((code *)(uint)ar4[0x4c] != FUN_8c117bac ||
        (uVar9 = FUN_8c115732(ar4,iVar6,uVar13,ar7), (uVar9 & 0xff) == 0)))) {
      iVar12 = ar4[0x50];
      uVar9 = FUN_8c112a20(ar4,iVar12,uVar13,ar7);
      if (((uVar9 & 0xff) == 0) &&
         (uVar9 = FUN_8c11372e(ar4,iVar12,uVar13,ar7), (uVar9 & 0xff) == 0)) {
        if (*(char *)((int)ar4 + 0xf9) == '\0') {
          if ((char)ar4[0x3e] == '\0') {
            ar4[0x69] = (int)FUN_8c11abf0;
            *(undefined1 *)(ar4 + 0x76) = 1;
          }
          else {
            ar4[0x69] = (int)FUN_8c11ac4c;
            *(undefined1 *)(ar4 + 0x76) = 0;
            FUN_8c113b54(ar4,iVar12,uVar13,ar7);
          }
        }
        else {
          ar4[0x69] = (int)FUN_8c11ad68;
          *(undefined1 *)(ar4 + 0x76) = 1;
          FUN_8c113b54(ar4,iVar12,uVar13,ar7);
        }
        return 0;
      }
    }
    return 1;
  }
  goto LAB_8c115402;
}

__asm__(".globl _FUN_8c114e80\n.set _FUN_8c114e80, _FUN_8c114e80_def\n");
