#include "../decls.h"
undefined4 FUN_8c21ee94_def(uint *ar4,uint *ar5,uint *ar6,uint **ar7,undefined4 ain0)

{
  uint *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *unaff_r11;
  uint *unaff_r12;
  int iVar7;
  undefined4 extraout_fr0;
  double in_dr2;
  double dVar8;
  float fVar9;
  undefined4 in_fr5;
  double dVar10;
  undefined8 in_dr14;
  double dVar11;
  bool bVar12;
  uint uVar13;
  char cVar14;
  char cVar15;
  uint *puStack_5c;
  int iStack_58;
  uint *puStack_54;
  int iStack_50;
  int iStack_4c;
  uint *puStack_38;
  int iStack_34;
  uint *puStack_30;
  int iStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  puVar1 = _DAT_8c4ab0c4;
  cVar15 = '\0';
  cVar14 = '\0';
  uStack_20 = (undefined4)in_dr14;
  uStack_24 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (ar4[1] == 0) {
    return ain0;
  }
  if ((*ar4 & 8) != 0) {
    return *ar4;
  }
  puVar3 = *(uint **)ar4[1];
  if ((puVar3 != (uint *)0x0) && (_DAT_8c4aad84 != 0)) {
    *_DAT_8c4ab0c4 = *puVar3;
    uVar4 = puVar3[1];
    puVar1[1] = uVar4;
    uVar4 = uVar4 >> 0x10;
    if (DAT_8c2759d8 == 0) {
      FUN_8c21ee54(*puVar1 & 0xffff,ar5,ar6,ar7);
      DAT_8c2759d8 = 1;
    }
    iStack_58 = 0;
    if (_DAT_8c4aa378 != -1) {
      unaff_r12 = _DAT_8c4ab0c4 + _DAT_8c4aa378;
    }
    if (_DAT_8c4aa37c != (uint *)0xffffffff) {
      unaff_r11 = _DAT_8c4ab0c4 + (int)_DAT_8c4aa37c;
    }
    if (cVar15 == '\0') {
      dVar11 = (double)CONCAT44(0x4f000000,(int)in_dr14);
    }
    else {
      dVar11 = -1.8630120701277013e-249;
    }
    ar5 = _DAT_8c4aa37c;
    if ((_DAT_8c4aad86 & 0x10) != 0) {
      iVar5 = *(int *)(_DAT_8c4aad68 + _DAT_8c4aad78 * 4);
      if (iVar5 != 0) {
        ar6 = *(uint **)(_DAT_8c4aad6c + _DAT_8c4aad78 * 4);
        if (cVar15 == '\0') {
          dVar10 = (double)CONCAT44(_DAT_8c4aad70,in_fr5);
        }
        else {
          dVar10 = (double)CONCAT44(_DAT_8c4aad74,_DAT_8c4aad70);
        }
        fVar9 = (float)((ulonglong)dVar10 >> 0x20);
        if (cVar14 == '\0') {
          bVar12 = (float)((ulonglong)dVar11 >> 0x20) < fVar9;
        }
        else {
          bVar12 = dVar11 < dVar10;
        }
        ar5 = (uint *)0x0;
        if (bVar12) {
          if (cVar15 == '\0') {
            dVar8 = (double)CONCAT44(0xcf800000,fVar9);
          }
          else {
            dVar8 = -3.155538209390776e-250;
          }
          if (cVar14 == '\0') {
            fVar9 = (float)((ulonglong)dVar8 >> 0x20);
            in_dr2 = (double)CONCAT44(fVar9,SUB84(dVar8,0) + fVar9);
          }
          else {
            in_dr2 = dVar8 + dVar8;
          }
        }
        else if (cVar15 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
        }
        if (cVar14 == '\0') {
          uVar13 = (uint)SUB84(in_dr2,0);
          puVar6 = ar6;
        }
        else {
          uVar13 = (uint)in_dr2;
          puVar6 = ar6;
        }
        while (puStack_5c = puVar6, 1 < (uint)((int)puStack_5c - (int)ar5)) {
          puVar6 = (uint *)((uint)((int)puStack_5c + (int)ar5) >> 1);
          if (*(uint *)((int)puVar6 * 8 + iVar5) <= uVar13) {
            ar5 = puVar6;
            puVar6 = puStack_5c;
          }
        }
        ar7 = &puStack_30;
        FUN_8c221300(iVar5,ar5,ar6,ar7);
        in_fr5 = SUB84(dVar10,0);
        if (cVar15 == '\0') {
          dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),extraout_fr0);
        }
        puStack_54 = puStack_30;
        iStack_4c = iStack_2c;
        iStack_58 = 1;
      }
      _DAT_8c4aad78 = _DAT_8c4aad78 + 1;
    }
    if ((_DAT_8c4aad86 & 0x20) != 0) {
      ar5 = (uint *)(_DAT_8c4aad78 * 4);
      iVar5 = *(int *)(_DAT_8c4aad68 + (int)ar5);
      if (iVar5 != 0) {
        ar6 = *(uint **)(_DAT_8c4aad6c + (int)ar5);
        if (cVar15 == '\0') {
          dVar10 = (double)CONCAT44(_DAT_8c4aad70,in_fr5);
        }
        else {
          dVar10 = (double)CONCAT44(_DAT_8c4aad74,_DAT_8c4aad70);
        }
        fVar9 = (float)((ulonglong)dVar10 >> 0x20);
        if (cVar14 == '\0') {
          bVar12 = (float)((ulonglong)dVar11 >> 0x20) < fVar9;
        }
        else {
          bVar12 = dVar11 < dVar10;
        }
        ar5 = (uint *)0x0;
        if (bVar12) {
          if (cVar15 == '\0') {
            dVar11 = (double)CONCAT44(0xcf800000,fVar9);
          }
          else {
            dVar11 = -3.155538209390776e-250;
          }
          if (cVar14 == '\0') {
            fVar9 = (float)((ulonglong)dVar11 >> 0x20);
            in_dr2 = (double)CONCAT44(fVar9,SUB84(dVar11,0) + fVar9);
          }
          else {
            in_dr2 = dVar11 + dVar11;
          }
        }
        else if (cVar15 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
        }
        if (cVar14 == '\0') {
          uVar13 = (uint)SUB84(in_dr2,0);
          puVar6 = ar6;
        }
        else {
          uVar13 = (uint)in_dr2;
          puVar6 = ar6;
        }
        while (puStack_5c = puVar6, 1 < (uint)((int)puStack_5c - (int)ar5)) {
          puVar6 = (uint *)((uint)((int)puStack_5c + (int)ar5) >> 1);
          if (*(uint *)((int)puVar6 * 8 + iVar5) <= uVar13) {
            ar5 = puVar6;
            puVar6 = puStack_5c;
          }
        }
        ar7 = &puStack_38;
        FUN_8c221300(iVar5,ar5,ar6,ar7);
        puStack_5c = puStack_38;
        iStack_50 = iStack_34;
        iStack_58 = iStack_58 + 2;
      }
      _DAT_8c4aad78 = _DAT_8c4aad78 + 1;
    }
    if (iStack_58 == 1) {
      iStack_58 = 0;
      puStack_5c = (uint *)0x0;
      puVar6 = puVar3;
      if (uVar4 != 0) {
        do {
          ar5 = (uint *)((int)puStack_5c * 4 + iStack_4c);
          ar6 = unaff_r12;
          FUN_8c22158a(puStack_54 + (int)puStack_5c,ar5,unaff_r12,ar7);
          unaff_r12 = unaff_r12 + _DAT_8c4aa374;
          if (cVar15 == '\0') {
            *unaff_r11 = puVar6[(int)_DAT_8c4aa37c];
            unaff_r11[1] = puVar6[(int)_DAT_8c4aa37c + 1];
            unaff_r11[2] = puVar6[(int)_DAT_8c4aa37c + 2];
          }
          else {
            *(undefined8 *)unaff_r11 = *(undefined8 *)(puVar6 + (int)_DAT_8c4aa37c);
            *(undefined8 *)(unaff_r11 + 1) = *(undefined8 *)(puVar6 + (int)_DAT_8c4aa37c + 1);
            *(undefined8 *)(unaff_r11 + 2) = *(undefined8 *)(puVar6 + (int)_DAT_8c4aa37c + 2);
          }
          iStack_58 = iStack_58 + 1;
          unaff_r11 = unaff_r11 + _DAT_8c4aa374;
          puVar6 = puVar6 + _DAT_8c4aa374;
          puStack_5c = (uint *)((int)puStack_5c + 3);
        } while (iStack_58 < (int)uVar4);
      }
    }
    else if (iStack_58 == 2) {
      iVar5 = 0;
      iVar7 = 0;
      puVar6 = puVar3;
      if (uVar4 != 0) {
        do {
          if (cVar15 == '\0') {
            *unaff_r12 = puVar6[_DAT_8c4aa378];
            unaff_r12[1] = puVar6[_DAT_8c4aa378 + 1];
            unaff_r12[2] = puVar6[_DAT_8c4aa378 + 2];
          }
          else {
            *(undefined8 *)unaff_r12 = *(undefined8 *)(puVar6 + _DAT_8c4aa378);
            *(undefined8 *)(unaff_r12 + 1) = *(undefined8 *)(puVar6 + _DAT_8c4aa378 + 1);
            *(undefined8 *)(unaff_r12 + 2) = *(undefined8 *)(puVar6 + _DAT_8c4aa378 + 2);
          }
          unaff_r12 = unaff_r12 + _DAT_8c4aa374;
          ar5 = (uint *)(iVar7 * 4 + iStack_50);
          ar6 = unaff_r11;
          FUN_8c2215b4(puStack_5c + iVar7,ar5,unaff_r11,ar7);
          iVar5 = iVar5 + 1;
          unaff_r11 = unaff_r11 + _DAT_8c4aa374;
          puVar6 = puVar6 + _DAT_8c4aa374;
          iVar7 = iVar7 + 3;
        } while (iVar5 < (int)uVar4);
      }
    }
    else {
      if (iStack_58 != 3) goto LAB_8c21f1c8;
      iVar5 = 0;
      iVar7 = 0;
      if (uVar4 != 0) {
        do {
          FUN_8c22158a(puStack_54 + iVar7,iVar7 * 4 + iStack_4c,unaff_r12,ar7);
          unaff_r12 = unaff_r12 + _DAT_8c4aa374;
          ar5 = (uint *)(iVar7 * 4 + iStack_50);
          ar6 = unaff_r11;
          FUN_8c2215b4(puStack_5c + iVar7,ar5,unaff_r11,ar7);
          iVar5 = iVar5 + 1;
          unaff_r11 = unaff_r11 + _DAT_8c4aa374;
          iVar7 = iVar7 + 3;
        } while (iVar5 < (int)uVar4);
      }
    }
    *(uint **)ar4[1] = puVar1;
    puVar1[_DAT_8c4aa374 * uVar4 + 2] = 0xff;
  }
LAB_8c21f1c8:
  uVar2 = (*_DAT_8c4aa368)(ar4[1],ar5,ar6,ar7);
  *(uint **)ar4[1] = puVar3;
  return uVar2;
}

__asm__(".globl _FUN_8c21ee94\n.set _FUN_8c21ee94, _FUN_8c21ee94_def\n");
