#include "../decls.h"
undefined4 * FUN_8c21f2ae_def(uint *ar4,undefined4 ar5,undefined4 ar6,int *ar7,undefined4 *ain0)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *unaff_r8;
  int iVar10;
  int iVar11;
  undefined8 *unaff_r11;
  undefined8 *unaff_r13;
  double in_dr2;
  double dVar12;
  float fVar14;
  double dVar13;
  float fVar15;
  undefined4 in_fr5;
  undefined4 in_fr12;
  undefined8 in_dr14;
  bool bVar16;
  uint uVar17;
  char cVar18;
  char cVar19;
  uint uStack_84;
  undefined4 *puStack_80;
  int iStack_7c;
  uint uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 *puStack_60;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  puVar1 = _DAT_8c4aa360;
  cVar19 = '\0';
  cVar18 = '\0';
  uStack_20 = (undefined4)in_dr14;
  uStack_24 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  _DAT_8c4aa364 = 0;
  if ((((ar4[1] != 0) && (ain0 = (undefined4 *)*ar4, ((uint)ain0 & 8) == 0)) &&
      (puVar4 = *(undefined4 **)ar4[1], puVar4 != (undefined4 *)0x0)) && (_DAT_8c4aad84 != 0)) {
    *_DAT_8c4aa360 = *puVar4;
    uVar3 = puVar4[1];
    puVar1[1] = uVar3;
    puStack_60 = (undefined4 *)0x0;
    uVar3 = uVar3 >> 0x10;
    if (_DAT_8c4aa378 != -1) {
      unaff_r13 = (undefined8 *)(_DAT_8c4aa360 + _DAT_8c4aa378);
    }
    if (_DAT_8c4aa37c != (undefined4 *)0xffffffff) {
      unaff_r11 = (undefined8 *)(_DAT_8c4aa360 + (int)_DAT_8c4aa37c);
    }
    if (_DAT_8c4aa380 != (undefined4 *)0xffffffff) {
      unaff_r8 = _DAT_8c4aa360 + (int)_DAT_8c4aa380;
    }
    fVar15 = 2.1474836e+09;
    if ((_DAT_8c4aad86 & 0x10) != 0) {
      iVar5 = *(int *)(_DAT_8c4aad68 + _DAT_8c4aad78 * 4);
      if (iVar5 != 0) {
        uVar7 = *(uint *)(_DAT_8c4aad6c + _DAT_8c4aad78 * 4);
        if (_DAT_8c4aad70 <= 2.1474836e+09) {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),_DAT_8c4aad70);
        }
        else {
          in_dr2 = (double)CONCAT44(0xcf800000,_DAT_8c4aad70 + -4.2949673e+09);
        }
        uVar6 = 0;
        uVar2 = uVar7;
        while (uStack_84 = uVar2, 1 < uStack_84 - uVar6) {
          uVar2 = uStack_84 + uVar6 >> 1;
          if (*(uint *)(uVar2 * 8 + iVar5) <= (uint)(int)SUB84(in_dr2,0)) {
            uVar6 = uVar2;
            uVar2 = uStack_84;
          }
        }
        ar7 = &iStack_3c;
        FUN_8c22123c(iVar5,uVar6,uVar7,ar7);
        iStack_74 = iStack_3c;
        iStack_6c = iStack_38;
        iStack_7c = iStack_34;
        uStack_84 = iStack_30;
        puStack_60 = (undefined4 *)0x1;
      }
      _DAT_8c4aad78 = _DAT_8c4aad78 + 1;
    }
    if ((_DAT_8c4aad86 & 0x20) != 0) {
      iVar5 = *(int *)(_DAT_8c4aad68 + _DAT_8c4aad78 * 4);
      if (iVar5 != 0) {
        uVar7 = *(uint *)(_DAT_8c4aad6c + _DAT_8c4aad78 * 4);
        if (cVar19 == '\0') {
          dVar13 = (double)CONCAT44(_DAT_8c4aad70,in_fr5);
        }
        else {
          dVar13 = (double)CONCAT44(_DAT_8c4aad74,_DAT_8c4aad70);
        }
        fVar14 = (float)((ulonglong)dVar13 >> 0x20);
        if (cVar18 == '\0') {
          bVar16 = fVar15 < fVar14;
        }
        else {
          bVar16 = (double)CONCAT44(in_fr12,fVar15) < dVar13;
        }
        uVar6 = 0;
        if (bVar16) {
          if (cVar19 == '\0') {
            dVar12 = (double)CONCAT44(0xcf800000,fVar14);
          }
          else {
            dVar12 = -3.1550160660390674e-250;
          }
          if (cVar18 == '\0') {
            fVar14 = (float)((ulonglong)dVar12 >> 0x20);
            in_dr2 = (double)CONCAT44(fVar14,SUB84(dVar12,0) + fVar14);
          }
          else {
            in_dr2 = dVar12 + dVar12;
          }
        }
        else if (cVar19 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar14);
        }
        uVar2 = uVar7;
        if (cVar18 == '\0') {
          uVar17 = (uint)SUB84(in_dr2,0);
        }
        else {
          uVar17 = (uint)in_dr2;
        }
        while (uStack_78 = uVar2, 1 < uStack_78 - uVar6) {
          uVar2 = uStack_78 + uVar6 >> 1;
          if (*(uint *)(uVar2 * 8 + iVar5) <= uVar17) {
            uVar6 = uVar2;
            uVar2 = uStack_78;
          }
        }
        ar7 = &iStack_4c;
        FUN_8c221300(iVar5,uVar6,uVar7,ar7);
        in_fr5 = SUB84(dVar13,0);
        uStack_78 = iStack_4c;
        iStack_68 = iStack_48;
        puStack_60 = (undefined4 *)((int)puStack_60 + 2);
      }
      _DAT_8c4aad78 = _DAT_8c4aad78 + 1;
    }
    if ((_DAT_8c4aad86 & 0x4000) != 0) {
      iVar5 = *(int *)(_DAT_8c4aad68 + _DAT_8c4aad78 * 4);
      if (iVar5 != 0) {
        uVar7 = *(uint *)(_DAT_8c4aad6c + _DAT_8c4aad78 * 4);
        if (cVar19 == '\0') {
          dVar13 = (double)CONCAT44(_DAT_8c4aad70,in_fr5);
        }
        else {
          dVar13 = (double)CONCAT44(_DAT_8c4aad74,_DAT_8c4aad70);
        }
        uVar6 = 0;
        fVar14 = (float)((ulonglong)dVar13 >> 0x20);
        if (cVar18 == '\0') {
          bVar16 = fVar15 < fVar14;
        }
        else {
          bVar16 = (double)CONCAT44(in_fr12,fVar15) < dVar13;
        }
        if (bVar16) {
          if (cVar19 == '\0') {
            dVar13 = (double)CONCAT44(0xcf800000,fVar14);
          }
          else {
            dVar13 = -3.155905840934326e-250;
          }
          if (cVar18 == '\0') {
            fVar15 = (float)((ulonglong)dVar13 >> 0x20);
            in_dr2 = (double)CONCAT44(fVar15,SUB84(dVar13,0) + fVar15);
          }
          else {
            in_dr2 = dVar13 + dVar13;
          }
        }
        else if (cVar19 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar14);
        }
        uVar2 = uVar7;
        if (cVar18 == '\0') {
          uVar17 = (uint)SUB84(in_dr2,0);
        }
        else {
          uVar17 = (uint)in_dr2;
        }
        while (uVar8 = uVar2, 1 < uVar8 - uVar6) {
          uVar2 = uVar6 + uVar8 >> 1;
          if (*(uint *)(uVar2 * 8 + iVar5) <= uVar17) {
            uVar6 = uVar2;
            uVar2 = uVar8;
          }
        }
        ar7 = &iStack_54;
        FUN_8c22138a(iVar5,uVar6,uVar7,ar7);
        iStack_70 = iStack_54;
        iStack_64 = iStack_50;
        puStack_60 = puStack_60 + 1;
      }
      _DAT_8c4aad78 = _DAT_8c4aad78 + 1;
    }
    ain0 = puStack_60;
    _DAT_8c4aa364 = 1;
    puStack_80 = puVar4;
    if (puStack_60 == (undefined4 *)0x1) {
      if (_DAT_8c4aa380 == (undefined4 *)0xffffffff) {
        if (_DAT_8c4aa37c == (undefined4 *)0xffffffff) {
          iVar5 = 0;
          iVar9 = 0;
          ain0 = _DAT_8c4aa37c;
          if (uVar3 != 0) {
            do {
              iVar10 = iVar9 * 4;
              ain0 = (undefined4 *)
                     FUN_8c221622(iStack_74 + iVar10,iStack_6c + iVar10,iStack_7c + iVar10,
                                  uStack_84 + iVar10,unaff_r13);
              iVar5 = iVar5 + 1;
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              iVar9 = iVar9 + 3;
            } while (iVar5 < (int)uVar3);
          }
        }
        else {
          iVar5 = 0;
          puStack_80 = (undefined4 *)0x0;
          ain0 = (undefined4 *)0x0;
          if (uVar3 != 0) {
            do {
              iVar9 = iVar5 * 4;
              FUN_8c221622(iStack_74 + iVar9,iStack_6c + iVar9,iStack_7c + iVar9,uStack_84 + iVar9,
                           unaff_r13);
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              if (cVar19 == '\0') {
                *(undefined4 *)unaff_r11 = puVar4[(int)_DAT_8c4aa37c];
                *(undefined4 *)((int)unaff_r11 + 4) = puVar4[(int)_DAT_8c4aa37c + 1];
              }
              else {
                *unaff_r11 = *(undefined8 *)(puVar4 + (int)_DAT_8c4aa37c);
                *(undefined8 *)((int)unaff_r11 + 4) =
                     *(undefined8 *)(puVar4 + (int)_DAT_8c4aa37c + 1);
              }
              if (cVar19 == '\0') {
                *(undefined4 *)(unaff_r11 + 1) = puVar4[(int)_DAT_8c4aa37c + 2];
              }
              else {
                unaff_r11[1] = *(undefined8 *)(puVar4 + (int)_DAT_8c4aa37c + 2);
              }
              puStack_80 = (undefined4 *)((int)puStack_80 + 1);
              puVar4 = puVar4 + _DAT_8c4aa374;
              unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
              iVar5 = iVar5 + 3;
              ain0 = (undefined4 *)0x8;
            } while ((int)puStack_80 < (int)uVar3);
          }
        }
      }
      else if (_DAT_8c4aa37c == (undefined4 *)0xffffffff) {
        iVar5 = 0;
        iVar9 = 0;
        ain0 = _DAT_8c4aa37c;
        if (uVar3 != 0) {
          do {
            iVar10 = iVar9 * 4;
            FUN_8c221622(iStack_74 + iVar10,iStack_6c + iVar10,iStack_7c + iVar10,uStack_84 + iVar10
                         ,unaff_r13);
            iVar5 = iVar5 + 1;
            unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            *unaff_r8 = puStack_80[(int)_DAT_8c4aa380];
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            iVar9 = iVar9 + 3;
            ain0 = puStack_80;
            puStack_80 = puStack_80 + _DAT_8c4aa374;
          } while (iVar5 < (int)uVar3);
        }
      }
      else {
        iVar5 = 0;
        iStack_68 = 0;
        ain0 = _DAT_8c4aa37c;
        if (uVar3 != 0) {
          do {
            iVar9 = iVar5 * 4;
            FUN_8c221622(iVar9 + iStack_74,iVar9 + iStack_6c,iVar9 + iStack_7c,iVar9 + uStack_84,
                         unaff_r13);
            unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            if (cVar19 == '\0') {
              *(undefined4 *)unaff_r11 = puVar4[(int)_DAT_8c4aa37c];
              *(undefined4 *)((int)unaff_r11 + 4) = puVar4[(int)_DAT_8c4aa37c + 1];
              *(undefined4 *)(unaff_r11 + 1) = puVar4[(int)_DAT_8c4aa37c + 2];
            }
            else {
              *unaff_r11 = *(undefined8 *)(puVar4 + (int)_DAT_8c4aa37c);
              *(undefined8 *)((int)unaff_r11 + 4) = *(undefined8 *)(puVar4 + (int)_DAT_8c4aa37c + 1)
              ;
              unaff_r11[1] = *(undefined8 *)(puVar4 + (int)_DAT_8c4aa37c + 2);
            }
            unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
            *unaff_r8 = puStack_80[(int)_DAT_8c4aa380];
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            puVar4 = puVar4 + _DAT_8c4aa374;
            iStack_68 = iStack_68 + 1;
            iVar5 = iVar5 + 3;
            ain0 = puStack_80;
            puStack_80 = puStack_80 + _DAT_8c4aa374;
          } while (iStack_68 < (int)uVar3);
        }
      }
    }
    else if (puStack_60 == (undefined4 *)0x2) {
      if (_DAT_8c4aa380 == (undefined4 *)0xffffffff) {
        iVar5 = 0;
        uStack_84 = 0;
        ain0 = _DAT_8c4aa380;
        if (uVar3 != 0) {
          do {
            if (cVar19 == '\0') {
              *(undefined4 *)unaff_r13 = puVar4[_DAT_8c4aa378];
              *(undefined4 *)((int)unaff_r13 + 4) = puVar4[_DAT_8c4aa378 + 1];
              *(undefined4 *)(unaff_r13 + 1) = puVar4[_DAT_8c4aa378 + 2];
            }
            else {
              *unaff_r13 = *(undefined8 *)(puVar4 + _DAT_8c4aa378);
              *(undefined8 *)((int)unaff_r13 + 4) = *(undefined8 *)(puVar4 + _DAT_8c4aa378 + 1);
              unaff_r13[1] = *(undefined8 *)(puVar4 + _DAT_8c4aa378 + 2);
            }
            unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            ain0 = (undefined4 *)
                   FUN_8c2215b4(iVar5 * 4 + uStack_78,iVar5 * 4 + iStack_68,unaff_r11,ar7);
            uStack_84 = uStack_84 + 1;
            unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
            puVar4 = puVar4 + _DAT_8c4aa374;
            iVar5 = iVar5 + 3;
          } while ((int)uStack_84 < (int)uVar3);
        }
      }
      else {
        ain0 = (undefined4 *)0x0;
        iStack_7c = 0;
        uStack_84 = 0;
        if (uVar3 != 0) {
          do {
            if (cVar19 == '\0') {
              *(undefined4 *)unaff_r13 = puVar4[_DAT_8c4aa378];
              *(undefined4 *)((int)unaff_r13 + 4) = puVar4[_DAT_8c4aa378 + 1];
              *(undefined4 *)(unaff_r13 + 1) = puVar4[_DAT_8c4aa378 + 2];
            }
            else {
              *unaff_r13 = *(undefined8 *)(puVar4 + _DAT_8c4aa378);
              *(undefined8 *)((int)unaff_r13 + 4) = *(undefined8 *)(puVar4 + _DAT_8c4aa378 + 1);
              unaff_r13[1] = *(undefined8 *)(puVar4 + _DAT_8c4aa378 + 2);
            }
            unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            FUN_8c2215b4(uStack_84 * 4 + uStack_78,uStack_84 * 4 + iStack_68,unaff_r11,ar7);
            unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
            *unaff_r8 = puStack_80[(int)_DAT_8c4aa380];
            puVar4 = puVar4 + _DAT_8c4aa374;
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            iStack_7c = iStack_7c + 1;
            uStack_84 = uStack_84 + 3;
            ain0 = puStack_80;
            puStack_80 = puStack_80 + _DAT_8c4aa374;
          } while (iStack_7c < (int)uVar3);
        }
      }
    }
    else if (puStack_60 == (undefined4 *)0x3) {
      if (_DAT_8c4aa380 == (undefined4 *)0xffffffff) {
        iVar5 = 0;
        iVar9 = 0;
        ain0 = _DAT_8c4aa380;
        if (uVar3 != 0) {
          do {
            iVar11 = iVar9 * 4;
            iVar10 = uStack_84 + iVar11;
            FUN_8c221622(iStack_74 + iVar11,iStack_6c + iVar11,iStack_7c + iVar11,iVar10,unaff_r13);
            unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            ain0 = (undefined4 *)
                   FUN_8c2215b4(uStack_78 + iVar9 * 4,iStack_68 + iVar9 * 4,unaff_r11,iVar10);
            iVar5 = iVar5 + 1;
            unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
            iVar9 = iVar9 + 3;
          } while (iVar5 < (int)uVar3);
        }
      }
      else {
        ain0 = (undefined4 *)0x0;
        iVar5 = 0;
        iStack_70 = 0;
        if (uVar3 != 0) {
          do {
            iVar10 = iVar5 * 4;
            iVar9 = uStack_84 + iVar10;
            FUN_8c221622(iStack_74 + iVar10,iStack_6c + iVar10,iStack_7c + iVar10,iVar9,unaff_r13);
            unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            FUN_8c2215b4(uStack_78 + iVar5 * 4,iStack_68 + iVar5 * 4,unaff_r11,iVar9);
            unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
            *unaff_r8 = puStack_80[(int)_DAT_8c4aa380];
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            iStack_70 = iStack_70 + 1;
            iVar5 = iVar5 + 3;
            ain0 = puStack_80;
            puStack_80 = puStack_80 + _DAT_8c4aa374;
          } while (iStack_70 < (int)uVar3);
        }
      }
    }
    else if (puStack_60 == (undefined4 *)0x4) {
      if (_DAT_8c4aa37c == (undefined4 *)0xffffffff) {
        iVar5 = 0;
        uStack_84 = 0;
        ain0 = _DAT_8c4aa37c;
        if (uVar3 != 0) {
          do {
            if (cVar19 == '\0') {
              *(undefined4 *)unaff_r13 = puVar4[_DAT_8c4aa378];
              *(undefined4 *)((int)unaff_r13 + 4) = puVar4[_DAT_8c4aa378 + 1];
              *(undefined4 *)(unaff_r13 + 1) = puVar4[_DAT_8c4aa378 + 2];
            }
            else {
              *unaff_r13 = *(undefined8 *)(puVar4 + _DAT_8c4aa378);
              *(undefined8 *)((int)unaff_r13 + 4) = *(undefined8 *)(puVar4 + _DAT_8c4aa378 + 1);
              unaff_r13[1] = *(undefined8 *)(puVar4 + _DAT_8c4aa378 + 2);
            }
            unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            ain0 = (undefined4 *)FUN_8c221414(iStack_70 + iVar5,iStack_64 + iVar5,unaff_r8,ar7);
            uStack_84 = uStack_84 + 1;
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            puVar4 = puVar4 + _DAT_8c4aa374;
            iVar5 = iVar5 + 4;
          } while ((int)uStack_84 < (int)uVar3);
        }
      }
      else {
        ain0 = (undefined4 *)0x0;
        iStack_7c = 0;
        uStack_84 = 0;
        if (uVar3 != 0) {
          do {
            if (cVar19 == '\0') {
              *(undefined4 *)unaff_r13 = puVar4[_DAT_8c4aa378];
              *(undefined4 *)((int)unaff_r13 + 4) = puVar4[_DAT_8c4aa378 + 1];
              *(undefined4 *)(unaff_r13 + 1) = puVar4[_DAT_8c4aa378 + 2];
            }
            else {
              *unaff_r13 = *(undefined8 *)(puVar4 + _DAT_8c4aa378);
              *(undefined8 *)((int)unaff_r13 + 4) = *(undefined8 *)(puVar4 + _DAT_8c4aa378 + 1);
              unaff_r13[1] = *(undefined8 *)(puVar4 + _DAT_8c4aa378 + 2);
            }
            unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            if (cVar19 == '\0') {
              *(undefined4 *)unaff_r11 = puVar4[(int)_DAT_8c4aa37c];
              *(undefined4 *)((int)unaff_r11 + 4) = puVar4[(int)_DAT_8c4aa37c + 1];
              *(undefined4 *)(unaff_r11 + 1) = puVar4[(int)_DAT_8c4aa37c + 2];
            }
            else {
              *unaff_r11 = *(undefined8 *)(puVar4 + (int)_DAT_8c4aa37c);
              *(undefined8 *)((int)unaff_r11 + 4) = *(undefined8 *)(puVar4 + (int)_DAT_8c4aa37c + 1)
              ;
              unaff_r11[1] = *(undefined8 *)(puVar4 + (int)_DAT_8c4aa37c + 2);
            }
            unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
            ain0 = (undefined4 *)
                   FUN_8c221414(uStack_84 + iStack_70,uStack_84 + iStack_64,unaff_r8,ar7);
            iStack_7c = iStack_7c + 1;
            puVar4 = puVar4 + _DAT_8c4aa374;
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            uStack_84 = uStack_84 + 4;
          } while (iStack_7c < (int)uVar3);
        }
      }
    }
    else if (puStack_60 == (undefined4 *)0x5) {
      if (_DAT_8c4aa37c == (undefined4 *)0xffffffff) {
        iVar5 = 0;
        puStack_80 = (undefined4 *)0x0;
        iVar9 = 0;
        ain0 = _DAT_8c4aa37c;
        if (uVar3 != 0) {
          do {
            iVar11 = iVar5 * 4;
            iVar10 = uStack_84 + iVar11;
            FUN_8c221622(iStack_74 + iVar11,iStack_6c + iVar11,iStack_7c + iVar11,iVar10,unaff_r13);
            unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            ain0 = (undefined4 *)FUN_8c221414(iStack_70 + iVar9,iStack_64 + iVar9,unaff_r8,iVar10);
            iVar9 = iVar9 + 4;
            puStack_80 = (undefined4 *)((int)puStack_80 + 1);
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            iVar5 = iVar5 + 3;
          } while ((int)puStack_80 < (int)uVar3);
        }
      }
      else {
        iStack_68 = 0;
        iVar5 = 0;
        uStack_78 = 0;
        ain0 = (undefined4 *)0x0;
        if (uVar3 != 0) {
          do {
            iVar9 = uStack_78 * 4;
            iVar10 = iVar9 + uStack_84;
            FUN_8c221622(iVar9 + iStack_74,iVar9 + iStack_6c,iVar9 + iStack_7c,iVar10,unaff_r13);
            unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            if (cVar19 == '\0') {
              *(undefined4 *)unaff_r11 = puVar4[(int)_DAT_8c4aa37c];
              *(undefined4 *)((int)unaff_r11 + 4) = puVar4[(int)_DAT_8c4aa37c + 1];
              *(undefined4 *)(unaff_r11 + 1) = puVar4[(int)_DAT_8c4aa37c + 2];
            }
            else {
              *unaff_r11 = *(undefined8 *)(puVar4 + (int)_DAT_8c4aa37c);
              *(undefined8 *)((int)unaff_r11 + 4) = *(undefined8 *)(puVar4 + (int)_DAT_8c4aa37c + 1)
              ;
              unaff_r11[1] = *(undefined8 *)(puVar4 + (int)_DAT_8c4aa37c + 2);
            }
            unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
            ain0 = (undefined4 *)FUN_8c221414(iStack_70 + iVar5,iStack_64 + iVar5,unaff_r8,iVar10);
            iVar5 = iVar5 + 4;
            iStack_68 = iStack_68 + 1;
            puVar4 = puVar4 + _DAT_8c4aa374;
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            uStack_78 = uStack_78 + 3;
          } while (iStack_68 < (int)uVar3);
        }
      }
    }
    else if (puStack_60 == (undefined4 *)0x6) {
      iStack_74 = 0;
      uStack_84 = 0;
      iStack_7c = 0;
      if (uVar3 != 0) {
        do {
          if (cVar19 == '\0') {
            *(undefined4 *)unaff_r13 = puVar4[_DAT_8c4aa378];
            *(undefined4 *)((int)unaff_r13 + 4) = puVar4[_DAT_8c4aa378 + 1];
            *(undefined4 *)(unaff_r13 + 1) = puVar4[_DAT_8c4aa378 + 2];
          }
          else {
            *unaff_r13 = *(undefined8 *)(puVar4 + _DAT_8c4aa378);
            *(undefined8 *)((int)unaff_r13 + 4) = *(undefined8 *)(puVar4 + _DAT_8c4aa378 + 1);
            unaff_r13[1] = *(undefined8 *)(puVar4 + _DAT_8c4aa378 + 2);
          }
          unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
          FUN_8c2215b4(iStack_7c * 4 + uStack_78,iStack_7c * 4 + iStack_68,unaff_r11,ar7);
          unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
          ain0 = (undefined4 *)
                 FUN_8c221414(uStack_84 + iStack_70,uStack_84 + iStack_64,unaff_r8,ar7);
          iStack_74 = iStack_74 + 1;
          unaff_r8 = unaff_r8 + _DAT_8c4aa374;
          uStack_84 = uStack_84 + 4;
          iStack_7c = iStack_7c + 3;
          puVar4 = puVar4 + _DAT_8c4aa374;
        } while (iStack_74 < (int)uVar3);
      }
    }
    else {
      if (puStack_60 != (undefined4 *)0x7) {
        _DAT_8c4aa364 = 0;
        return (undefined4 *)&DAT_8c4aa364;
      }
      iVar5 = 0;
      puStack_60 = (undefined4 *)0x0;
      iVar9 = 0;
      if (uVar3 != 0) {
        do {
          iVar10 = iVar5 * 4;
          iVar11 = iVar10 + uStack_84;
          FUN_8c221622(iVar10 + iStack_74,iVar10 + iStack_6c,iVar10 + iStack_7c,iVar11,unaff_r13);
          unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
          FUN_8c2215b4(iVar5 * 4 + uStack_78,iVar5 * 4 + iStack_68,unaff_r11,iVar11);
          unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
          ain0 = (undefined4 *)FUN_8c221414(iStack_70 + iVar9,iStack_64 + iVar9,unaff_r8,iVar11);
          iVar9 = iVar9 + 4;
          puStack_60 = (undefined4 *)((int)puStack_60 + 1);
          unaff_r8 = unaff_r8 + _DAT_8c4aa374;
          iVar5 = iVar5 + 3;
        } while ((int)puStack_60 < (int)uVar3);
      }
    }
    puVar1[_DAT_8c4aa374 * uVar3 + 2] = 0xff;
  }
  return ain0;
}

__asm__(".globl _FUN_8c21f2ae\n.set _FUN_8c21f2ae, _FUN_8c21f2ae_def\n");
