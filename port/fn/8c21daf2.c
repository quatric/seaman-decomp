#include "../decls.h"
undefined4 FUN_8c21daf2_def(int ar4,int ar5,undefined8 *ar6,undefined1 *ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint ar5_00;
  undefined8 *puVar7;
  undefined8 *unaff_r8;
  undefined8 *unaff_r11;
  undefined8 *unaff_r13;
  undefined1 *puVar8;
  double in_dr2;
  double dVar9;
  float fVar11;
  double dVar10;
  undefined4 in_fr5;
  float in_fr13;
  undefined4 in_fr12;
  undefined8 in_dr14;
  undefined8 in_xd14;
  bool bVar12;
  undefined4 in_PR;
  int iVar13;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [4];
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)in_dr14,(undefined4)uStack_24);
                    
    (*(uint*)((uchar*)&uStack_24+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar8 = auStack_28;
  }
  else {
    puVar8 = auStack_34;
    uStack_24 = in_xd14;
  }
  *(undefined4 *)(puVar8 + -4) = in_PR;
  *(int *)(puVar8 + -0x3c) = ar4;
  if (*(int *)(ar4 + 4) == 0) {
    return ain0;
  }
  if ((**(uint **)(puVar8 + -0x3c) & 8) != 0) {
    return **(uint **)(puVar8 + -0x3c);
  }
  iVar2 = **(int **)(*(int *)(puVar8 + -0x3c) + 4);
  *(int *)(puVar8 + -0x38) = iVar2;
  if (iVar2 != 0) {
    iVar2 = *(int *)(puVar8 + -0x38);
    *(int *)(puVar8 + -0x60) = iVar2;
    if (_DAT_8c4aad84 != 0) {
      *(undefined4 **)(puVar8 + -0x34) = _DAT_8c4ab0c4;
      *_DAT_8c4ab0c4 = **(undefined4 **)(puVar8 + -0x38);
      uVar3 = *(uint *)(*(int *)(puVar8 + -0x38) + 4);
      *(uint *)(*(int *)(puVar8 + -0x34) + 4) = uVar3;
      uVar3 = uVar3 >> 0x10;
      if (DAT_8c2759d8 == 0) {
        FUN_8c21da20(**(uint **)(puVar8 + -0x34) & 0xffff,ar5,ar6,ar7);
        DAT_8c2759d8 = 1;
      }
      *(undefined4 *)(puVar8 + -0x40) = 0;
      if (_DAT_8c4aa378 != -1) {
        unaff_r13 = (undefined8 *)(_DAT_8c4ab0c4 + _DAT_8c4aa378);
      }
      if (_DAT_8c4aa37c != -1) {
        unaff_r11 = (undefined8 *)(_DAT_8c4ab0c4 + _DAT_8c4aa37c);
      }
      if (_DAT_8c4aa380 != -1) {
        unaff_r8 = (undefined8 *)(_DAT_8c4ab0c4 + _DAT_8c4aa380);
      }
      if (in_FPSCR_SZ == '\0') {
        in_fr13 = 2.1474836e+09;
      }
      if ((_DAT_8c4aad86 & 0x10) != 0) {
        iVar5 = *(int *)(_DAT_8c4aad68 + _DAT_8c4aad78 * 4);
        if (iVar5 != 0) {
          iVar6 = 0;
          ar6 = *(undefined8 **)(_DAT_8c4aad6c + _DAT_8c4aad78 * 4);
          if (in_FPSCR_SZ == '\0') {
            dVar10 = (double)CONCAT44(_DAT_8c4aad70,in_fr5);
          }
          else {
            dVar10 = (double)CONCAT44(_DAT_8c4aad74,_DAT_8c4aad70);
          }
          fVar11 = (float)((ulonglong)dVar10 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            bVar12 = in_fr13 < fVar11;
          }
          else {
            bVar12 = (double)CONCAT44(in_fr12,in_fr13) < dVar10;
          }
          if (bVar12) {
            if (in_FPSCR_SZ == '\0') {
              dVar9 = (double)CONCAT44(0xcf800000,fVar11);
            }
            else {
              dVar9 = -3.1550160660390674e-250;
            }
            if (in_FPSCR_PR == '\0') {
              fVar11 = (float)((ulonglong)dVar9 >> 0x20);
              in_dr2 = (double)CONCAT44(fVar11,SUB84(dVar9,0) + fVar11);
            }
            else {
              in_dr2 = dVar9 + dVar9;
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar11);
          }
          if (in_FPSCR_PR == '\0') {
            iVar13 = (int)SUB84(in_dr2,0);
          }
          else {
            iVar13 = (int)in_dr2;
          }
          *(int *)(puVar8 + -0x5c) = iVar13;
          puVar7 = ar6;
          while (1 < (uint)((int)puVar7 - iVar6)) {
            uVar4 = (uint)(iVar6 + (int)puVar7) >> 1;
            *(uint *)(puVar8 + -100) = uVar4;
            if (*(uint *)(puVar8 + -0x5c) < *(uint *)(uVar4 * 8 + iVar5)) {
              puVar7 = *(undefined8 **)(puVar8 + -100);
            }
            else {
              iVar6 = *(int *)(puVar8 + -100);
            }
          }
          ar7 = puVar8 + -0x14;
          FUN_8c22123c(iVar5,iVar6,ar6,ar7);
          in_fr5 = SUB84(dVar10,0);
          *(undefined4 *)(puVar8 + -100) = *(undefined4 *)(puVar8 + -0x14);
          *(undefined4 *)(puVar8 + -0x4c) = *(undefined4 *)(puVar8 + -0x10);
          *(undefined4 *)(puVar8 + -0x54) = *(undefined4 *)(puVar8 + -0xc);
          *(undefined4 *)(puVar8 + -0x5c) = *(undefined4 *)(puVar8 + -8);
          *(undefined4 *)(puVar8 + -0x40) = 1;
        }
        _DAT_8c4aad78 = _DAT_8c4aad78 + 1;
      }
      if ((_DAT_8c4aad86 & 0x20) != 0) {
        iVar5 = *(int *)(_DAT_8c4aad68 + _DAT_8c4aad78 * 4);
        if (iVar5 != 0) {
          ar6 = *(undefined8 **)(_DAT_8c4aad6c + _DAT_8c4aad78 * 4);
          *(undefined8 **)(puVar8 + -0x58) = ar6;
          if (in_FPSCR_SZ == '\0') {
            dVar10 = (double)CONCAT44(_DAT_8c4aad70,in_fr5);
          }
          else {
            dVar10 = (double)CONCAT44(_DAT_8c4aad74,_DAT_8c4aad70);
          }
          fVar11 = (float)((ulonglong)dVar10 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            bVar12 = in_fr13 < fVar11;
          }
          else {
            bVar12 = (double)CONCAT44(in_fr12,in_fr13) < dVar10;
          }
          if (bVar12) {
            if (in_FPSCR_SZ == '\0') {
              dVar9 = (double)CONCAT44(0xcf800000,fVar11);
            }
            else {
              dVar9 = -3.1550160660390674e-250;
            }
            if (in_FPSCR_PR == '\0') {
              fVar11 = (float)((ulonglong)dVar9 >> 0x20);
              in_dr2 = (double)CONCAT44(fVar11,SUB84(dVar9,0) + fVar11);
            }
            else {
              in_dr2 = dVar9 + dVar9;
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar11);
          }
          if (in_FPSCR_PR == '\0') {
            iVar6 = (int)SUB84(in_dr2,0);
          }
          else {
            iVar6 = (int)in_dr2;
          }
          *(int *)(puVar8 + -0x48) = iVar6;
          uVar4 = 0;
          while (ar5_00 = uVar4, 1 < *(int *)(puVar8 + -0x58) - ar5_00) {
            uVar4 = *(int *)(puVar8 + -0x58) + ar5_00 >> 1;
            if (*(uint *)(puVar8 + -0x48) < *(uint *)(uVar4 * 8 + iVar5)) {
              *(uint *)(puVar8 + -0x58) = uVar4;
              uVar4 = ar5_00;
            }
          }
          ar7 = puVar8 + -0x24;
          FUN_8c221300(iVar5,ar5_00,ar6,ar7);
          in_fr5 = SUB84(dVar10,0);
          *(undefined4 *)(puVar8 + -0x58) = *(undefined4 *)(puVar8 + -0x24);
          *(undefined4 *)(puVar8 + -0x48) = *(undefined4 *)(puVar8 + -0x20);
          *(int *)(puVar8 + -0x40) = *(int *)(puVar8 + -0x40) + 2;
        }
        _DAT_8c4aad78 = _DAT_8c4aad78 + 1;
      }
      if ((_DAT_8c4aad86 & 0x4000) != 0) {
        iVar5 = *(int *)(_DAT_8c4aad68 + _DAT_8c4aad78 * 4);
        if (iVar5 != 0) {
          ar6 = *(undefined8 **)(_DAT_8c4aad6c + _DAT_8c4aad78 * 4);
          if (in_FPSCR_SZ == '\0') {
            dVar10 = (double)CONCAT44(_DAT_8c4aad70,in_fr5);
          }
          else {
            dVar10 = (double)CONCAT44(_DAT_8c4aad74,_DAT_8c4aad70);
          }
          iVar6 = 0;
          fVar11 = (float)((ulonglong)dVar10 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            bVar12 = in_fr13 < fVar11;
          }
          else {
            bVar12 = (double)CONCAT44(in_fr12,in_fr13) < dVar10;
          }
          if (bVar12) {
            if (in_FPSCR_SZ == '\0') {
              dVar10 = (double)CONCAT44(0xcf800000,fVar11);
            }
            else {
              dVar10 = -3.155905840934326e-250;
            }
            if (in_FPSCR_PR == '\0') {
              fVar11 = (float)((ulonglong)dVar10 >> 0x20);
              in_dr2 = (double)CONCAT44(fVar11,SUB84(dVar10,0) + fVar11);
            }
            else {
              in_dr2 = dVar10 + dVar10;
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar11);
          }
          if (in_FPSCR_PR == '\0') {
            iVar13 = (int)SUB84(in_dr2,0);
          }
          else {
            iVar13 = (int)in_dr2;
          }
          *(int *)(puVar8 + -0x44) = iVar13;
          puVar7 = ar6;
          while (1 < (uint)((int)puVar7 - iVar6)) {
            uVar4 = (uint)(iVar6 + (int)puVar7) >> 1;
            *(uint *)(puVar8 + -0x50) = uVar4;
            if (*(uint *)(puVar8 + -0x44) < *(uint *)(uVar4 * 8 + iVar5)) {
              puVar7 = *(undefined8 **)(puVar8 + -0x50);
            }
            else {
              iVar6 = *(int *)(puVar8 + -0x50);
            }
          }
          ar7 = puVar8 + -0x2c;
          FUN_8c22138a(iVar5,iVar6,ar6,ar7);
          *(undefined4 *)(puVar8 + -0x50) = *(undefined4 *)(puVar8 + -0x2c);
          *(undefined4 *)(puVar8 + -0x44) = *(undefined4 *)(puVar8 + -0x28);
          *(int *)(puVar8 + -0x40) = *(int *)(puVar8 + -0x40) + 4;
        }
        _DAT_8c4aad78 = _DAT_8c4aad78 + 1;
      }
      iVar5 = *(int *)(puVar8 + -0x40);
      ar5 = _DAT_8c4aa380;
      if (iVar5 == 1) {
        if (_DAT_8c4aa380 == -1) {
          if (_DAT_8c4aa37c == -1) {
            iVar2 = 0;
            iVar5 = 0;
            if (uVar3 != 0) {
              do {
                *(undefined8 **)(puVar8 + -0x68) = unaff_r13;
                iVar6 = iVar5 * 4;
                ar5 = *(int *)(puVar8 + -0x4c) + iVar6;
                ar7 = (undefined1 *)(*(int *)(puVar8 + -0x5c) + iVar6);
                ar6 = (undefined8 *)(*(int *)(puVar8 + -0x54) + iVar6);
                FUN_8c221622(*(int *)(puVar8 + -100) + iVar6,ar5,ar6,ar7,
                             *(undefined4 *)(puVar8 + -0x68));
                iVar2 = iVar2 + 1;
                unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
                iVar5 = iVar5 + 3;
              } while (iVar2 < (int)uVar3);
            }
          }
          else {
            iVar5 = 0;
            *(undefined4 *)(puVar8 + -0x60) = 0;
            if (uVar3 != 0) {
              do {
                *(int *)(puVar8 + -0x58) = iVar5;
                *(undefined8 **)(puVar8 + -0x68) = unaff_r13;
                iVar6 = *(int *)(puVar8 + -0x58) * 4;
                ar5 = *(int *)(puVar8 + -0x4c) + iVar6;
                ar7 = (undefined1 *)(*(int *)(puVar8 + -0x5c) + iVar6);
                ar6 = (undefined8 *)(*(int *)(puVar8 + -0x54) + iVar6);
                FUN_8c221622(*(int *)(puVar8 + -100) + iVar6,ar5,ar6,ar7,
                             *(undefined4 *)(puVar8 + -0x68));
                unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
                if (in_FPSCR_SZ == '\0') {
                  *(undefined4 *)unaff_r11 = *(undefined4 *)(_DAT_8c4aa37c * 4 + iVar2);
                }
                else {
                  *unaff_r11 = *(undefined8 *)(_DAT_8c4aa37c * 4 + iVar2);
                }
                iVar6 = _DAT_8c4aa37c * 4 + iVar2;
                if (in_FPSCR_SZ == '\0') {
                  *(undefined4 *)((int)unaff_r11 + 4) = *(undefined4 *)(iVar6 + 4);
                }
                else {
                  *(undefined8 *)((int)unaff_r11 + 4) = *(undefined8 *)(iVar6 + 4);
                }
                iVar6 = _DAT_8c4aa37c * 4 + iVar2;
                if (in_FPSCR_SZ == '\0') {
                  *(undefined4 *)(unaff_r11 + 1) = *(undefined4 *)(iVar6 + 8);
                }
                else {
                  unaff_r11[1] = *(undefined8 *)(iVar6 + 8);
                }
                iVar6 = *(int *)(puVar8 + -0x60);
                *(int *)(puVar8 + -0x60) = iVar6 + 1;
                iVar2 = iVar2 + _DAT_8c4aa374 * 4;
                unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
                iVar5 = iVar5 + 3;
              } while (iVar6 + 1 < (int)uVar3);
            }
          }
        }
        else if (_DAT_8c4aa37c == -1) {
          iVar2 = 0;
          iVar5 = 0;
          if (uVar3 != 0) {
            do {
              *(int *)(puVar8 + -0x58) = iVar5;
              *(undefined8 **)(puVar8 + -0x68) = unaff_r13;
              iVar6 = *(int *)(puVar8 + -0x58) * 4;
              ar5 = *(int *)(puVar8 + -0x4c) + iVar6;
              ar7 = (undefined1 *)(*(int *)(puVar8 + -0x5c) + iVar6);
              ar6 = (undefined8 *)(*(int *)(puVar8 + -0x54) + iVar6);
              FUN_8c221622(*(int *)(puVar8 + -100) + iVar6,ar5,ar6,ar7,
                           *(undefined4 *)(puVar8 + -0x68));
              iVar2 = iVar2 + 1;
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              *(undefined4 *)unaff_r8 =
                   *(undefined4 *)(*(int *)(puVar8 + -0x60) + _DAT_8c4aa380 * 4);
              unaff_r8 = (undefined8 *)((int)unaff_r8 + _DAT_8c4aa374 * 4);
              *(int *)(puVar8 + -0x60) = *(int *)(puVar8 + -0x60) + _DAT_8c4aa374 * 4;
              iVar5 = iVar5 + 3;
            } while (iVar2 < (int)uVar3);
          }
        }
        else {
          iVar5 = 0;
          *(undefined4 *)(puVar8 + -0x48) = 0;
          if (uVar3 != 0) {
            do {
              *(int *)(puVar8 + -0x50) = iVar5;
              *(undefined8 **)(puVar8 + -0x68) = unaff_r13;
              *(int *)(puVar8 + -0x58) = *(int *)(puVar8 + -0x50) * 4;
              ar7 = (undefined1 *)(*(int *)(puVar8 + -0x50) * 4 + *(int *)(puVar8 + -0x5c));
              ar6 = (undefined8 *)(*(int *)(puVar8 + -0x58) + *(int *)(puVar8 + -0x54));
              ar5 = *(int *)(puVar8 + -0x58) + *(int *)(puVar8 + -0x4c);
              FUN_8c221622(*(int *)(puVar8 + -0x58) + *(int *)(puVar8 + -100),ar5,ar6,ar7,
                           *(undefined4 *)(puVar8 + -0x68));
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)unaff_r11 = *(undefined4 *)(_DAT_8c4aa37c * 4 + iVar2);
              }
              else {
                *unaff_r11 = *(undefined8 *)(_DAT_8c4aa37c * 4 + iVar2);
              }
              iVar6 = _DAT_8c4aa37c * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)((int)unaff_r11 + 4) = *(undefined4 *)(iVar6 + 4);
              }
              else {
                *(undefined8 *)((int)unaff_r11 + 4) = *(undefined8 *)(iVar6 + 4);
              }
              iVar6 = _DAT_8c4aa37c * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(unaff_r11 + 1) = *(undefined4 *)(iVar6 + 8);
              }
              else {
                unaff_r11[1] = *(undefined8 *)(iVar6 + 8);
              }
              unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
              *(undefined4 *)unaff_r8 =
                   *(undefined4 *)(*(int *)(puVar8 + -0x60) + _DAT_8c4aa380 * 4);
              iVar6 = _DAT_8c4aa374 * 4;
              unaff_r8 = (undefined8 *)((int)unaff_r8 + iVar6);
              iVar2 = iVar2 + iVar6;
              *(int *)(puVar8 + -0x60) = *(int *)(puVar8 + -0x60) + iVar6;
              iVar6 = *(int *)(puVar8 + -0x48);
              *(int *)(puVar8 + -0x48) = iVar6 + 1;
              iVar5 = iVar5 + 3;
            } while (iVar6 + 1 < (int)uVar3);
          }
        }
      }
      else if (iVar5 == 2) {
        if (_DAT_8c4aa380 == -1) {
          iVar5 = 0;
          *(undefined4 *)(puVar8 + -100) = 0;
          if (uVar3 != 0) {
            do {
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)unaff_r13 = *(undefined4 *)(_DAT_8c4aa378 * 4 + iVar2);
              }
              else {
                *unaff_r13 = *(undefined8 *)(_DAT_8c4aa378 * 4 + iVar2);
              }
              iVar6 = _DAT_8c4aa378 * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)((int)unaff_r13 + 4) = *(undefined4 *)(iVar6 + 4);
              }
              else {
                *(undefined8 *)((int)unaff_r13 + 4) = *(undefined8 *)(iVar6 + 4);
              }
              iVar6 = _DAT_8c4aa378 * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(unaff_r13 + 1) = *(undefined4 *)(iVar6 + 8);
              }
              else {
                unaff_r13[1] = *(undefined8 *)(iVar6 + 8);
              }
              *(int *)(puVar8 + -0x54) = iVar5;
              *(int *)(puVar8 + -0x5c) = iVar5 * 4;
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              ar5 = iVar5 * 4 + *(int *)(puVar8 + -0x48);
              ar6 = unaff_r11;
              FUN_8c2215b4(*(int *)(puVar8 + -0x5c) + *(int *)(puVar8 + -0x58),ar5,unaff_r11,ar7);
              iVar6 = *(int *)(puVar8 + -100);
              *(int *)(puVar8 + -100) = iVar6 + 1;
              unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
              iVar2 = iVar2 + _DAT_8c4aa374 * 4;
              iVar5 = iVar5 + 3;
            } while (iVar6 + 1 < (int)uVar3);
          }
        }
        else {
          *(undefined4 *)(puVar8 + -0x5c) = 0;
          *(undefined4 *)(puVar8 + -100) = 0;
          if (uVar3 != 0) {
            do {
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)unaff_r13 = *(undefined4 *)(_DAT_8c4aa378 * 4 + iVar2);
              }
              else {
                *unaff_r13 = *(undefined8 *)(_DAT_8c4aa378 * 4 + iVar2);
              }
              iVar5 = _DAT_8c4aa378 * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)((int)unaff_r13 + 4) = *(undefined4 *)(iVar5 + 4);
              }
              else {
                *(undefined8 *)((int)unaff_r13 + 4) = *(undefined8 *)(iVar5 + 4);
              }
              iVar5 = _DAT_8c4aa378 * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(unaff_r13 + 1) = *(undefined4 *)(iVar5 + 8);
              }
              else {
                unaff_r13[1] = *(undefined8 *)(iVar5 + 8);
              }
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              iVar5 = *(int *)(puVar8 + -100) * 4;
              *(int *)(puVar8 + -0x4c) = *(int *)(puVar8 + -100);
              *(int *)(puVar8 + -0x54) = iVar5;
              ar5 = iVar5 + *(int *)(puVar8 + -0x48);
              ar6 = unaff_r11;
              FUN_8c2215b4(*(int *)(puVar8 + -0x54) + *(int *)(puVar8 + -0x58),ar5,unaff_r11,ar7);
              unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
              *(undefined4 *)unaff_r8 =
                   *(undefined4 *)(*(int *)(puVar8 + -0x60) + _DAT_8c4aa380 * 4);
              iVar6 = _DAT_8c4aa374 * 4;
              iVar2 = iVar2 + iVar6;
              *(int *)(puVar8 + -0x60) = *(int *)(puVar8 + -0x60) + iVar6;
              iVar5 = *(int *)(puVar8 + -0x5c);
              unaff_r8 = (undefined8 *)((int)unaff_r8 + iVar6);
              *(int *)(puVar8 + -0x5c) = iVar5 + 1;
              *(int *)(puVar8 + -100) = *(int *)(puVar8 + -100) + 3;
            } while (iVar5 + 1 < (int)uVar3);
          }
        }
      }
      else if (iVar5 == 3) {
        if (_DAT_8c4aa380 == -1) {
          iVar2 = 0;
          iVar5 = 0;
          if (uVar3 != 0) {
            do {
              *(int *)(puVar8 + -0x60) = iVar5;
              *(undefined8 **)(puVar8 + -0x68) = unaff_r13;
              iVar6 = *(int *)(puVar8 + -0x60) * 4;
              ar7 = (undefined1 *)(*(int *)(puVar8 + -0x5c) + iVar6);
              FUN_8c221622(*(int *)(puVar8 + -100) + iVar6,*(int *)(puVar8 + -0x4c) + iVar6,
                           *(int *)(puVar8 + -0x54) + iVar6,ar7,*(undefined4 *)(puVar8 + -0x68));
              *(int *)(puVar8 + -0x60) = iVar5 * 4;
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              ar5 = iVar5 * 4 + *(int *)(puVar8 + -0x48);
              ar6 = unaff_r11;
              FUN_8c2215b4(*(int *)(puVar8 + -0x60) + *(int *)(puVar8 + -0x58),ar5,unaff_r11,ar7);
              iVar2 = iVar2 + 1;
              unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
              iVar5 = iVar5 + 3;
            } while (iVar2 < (int)uVar3);
          }
        }
        else {
          iVar2 = 0;
          *(undefined4 *)(puVar8 + -0x50) = 0;
          if (uVar3 != 0) {
            do {
              *(int *)(puVar8 + -0x44) = iVar2;
              *(undefined8 **)(puVar8 + -0x68) = unaff_r13;
              iVar5 = *(int *)(puVar8 + -0x44) * 4;
              ar7 = (undefined1 *)(*(int *)(puVar8 + -0x5c) + iVar5);
              FUN_8c221622(*(int *)(puVar8 + -100) + iVar5,*(int *)(puVar8 + -0x4c) + iVar5,
                           *(int *)(puVar8 + -0x54) + iVar5,ar7,*(undefined4 *)(puVar8 + -0x68));
              *(int *)(puVar8 + -0x44) = iVar2;
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              ar5 = *(int *)(puVar8 + -0x48) + iVar2 * 4;
              ar6 = unaff_r11;
              FUN_8c2215b4(*(int *)(puVar8 + -0x58) + iVar2 * 4,ar5,unaff_r11,ar7);
              unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
              *(undefined4 *)unaff_r8 =
                   *(undefined4 *)(*(int *)(puVar8 + -0x60) + _DAT_8c4aa380 * 4);
              *(int *)(puVar8 + -0x60) = *(int *)(puVar8 + -0x60) + _DAT_8c4aa374 * 4;
              unaff_r8 = (undefined8 *)((int)unaff_r8 + _DAT_8c4aa374 * 4);
              iVar5 = *(int *)(puVar8 + -0x50);
              *(int *)(puVar8 + -0x50) = iVar5 + 1;
              iVar2 = iVar2 + 3;
            } while (iVar5 + 1 < (int)uVar3);
          }
        }
      }
      else if (iVar5 == 4) {
        if (_DAT_8c4aa37c == -1) {
          iVar5 = 0;
          *(undefined4 *)(puVar8 + -100) = 0;
          if (uVar3 != 0) {
            do {
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)unaff_r13 = *(undefined4 *)(_DAT_8c4aa378 * 4 + iVar2);
              }
              else {
                *unaff_r13 = *(undefined8 *)(_DAT_8c4aa378 * 4 + iVar2);
              }
              iVar6 = _DAT_8c4aa378 * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)((int)unaff_r13 + 4) = *(undefined4 *)(iVar6 + 4);
              }
              else {
                *(undefined8 *)((int)unaff_r13 + 4) = *(undefined8 *)(iVar6 + 4);
              }
              iVar6 = _DAT_8c4aa378 * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(unaff_r13 + 1) = *(undefined4 *)(iVar6 + 8);
              }
              else {
                unaff_r13[1] = *(undefined8 *)(iVar6 + 8);
              }
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              ar5 = *(int *)(puVar8 + -0x44) + iVar5;
              ar6 = unaff_r8;
              FUN_8c221414(*(int *)(puVar8 + -0x50) + iVar5,ar5,unaff_r8,ar7);
              iVar6 = *(int *)(puVar8 + -100);
              *(int *)(puVar8 + -100) = iVar6 + 1;
              unaff_r8 = (undefined8 *)((int)unaff_r8 + _DAT_8c4aa374 * 4);
              iVar2 = iVar2 + _DAT_8c4aa374 * 4;
              iVar5 = iVar5 + 4;
            } while (iVar6 + 1 < (int)uVar3);
          }
        }
        else {
          *(undefined4 *)(puVar8 + -0x5c) = 0;
          *(undefined4 *)(puVar8 + -100) = 0;
          if (uVar3 != 0) {
            do {
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)unaff_r13 = *(undefined4 *)(_DAT_8c4aa378 * 4 + iVar2);
              }
              else {
                *unaff_r13 = *(undefined8 *)(_DAT_8c4aa378 * 4 + iVar2);
              }
              iVar5 = _DAT_8c4aa378 * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)((int)unaff_r13 + 4) = *(undefined4 *)(iVar5 + 4);
              }
              else {
                *(undefined8 *)((int)unaff_r13 + 4) = *(undefined8 *)(iVar5 + 4);
              }
              iVar5 = _DAT_8c4aa378 * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(unaff_r13 + 1) = *(undefined4 *)(iVar5 + 8);
              }
              else {
                unaff_r13[1] = *(undefined8 *)(iVar5 + 8);
              }
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)unaff_r11 = *(undefined4 *)(_DAT_8c4aa37c * 4 + iVar2);
              }
              else {
                *unaff_r11 = *(undefined8 *)(_DAT_8c4aa37c * 4 + iVar2);
              }
              iVar5 = _DAT_8c4aa37c * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)((int)unaff_r11 + 4) = *(undefined4 *)(iVar5 + 4);
              }
              else {
                *(undefined8 *)((int)unaff_r11 + 4) = *(undefined8 *)(iVar5 + 4);
              }
              iVar5 = _DAT_8c4aa37c * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(unaff_r11 + 1) = *(undefined4 *)(iVar5 + 8);
              }
              else {
                unaff_r11[1] = *(undefined8 *)(iVar5 + 8);
              }
              unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
              ar5 = *(int *)(puVar8 + -100) + *(int *)(puVar8 + -0x44);
              ar6 = unaff_r8;
              FUN_8c221414(*(int *)(puVar8 + -100) + *(int *)(puVar8 + -0x50),ar5,unaff_r8,ar7);
              iVar5 = *(int *)(puVar8 + -0x5c);
              iVar2 = iVar2 + _DAT_8c4aa374 * 4;
              *(int *)(puVar8 + -0x5c) = iVar5 + 1;
              unaff_r8 = (undefined8 *)((int)unaff_r8 + _DAT_8c4aa374 * 4);
              *(int *)(puVar8 + -100) = *(int *)(puVar8 + -100) + 4;
            } while (iVar5 + 1 < (int)uVar3);
          }
        }
      }
      else if (iVar5 == 5) {
        if (_DAT_8c4aa37c == -1) {
          iVar2 = 0;
          *(undefined4 *)(puVar8 + -0x60) = 0;
          iVar5 = 0;
          if (uVar3 != 0) {
            do {
              *(int *)(puVar8 + -0x58) = iVar2;
              *(undefined8 **)(puVar8 + -0x68) = unaff_r13;
              iVar6 = *(int *)(puVar8 + -0x58) * 4;
              ar7 = (undefined1 *)(*(int *)(puVar8 + -0x5c) + iVar6);
              FUN_8c221622(*(int *)(puVar8 + -100) + iVar6,*(int *)(puVar8 + -0x4c) + iVar6,
                           *(int *)(puVar8 + -0x54) + iVar6,ar7,*(undefined4 *)(puVar8 + -0x68));
              ar5 = *(int *)(puVar8 + -0x44) + iVar5;
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              ar6 = unaff_r8;
              FUN_8c221414(*(int *)(puVar8 + -0x50) + iVar5,ar5,unaff_r8,ar7);
              iVar6 = *(int *)(puVar8 + -0x60);
              iVar5 = iVar5 + 4;
              unaff_r8 = (undefined8 *)((int)unaff_r8 + _DAT_8c4aa374 * 4);
              *(int *)(puVar8 + -0x60) = iVar6 + 1;
              iVar2 = iVar2 + 3;
            } while (iVar6 + 1 < (int)uVar3);
          }
        }
        else {
          *(undefined4 *)(puVar8 + -0x48) = 0;
          iVar5 = 0;
          *(undefined4 *)(puVar8 + -0x58) = 0;
          if (uVar3 != 0) {
            do {
              *(undefined4 *)(puVar8 + -0x40) = *(undefined4 *)(puVar8 + -0x58);
              *(undefined8 **)(puVar8 + -0x68) = unaff_r13;
              *(int *)(puVar8 + -0x60) = *(int *)(puVar8 + -0x40) * 4;
              ar7 = (undefined1 *)(*(int *)(puVar8 + -0x40) * 4 + *(int *)(puVar8 + -0x5c));
              FUN_8c221622(*(int *)(puVar8 + -0x60) + *(int *)(puVar8 + -100),
                           *(int *)(puVar8 + -0x60) + *(int *)(puVar8 + -0x4c),
                           *(int *)(puVar8 + -0x60) + *(int *)(puVar8 + -0x54),ar7,
                           *(undefined4 *)(puVar8 + -0x68));
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)unaff_r11 = *(undefined4 *)(_DAT_8c4aa37c * 4 + iVar2);
              }
              else {
                *unaff_r11 = *(undefined8 *)(_DAT_8c4aa37c * 4 + iVar2);
              }
              iVar6 = _DAT_8c4aa37c * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)((int)unaff_r11 + 4) = *(undefined4 *)(iVar6 + 4);
              }
              else {
                *(undefined8 *)((int)unaff_r11 + 4) = *(undefined8 *)(iVar6 + 4);
              }
              iVar6 = _DAT_8c4aa37c * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(unaff_r11 + 1) = *(undefined4 *)(iVar6 + 8);
              }
              else {
                unaff_r11[1] = *(undefined8 *)(iVar6 + 8);
              }
              unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
              ar5 = *(int *)(puVar8 + -0x44) + iVar5;
              ar6 = unaff_r8;
              FUN_8c221414(*(int *)(puVar8 + -0x50) + iVar5,ar5,unaff_r8,ar7);
              iVar6 = *(int *)(puVar8 + -0x48);
              iVar5 = iVar5 + 4;
              iVar2 = iVar2 + _DAT_8c4aa374 * 4;
              *(int *)(puVar8 + -0x48) = iVar6 + 1;
              unaff_r8 = (undefined8 *)((int)unaff_r8 + _DAT_8c4aa374 * 4);
              *(int *)(puVar8 + -0x58) = *(int *)(puVar8 + -0x58) + 3;
            } while (iVar6 + 1 < (int)uVar3);
          }
        }
      }
      else if (iVar5 == 6) {
        *(undefined4 *)(puVar8 + -0x54) = 0;
        *(undefined4 *)(puVar8 + -100) = 0;
        *(undefined4 *)(puVar8 + -0x5c) = 0;
        if (uVar3 != 0) {
          do {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)unaff_r13 = *(undefined4 *)(_DAT_8c4aa378 * 4 + iVar2);
            }
            else {
              *unaff_r13 = *(undefined8 *)(_DAT_8c4aa378 * 4 + iVar2);
            }
            iVar5 = _DAT_8c4aa378 * 4 + iVar2;
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)((int)unaff_r13 + 4) = *(undefined4 *)(iVar5 + 4);
            }
            else {
              *(undefined8 *)((int)unaff_r13 + 4) = *(undefined8 *)(iVar5 + 4);
            }
            iVar5 = _DAT_8c4aa378 * 4 + iVar2;
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(unaff_r13 + 1) = *(undefined4 *)(iVar5 + 8);
            }
            else {
              unaff_r13[1] = *(undefined8 *)(iVar5 + 8);
            }
            unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            iVar5 = *(int *)(puVar8 + -0x5c) * 4;
            *(int *)(puVar8 + -0x60) = *(int *)(puVar8 + -0x5c);
            *(int *)(puVar8 + -0x4c) = iVar5;
            FUN_8c2215b4(*(int *)(puVar8 + -0x4c) + *(int *)(puVar8 + -0x58),
                         iVar5 + *(int *)(puVar8 + -0x48),unaff_r11,ar7);
            unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
            ar5 = *(int *)(puVar8 + -100) + *(int *)(puVar8 + -0x44);
            ar6 = unaff_r8;
            FUN_8c221414(*(int *)(puVar8 + -100) + *(int *)(puVar8 + -0x50),ar5,unaff_r8,ar7);
            *(int *)(puVar8 + -0x54) = *(int *)(puVar8 + -0x54) + 1;
            unaff_r8 = (undefined8 *)((int)unaff_r8 + _DAT_8c4aa374 * 4);
            *(int *)(puVar8 + -100) = *(int *)(puVar8 + -100) + 4;
            *(int *)(puVar8 + -0x5c) = *(int *)(puVar8 + -0x5c) + 3;
            iVar2 = iVar2 + _DAT_8c4aa374 * 4;
          } while (*(int *)(puVar8 + -0x54) < (int)uVar3);
        }
      }
      else {
        if (iVar5 != 7) goto LAB_8c21e4ba;
        iVar5 = 0;
        *(undefined4 *)(puVar8 + -0x40) = 0;
        iVar2 = 0;
        if (uVar3 != 0) {
          do {
            *(int *)(puVar8 + -0x30) = iVar5;
            *(undefined8 **)(puVar8 + -0x68) = unaff_r13;
            *(int *)(puVar8 + -0x60) = *(int *)(puVar8 + -0x30) * 4;
            ar7 = (undefined1 *)(*(int *)(puVar8 + -0x30) * 4 + *(int *)(puVar8 + -0x5c));
            FUN_8c221622(*(int *)(puVar8 + -0x60) + *(int *)(puVar8 + -100),
                         *(int *)(puVar8 + -0x60) + *(int *)(puVar8 + -0x4c),
                         *(int *)(puVar8 + -0x60) + *(int *)(puVar8 + -0x54),ar7,
                         *(undefined4 *)(puVar8 + -0x68));
            *(int *)(puVar8 + -0x60) = iVar5;
            *(int *)(puVar8 + -0x30) = iVar5 * 4;
            unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
            FUN_8c2215b4(*(int *)(puVar8 + -0x30) + *(int *)(puVar8 + -0x58),
                         iVar5 * 4 + *(int *)(puVar8 + -0x48),unaff_r11,ar7);
            ar5 = *(int *)(puVar8 + -0x44) + iVar2;
            unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
            ar6 = unaff_r8;
            FUN_8c221414(*(int *)(puVar8 + -0x50) + iVar2,ar5,unaff_r8,ar7);
            iVar6 = *(int *)(puVar8 + -0x40);
            iVar2 = iVar2 + 4;
            unaff_r8 = (undefined8 *)((int)unaff_r8 + _DAT_8c4aa374 * 4);
            *(int *)(puVar8 + -0x40) = iVar6 + 1;
            iVar5 = iVar5 + 3;
          } while (iVar6 + 1 < (int)uVar3);
        }
      }
      **(undefined4 **)(*(int *)(puVar8 + -0x3c) + 4) = *(undefined4 *)(puVar8 + -0x34);
      *(undefined4 *)(_DAT_8c4aa374 * uVar3 * 4 + *(int *)(puVar8 + -0x34) + 8) = 0xff;
    }
  }
LAB_8c21e4ba:
  uVar1 = (*_DAT_8c4aa368)(*(undefined4 *)(*(int *)(puVar8 + -0x3c) + 4),ar5,ar6,ar7);
  **(undefined4 **)(*(int *)(puVar8 + -0x3c) + 4) = *(undefined4 *)(puVar8 + -0x38);
  return uVar1;
}

__asm__(".globl _FUN_8c21daf2\n.set _FUN_8c21daf2, _FUN_8c21daf2_def\n");
