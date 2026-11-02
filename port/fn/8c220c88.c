#include "../decls.h"
undefined4 FUN_8c220c88_def(uint *ar4,double *ar5,double *ar6,int *ar7,undefined4 ain0)

{
  uint *puVar1;
  double dVar2;
  undefined4 uVar3;
  uint *puVar4;
  double *pdVar5;
  uint uVar6;
  int iVar7;
  double *pdVar8;
  double *unaff_r11;
  uint *puVar9;
  int iVar10;
  double *unaff_r13;
  undefined4 extraout_fr0;
  double in_dr2;
  double dVar11;
  float fVar12;
  undefined4 in_fr5;
  double dVar13;
  undefined8 in_dr14;
  double dVar14;
  double in_xd2;
  bool bVar15;
  uint uVar16;
  char cVar17;
  char cVar18;
  uint *puStack_68;
  double *pdStack_64;
  int iStack_60;
  uint *puStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  puVar1 = _DAT_8c4ab0c4;
  cVar18 = '\0';
  cVar17 = '\0';
  uStack_20 = (undefined4)in_dr14;
  uStack_24 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (ar4[1] == 0) {
    return ain0;
  }
  if ((*ar4 & 8) != 0) {
    return *ar4;
  }
  puVar4 = *(uint **)ar4[1];
  if ((puVar4 != (uint *)0x0) && (_DAT_8c4aad84 != 0)) {
    *_DAT_8c4ab0c4 = *puVar4;
    uVar6 = puVar4[1];
    puVar1[1] = uVar6;
    uVar6 = uVar6 >> 0x10;
    if (DAT_8c2759d8 == 0) {
      FUN_8c2205d8(*puVar1 & 0xffff,ar5,ar6,ar7);
      DAT_8c2759d8 = 1;
    }
    iStack_50 = 0;
    if (_DAT_8c4aa378 != -1) {
      unaff_r13 = (double *)(_DAT_8c4ab0c4 + _DAT_8c4aa378);
    }
    if (_DAT_8c4aa37c != (double *)0xffffffff) {
      unaff_r11 = (double *)(_DAT_8c4ab0c4 + (int)_DAT_8c4aa37c);
    }
    if (_DAT_8c4aa380 != (double *)0xffffffff) {
      puStack_5c = _DAT_8c4ab0c4 + (int)_DAT_8c4aa380;
    }
    if (cVar18 == '\0') {
      dVar14 = (double)CONCAT44(0x4f000000,(int)in_dr14);
    }
    else {
      dVar14 = -1.8630120701277013e-249;
    }
    ar5 = _DAT_8c4aa380;
    if ((_DAT_8c4aad86 & 0x10) != 0) {
      iVar7 = *(int *)(_DAT_8c4aad68 + _DAT_8c4aad78 * 4);
      if (iVar7 != 0) {
        ar6 = *(double **)(_DAT_8c4aad6c + _DAT_8c4aad78 * 4);
        if (cVar18 == '\0') {
          dVar13 = (double)CONCAT44(_DAT_8c4aad70,in_fr5);
        }
        else {
          dVar13 = (double)CONCAT44(_DAT_8c4aad74,_DAT_8c4aad70);
        }
        fVar12 = (float)((ulonglong)dVar13 >> 0x20);
        if (cVar17 == '\0') {
          bVar15 = (float)((ulonglong)dVar14 >> 0x20) < fVar12;
        }
        else {
          bVar15 = dVar14 < dVar13;
        }
        ar5 = (double *)0x0;
        if (bVar15) {
          if (cVar18 == '\0') {
            dVar11 = (double)CONCAT44(0xcf800000,fVar12);
          }
          else {
            dVar11 = -3.155538209390776e-250;
            in_xd2 = dVar13;
          }
          dVar2 = in_xd2;
          if (cVar17 == '\0') {
            fVar12 = (float)((ulonglong)dVar11 >> 0x20);
            in_dr2 = (double)CONCAT44(fVar12,SUB84(dVar11,0) + fVar12);
          }
          else {
            in_dr2 = dVar11 + dVar11;
          }
        }
        else {
          dVar2 = dVar13;
          if (cVar18 == '\0') {
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar12);
            dVar2 = in_xd2;
          }
        }
        in_xd2 = dVar2;
        if (cVar17 == '\0') {
          uVar16 = (uint)SUB84(in_dr2,0);
          pdVar5 = ar6;
        }
        else {
          uVar16 = (uint)in_dr2;
          pdVar5 = ar6;
        }
        while (pdStack_64 = pdVar5, 1 < (uint)((int)pdStack_64 - (int)ar5)) {
          pdVar5 = (double *)((uint)((int)pdStack_64 + (int)ar5) >> 1);
          if (*(uint *)((int)pdVar5 * 8 + iVar7) <= uVar16) {
            ar5 = pdVar5;
            pdVar5 = pdStack_64;
          }
        }
        ar7 = &iStack_30;
        FUN_8c221300(iVar7,ar5,ar6,ar7);
        in_fr5 = SUB84(dVar13,0);
        if (cVar18 == '\0') {
          dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),extraout_fr0);
        }
        pdStack_64 = (double *)iStack_30;
        iStack_58 = iStack_2c;
        iStack_50 = 1;
      }
      _DAT_8c4aad78 = _DAT_8c4aad78 + 1;
    }
    if ((_DAT_8c4aad86 & 0x20) != 0) {
      ar5 = (double *)(_DAT_8c4aad78 * 4);
      iVar7 = *(int *)(_DAT_8c4aad68 + (int)ar5);
      if (iVar7 != 0) {
        ar6 = *(double **)(_DAT_8c4aad6c + (int)ar5);
        if (cVar18 == '\0') {
          dVar13 = (double)CONCAT44(_DAT_8c4aad70,in_fr5);
        }
        else {
          dVar13 = (double)CONCAT44(_DAT_8c4aad74,_DAT_8c4aad70);
        }
        ar5 = (double *)0x0;
        fVar12 = (float)((ulonglong)dVar13 >> 0x20);
        if (cVar17 == '\0') {
          bVar15 = (float)((ulonglong)dVar14 >> 0x20) < fVar12;
        }
        else {
          bVar15 = dVar14 < dVar13;
        }
        if (bVar15) {
          if (cVar18 == '\0') {
            dVar14 = (double)CONCAT44(0xcf800000,fVar12);
            dVar13 = in_xd2;
          }
          else {
            dVar14 = -3.155538209390776e-250;
          }
          if (cVar17 == '\0') {
            fVar12 = (float)((ulonglong)dVar14 >> 0x20);
            in_dr2 = (double)CONCAT44(fVar12,SUB84(dVar14,0) + fVar12);
          }
          else {
            in_dr2 = dVar14 + dVar14;
          }
        }
        else if (cVar18 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar12);
          dVar13 = in_xd2;
        }
        in_xd2 = dVar13;
        pdVar5 = ar6;
        if (cVar17 == '\0') {
          uVar16 = (uint)SUB84(in_dr2,0);
        }
        else {
          uVar16 = (uint)in_dr2;
        }
        while (pdVar8 = pdVar5, 1 < (uint)((int)pdVar8 - (int)ar5)) {
          pdVar5 = (double *)((uint)((int)ar5 + (int)pdVar8) >> 1);
          if (*(uint *)((int)pdVar5 * 8 + iVar7) <= uVar16) {
            ar5 = pdVar5;
            pdVar5 = pdVar8;
          }
        }
        ar7 = &iStack_38;
        FUN_8c221300(iVar7,ar5,ar6,ar7);
        iStack_60 = iStack_38;
        iStack_54 = iStack_34;
        iStack_50 = iStack_50 + 2;
      }
      _DAT_8c4aad78 = _DAT_8c4aad78 + 1;
    }
    puStack_68 = puVar4;
    if (iStack_50 == 1) {
      ar5 = _DAT_8c4aa37c;
      if (_DAT_8c4aa380 == (double *)0xffffffff) {
        if (_DAT_8c4aa37c == (double *)0xffffffff) {
          iVar7 = 0;
          iVar10 = 0;
          if (uVar6 != 0) {
            do {
              ar5 = (double *)(iStack_58 + iVar10 * 4);
              ar6 = unaff_r13;
              FUN_8c22158a((int)pdStack_64 + iVar10 * 4,ar5,unaff_r13,ar7);
              iVar7 = iVar7 + 1;
              unaff_r13 = (double *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              iVar10 = iVar10 + 3;
            } while (iVar7 < (int)uVar6);
          }
        }
        else {
          puStack_68 = (uint *)0x0;
          iVar7 = 0;
          puVar9 = puVar4;
          if (uVar6 != 0) {
            do {
              ar5 = (double *)(iVar7 * 4 + iStack_58);
              ar6 = unaff_r13;
              FUN_8c22158a(iVar7 * 4 + (int)pdStack_64,ar5,unaff_r13,ar7);
              if (cVar18 == '\0') {
                in_dr2 = (double)(ulonglong)puVar9[(int)_DAT_8c4aa37c];
              }
              else {
                in_xd2 = *(double *)(puVar9 + (int)_DAT_8c4aa37c);
              }
              iVar10 = _DAT_8c4aa374 * 4;
              if (cVar18 == '\0') {
                *(uint *)unaff_r11 = SUB84(in_dr2,0);
              }
              else {
                *unaff_r11 = in_xd2;
              }
              unaff_r13 = (double *)((int)unaff_r13 + iVar10);
              if (cVar18 == '\0') {
                *(uint *)((int)unaff_r11 + 4) = puVar9[(int)_DAT_8c4aa37c + 1];
                in_dr2 = (double)(ulonglong)puVar9[(int)_DAT_8c4aa37c + 2];
                *(uint *)(unaff_r11 + 1) = puVar9[(int)_DAT_8c4aa37c + 2];
              }
              else {
                *(undefined8 *)((int)unaff_r11 + 4) =
                     *(undefined8 *)(puVar9 + (int)_DAT_8c4aa37c + 1);
                in_xd2 = *(double *)(puVar9 + (int)_DAT_8c4aa37c + 2);
                unaff_r11[1] = in_xd2;
              }
              puStack_68 = (uint *)((int)puStack_68 + 1);
              puVar9 = puVar9 + _DAT_8c4aa374;
              unaff_r11 = (double *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
              iVar7 = iVar7 + 3;
            } while ((int)puStack_68 < (int)uVar6);
          }
        }
      }
      else if (_DAT_8c4aa37c == (double *)0xffffffff) {
        iVar7 = 0;
        iVar10 = 0;
        if (uVar6 != 0) {
          do {
            ar5 = (double *)(iStack_58 + iVar10 * 4);
            ar6 = unaff_r13;
            FUN_8c22158a((int)pdStack_64 + iVar10 * 4,ar5,unaff_r13,ar7);
            iVar7 = iVar7 + 1;
            unaff_r13 = (double *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            *puStack_5c = puStack_68[(int)_DAT_8c4aa380];
            puStack_5c = puStack_5c + _DAT_8c4aa374;
            puStack_68 = puStack_68 + _DAT_8c4aa374;
            iVar10 = iVar10 + 3;
          } while (iVar7 < (int)uVar6);
        }
      }
      else {
        iVar7 = 0;
        iStack_60 = 0;
        puVar9 = puVar4;
        if (uVar6 != 0) {
          do {
            ar5 = (double *)(iVar7 * 4 + iStack_58);
            ar6 = unaff_r13;
            FUN_8c22158a(iVar7 * 4 + (int)pdStack_64,ar5,unaff_r13,ar7);
            if (cVar18 == '\0') {
              in_dr2 = (double)(ulonglong)puVar9[(int)_DAT_8c4aa37c];
            }
            else {
              in_xd2 = *(double *)(puVar9 + (int)_DAT_8c4aa37c);
            }
            iVar10 = _DAT_8c4aa374 * 4;
            if (cVar18 == '\0') {
              *(uint *)unaff_r11 = SUB84(in_dr2,0);
            }
            else {
              *unaff_r11 = in_xd2;
            }
            unaff_r13 = (double *)((int)unaff_r13 + iVar10);
            if (cVar18 == '\0') {
              *(uint *)((int)unaff_r11 + 4) = puVar9[(int)_DAT_8c4aa37c + 1];
              in_dr2 = (double)(ulonglong)puVar9[(int)_DAT_8c4aa37c + 2];
              *(uint *)(unaff_r11 + 1) = puVar9[(int)_DAT_8c4aa37c + 2];
            }
            else {
              *(undefined8 *)((int)unaff_r11 + 4) = *(undefined8 *)(puVar9 + (int)_DAT_8c4aa37c + 1)
              ;
              in_xd2 = *(double *)(puVar9 + (int)_DAT_8c4aa37c + 2);
              unaff_r11[1] = in_xd2;
            }
            unaff_r11 = (double *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
            *puStack_5c = puStack_68[(int)_DAT_8c4aa380];
            puStack_5c = puStack_5c + _DAT_8c4aa374;
            puVar9 = puVar9 + _DAT_8c4aa374;
            puStack_68 = puStack_68 + _DAT_8c4aa374;
            iStack_60 = iStack_60 + 1;
            iVar7 = iVar7 + 3;
          } while (iStack_60 < (int)uVar6);
        }
      }
    }
    else if (iStack_50 == 2) {
      if (_DAT_8c4aa380 == (double *)0xffffffff) {
        puStack_68 = (uint *)0x0;
        iVar7 = 0;
        puVar9 = puVar4;
        if (uVar6 != 0) {
          do {
            if (cVar18 == '\0') {
              *(uint *)unaff_r13 = puVar9[_DAT_8c4aa378];
              *(uint *)((int)unaff_r13 + 4) = puVar9[_DAT_8c4aa378 + 1];
              *(uint *)(unaff_r13 + 1) = puVar9[_DAT_8c4aa378 + 2];
            }
            else {
              *unaff_r13 = *(double *)(puVar9 + _DAT_8c4aa378);
              *(undefined8 *)((int)unaff_r13 + 4) = *(undefined8 *)(puVar9 + _DAT_8c4aa378 + 1);
              unaff_r13[1] = *(double *)(puVar9 + _DAT_8c4aa378 + 2);
            }
            unaff_r13 = (double *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            ar5 = (double *)(iVar7 * 4 + iStack_54);
            ar6 = unaff_r11;
            FUN_8c2215b4(iVar7 * 4 + iStack_60,ar5,unaff_r11,ar7);
            puStack_68 = (uint *)((int)puStack_68 + 1);
            unaff_r11 = (double *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
            puVar9 = puVar9 + _DAT_8c4aa374;
            iVar7 = iVar7 + 3;
          } while ((int)puStack_68 < (int)uVar6);
        }
      }
      else {
        iVar7 = 0;
        pdStack_64 = (double *)0x0;
        puVar9 = puVar4;
        if (uVar6 != 0) {
          do {
            if (cVar18 == '\0') {
              *(uint *)unaff_r13 = puVar9[_DAT_8c4aa378];
              *(uint *)((int)unaff_r13 + 4) = puVar9[_DAT_8c4aa378 + 1];
              *(uint *)(unaff_r13 + 1) = puVar9[_DAT_8c4aa378 + 2];
            }
            else {
              *unaff_r13 = *(double *)(puVar9 + _DAT_8c4aa378);
              *(undefined8 *)((int)unaff_r13 + 4) = *(undefined8 *)(puVar9 + _DAT_8c4aa378 + 1);
              unaff_r13[1] = *(double *)(puVar9 + _DAT_8c4aa378 + 2);
            }
            unaff_r13 = (double *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            ar5 = (double *)(iVar7 * 4 + iStack_54);
            ar6 = unaff_r11;
            FUN_8c2215b4(iVar7 * 4 + iStack_60,ar5,unaff_r11,ar7);
            unaff_r11 = (double *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
            *puStack_5c = puStack_68[(int)_DAT_8c4aa380];
            puStack_5c = puStack_5c + _DAT_8c4aa374;
            puVar9 = puVar9 + _DAT_8c4aa374;
            puStack_68 = puStack_68 + _DAT_8c4aa374;
            pdStack_64 = (double *)((int)pdStack_64 + 1);
            iVar7 = iVar7 + 3;
          } while ((int)pdStack_64 < (int)uVar6);
        }
      }
    }
    else {
      if (iStack_50 != 3) goto LAB_8c221200;
      if (_DAT_8c4aa380 == (double *)0xffffffff) {
        iVar7 = 0;
        iVar10 = 0;
        if (uVar6 != 0) {
          do {
            FUN_8c22158a(iVar10 * 4 + (int)pdStack_64,iVar10 * 4 + iStack_58,unaff_r13,ar7);
            unaff_r13 = (double *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            ar5 = (double *)(iVar10 * 4 + iStack_54);
            ar6 = unaff_r11;
            FUN_8c2215b4(iVar10 * 4 + iStack_60,ar5,unaff_r11,ar7);
            iVar7 = iVar7 + 1;
            unaff_r11 = (double *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
            iVar10 = iVar10 + 3;
          } while (iVar7 < (int)uVar6);
        }
      }
      else {
        iVar7 = 0;
        iVar10 = 0;
        if (uVar6 != 0) {
          do {
            FUN_8c22158a(iVar10 * 4 + (int)pdStack_64,iVar10 * 4 + iStack_58,unaff_r13,ar7);
            unaff_r13 = (double *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            ar5 = (double *)(iVar10 * 4 + iStack_54);
            ar6 = unaff_r11;
            FUN_8c2215b4(iVar10 * 4 + iStack_60,ar5,unaff_r11,ar7);
            iVar7 = iVar7 + 1;
            unaff_r11 = (double *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
            *puStack_5c = puStack_68[(int)_DAT_8c4aa380];
            puStack_5c = puStack_5c + _DAT_8c4aa374;
            puStack_68 = puStack_68 + _DAT_8c4aa374;
            iVar10 = iVar10 + 3;
          } while (iVar7 < (int)uVar6);
        }
      }
    }
    *(uint **)ar4[1] = puVar1;
    puVar1[_DAT_8c4aa374 * uVar6 + 2] = 0xff;
  }
LAB_8c221200:
  uVar3 = (*_DAT_8c4aa368)(ar4[1],ar5,ar6,ar7);
  *(uint **)ar4[1] = puVar4;
  return uVar3;
}

__asm__(".globl _FUN_8c220c88\n.set _FUN_8c220c88, _FUN_8c220c88_def\n");
