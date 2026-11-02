#include "../decls.h"
undefined4 FUN_8c220658_def(int ar4,uint ar5,undefined8 *ar6,undefined1 *ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *unaff_r11;
  undefined8 *unaff_r13;
  undefined8 *puVar7;
  undefined4 extraout_fr0;
  double in_dr2;
  double dVar8;
  float fVar9;
  undefined4 in_fr5;
  double dVar10;
  undefined8 in_dr14;
  double dVar11;
  undefined8 in_xd14;
  bool bVar12;
  undefined4 in_PR;
  int iVar13;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_2c [8];
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)in_dr14,(undefined4)uStack_24);
    puVar7 = &uStack_24;
                    
    (*(uint*)((uchar*)&uStack_24+0)) = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar7 = (undefined8 *)auStack_2c;
    uStack_24 = in_xd14;
  }
  *(undefined4 *)((int)puVar7 + -4) = in_PR;
  *(int *)((int)puVar7 + -0x38) = ar4;
  if (*(int *)(ar4 + 4) == 0) {
    return ain0;
  }
  if ((**(uint **)((int)puVar7 + -0x38) & 8) != 0) {
    return **(uint **)((int)puVar7 + -0x38);
  }
  iVar2 = **(int **)(*(int *)((int)puVar7 + -0x38) + 4);
  *(int *)((int)puVar7 + -0x34) = iVar2;
  if (iVar2 != 0) {
    iVar2 = *(int *)((int)puVar7 + -0x34);
    *(int *)((int)puVar7 + -0x5c) = iVar2;
    if (_DAT_8c4aad84 != 0) {
      *(undefined4 **)((int)puVar7 + -0x30) = _DAT_8c4ab0c4;
      *_DAT_8c4ab0c4 = **(undefined4 **)((int)puVar7 + -0x34);
      uVar3 = *(uint *)(*(int *)((int)puVar7 + -0x34) + 4);
      *(uint *)(*(int *)((int)puVar7 + -0x30) + 4) = uVar3;
      uVar3 = uVar3 >> 0x10;
      if (DAT_8c2759d8 == 0) {
        FUN_8c2205d8(**(uint **)((int)puVar7 + -0x30) & 0xffff,ar5,ar6,ar7);
        DAT_8c2759d8 = 1;
      }
      *(undefined4 *)((int)puVar7 + -0x3c) = 0;
      if (_DAT_8c4aa378 != -1) {
        unaff_r13 = (undefined8 *)(_DAT_8c4ab0c4 + _DAT_8c4aa378);
      }
      if (_DAT_8c4aa37c != 0xffffffff) {
        unaff_r11 = (undefined8 *)(_DAT_8c4ab0c4 + _DAT_8c4aa37c);
      }
      if (_DAT_8c4aa380 != 0xffffffff) {
        *(undefined4 **)((int)puVar7 + -0x54) = _DAT_8c4ab0c4 + _DAT_8c4aa380;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(0x4f000000,(int)in_dr14);
      }
      else {
        dVar11 = -1.8630120701277013e-249;
      }
      ar5 = _DAT_8c4aa380;
      if ((_DAT_8c4aad86 & 0x10) != 0) {
        iVar4 = *(int *)(_DAT_8c4aad68 + _DAT_8c4aad78 * 4);
        if (iVar4 != 0) {
          ar5 = 0;
          ar6 = *(undefined8 **)(_DAT_8c4aad6c + _DAT_8c4aad78 * 4);
          if (in_FPSCR_SZ == '\0') {
            dVar10 = (double)CONCAT44(_DAT_8c4aad70,in_fr5);
          }
          else {
            dVar10 = (double)CONCAT44(_DAT_8c4aad74,_DAT_8c4aad70);
          }
          fVar9 = (float)((ulonglong)dVar10 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            bVar12 = (float)((ulonglong)dVar11 >> 0x20) < fVar9;
          }
          else {
            bVar12 = dVar11 < dVar10;
          }
          if (bVar12) {
            if (in_FPSCR_SZ == '\0') {
              dVar8 = (double)CONCAT44(0xcf800000,fVar9);
            }
            else {
              dVar8 = -3.1550160660390674e-250;
            }
            if (in_FPSCR_PR == '\0') {
              fVar9 = (float)((ulonglong)dVar8 >> 0x20);
              in_dr2 = (double)CONCAT44(fVar9,SUB84(dVar8,0) + fVar9);
            }
            else {
              in_dr2 = dVar8 + dVar8;
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
          }
          if (in_FPSCR_PR == '\0') {
            iVar13 = (int)SUB84(in_dr2,0);
          }
          else {
            iVar13 = (int)in_dr2;
          }
          *(int *)((int)puVar7 + -0x50) = iVar13;
          puVar5 = ar6;
          while (1 < (int)puVar5 - ar5) {
            uVar6 = ar5 + (int)puVar5 >> 1;
            *(uint *)((int)puVar7 + -0x58) = uVar6;
            if (*(uint *)((int)puVar7 + -0x50) < *(uint *)(uVar6 * 8 + iVar4)) {
              puVar5 = *(undefined8 **)((int)puVar7 + -0x58);
            }
            else {
              ar5 = *(uint *)((int)puVar7 + -0x58);
            }
          }
          ar7 = (undefined1 *)((int)puVar7 + -0x14);
          FUN_8c22123c(iVar4,ar5,ar6,ar7);
          in_fr5 = SUB84(dVar10,0);
          if (in_FPSCR_SZ == '\0') {
            dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),extraout_fr0);
          }
          *(undefined4 *)((int)puVar7 + -0x48) = *(undefined4 *)((int)puVar7 + -0x14);
          *(undefined4 *)((int)puVar7 + -0x40) = *(undefined4 *)((int)puVar7 + -0x10);
          *(undefined4 *)((int)puVar7 + -0x58) = *(undefined4 *)((int)puVar7 + -0xc);
          *(undefined4 *)((int)puVar7 + -0x50) = *(undefined4 *)((int)puVar7 + -8);
          *(undefined4 *)((int)puVar7 + -0x3c) = 1;
        }
        _DAT_8c4aad78 = _DAT_8c4aad78 + 1;
      }
      if ((_DAT_8c4aad86 & 0x20) != 0) {
        ar5 = _DAT_8c4aad78 * 4;
        iVar4 = *(int *)(_DAT_8c4aad68 + ar5);
        if (iVar4 != 0) {
          ar6 = *(undefined8 **)(_DAT_8c4aad6c + ar5);
          *(undefined8 **)((int)puVar7 + -0x4c) = ar6;
          if (in_FPSCR_SZ == '\0') {
            dVar10 = (double)CONCAT44(_DAT_8c4aad70,in_fr5);
          }
          else {
            dVar10 = (double)CONCAT44(_DAT_8c4aad74,_DAT_8c4aad70);
          }
          fVar9 = (float)((ulonglong)dVar10 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            bVar12 = (float)((ulonglong)dVar11 >> 0x20) < fVar9;
          }
          else {
            bVar12 = dVar11 < dVar10;
          }
          if (bVar12) {
            if (in_FPSCR_SZ == '\0') {
              dVar11 = (double)CONCAT44(0xcf800000,fVar9);
            }
            else {
              dVar11 = -3.1550160660390674e-250;
            }
            if (in_FPSCR_PR == '\0') {
              fVar9 = (float)((ulonglong)dVar11 >> 0x20);
              in_dr2 = (double)CONCAT44(fVar9,SUB84(dVar11,0) + fVar9);
            }
            else {
              in_dr2 = dVar11 + dVar11;
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
          }
          if (in_FPSCR_PR == '\0') {
            iVar13 = (int)SUB84(in_dr2,0);
          }
          else {
            iVar13 = (int)in_dr2;
          }
          *(int *)((int)puVar7 + -0x44) = iVar13;
          uVar6 = 0;
          while (ar5 = uVar6, 1 < *(int *)((int)puVar7 + -0x4c) - ar5) {
            uVar6 = *(int *)((int)puVar7 + -0x4c) + ar5 >> 1;
            if (*(uint *)((int)puVar7 + -0x44) < *(uint *)(uVar6 * 8 + iVar4)) {
              *(uint *)((int)puVar7 + -0x4c) = uVar6;
              uVar6 = ar5;
            }
          }
          ar7 = (undefined1 *)((int)puVar7 + -0x24);
          FUN_8c221300(iVar4,ar5,ar6,ar7);
          *(undefined4 *)((int)puVar7 + -0x4c) = *(undefined4 *)((int)puVar7 + -0x24);
          *(undefined4 *)((int)puVar7 + -0x44) = *(undefined4 *)((int)puVar7 + -0x20);
          *(int *)((int)puVar7 + -0x3c) = *(int *)((int)puVar7 + -0x3c) + 2;
        }
        _DAT_8c4aad78 = _DAT_8c4aad78 + 1;
      }
      iVar4 = *(int *)((int)puVar7 + -0x3c);
      if (iVar4 == 1) {
        ar5 = _DAT_8c4aa37c;
        if (_DAT_8c4aa380 == 0xffffffff) {
          if (_DAT_8c4aa37c == 0xffffffff) {
            iVar2 = 0;
            iVar4 = 0;
            if (uVar3 != 0) {
              do {
                *(undefined8 **)((int)puVar7 + -0x60) = unaff_r13;
                iVar13 = iVar4 * 4;
                ar5 = *(int *)((int)puVar7 + -0x40) + iVar13;
                ar7 = (undefined1 *)(*(int *)((int)puVar7 + -0x50) + iVar13);
                ar6 = (undefined8 *)(*(int *)((int)puVar7 + -0x58) + iVar13);
                FUN_8c221622(*(int *)((int)puVar7 + -0x48) + iVar13,ar5,ar6,ar7,
                             *(undefined4 *)((int)puVar7 + -0x60));
                iVar2 = iVar2 + 1;
                unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
                iVar4 = iVar4 + 3;
              } while (iVar2 < (int)uVar3);
            }
          }
          else {
            *(undefined4 *)((int)puVar7 + -0x5c) = 0;
            iVar4 = 0;
            if (uVar3 != 0) {
              do {
                *(int *)((int)puVar7 + -0x54) = iVar4;
                *(undefined8 **)((int)puVar7 + -0x60) = unaff_r13;
                iVar13 = *(int *)((int)puVar7 + -0x54) * 4;
                ar5 = *(int *)((int)puVar7 + -0x40) + iVar13;
                ar7 = (undefined1 *)(*(int *)((int)puVar7 + -0x50) + iVar13);
                ar6 = (undefined8 *)(*(int *)((int)puVar7 + -0x58) + iVar13);
                FUN_8c221622(*(int *)((int)puVar7 + -0x48) + iVar13,ar5,ar6,ar7,
                             *(undefined4 *)((int)puVar7 + -0x60));
                unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
                if (in_FPSCR_SZ == '\0') {
                  *(undefined4 *)unaff_r11 = *(undefined4 *)(_DAT_8c4aa37c * 4 + iVar2);
                }
                else {
                  *unaff_r11 = *(undefined8 *)(_DAT_8c4aa37c * 4 + iVar2);
                }
                iVar13 = _DAT_8c4aa37c * 4 + iVar2;
                if (in_FPSCR_SZ == '\0') {
                  *(undefined4 *)((int)unaff_r11 + 4) = *(undefined4 *)(iVar13 + 4);
                }
                else {
                  *(undefined8 *)((int)unaff_r11 + 4) = *(undefined8 *)(iVar13 + 4);
                }
                iVar13 = _DAT_8c4aa37c * 4 + iVar2;
                if (in_FPSCR_SZ == '\0') {
                  *(undefined4 *)(unaff_r11 + 1) = *(undefined4 *)(iVar13 + 8);
                }
                else {
                  unaff_r11[1] = *(undefined8 *)(iVar13 + 8);
                }
                iVar13 = *(int *)((int)puVar7 + -0x5c);
                *(int *)((int)puVar7 + -0x5c) = iVar13 + 1;
                iVar2 = iVar2 + _DAT_8c4aa374 * 4;
                unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
                iVar4 = iVar4 + 3;
              } while (iVar13 + 1 < (int)uVar3);
            }
          }
        }
        else if (_DAT_8c4aa37c == 0xffffffff) {
          iVar2 = 0;
          iVar4 = 0;
          if (uVar3 != 0) {
            do {
              *(undefined8 **)((int)puVar7 + -0x60) = unaff_r13;
              iVar13 = iVar4 * 4;
              ar5 = *(int *)((int)puVar7 + -0x40) + iVar13;
              ar7 = (undefined1 *)(*(int *)((int)puVar7 + -0x50) + iVar13);
              ar6 = (undefined8 *)(*(int *)((int)puVar7 + -0x58) + iVar13);
              FUN_8c221622(*(int *)((int)puVar7 + -0x48) + iVar13,ar5,ar6,ar7,
                           *(undefined4 *)((int)puVar7 + -0x60));
              iVar2 = iVar2 + 1;
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              **(undefined4 **)((int)puVar7 + -0x54) =
                   *(undefined4 *)(*(int *)((int)puVar7 + -0x5c) + _DAT_8c4aa380 * 4);
              *(int *)((int)puVar7 + -0x54) = *(int *)((int)puVar7 + -0x54) + _DAT_8c4aa374 * 4;
              *(int *)((int)puVar7 + -0x5c) = *(int *)((int)puVar7 + -0x5c) + _DAT_8c4aa374 * 4;
              iVar4 = iVar4 + 3;
            } while (iVar2 < (int)uVar3);
          }
        }
        else {
          *(undefined4 *)((int)puVar7 + -0x4c) = 0;
          iVar4 = 0;
          if (uVar3 != 0) {
            do {
              *(int *)((int)puVar7 + -0x44) = iVar4;
              *(undefined8 **)((int)puVar7 + -0x60) = unaff_r13;
              iVar13 = *(int *)((int)puVar7 + -0x44) * 4;
              ar5 = *(int *)((int)puVar7 + -0x40) + iVar13;
              ar7 = (undefined1 *)(*(int *)((int)puVar7 + -0x50) + iVar13);
              ar6 = (undefined8 *)(*(int *)((int)puVar7 + -0x58) + iVar13);
              FUN_8c221622(*(int *)((int)puVar7 + -0x48) + iVar13,ar5,ar6,ar7,
                           *(undefined4 *)((int)puVar7 + -0x60));
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)unaff_r11 = *(undefined4 *)(_DAT_8c4aa37c * 4 + iVar2);
              }
              else {
                *unaff_r11 = *(undefined8 *)(_DAT_8c4aa37c * 4 + iVar2);
              }
              iVar13 = _DAT_8c4aa37c * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)((int)unaff_r11 + 4) = *(undefined4 *)(iVar13 + 4);
              }
              else {
                *(undefined8 *)((int)unaff_r11 + 4) = *(undefined8 *)(iVar13 + 4);
              }
              iVar13 = _DAT_8c4aa37c * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(unaff_r11 + 1) = *(undefined4 *)(iVar13 + 8);
              }
              else {
                unaff_r11[1] = *(undefined8 *)(iVar13 + 8);
              }
              unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
              **(undefined4 **)((int)puVar7 + -0x54) =
                   *(undefined4 *)(*(int *)((int)puVar7 + -0x5c) + _DAT_8c4aa380 * 4);
              iVar13 = _DAT_8c4aa374 * 4;
              iVar2 = iVar2 + iVar13;
              *(int *)((int)puVar7 + -0x54) = *(int *)((int)puVar7 + -0x54) + iVar13;
              *(int *)((int)puVar7 + -0x5c) = *(int *)((int)puVar7 + -0x5c) + iVar13;
              iVar13 = *(int *)((int)puVar7 + -0x4c);
              *(int *)((int)puVar7 + -0x4c) = iVar13 + 1;
              iVar4 = iVar4 + 3;
            } while (iVar13 + 1 < (int)uVar3);
          }
        }
      }
      else if (iVar4 == 2) {
        if (_DAT_8c4aa380 == 0xffffffff) {
          *(undefined4 *)((int)puVar7 + -0x54) = 0;
          *(undefined4 *)((int)puVar7 + -0x5c) = 0;
          if (uVar3 != 0) {
            do {
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)unaff_r13 = *(undefined4 *)(_DAT_8c4aa378 * 4 + iVar2);
              }
              else {
                *unaff_r13 = *(undefined8 *)(_DAT_8c4aa378 * 4 + iVar2);
              }
              iVar4 = _DAT_8c4aa378 * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)((int)unaff_r13 + 4) = *(undefined4 *)(iVar4 + 4);
              }
              else {
                *(undefined8 *)((int)unaff_r13 + 4) = *(undefined8 *)(iVar4 + 4);
              }
              iVar4 = _DAT_8c4aa378 * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(unaff_r13 + 1) = *(undefined4 *)(iVar4 + 8);
              }
              else {
                unaff_r13[1] = *(undefined8 *)(iVar4 + 8);
              }
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              iVar4 = *(int *)((int)puVar7 + -0x5c) * 4;
              *(int *)((int)puVar7 + -0x58) = *(int *)((int)puVar7 + -0x5c);
              ar5 = *(int *)((int)puVar7 + -0x44) + iVar4;
              ar6 = unaff_r11;
              FUN_8c2215b4(*(int *)((int)puVar7 + -0x4c) + iVar4,ar5,unaff_r11,ar7);
              iVar4 = *(int *)((int)puVar7 + -0x54);
              iVar2 = iVar2 + _DAT_8c4aa374 * 4;
              *(int *)((int)puVar7 + -0x54) = iVar4 + 1;
              unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
              *(int *)((int)puVar7 + -0x5c) = *(int *)((int)puVar7 + -0x5c) + 3;
            } while (iVar4 + 1 < (int)uVar3);
          }
        }
        else {
          *(undefined4 *)((int)puVar7 + -0x50) = 0;
          *(undefined4 *)((int)puVar7 + -0x58) = 0;
          if (uVar3 != 0) {
            do {
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)unaff_r13 = *(undefined4 *)(_DAT_8c4aa378 * 4 + iVar2);
              }
              else {
                *unaff_r13 = *(undefined8 *)(_DAT_8c4aa378 * 4 + iVar2);
              }
              iVar4 = _DAT_8c4aa378 * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)((int)unaff_r13 + 4) = *(undefined4 *)(iVar4 + 4);
              }
              else {
                *(undefined8 *)((int)unaff_r13 + 4) = *(undefined8 *)(iVar4 + 4);
              }
              iVar4 = _DAT_8c4aa378 * 4 + iVar2;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(unaff_r13 + 1) = *(undefined4 *)(iVar4 + 8);
              }
              else {
                unaff_r13[1] = *(undefined8 *)(iVar4 + 8);
              }
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              iVar4 = *(int *)((int)puVar7 + -0x58) * 4;
              *(int *)((int)puVar7 + -0x48) = *(int *)((int)puVar7 + -0x58);
              ar5 = *(int *)((int)puVar7 + -0x44) + iVar4;
              ar6 = unaff_r11;
              FUN_8c2215b4(*(int *)((int)puVar7 + -0x4c) + iVar4,ar5,unaff_r11,ar7);
              unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
              **(undefined4 **)((int)puVar7 + -0x54) =
                   *(undefined4 *)(*(int *)((int)puVar7 + -0x5c) + _DAT_8c4aa380 * 4);
              iVar4 = _DAT_8c4aa374 * 4;
              *(int *)((int)puVar7 + -0x54) = *(int *)((int)puVar7 + -0x54) + iVar4;
              iVar2 = iVar2 + iVar4;
              *(int *)((int)puVar7 + -0x5c) = *(int *)((int)puVar7 + -0x5c) + iVar4;
              iVar4 = *(int *)((int)puVar7 + -0x50);
              *(int *)((int)puVar7 + -0x50) = iVar4 + 1;
              *(int *)((int)puVar7 + -0x58) = *(int *)((int)puVar7 + -0x58) + 3;
            } while (iVar4 + 1 < (int)uVar3);
          }
        }
      }
      else {
        if (iVar4 != 3) goto LAB_8c220c4e;
        if (_DAT_8c4aa380 == 0xffffffff) {
          iVar2 = 0;
          iVar4 = 0;
          if (uVar3 != 0) {
            do {
              *(int *)((int)puVar7 + -0x5c) = iVar4;
              *(undefined8 **)((int)puVar7 + -0x60) = unaff_r13;
              iVar13 = *(int *)((int)puVar7 + -0x5c) * 4;
              ar7 = (undefined1 *)(*(int *)((int)puVar7 + -0x50) + iVar13);
              FUN_8c221622(*(int *)((int)puVar7 + -0x48) + iVar13,
                           *(int *)((int)puVar7 + -0x40) + iVar13,
                           *(int *)((int)puVar7 + -0x58) + iVar13,ar7,
                           *(undefined4 *)((int)puVar7 + -0x60));
              *(int *)((int)puVar7 + -0x5c) = iVar4;
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              ar5 = *(int *)((int)puVar7 + -0x44) + iVar4 * 4;
              ar6 = unaff_r11;
              FUN_8c2215b4(*(int *)((int)puVar7 + -0x4c) + iVar4 * 4,ar5,unaff_r11,ar7);
              iVar2 = iVar2 + 1;
              unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
              iVar4 = iVar4 + 3;
            } while (iVar2 < (int)uVar3);
          }
        }
        else {
          iVar2 = 0;
          iVar4 = 0;
          if (uVar3 != 0) {
            do {
              *(int *)((int)puVar7 + -0x3c) = iVar4;
              *(undefined8 **)((int)puVar7 + -0x60) = unaff_r13;
              iVar13 = *(int *)((int)puVar7 + -0x3c) * 4;
              ar7 = (undefined1 *)(*(int *)((int)puVar7 + -0x50) + iVar13);
              FUN_8c221622(*(int *)((int)puVar7 + -0x48) + iVar13,
                           *(int *)((int)puVar7 + -0x40) + iVar13,
                           *(int *)((int)puVar7 + -0x58) + iVar13,ar7,
                           *(undefined4 *)((int)puVar7 + -0x60));
              *(int *)((int)puVar7 + -0x3c) = iVar4 * 4;
              unaff_r13 = (undefined8 *)((int)unaff_r13 + _DAT_8c4aa374 * 4);
              ar5 = iVar4 * 4 + *(int *)((int)puVar7 + -0x44);
              ar6 = unaff_r11;
              FUN_8c2215b4(*(int *)((int)puVar7 + -0x3c) + *(int *)((int)puVar7 + -0x4c),ar5,
                           unaff_r11,ar7);
              iVar2 = iVar2 + 1;
              unaff_r11 = (undefined8 *)((int)unaff_r11 + _DAT_8c4aa374 * 4);
              **(undefined4 **)((int)puVar7 + -0x54) =
                   *(undefined4 *)(*(int *)((int)puVar7 + -0x5c) + _DAT_8c4aa380 * 4);
              *(int *)((int)puVar7 + -0x54) = *(int *)((int)puVar7 + -0x54) + _DAT_8c4aa374 * 4;
              *(int *)((int)puVar7 + -0x5c) = *(int *)((int)puVar7 + -0x5c) + _DAT_8c4aa374 * 4;
              iVar4 = iVar4 + 3;
            } while (iVar2 < (int)uVar3);
          }
        }
      }
      **(undefined4 **)(*(int *)((int)puVar7 + -0x38) + 4) = *(undefined4 *)((int)puVar7 + -0x30);
      *(undefined4 *)(_DAT_8c4aa374 * uVar3 * 4 + *(int *)((int)puVar7 + -0x30) + 8) = 0xff;
    }
  }
LAB_8c220c4e:
  uVar1 = (*_DAT_8c4aa368)(*(undefined4 *)(*(int *)((int)puVar7 + -0x38) + 4),ar5,ar6,ar7);
  **(undefined4 **)(*(int *)((int)puVar7 + -0x38) + 4) = *(undefined4 *)((int)puVar7 + -0x34);
  return uVar1;
}

__asm__(".globl _FUN_8c220658\n.set _FUN_8c220658, _FUN_8c220658_def\n");
