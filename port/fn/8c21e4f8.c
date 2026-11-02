#include "../decls.h"
undefined4 FUN_8c21e4f8_def(uint *ar4,int ar5,uint *ar6,int *ar7,undefined4 ain0)

{
  uint *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *unaff_r8;
  uint *unaff_r11;
  int iVar8;
  int iVar9;
  uint *unaff_r13;
  double in_dr2;
  double dVar10;
  float fVar12;
  double dVar11;
  undefined4 in_fr5;
  float in_fr13;
  undefined4 in_fr12;
  undefined8 in_dr14;
  bool bVar13;
  uint uVar14;
  char cVar15;
  char cVar16;
  uint *puStack_74;
  uint *puStack_70;
  int iStack_6c;
  uint *puStack_68;
  uint *puStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  puVar1 = _DAT_8c4ab0c4;
  cVar16 = '\0';
  cVar15 = '\0';
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
      FUN_8c21da20(*puVar1 & 0xffff,ar5,ar6,ar7);
      DAT_8c2759d8 = 1;
    }
    iStack_58 = 0;
    if (_DAT_8c4aa378 != -1) {
      unaff_r13 = _DAT_8c4ab0c4 + _DAT_8c4aa378;
    }
    if (_DAT_8c4aa37c != -1) {
      unaff_r11 = _DAT_8c4ab0c4 + _DAT_8c4aa37c;
    }
    if (_DAT_8c4aa380 != -1) {
      unaff_r8 = _DAT_8c4ab0c4 + _DAT_8c4aa380;
    }
    if (cVar16 == '\0') {
      in_fr13 = 2.1474836e+09;
    }
    if ((_DAT_8c4aad86 & 0x10) != 0) {
      iVar5 = *(int *)(_DAT_8c4aad68 + _DAT_8c4aad78 * 4);
      if (iVar5 != 0) {
        ar6 = *(uint **)(_DAT_8c4aad6c + _DAT_8c4aad78 * 4);
        if (cVar16 == '\0') {
          dVar11 = (double)CONCAT44(_DAT_8c4aad70,in_fr5);
        }
        else {
          dVar11 = (double)CONCAT44(_DAT_8c4aad74,_DAT_8c4aad70);
        }
        fVar12 = (float)((ulonglong)dVar11 >> 0x20);
        if (cVar15 == '\0') {
          bVar13 = in_fr13 < fVar12;
        }
        else {
          bVar13 = (double)CONCAT44(in_fr12,in_fr13) < dVar11;
        }
        puVar6 = (uint *)0x0;
        if (bVar13) {
          if (cVar16 == '\0') {
            dVar10 = (double)CONCAT44(0xcf800000,fVar12);
          }
          else {
            dVar10 = -3.155538209390776e-250;
          }
          if (cVar15 == '\0') {
            fVar12 = (float)((ulonglong)dVar10 >> 0x20);
            in_dr2 = (double)CONCAT44(fVar12,SUB84(dVar10,0) + fVar12);
          }
          else {
            in_dr2 = dVar10 + dVar10;
          }
        }
        else if (cVar16 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar12);
        }
        if (cVar15 == '\0') {
          uVar14 = (uint)SUB84(in_dr2,0);
          puVar7 = ar6;
        }
        else {
          uVar14 = (uint)in_dr2;
          puVar7 = ar6;
        }
        while (puStack_74 = puVar7, 1 < (uint)((int)puStack_74 - (int)puVar6)) {
          puVar7 = (uint *)((uint)((int)puStack_74 + (int)puVar6) >> 1);
          if (*(uint *)((int)puVar7 * 8 + iVar5) <= uVar14) {
            puVar6 = puVar7;
            puVar7 = puStack_74;
          }
        }
        ar7 = &iStack_34;
        FUN_8c221300(iVar5,puVar6,ar6,ar7);
        in_fr5 = SUB84(dVar11,0);
        iStack_6c = iStack_34;
        puStack_74 = (uint *)iStack_30;
        iStack_58 = 1;
      }
      _DAT_8c4aad78 = _DAT_8c4aad78 + 1;
    }
    if ((_DAT_8c4aad86 & 0x20) != 0) {
      iVar5 = *(int *)(_DAT_8c4aad68 + _DAT_8c4aad78 * 4);
      if (iVar5 != 0) {
        ar6 = *(uint **)(_DAT_8c4aad6c + _DAT_8c4aad78 * 4);
        if (cVar16 == '\0') {
          dVar11 = (double)CONCAT44(_DAT_8c4aad70,in_fr5);
        }
        else {
          dVar11 = (double)CONCAT44(_DAT_8c4aad74,_DAT_8c4aad70);
        }
        fVar12 = (float)((ulonglong)dVar11 >> 0x20);
        if (cVar15 == '\0') {
          bVar13 = in_fr13 < fVar12;
        }
        else {
          bVar13 = (double)CONCAT44(in_fr12,in_fr13) < dVar11;
        }
        puVar6 = (uint *)0x0;
        if (bVar13) {
          if (cVar16 == '\0') {
            dVar10 = (double)CONCAT44(0xcf800000,fVar12);
          }
          else {
            dVar10 = -3.155538209390776e-250;
          }
          if (cVar15 == '\0') {
            fVar12 = (float)((ulonglong)dVar10 >> 0x20);
            in_dr2 = (double)CONCAT44(fVar12,SUB84(dVar10,0) + fVar12);
          }
          else {
            in_dr2 = dVar10 + dVar10;
          }
        }
        else if (cVar16 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar12);
        }
        if (cVar15 == '\0') {
          uVar14 = (uint)SUB84(in_dr2,0);
          puVar7 = ar6;
        }
        else {
          uVar14 = (uint)in_dr2;
          puVar7 = ar6;
        }
        while (puStack_68 = puVar7, 1 < (uint)((int)puStack_68 - (int)puVar6)) {
          puVar7 = (uint *)((uint)((int)puStack_68 + (int)puVar6) >> 1);
          if (*(uint *)((int)puVar7 * 8 + iVar5) <= uVar14) {
            puVar6 = puVar7;
            puVar7 = puStack_68;
          }
        }
        ar7 = &iStack_3c;
        FUN_8c221300(iVar5,puVar6,ar6,ar7);
        in_fr5 = SUB84(dVar11,0);
        iStack_5c = iStack_3c;
        puStack_68 = (uint *)iStack_38;
        iStack_58 = iStack_58 + 2;
      }
      _DAT_8c4aad78 = _DAT_8c4aad78 + 1;
    }
    if ((_DAT_8c4aad86 & 0x4000) != 0) {
      iVar5 = *(int *)(_DAT_8c4aad68 + _DAT_8c4aad78 * 4);
      if (iVar5 != 0) {
        ar6 = *(uint **)(_DAT_8c4aad6c + _DAT_8c4aad78 * 4);
        if (cVar16 == '\0') {
          dVar11 = (double)CONCAT44(_DAT_8c4aad70,in_fr5);
        }
        else {
          dVar11 = (double)CONCAT44(_DAT_8c4aad74,_DAT_8c4aad70);
        }
        fVar12 = (float)((ulonglong)dVar11 >> 0x20);
        if (cVar15 == '\0') {
          bVar13 = in_fr13 < fVar12;
        }
        else {
          bVar13 = (double)CONCAT44(in_fr12,in_fr13) < dVar11;
        }
        puVar6 = (uint *)0x0;
        if (bVar13) {
          if (cVar16 == '\0') {
            dVar11 = (double)CONCAT44(0xcf800000,fVar12);
          }
          else {
            dVar11 = -3.155905840934326e-250;
          }
          if (cVar15 == '\0') {
            fVar12 = (float)((ulonglong)dVar11 >> 0x20);
            in_dr2 = (double)CONCAT44(fVar12,SUB84(dVar11,0) + fVar12);
          }
          else {
            in_dr2 = dVar11 + dVar11;
          }
        }
        else if (cVar16 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar12);
        }
        if (cVar15 == '\0') {
          uVar14 = (uint)SUB84(in_dr2,0);
          puVar7 = ar6;
        }
        else {
          uVar14 = (uint)in_dr2;
          puVar7 = ar6;
        }
        while (puStack_64 = puVar7, 1 < (uint)((int)puStack_64 - (int)puVar6)) {
          puVar7 = (uint *)((uint)((int)puStack_64 + (int)puVar6) >> 1);
          if (*(uint *)((int)puVar7 * 8 + iVar5) <= uVar14) {
            puVar6 = puVar7;
            puVar7 = puStack_64;
          }
        }
        ar7 = &iStack_44;
        FUN_8c22138a(iVar5,puVar6,ar6,ar7);
        puStack_64 = (uint *)iStack_44;
        iStack_60 = iStack_40;
        iStack_58 = iStack_58 + 4;
      }
      _DAT_8c4aad78 = _DAT_8c4aad78 + 1;
    }
    ar5 = _DAT_8c4aa380;
    puStack_70 = puVar3;
    if (iStack_58 == 1) {
      if (_DAT_8c4aa380 == -1) {
        if (_DAT_8c4aa37c == -1) {
          iVar5 = 0;
          iVar8 = 0;
          if (uVar4 != 0) {
            do {
              ar5 = (int)puStack_74 + iVar8 * 4;
              ar6 = unaff_r13;
              FUN_8c22158a(iStack_6c + iVar8 * 4,ar5,unaff_r13,ar7);
              iVar5 = iVar5 + 1;
              unaff_r13 = unaff_r13 + _DAT_8c4aa374;
              iVar8 = iVar8 + 3;
            } while (iVar5 < (int)uVar4);
          }
        }
        else {
          iVar5 = 0;
          iVar8 = 0;
          puVar6 = puVar3;
          if (uVar4 != 0) {
            do {
              ar5 = iVar8 * 4 + (int)puStack_74;
              ar6 = unaff_r13;
              FUN_8c22158a(iVar8 * 4 + iStack_6c,ar5,unaff_r13,ar7);
              iVar5 = iVar5 + 1;
              unaff_r13 = unaff_r13 + _DAT_8c4aa374;
              if (cVar16 == '\0') {
                *unaff_r11 = puVar6[_DAT_8c4aa37c];
                unaff_r11[1] = puVar6[_DAT_8c4aa37c + 1];
                unaff_r11[2] = puVar6[_DAT_8c4aa37c + 2];
              }
              else {
                *(undefined8 *)unaff_r11 = *(undefined8 *)(puVar6 + _DAT_8c4aa37c);
                *(undefined8 *)(unaff_r11 + 1) = *(undefined8 *)(puVar6 + _DAT_8c4aa37c + 1);
                *(undefined8 *)(unaff_r11 + 2) = *(undefined8 *)(puVar6 + _DAT_8c4aa37c + 2);
              }
              unaff_r11 = unaff_r11 + _DAT_8c4aa374;
              puVar6 = puVar6 + _DAT_8c4aa374;
              iVar8 = iVar8 + 3;
            } while (iVar5 < (int)uVar4);
          }
        }
      }
      else if (_DAT_8c4aa37c == -1) {
        iVar5 = 0;
        iVar8 = 0;
        if (uVar4 != 0) {
          do {
            ar5 = (int)puStack_74 + iVar8 * 4;
            ar6 = unaff_r13;
            FUN_8c22158a(iStack_6c + iVar8 * 4,ar5,unaff_r13,ar7);
            iVar5 = iVar5 + 1;
            unaff_r13 = unaff_r13 + _DAT_8c4aa374;
            *unaff_r8 = puStack_70[_DAT_8c4aa380];
            puStack_70 = puStack_70 + _DAT_8c4aa374;
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            iVar8 = iVar8 + 3;
          } while (iVar5 < (int)uVar4);
        }
      }
      else {
        iVar5 = 0;
        puStack_68 = (uint *)0x0;
        puVar6 = puVar3;
        if (uVar4 != 0) {
          do {
            ar5 = iVar5 * 4 + (int)puStack_74;
            ar6 = unaff_r13;
            FUN_8c22158a(iVar5 * 4 + iStack_6c,ar5,unaff_r13,ar7);
            unaff_r13 = unaff_r13 + _DAT_8c4aa374;
            if (cVar16 == '\0') {
              *unaff_r11 = puVar6[_DAT_8c4aa37c];
              unaff_r11[1] = puVar6[_DAT_8c4aa37c + 1];
              unaff_r11[2] = puVar6[_DAT_8c4aa37c + 2];
            }
            else {
              *(undefined8 *)unaff_r11 = *(undefined8 *)(puVar6 + _DAT_8c4aa37c);
              *(undefined8 *)(unaff_r11 + 1) = *(undefined8 *)(puVar6 + _DAT_8c4aa37c + 1);
              *(undefined8 *)(unaff_r11 + 2) = *(undefined8 *)(puVar6 + _DAT_8c4aa37c + 2);
            }
            unaff_r11 = unaff_r11 + _DAT_8c4aa374;
            *unaff_r8 = puStack_70[_DAT_8c4aa380];
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            puVar6 = puVar6 + _DAT_8c4aa374;
            puStack_70 = puStack_70 + _DAT_8c4aa374;
            puStack_68 = (uint *)((int)puStack_68 + 1);
            iVar5 = iVar5 + 3;
          } while ((int)puStack_68 < (int)uVar4);
        }
      }
    }
    else if (iStack_58 == 2) {
      if (_DAT_8c4aa380 == -1) {
        iVar5 = 0;
        puStack_74 = (uint *)0x0;
        puVar6 = puVar3;
        if (uVar4 != 0) {
          do {
            if (cVar16 == '\0') {
              *unaff_r13 = puVar6[_DAT_8c4aa378];
              unaff_r13[1] = puVar6[_DAT_8c4aa378 + 1];
              unaff_r13[2] = puVar6[_DAT_8c4aa378 + 2];
            }
            else {
              *(undefined8 *)unaff_r13 = *(undefined8 *)(puVar6 + _DAT_8c4aa378);
              *(undefined8 *)(unaff_r13 + 1) = *(undefined8 *)(puVar6 + _DAT_8c4aa378 + 1);
              *(undefined8 *)(unaff_r13 + 2) = *(undefined8 *)(puVar6 + _DAT_8c4aa378 + 2);
            }
            unaff_r13 = unaff_r13 + _DAT_8c4aa374;
            ar5 = iVar5 * 4 + (int)puStack_68;
            ar6 = unaff_r11;
            FUN_8c2215b4(iVar5 * 4 + iStack_5c,ar5,unaff_r11,ar7);
            puStack_74 = (uint *)((int)puStack_74 + 1);
            unaff_r11 = unaff_r11 + _DAT_8c4aa374;
            puVar6 = puVar6 + _DAT_8c4aa374;
            iVar5 = iVar5 + 3;
          } while ((int)puStack_74 < (int)uVar4);
        }
      }
      else {
        iStack_6c = 0;
        puStack_74 = (uint *)0x0;
        puVar6 = puVar3;
        if (uVar4 != 0) {
          do {
            if (cVar16 == '\0') {
              *unaff_r13 = puVar6[_DAT_8c4aa378];
              unaff_r13[1] = puVar6[_DAT_8c4aa378 + 1];
              unaff_r13[2] = puVar6[_DAT_8c4aa378 + 2];
            }
            else {
              *(undefined8 *)unaff_r13 = *(undefined8 *)(puVar6 + _DAT_8c4aa378);
              *(undefined8 *)(unaff_r13 + 1) = *(undefined8 *)(puVar6 + _DAT_8c4aa378 + 1);
              *(undefined8 *)(unaff_r13 + 2) = *(undefined8 *)(puVar6 + _DAT_8c4aa378 + 2);
            }
            unaff_r13 = unaff_r13 + _DAT_8c4aa374;
            ar5 = (int)puStack_74 * 4 + (int)puStack_68;
            ar6 = unaff_r11;
            FUN_8c2215b4((int)puStack_74 * 4 + iStack_5c,ar5,unaff_r11,ar7);
            unaff_r11 = unaff_r11 + _DAT_8c4aa374;
            *unaff_r8 = puStack_70[_DAT_8c4aa380];
            puStack_70 = puStack_70 + _DAT_8c4aa374;
            puVar6 = puVar6 + _DAT_8c4aa374;
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            iStack_6c = iStack_6c + 1;
            puStack_74 = (uint *)((int)puStack_74 + 3);
          } while (iStack_6c < (int)uVar4);
        }
      }
    }
    else if (iStack_58 == 3) {
      if (_DAT_8c4aa380 == -1) {
        iVar5 = 0;
        iVar8 = 0;
        if (uVar4 != 0) {
          do {
            FUN_8c22158a(iStack_6c + iVar8 * 4,(int)puStack_74 + iVar8 * 4,unaff_r13,ar7);
            unaff_r13 = unaff_r13 + _DAT_8c4aa374;
            ar5 = iVar8 * 4 + (int)puStack_68;
            ar6 = unaff_r11;
            FUN_8c2215b4(iVar8 * 4 + iStack_5c,ar5,unaff_r11,ar7);
            iVar5 = iVar5 + 1;
            unaff_r11 = unaff_r11 + _DAT_8c4aa374;
            iVar8 = iVar8 + 3;
          } while (iVar5 < (int)uVar4);
        }
      }
      else {
        iVar5 = 0;
        iVar8 = 0;
        if (uVar4 != 0) {
          do {
            FUN_8c22158a(iVar8 * 4 + iStack_6c,iVar8 * 4 + (int)puStack_74,unaff_r13,ar7);
            unaff_r13 = unaff_r13 + _DAT_8c4aa374;
            ar5 = iVar8 * 4 + (int)puStack_68;
            ar6 = unaff_r11;
            FUN_8c2215b4(iVar8 * 4 + iStack_5c,ar5,unaff_r11,ar7);
            iVar5 = iVar5 + 1;
            unaff_r11 = unaff_r11 + _DAT_8c4aa374;
            *unaff_r8 = puStack_70[_DAT_8c4aa380];
            puStack_70 = puStack_70 + _DAT_8c4aa374;
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            iVar8 = iVar8 + 3;
          } while (iVar5 < (int)uVar4);
        }
      }
    }
    else if (iStack_58 == 4) {
      if (_DAT_8c4aa37c == -1) {
        iVar5 = 0;
        puStack_74 = (uint *)0x0;
        if (uVar4 != 0) {
          do {
            if (cVar16 == '\0') {
              *unaff_r13 = puVar3[_DAT_8c4aa378];
              unaff_r13[1] = puVar3[_DAT_8c4aa378 + 1];
              unaff_r13[2] = puVar3[_DAT_8c4aa378 + 2];
            }
            else {
              *(undefined8 *)unaff_r13 = *(undefined8 *)(puVar3 + _DAT_8c4aa378);
              *(undefined8 *)(unaff_r13 + 1) = *(undefined8 *)(puVar3 + _DAT_8c4aa378 + 1);
              *(undefined8 *)(unaff_r13 + 2) = *(undefined8 *)(puVar3 + _DAT_8c4aa378 + 2);
            }
            unaff_r13 = unaff_r13 + _DAT_8c4aa374;
            ar5 = iStack_60 + iVar5;
            ar6 = unaff_r8;
            FUN_8c221414((int)puStack_64 + iVar5,ar5,unaff_r8,ar7);
            puStack_74 = (uint *)((int)puStack_74 + 1);
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            iVar5 = iVar5 + 4;
          } while ((int)puStack_74 < (int)uVar4);
        }
      }
      else {
        iStack_6c = 0;
        puStack_74 = (uint *)0x0;
        puVar6 = puVar3;
        if (uVar4 != 0) {
          do {
            if (cVar16 == '\0') {
              *unaff_r13 = puVar6[_DAT_8c4aa378];
              unaff_r13[1] = puVar6[_DAT_8c4aa378 + 1];
              unaff_r13[2] = puVar6[_DAT_8c4aa378 + 2];
            }
            else {
              *(undefined8 *)unaff_r13 = *(undefined8 *)(puVar6 + _DAT_8c4aa378);
              *(undefined8 *)(unaff_r13 + 1) = *(undefined8 *)(puVar6 + _DAT_8c4aa378 + 1);
              *(undefined8 *)(unaff_r13 + 2) = *(undefined8 *)(puVar6 + _DAT_8c4aa378 + 2);
            }
            unaff_r13 = unaff_r13 + _DAT_8c4aa374;
            if (cVar16 == '\0') {
              *unaff_r11 = puVar6[_DAT_8c4aa37c];
              unaff_r11[1] = puVar6[_DAT_8c4aa37c + 1];
              unaff_r11[2] = puVar6[_DAT_8c4aa37c + 2];
            }
            else {
              *(undefined8 *)unaff_r11 = *(undefined8 *)(puVar6 + _DAT_8c4aa37c);
              *(undefined8 *)(unaff_r11 + 1) = *(undefined8 *)(puVar6 + _DAT_8c4aa37c + 1);
              *(undefined8 *)(unaff_r11 + 2) = *(undefined8 *)(puVar6 + _DAT_8c4aa37c + 2);
            }
            unaff_r11 = unaff_r11 + _DAT_8c4aa374;
            ar5 = (int)puStack_74 + iStack_60;
            ar6 = unaff_r8;
            FUN_8c221414((int)puStack_74 + (int)puStack_64,ar5,unaff_r8,ar7);
            iStack_6c = iStack_6c + 1;
            puVar6 = puVar6 + _DAT_8c4aa374;
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            puStack_74 = (uint *)((int)puStack_74 + 4);
          } while (iStack_6c < (int)uVar4);
        }
      }
    }
    else if (iStack_58 == 5) {
      if (_DAT_8c4aa37c == -1) {
        iVar5 = 0;
        iVar9 = 0;
        iVar8 = 0;
        if (uVar4 != 0) {
          do {
            FUN_8c22158a(iVar8 * 4 + iStack_6c,iVar8 * 4 + (int)puStack_74,unaff_r13,ar7);
            ar5 = iStack_60 + iVar9;
            unaff_r13 = unaff_r13 + _DAT_8c4aa374;
            ar6 = unaff_r8;
            FUN_8c221414((int)puStack_64 + iVar9,ar5,unaff_r8,ar7);
            iVar5 = iVar5 + 1;
            iVar9 = iVar9 + 4;
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            iVar8 = iVar8 + 3;
          } while (iVar5 < (int)uVar4);
        }
      }
      else {
        puStack_68 = (uint *)0x0;
        iVar5 = 0;
        puStack_70 = (uint *)0x0;
        puVar6 = puVar3;
        if (uVar4 != 0) {
          do {
            FUN_8c22158a((int)puStack_70 * 4 + iStack_6c,(int)puStack_70 * 4 + (int)puStack_74,
                         unaff_r13,ar7);
            unaff_r13 = unaff_r13 + _DAT_8c4aa374;
            if (cVar16 == '\0') {
              *unaff_r11 = puVar6[_DAT_8c4aa37c];
              unaff_r11[1] = puVar6[_DAT_8c4aa37c + 1];
              unaff_r11[2] = puVar6[_DAT_8c4aa37c + 2];
            }
            else {
              *(undefined8 *)unaff_r11 = *(undefined8 *)(puVar6 + _DAT_8c4aa37c);
              *(undefined8 *)(unaff_r11 + 1) = *(undefined8 *)(puVar6 + _DAT_8c4aa37c + 1);
              *(undefined8 *)(unaff_r11 + 2) = *(undefined8 *)(puVar6 + _DAT_8c4aa37c + 2);
            }
            unaff_r11 = unaff_r11 + _DAT_8c4aa374;
            ar5 = iStack_60 + iVar5;
            ar6 = unaff_r8;
            FUN_8c221414((int)puStack_64 + iVar5,ar5,unaff_r8,ar7);
            iVar5 = iVar5 + 4;
            puStack_68 = (uint *)((int)puStack_68 + 1);
            puVar6 = puVar6 + _DAT_8c4aa374;
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            puStack_70 = (uint *)((int)puStack_70 + 3);
          } while ((int)puStack_68 < (int)uVar4);
        }
      }
    }
    else if (iStack_58 == 6) {
      puStack_70 = (uint *)0x0;
      puStack_74 = (uint *)0x0;
      iStack_6c = 0;
      puVar6 = puVar3;
      if (uVar4 != 0) {
        do {
          if (cVar16 == '\0') {
            *unaff_r13 = puVar6[_DAT_8c4aa378];
            unaff_r13[1] = puVar6[_DAT_8c4aa378 + 1];
            unaff_r13[2] = puVar6[_DAT_8c4aa378 + 2];
          }
          else {
            *(undefined8 *)unaff_r13 = *(undefined8 *)(puVar6 + _DAT_8c4aa378);
            *(undefined8 *)(unaff_r13 + 1) = *(undefined8 *)(puVar6 + _DAT_8c4aa378 + 1);
            *(undefined8 *)(unaff_r13 + 2) = *(undefined8 *)(puVar6 + _DAT_8c4aa378 + 2);
          }
          unaff_r13 = unaff_r13 + _DAT_8c4aa374;
          FUN_8c2215b4(iStack_6c * 4 + iStack_5c,iStack_6c * 4 + (int)puStack_68,unaff_r11,ar7);
          unaff_r11 = unaff_r11 + _DAT_8c4aa374;
          ar5 = (int)puStack_74 + iStack_60;
          ar6 = unaff_r8;
          FUN_8c221414((int)puStack_74 + (int)puStack_64,ar5,unaff_r8,ar7);
          puStack_70 = (uint *)((int)puStack_70 + 1);
          unaff_r8 = unaff_r8 + _DAT_8c4aa374;
          puStack_74 = (uint *)((int)puStack_74 + 4);
          iStack_6c = iStack_6c + 3;
          puVar6 = puVar6 + _DAT_8c4aa374;
        } while ((int)puStack_70 < (int)uVar4);
      }
    }
    else {
      if (iStack_58 != 7) goto LAB_8c21ee14;
      iVar8 = 0;
      puStack_70 = (uint *)0x0;
      iVar5 = 0;
      if (uVar4 != 0) {
        do {
          FUN_8c22158a(iVar8 * 4 + iStack_6c,iVar8 * 4 + (int)puStack_74,unaff_r13,ar7);
          unaff_r13 = unaff_r13 + _DAT_8c4aa374;
          FUN_8c2215b4(iVar8 * 4 + iStack_5c,iVar8 * 4 + (int)puStack_68,unaff_r11,ar7);
          ar5 = iStack_60 + iVar5;
          unaff_r11 = unaff_r11 + _DAT_8c4aa374;
          ar6 = unaff_r8;
          FUN_8c221414((int)puStack_64 + iVar5,ar5,unaff_r8,ar7);
          iVar5 = iVar5 + 4;
          puStack_70 = (uint *)((int)puStack_70 + 1);
          unaff_r8 = unaff_r8 + _DAT_8c4aa374;
          iVar8 = iVar8 + 3;
        } while ((int)puStack_70 < (int)uVar4);
      }
    }
    *(uint **)ar4[1] = puVar1;
    puVar1[_DAT_8c4aa374 * uVar4 + 2] = 0xff;
  }
LAB_8c21ee14:
  uVar2 = (*_DAT_8c4aa368)(ar4[1],ar5,ar6,ar7);
  *(uint **)ar4[1] = puVar3;
  return uVar2;
}

__asm__(".globl _FUN_8c21e4f8\n.set _FUN_8c21e4f8, _FUN_8c21e4f8_def\n");
