#include "../decls.h"
undefined4 * FUN_8c21fca8_def(uint *ar4,undefined4 ar5,undefined4 ar6,int *ar7,undefined4 *ain0)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *unaff_r8;
  undefined8 *unaff_r11;
  int iVar9;
  int iVar10;
  undefined8 *unaff_r13;
  double in_dr2;
  double dVar11;
  float fVar13;
  double dVar12;
  float fVar14;
  undefined4 in_fr5;
  undefined4 in_fr12;
  undefined8 in_dr14;
  bool bVar15;
  uint uVar16;
  char cVar17;
  char cVar18;
  uint uStack_6c;
  undefined4 *puStack_68;
  int iStack_64;
  uint uStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 *puStack_50;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  puVar1 = _DAT_8c4aa360;
  cVar18 = '\0';
  cVar17 = '\0';
  uStack_20 = (undefined4)in_dr14;
  uStack_24 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  _DAT_8c4aa364 = 0;
  puStack_50 = ain0;
  if ((((ar4[1] != 0) && (puStack_50 = (undefined4 *)*ar4, ((uint)puStack_50 & 8) == 0)) &&
      (puVar4 = *(undefined4 **)ar4[1], puVar4 != (undefined4 *)0x0)) && (_DAT_8c4aad84 != 0)) {
    *_DAT_8c4aa360 = *puVar4;
    uVar3 = puVar4[1];
    puVar1[1] = uVar3;
    puStack_50 = (undefined4 *)0x0;
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
    fVar14 = 2.1474836e+09;
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
        while (uStack_6c = uVar2, 1 < uStack_6c - uVar6) {
          uVar2 = uStack_6c + uVar6 >> 1;
          if (*(uint *)(uVar2 * 8 + iVar5) <= (uint)(int)SUB84(in_dr2,0)) {
            uVar6 = uVar2;
            uVar2 = uStack_6c;
          }
        }
        ar7 = &iStack_34;
        FUN_8c221300(iVar5,uVar6,uVar7,ar7);
        uStack_6c = iStack_34;
        iStack_64 = iStack_30;
        puStack_50 = (undefined4 *)0x1;
      }
      _DAT_8c4aad78 = _DAT_8c4aad78 + 1;
    }
    if ((_DAT_8c4aad86 & 0x20) != 0) {
      iVar5 = *(int *)(_DAT_8c4aad68 + _DAT_8c4aad78 * 4);
      if (iVar5 != 0) {
        uVar7 = *(uint *)(_DAT_8c4aad6c + _DAT_8c4aad78 * 4);
        if (cVar18 == '\0') {
          dVar12 = (double)CONCAT44(_DAT_8c4aad70,in_fr5);
        }
        else {
          dVar12 = (double)CONCAT44(_DAT_8c4aad74,_DAT_8c4aad70);
        }
        fVar13 = (float)((ulonglong)dVar12 >> 0x20);
        if (cVar17 == '\0') {
          bVar15 = fVar14 < fVar13;
        }
        else {
          bVar15 = (double)CONCAT44(in_fr12,fVar14) < dVar12;
        }
        uVar6 = 0;
        if (bVar15) {
          if (cVar18 == '\0') {
            dVar11 = (double)CONCAT44(0xcf800000,fVar13);
          }
          else {
            dVar11 = -3.155538209390776e-250;
          }
          if (cVar17 == '\0') {
            fVar13 = (float)((ulonglong)dVar11 >> 0x20);
            in_dr2 = (double)CONCAT44(fVar13,SUB84(dVar11,0) + fVar13);
          }
          else {
            in_dr2 = dVar11 + dVar11;
          }
        }
        else if (cVar18 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar13);
        }
        uVar2 = uVar7;
        if (cVar17 == '\0') {
          uVar16 = (uint)SUB84(in_dr2,0);
        }
        else {
          uVar16 = (uint)in_dr2;
        }
        while (uStack_60 = uVar2, 1 < uStack_60 - uVar6) {
          uVar2 = uStack_60 + uVar6 >> 1;
          if (*(uint *)(uVar2 * 8 + iVar5) <= uVar16) {
            uVar6 = uVar2;
            uVar2 = uStack_60;
          }
        }
        ar7 = &iStack_3c;
        FUN_8c221300(iVar5,uVar6,uVar7,ar7);
        in_fr5 = SUB84(dVar12,0);
        uStack_60 = iStack_3c;
        iStack_54 = iStack_38;
        puStack_50 = (undefined4 *)((int)puStack_50 + 2);
      }
      _DAT_8c4aad78 = _DAT_8c4aad78 + 1;
    }
    if ((_DAT_8c4aad86 & 0x4000) != 0) {
      iVar5 = *(int *)(_DAT_8c4aad68 + _DAT_8c4aad78 * 4);
      if (iVar5 != 0) {
        uVar7 = *(uint *)(_DAT_8c4aad6c + _DAT_8c4aad78 * 4);
        if (cVar18 == '\0') {
          dVar12 = (double)CONCAT44(_DAT_8c4aad70,in_fr5);
        }
        else {
          dVar12 = (double)CONCAT44(_DAT_8c4aad74,_DAT_8c4aad70);
        }
        uVar6 = 0;
        fVar13 = (float)((ulonglong)dVar12 >> 0x20);
        if (cVar17 == '\0') {
          bVar15 = fVar14 < fVar13;
        }
        else {
          bVar15 = (double)CONCAT44(in_fr12,fVar14) < dVar12;
        }
        if (bVar15) {
          if (cVar18 == '\0') {
            dVar12 = (double)CONCAT44(0xcf800000,fVar13);
          }
          else {
            dVar12 = -3.155905840934326e-250;
          }
          if (cVar17 == '\0') {
            fVar14 = (float)((ulonglong)dVar12 >> 0x20);
            in_dr2 = (double)CONCAT44(fVar14,SUB84(dVar12,0) + fVar14);
          }
          else {
            in_dr2 = dVar12 + dVar12;
          }
        }
        else if (cVar18 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar13);
        }
        uVar2 = uVar7;
        if (cVar17 == '\0') {
          uVar16 = (uint)SUB84(in_dr2,0);
        }
        else {
          uVar16 = (uint)in_dr2;
        }
        while (uVar8 = uVar2, 1 < uVar8 - uVar6) {
          uVar2 = uVar6 + uVar8 >> 1;
          if (*(uint *)(uVar2 * 8 + iVar5) <= uVar16) {
            uVar6 = uVar2;
            uVar2 = uVar8;
          }
        }
        ar7 = &iStack_44;
        FUN_8c22138a(iVar5,uVar6,uVar7,ar7);
        iStack_5c = iStack_44;
        iStack_58 = iStack_40;
        puStack_50 = puStack_50 + 1;
      }
      _DAT_8c4aad78 = _DAT_8c4aad78 + 1;
    }
    _DAT_8c4aa364 = 1;
    puStack_68 = puVar4;
    if (puStack_50 == (undefined4 *)0x1) {
      if (_DAT_8c4aa380 == (undefined4 *)0xffffffff) {
        if (_DAT_8c4aa37c == (undefined4 *)0xffffffff) {
          iVar5 = 0;
          iVar9 = 0;
          puStack_50 = _DAT_8c4aa37c;
          if (uVar3 != 0) {
            do {
              puStack_50 = (undefined4 *)
                           FUN_8c22158a(uStack_6c + iVar9 * 4,iStack_64 + iVar9 * 4,unaff_r13,ar7);
              iVar5 = iVar5 + 1;
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              iVar9 = iVar9 + 3;
            } while (iVar5 < (int)uVar3);
          }
        }
        else {
          iVar5 = 0;
          iVar9 = 0;
          puStack_50 = _DAT_8c4aa37c;
          if (uVar3 != 0) {
            do {
              FUN_8c22158a(iVar9 * 4 + uStack_6c,iVar9 * 4 + iStack_64,unaff_r13,ar7);
              iVar5 = iVar5 + 1;
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              if (cVar18 == '\0') {
                *(undefined4 *)unaff_r11 = puVar4[(int)_DAT_8c4aa37c];
                *(undefined4 *)((int)unaff_r11 + 4) = puVar4[(int)_DAT_8c4aa37c + 1];
              }
              else {
                *unaff_r11 = *(undefined8 *)(puVar4 + (int)_DAT_8c4aa37c);
                *(undefined8 *)((int)unaff_r11 + 4) =
                     *(undefined8 *)(puVar4 + (int)_DAT_8c4aa37c + 1);
              }
              puStack_50 = (undefined4 *)0x8;
              if (cVar18 == '\0') {
                *(undefined4 *)(unaff_r11 + 1) = puVar4[(int)_DAT_8c4aa37c + 2];
              }
              else {
                unaff_r11[1] = *(undefined8 *)(puVar4 + (int)_DAT_8c4aa37c + 2);
              }
              unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
              puVar4 = puVar4 + _DAT_8c4aa374;
              iVar9 = iVar9 + 3;
            } while (iVar5 < (int)uVar3);
          }
        }
      }
      else if (_DAT_8c4aa37c == (undefined4 *)0xffffffff) {
        iVar5 = 0;
        iVar9 = 0;
        puStack_50 = _DAT_8c4aa37c;
        if (uVar3 != 0) {
          do {
            FUN_8c22158a(uStack_6c + iVar9 * 4,iStack_64 + iVar9 * 4,unaff_r13,ar7);
            iVar5 = iVar5 + 1;
            unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            *unaff_r8 = puStack_68[(int)_DAT_8c4aa380];
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            iVar9 = iVar9 + 3;
            puStack_50 = puStack_68;
            puStack_68 = puStack_68 + _DAT_8c4aa374;
          } while (iVar5 < (int)uVar3);
        }
      }
      else {
        iVar5 = 0;
        uStack_60 = 0;
        puStack_50 = _DAT_8c4aa37c;
        if (uVar3 != 0) {
          do {
            FUN_8c22158a(iVar5 * 4 + uStack_6c,iVar5 * 4 + iStack_64,unaff_r13,ar7);
            unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            if (cVar18 == '\0') {
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
            *unaff_r8 = puStack_68[(int)_DAT_8c4aa380];
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            puVar4 = puVar4 + _DAT_8c4aa374;
            uStack_60 = uStack_60 + 1;
            iVar5 = iVar5 + 3;
            puStack_50 = puStack_68;
            puStack_68 = puStack_68 + _DAT_8c4aa374;
          } while ((int)uStack_60 < (int)uVar3);
        }
      }
    }
    else if (puStack_50 == (undefined4 *)0x2) {
      if (_DAT_8c4aa380 == (undefined4 *)0xffffffff) {
        iVar5 = 0;
        uStack_6c = 0;
        puStack_50 = _DAT_8c4aa380;
        if (uVar3 != 0) {
          do {
            if (cVar18 == '\0') {
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
            puStack_50 = (undefined4 *)
                         FUN_8c2215b4(iVar5 * 4 + uStack_60,iVar5 * 4 + iStack_54,unaff_r11,ar7);
            uStack_6c = uStack_6c + 1;
            unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
            puVar4 = puVar4 + _DAT_8c4aa374;
            iVar5 = iVar5 + 3;
          } while ((int)uStack_6c < (int)uVar3);
        }
      }
      else {
        puStack_50 = (undefined4 *)0x0;
        iStack_64 = 0;
        uStack_6c = 0;
        if (uVar3 != 0) {
          do {
            if (cVar18 == '\0') {
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
            FUN_8c2215b4(uStack_6c * 4 + uStack_60,uStack_6c * 4 + iStack_54,unaff_r11,ar7);
            unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
            *unaff_r8 = puStack_68[(int)_DAT_8c4aa380];
            puVar4 = puVar4 + _DAT_8c4aa374;
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            iStack_64 = iStack_64 + 1;
            uStack_6c = uStack_6c + 3;
            puStack_50 = puStack_68;
            puStack_68 = puStack_68 + _DAT_8c4aa374;
          } while (iStack_64 < (int)uVar3);
        }
      }
    }
    else if (puStack_50 == (undefined4 *)0x3) {
      if (_DAT_8c4aa380 == (undefined4 *)0xffffffff) {
        iVar5 = 0;
        iVar9 = 0;
        puStack_50 = _DAT_8c4aa380;
        if (uVar3 != 0) {
          do {
            FUN_8c22158a(iVar9 * 4 + uStack_6c,iVar9 * 4 + iStack_64,unaff_r13,ar7);
            unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            puStack_50 = (undefined4 *)
                         FUN_8c2215b4(iVar9 * 4 + uStack_60,iVar9 * 4 + iStack_54,unaff_r11,ar7);
            iVar5 = iVar5 + 1;
            unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
            iVar9 = iVar9 + 3;
          } while (iVar5 < (int)uVar3);
        }
      }
      else {
        iVar5 = 0;
        iVar9 = 0;
        puStack_50 = _DAT_8c4aa380;
        if (uVar3 != 0) {
          do {
            FUN_8c22158a(iVar9 * 4 + uStack_6c,iVar9 * 4 + iStack_64,unaff_r13,ar7);
            unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            FUN_8c2215b4(iVar9 * 4 + uStack_60,iVar9 * 4 + iStack_54,unaff_r11,ar7);
            iVar5 = iVar5 + 1;
            unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
            *unaff_r8 = puStack_68[(int)_DAT_8c4aa380];
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            iVar9 = iVar9 + 3;
            puStack_50 = puStack_68;
            puStack_68 = puStack_68 + _DAT_8c4aa374;
          } while (iVar5 < (int)uVar3);
        }
      }
    }
    else if (puStack_50 == (undefined4 *)0x4) {
      if (_DAT_8c4aa37c == (undefined4 *)0xffffffff) {
        iVar5 = 0;
        uStack_6c = 0;
        puStack_50 = _DAT_8c4aa37c;
        if (uVar3 != 0) {
          do {
            if (cVar18 == '\0') {
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
            puStack_50 = (undefined4 *)
                         FUN_8c221414(iStack_5c + iVar5,iStack_58 + iVar5,unaff_r8,ar7);
            uStack_6c = uStack_6c + 1;
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            iVar5 = iVar5 + 4;
          } while ((int)uStack_6c < (int)uVar3);
        }
      }
      else {
        puStack_50 = (undefined4 *)0x0;
        iStack_64 = 0;
        uStack_6c = 0;
        if (uVar3 != 0) {
          do {
            if (cVar18 == '\0') {
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
            if (cVar18 == '\0') {
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
            puStack_50 = (undefined4 *)
                         FUN_8c221414(uStack_6c + iStack_5c,uStack_6c + iStack_58,unaff_r8,ar7);
            iStack_64 = iStack_64 + 1;
            puVar4 = puVar4 + _DAT_8c4aa374;
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            uStack_6c = uStack_6c + 4;
          } while (iStack_64 < (int)uVar3);
        }
      }
    }
    else if (puStack_50 == (undefined4 *)0x5) {
      if (_DAT_8c4aa37c == (undefined4 *)0xffffffff) {
        iVar5 = 0;
        iVar10 = 0;
        iVar9 = 0;
        puStack_50 = _DAT_8c4aa37c;
        if (uVar3 != 0) {
          do {
            FUN_8c22158a(iVar9 * 4 + uStack_6c,iVar9 * 4 + iStack_64,unaff_r13,ar7);
            unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            puStack_50 = (undefined4 *)
                         FUN_8c221414(iStack_5c + iVar10,iStack_58 + iVar10,unaff_r8,ar7);
            iVar5 = iVar5 + 1;
            iVar10 = iVar10 + 4;
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            iVar9 = iVar9 + 3;
          } while (iVar5 < (int)uVar3);
        }
      }
      else {
        puStack_50 = (undefined4 *)0x0;
        uStack_60 = 0;
        iVar5 = 0;
        puStack_68 = (undefined4 *)0x0;
        if (uVar3 != 0) {
          do {
            FUN_8c22158a((int)puStack_68 * 4 + uStack_6c,(int)puStack_68 * 4 + iStack_64,unaff_r13,
                         ar7);
            unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            if (cVar18 == '\0') {
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
            puStack_50 = (undefined4 *)
                         FUN_8c221414(iStack_5c + iVar5,iStack_58 + iVar5,unaff_r8,ar7);
            iVar5 = iVar5 + 4;
            uStack_60 = uStack_60 + 1;
            puVar4 = puVar4 + _DAT_8c4aa374;
            unaff_r8 = unaff_r8 + _DAT_8c4aa374;
            puStack_68 = (undefined4 *)((int)puStack_68 + 3);
          } while ((int)uStack_60 < (int)uVar3);
        }
      }
    }
    else if (puStack_50 == (undefined4 *)0x6) {
      puStack_68 = (undefined4 *)0x0;
      uStack_6c = 0;
      iStack_64 = 0;
      if (uVar3 != 0) {
        do {
          if (cVar18 == '\0') {
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
          FUN_8c2215b4(iStack_64 * 4 + uStack_60,iStack_64 * 4 + iStack_54,unaff_r11,ar7);
          unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
          puStack_50 = (undefined4 *)
                       FUN_8c221414(uStack_6c + iStack_5c,uStack_6c + iStack_58,unaff_r8,ar7);
          puStack_68 = (undefined4 *)((int)puStack_68 + 1);
          unaff_r8 = unaff_r8 + _DAT_8c4aa374;
          uStack_6c = uStack_6c + 4;
          iStack_64 = iStack_64 + 3;
          puVar4 = puVar4 + _DAT_8c4aa374;
        } while ((int)puStack_68 < (int)uVar3);
      }
    }
    else {
      if (puStack_50 != (undefined4 *)0x7) {
        _DAT_8c4aa364 = 0;
        return (undefined4 *)&DAT_8c4aa364;
      }
      iVar5 = 0;
      puStack_68 = (undefined4 *)0x0;
      iVar9 = 0;
      if (uVar3 != 0) {
        do {
          FUN_8c22158a(iVar5 * 4 + uStack_6c,iVar5 * 4 + iStack_64,unaff_r13,ar7);
          unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
          FUN_8c2215b4(iVar5 * 4 + uStack_60,iVar5 * 4 + iStack_54,unaff_r11,ar7);
          unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
          puStack_50 = (undefined4 *)FUN_8c221414(iStack_5c + iVar9,iStack_58 + iVar9,unaff_r8,ar7);
          iVar9 = iVar9 + 4;
          puStack_68 = (undefined4 *)((int)puStack_68 + 1);
          unaff_r8 = unaff_r8 + _DAT_8c4aa374;
          iVar5 = iVar5 + 3;
        } while ((int)puStack_68 < (int)uVar3);
      }
    }
    puVar1[_DAT_8c4aa374 * uVar3 + 2] = 0xff;
  }
  return puStack_50;
}

__asm__(".globl _FUN_8c21fca8\n.set _FUN_8c21fca8, _FUN_8c21fca8_def\n");
