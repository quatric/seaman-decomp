#include "../decls.h"
undefined4 FUN_8c046684_def(int ar4,undefined **ar5,undefined4 ar6,code *ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined **ppuVar8;
  int *a4;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 unaff_r8;
  undefined4 *ar5_00;
  undefined4 unaff_r9;
  code *pcVar12;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 uVar13;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar14;
  float fVar15;
  double dVar16;
  ulonglong uVar17;
  double in_dr14;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar18;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar14 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar14 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar14 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar14 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar14 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar14 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar14 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar14 + -0x18) = unaff_r9;
  *(undefined4 *)((int)puVar14 + -0x1c) = unaff_r8;
  *(undefined4 *)((int)puVar14 + -0x20) = in_PR;
  *(undefined4 *)((int)puVar14 + -0x28c) = ar6;
  ar5_00 = *(undefined4 **)((int)puVar14 + 4);
  pcVar12 = *(code **)((int)puVar14 + 8);
  uVar13 = 1;
  *(undefined4 *)((int)puVar14 + -0xf0) = 1;
  puVar10 = ar5_00 + 2;
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)CONCAT44(0x43c80000,*(undefined4 *)(ar4 + 0x48));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x48);
    dVar16 = 7.673846727083534e+21;
  }
  iVar4 = ar4 + 0x48;
  if (in_FPSCR_PR == '\0') {
    fVar15 = SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20);
  }
  else {
    fVar15 = SUB84(dVar16 + dVar16,0);
  }
  if (in_FPSCR_SZ != '\0') {
    fVar15 = (float)*(undefined8 *)(ar4 + 0x48);
  }
  pcVar2 = ar7;
  FUN_8c10277c((undefined1 *)((int)puVar14 + -0x2c),iVar4,puVar10,ar7);
  FUN_8c10277c((undefined1 *)((int)puVar14 + -0x38),iVar4,puVar10,pcVar2);
  FUN_8c102748((undefined1 *)((int)puVar14 + -0x44),iVar4,puVar10,pcVar2);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar14 + -0xf4) = 0;
  }
  else {
    *(ulonglong *)((int)puVar14 + -0xf4) = (ulonglong)(uint)fVar15;
  }
  uVar17 = (ulonglong)(uint)fVar15;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar14 + -0xf8) = 0;
  }
  else {
    *(ulonglong *)((int)puVar14 + -0xf8) = uVar17;
  }
  iVar4 = ar4 + 0x14;
  pcVar7 = Vec3_assign;
  Vec3_assign(ar4 + 0x80,iVar4,Vec3_assign,pcVar2);
  if (*(int *)(ar4 + 0x31c) < 1) {
    if (*(int *)(ar4 + 0x324) == 0) {
      *(undefined4 *)(ar4 + 0x2ec) = 0;
LAB_8c046822:
      do {
        iVar3 = *(int *)(ar4 + 0x134);
        if ((0x17 < iVar3) || (iVar3 < 0)) goto override_jmp_8c046852_case_6;
                    
        switch(iVar3) {
        case 0:
          pcVar7 = (code *)0x128;
          if ((*(int *)(ar4 + 0x128) < 3) || (*(int *)((int)puVar14 + 0x38) != 1)) {
            if (ar7 == (code *)0x1) {
              uVar1 = FUN_8c057164(ar4,ar5,0x128,pcVar2);
              *(undefined4 *)((int)puVar14 + -0x11c) = uVar1;
              *(undefined4 *)((int)puVar14 + -0x290) = *(undefined4 *)((int)puVar14 + -0x11c);
              if (*(int *)((int)puVar14 + -0x290) == 0) {
                *(int *)((int)puVar14 + -0x230) = ar4;
                *(undefined4 *)((int)puVar14 + -0x298) = *(undefined4 *)((int)puVar14 + -0x230);
                pcVar2 = *(code **)((int)puVar14 + -0x230);
                *(int *)(*(int *)((int)puVar14 + -0x298) + 0x134) = *(int *)(pcVar2 + 0x134) + 1;
              }
            }
            else {
              uVar1 = FUN_8c05c28c(ar4,iVar4,0x128,pcVar2);
              *(undefined4 *)((int)puVar14 + -0x118) = uVar1;
              pcVar2 = *(code **)((int)puVar14 + -0x118);
              if (pcVar2 == (code *)0x0) {
                *(int *)((int)puVar14 + -0x22c) = ar4;
                pcVar7 = *(code **)((int)puVar14 + -0x22c);
                *(undefined **)((int)pcVar7 + 0x134) =
                     (undefined *)(*(int *)(*(int *)((int)puVar14 + -0x22c) + 0x134) + 1);
              }
            }
            goto override_jmp_8c046852_case_6;
          }
          pcVar7 = (code *)0x134;
          *(undefined4 *)(ar4 + 0x134) = 0x17;
          goto LAB_8c046822;
        case 1:
          *(int *)((int)puVar14 + -0x234) = ar4;
          *(undefined4 *)((int)puVar14 + -0x294) = *(undefined4 *)((int)puVar14 + -0x234);
          pcVar2 = (code *)0x2f8;
          iVar4 = *(int *)(*(int *)((int)puVar14 + -0x234) + 0x2f8);
          *(int *)(*(int *)((int)puVar14 + -0x294) + 0x2f8) = iVar4 + -1;
          uVar1 = get_field_24_026024(pcVar12,iVar4,get_field_24_026024,0x2f8);
          *(undefined4 *)((int)puVar14 + -0x120) = uVar1;
          if (*(int *)((int)puVar14 + -0x120) == 2) {
            iVar4 = 0;
            uVar1 = rand_range(ar4,0,100,pcVar2);
            *(undefined4 *)((int)puVar14 + -0x124) = uVar1;
            iVar3 = *(int *)((int)puVar14 + -0x124);
            if (iVar3 < 0x28) {
              iVar3 = 1;
            }
            else if (iVar3 < 0x5a) {
              iVar3 = 0;
            }
            else if (iVar3 < 0x5f) {
              iVar3 = 3;
            }
            else {
              iVar3 = 6;
            }
          }
          else {
            if (ar7 == (code *)0x1) {
              if (*(int *)(ar4 + 0x128) == 3) {
                iVar4 = 0;
                uVar1 = rand_range(ar4,0,100,pcVar2);
                *(undefined4 *)((int)puVar14 + -300) = uVar1;
                pcVar7 = *(code **)((int)puVar14 + -300);
                pcVar2 = pcVar7;
                if ((int)pcVar7 < 0x37) {
                  iVar3 = 0;
                }
                else if ((int)pcVar7 < 0x55) {
                  iVar3 = 1;
                }
                else {
                  pcVar2 = (code *)0x5f;
                  if ((int)pcVar7 < 0x5f) {
                    iVar3 = 3;
                  }
                  else {
                    iVar3 = 2;
                  }
                }
              }
              else {
                iVar4 = 0;
                uVar1 = rand_range(ar4,0,100,pcVar2);
                *(undefined4 *)((int)puVar14 + -0x130) = uVar1;
                iVar3 = *(int *)((int)puVar14 + -0x130);
                if (iVar3 < 0x32) {
                  iVar3 = 0;
                }
                else if (iVar3 < 0x46) {
                  iVar3 = 1;
                }
                else if (iVar3 < 0x50) {
                  iVar3 = 2;
                }
                else if (iVar3 < 0x61) {
                  iVar3 = 3;
                }
                else {
                  iVar3 = 4;
                }
                if (*(int *)(ar4 + 0x324) != 0) {
                  iVar3 = 0;
                }
              }
            }
            else {
              iVar4 = 0;
              uVar1 = rand_range(ar4,0,0x14,pcVar2);
              *(undefined4 *)((int)puVar14 + -0x128) = uVar1;
              if (*(int *)((int)puVar14 + -0x128) < 0xb) {
                iVar3 = 0;
              }
              else if (*(int *)((int)puVar14 + -0x128) < 0x13) {
                iVar4 = 1;
                iVar3 = 1;
              }
              else {
                iVar3 = 2;
              }
            }
            if ((iVar3 == 2) && (0 < *(int *)(ar4 + 0x2f8))) {
              iVar3 = 0;
            }
          }
          if (*(int *)(ar4 + 0x31c) == -1) {
            iVar3 = 6;
          }
          break;
        case 2:
          if (ar7 == (code *)0x1) {
            uVar1 = rand_range(ar4,0,100,pcVar2);
            *(undefined4 *)((int)puVar14 + -0x148) = uVar1;
            if (*(int *)((int)puVar14 + -0x148) < 0x1e) {
              uVar11 = 0x28;
              uVar6 = 0;
              uVar1 = rand_range(ar4,0,0x28,pcVar2);
              *(undefined4 *)((int)puVar14 + -0x14c) = uVar1;
              iVar4 = *(int *)((int)puVar14 + -0x14c);
              if (iVar4 < 0x1e) {
                if (iVar4 < 0xf) {
                  if (8 < iVar4) {
                    iVar4 = 2;
                  }
                }
                else {
                  iVar4 = 1;
                }
              }
              else {
                iVar4 = 0;
              }
              if (iVar4 == 6) {
                uVar1 = get_field_24_026024(pcVar12,uVar6,uVar11,pcVar2);
                *(undefined4 *)((int)puVar14 + -0x150) = uVar1;
                if (*(int *)((int)puVar14 + -0x150) == 0) {
                  a4 = *(int **)(ar4 + 0x244);
                  (**(code **)(*a4 + 0x178))(a4,uVar1,a4,pcVar2);
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)((int)puVar14 + -0x154) = (int)(uVar17 >> 0x20);
                    uVar17 = CONCAT44(0x41700000,*(undefined4 *)((int)puVar14 + -0x154));
                  }
                  else {
                    *(ulonglong *)((int)puVar14 + -0x154) = uVar17;
                    in_xd0 = *(undefined8 *)((int)puVar14 + -0x154);
                    uVar17 = 0x6d53e50041700000;
                  }
                  if (in_FPSCR_PR == '\0' && (float)uVar17 < (float)(uVar17 >> 0x20)) {
                    iVar4 = 6;
                    goto LAB_8c046f7a;
                  }
                }
                iVar4 = 0;
              }
              else if (iVar4 == 3) {
                iVar4 = 0;
              }
LAB_8c046f7a:
              fVar15 = (float)uVar17;
              if (in_FPSCR_SZ == '\0') {
                fVar15 = *(float *)(ar4 + 0x1c);
              }
              else {
                in_xd0 = *(undefined8 *)(ar4 + 0x1c);
              }
              if (in_FPSCR_PR == '\0' && 0.0 < fVar15) {
                uVar11 = 100;
                uVar6 = 0;
                uVar1 = rand_range(ar4,0,100,pcVar2);
                *(undefined4 *)((int)puVar14 + -0x158) = uVar1;
                if (*(int *)((int)puVar14 + -0x158) < 5) {
                  uVar1 = get_field_94_02aaa4(*(undefined4 *)((int)puVar14 + 0xc),uVar6,uVar11,
                                              pcVar2);
                  *(undefined4 *)((int)puVar14 + -0x15c) = uVar1;
                  uVar1 = libgcc_divide_helper_0101e4
                                    (*(undefined4 *)((int)puVar14 + -0x15c),5,uVar11,pcVar2);
                  *(undefined4 *)((int)puVar14 + -0x238) = uVar1;
                  *(undefined4 *)((int)puVar14 + -0xfc) = *(undefined4 *)((int)puVar14 + -0x238);
                  if ((*(int *)((int)puVar14 + -0xfc) == 3) || (*(int *)((int)puVar14 + -0xfc) == 8)
                     ) {
                    uVar5 = 4;
                    *(undefined4 *)(ar4 + 0x218) = 0xd;
                  }
                  else {
                    uVar1 = rand_range(ar4,0,100,pcVar2);
                    *(undefined4 *)((int)puVar14 + -0x160) = uVar1;
                    if (*(int *)((int)puVar14 + -0x160) < 0x32) {
                      uVar5 = 2;
                      *(undefined4 *)(ar4 + 0x218) = 0xb;
                    }
                    else {
                      uVar5 = 3;
                      *(undefined4 *)(ar4 + 0x218) = 0xc;
                    }
                  }
                  pcVar2 = (code *)0x0;
                  pcVar7 = (code *)0xffffffff;
                  s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,uVar5,0xffffffff,0);
                  goto LAB_8c04718e;
                }
              }
              pcVar7 = (code *)0xffffffff;
              s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar4 + 0x1a,0xffffffff,0);
              *(int *)((int)puVar14 + -0x23c) = *(int *)(ar4 + 0x128) + -3;
              *(int *)((int)puVar14 + -0x240) = iVar4;
              *(undefined4 *)((int)puVar14 + -0x290) = 0x218;
              *(undefined4 *)((int)puVar14 + -0x298) = *(undefined4 *)((int)puVar14 + -0x23c);
              *(int *)((int)puVar14 + -0x294) =
                   (*(int *)((int)puVar14 + -0x298) * 4 + *(int *)((int)puVar14 + -0x23c)) * 8;
              *(undefined **)((int)puVar14 + -0x294) =
                   &DAT_8c13639c + *(int *)((int)puVar14 + -0x294);
              pcVar2 = *(code **)(*(int *)((int)puVar14 + -0x240) * 4 +
                                 *(int *)((int)puVar14 + -0x294));
              *(code **)(*(int *)((int)puVar14 + -0x290) + ar4) = pcVar2;
              uVar5 = 0x218;
              if (*(int *)(ar4 + 0x218) == 1) {
                uVar1 = rand_range(ar4,0xe,0x14,pcVar2);
                *(undefined4 *)((int)puVar14 + -0x164) = uVar1;
                pcVar2 = *(code **)(ar4 + 0x244);
                uVar5 = *(uint *)((int)puVar14 + -0x164);
                pcVar7 = (code *)ar5;
                FUN_8c033474(ar4,uVar5,ar5,pcVar2);
              }
            }
            else {
              *(undefined4 *)(ar4 + 0x218) = 0xffffffff;
              uVar1 = rand_range(ar4,0,3,pcVar2);
              fVar15 = (float)uVar17;
              *(undefined4 *)((int)puVar14 + -0x168) = uVar1;
              pcVar2 = (code *)0x0;
              pcVar7 = (code *)0xffffffff;
              uVar5 = *(int *)((int)puVar14 + -0x168) + 0x60;
              s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,uVar5,0xffffffff,0);
            }
LAB_8c04718e:
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)((int)puVar14 + -0x244) = 0;
              *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)((int)puVar14 + -0x244);
              uVar17 = CONCAT44(*(undefined4 *)((int)puVar14 + -0x244),fVar15);
              *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)((int)puVar14 + -0x244);
            }
            else {
              *(ulonglong *)((int)puVar14 + -0x244) = (ulonglong)(uint)fVar15;
              *(undefined8 *)(ar4 + 0x24) = *(undefined8 *)((int)puVar14 + -0x244);
              uVar17 = *(ulonglong *)((int)puVar14 + -0x244);
              *(ulonglong *)(ar4 + 0x28) = uVar17;
            }
          }
          else if ((ar7 == (code *)0x0) || (ar7 == (code *)0x2)) {
            uVar1 = rand_range(ar4,0,100,pcVar2);
            *(undefined4 *)((int)puVar14 + -0x16c) = uVar1;
            uVar5 = (uint)(0x32 < *(int *)((int)puVar14 + -0x16c));
            pcVar2 = (code *)0x0;
            pcVar7 = (code *)0xffffffff;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,uVar5,0xffffffff,0);
          }
          else {
            pcVar2 = (code *)0x0;
            pcVar7 = (code *)0xffffffff;
            uVar5 = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          }
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,pcVar7,pcVar2);
          *(undefined4 *)(ar4 + 0x2b8) = 3;
          uVar1 = get_field_1c_026dd8(ar4 + 0xb0,uVar5,pcVar7,pcVar2);
          *(undefined4 *)((int)puVar14 + -0x170) = uVar1;
          iVar4 = *(int *)((int)puVar14 + -0x170);
          FUN_8c032ab0(ar4,uVar5,pcVar7,pcVar2);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar14 + -0x174) = (int)(uVar17 >> 0x20);
            uVar17 = CONCAT44(*(undefined4 *)((int)puVar14 + -0x174),(int)uVar17);
            *(undefined4 *)(ar4 + 0x340) = *(undefined4 *)((int)puVar14 + -0x174);
          }
          else {
            *(ulonglong *)((int)puVar14 + -0x174) = uVar17;
            uVar17 = *(ulonglong *)((int)puVar14 + -0x174);
            *(ulonglong *)(ar4 + 0x340) = uVar17;
          }
          uVar5 = (uint)uVar17;
          if (iVar4 == 0x21) {
            *(undefined4 *)(ar4 + 0x284) = 0;
            pcVar7 = (code *)0x32;
            uVar1 = rand_range(ar4,0x1e,0x32,pcVar2);
            *(undefined4 *)((int)puVar14 + -0x178) = uVar1;
            *(undefined4 *)(ar4 + 0x280) = *(undefined4 *)((int)puVar14 + -0x178);
            *(undefined4 *)(ar4 + 0x218) = 6;
          }
          else if (iVar4 == 0x23) {
            uVar11 = 4;
            uVar6 = 0;
            uVar1 = rand_range(ar4,0,4,pcVar2);
            *(undefined4 *)((int)puVar14 + -0x17c) = uVar1;
            if (in_FPSCR_SZ == '\0') {
              uVar17 = (ulonglong)uVar5;
            }
            else {
              uVar17 = 0x8c022d0442700000;
            }
            FUN_8c022d04(ar4 + 0x54,uVar6,uVar11,pcVar2);
            *(undefined4 *)(ar4 + 0x218) = 0;
            *(undefined4 *)(ar4 + 0x280) = 1;
            pcVar2 = (code *)(ar4 + 0xb0);
            pcVar7 = s_CAnimBody_SetFrame_033e6e;
            s_CAnimBody_SetFrame_033e6e(pcVar2,0x280,s_CAnimBody_SetFrame_033e6e,pcVar2);
          }
          else if (iVar4 == 0x22) {
            pcVar7 = (code *)0x7d00;
            uVar1 = rand_range(ar4,9000,32000,pcVar2);
            *(undefined4 *)((int)puVar14 + -0x180) = uVar1;
            *(undefined4 *)(ar4 + 0x280) = *(undefined4 *)((int)puVar14 + -0x180);
            *(undefined4 *)(ar4 + 0x218) = 7;
          }
          else if (((iVar4 == 0x60) || (iVar4 == 0x61)) || (iVar4 == 0x62)) {
            pcVar7 = (code *)0xc;
            uVar1 = rand_range(ar4,8,0xc,pcVar2);
            *(undefined4 *)((int)puVar14 + -0x184) = uVar1;
            *(undefined4 *)(ar4 + 0x280) = *(undefined4 *)((int)puVar14 + -0x184);
          }
          else if ((iVar4 == 2) || (iVar4 == 4)) {
            pcVar7 = (code *)0x4;
            uVar1 = rand_range(ar4,2,4,pcVar2);
            *(undefined4 *)((int)puVar14 + -0x188) = uVar1;
            *(undefined4 *)(ar4 + 0x280) = *(undefined4 *)((int)puVar14 + -0x188);
          }
          else {
            pcVar2 = (code *)0x0;
            *(undefined4 *)(ar4 + 0x280) = 0;
          }
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x2c) = uVar17 & 0xffffffff;
          }
          *(int *)((int)puVar14 + -0x248) = ar4;
          iVar4 = 0x134;
          *(int *)(*(int *)((int)puVar14 + -0x248) + 0x134) =
               *(int *)(*(int *)((int)puVar14 + -0x248) + 0x134) + 1;
        case 3:
          if (ar7 != (code *)0x1) {
            *(undefined1 **)((int)puVar14 + -0x29c) = (undefined1 *)((int)puVar14 + -100);
            iVar4 = ar4 + 0x14;
            pcVar12 = FUN_8c0230f0;
            FUN_8c0230f0(iVar4,iVar4,pcVar7,FUN_8c0230f0,*(undefined4 *)((int)puVar14 + -0x29c));
            puVar9 = (undefined1 *)((int)puVar14 + -0x74);
            *(undefined1 **)((int)puVar14 + -0x29c) = puVar9;
            Vec3_normalize((undefined1 *)((int)puVar14 + -100),iVar4,puVar9,pcVar12);
            *(undefined1 **)((int)puVar14 + -0x29c) = (undefined1 *)((int)puVar14 + -0x84);
            Vec3_scale((undefined1 *)((int)puVar14 + -0x74),&DAT_8c136584,puVar9,pcVar12,
                       *(undefined4 *)((int)puVar14 + -0x29c));
            FUN_8c031c74(ar4,(undefined1 *)((int)puVar14 + -0x84),ar5,pcVar12);
            pcVar2 = (code *)0xffffffff;
            pcVar7 = (code *)((int)puVar14 + -0x84);
            Vec3_dtor(pcVar7,0xffffffff,pcVar7,0xffffffff);
            Vec3_dtor((undefined1 *)((int)puVar14 + -0x74),0xffffffff,pcVar7,pcVar2);
            iVar4 = -1;
            Vec3_dtor((undefined1 *)((int)puVar14 + -100),0xffffffff,pcVar7,pcVar2);
            *(int *)((int)puVar14 + -0x24c) = ar4;
            if (in_FPSCR_SZ == '\0') {
              dVar16 = (double)CONCAT44(0x3f7fbe77,
                                        *(undefined4 *)(*(int *)((int)puVar14 + -0x24c) + 0x28));
            }
            else {
              in_xd0 = *(undefined8 *)(*(int *)((int)puVar14 + -0x24c) + 0x28);
              dVar16 = 52776566456188.93;
            }
            if (in_FPSCR_PR == '\0') {
              fVar15 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
            }
            else {
              fVar15 = SUB84(dVar16 * dVar16,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(*(int *)((int)puVar14 + -0x24c) + 0x28) = fVar15;
            }
            else {
              *(undefined8 *)(*(int *)((int)puVar14 + -0x24c) + 0x28) = in_xd0;
            }
            FUN_8c05ae54(ar4,iVar4,pcVar7,pcVar2);
          }
          if (*(int *)(ar4 + 0x128) == 4) {
            if (*(int *)(ar4 + 0x280) < 1) {
              pcVar7 = (code *)(ar4 + 0xb0);
              uVar1 = CAnimBody_AdvanceFrame_wrapper(pcVar7,iVar4,pcVar7,pcVar2);
              *(undefined4 *)((int)puVar14 + -0x1bc) = uVar1;
              if (*(int *)((int)puVar14 + -0x1bc) == 1) {
                uVar13 = 0;
                *(undefined4 *)(ar4 + 0x134) = 0;
                pcVar7 = (code *)0x2;
                *(undefined4 *)(ar4 + 0x2b8) = 2;
                *(undefined4 *)(ar4 + 0x218) = 0xffffffff;
              }
              goto override_jmp_8c046852_case_6;
            }
            uVar1 = get_field_1c_026dd8(ar4 + 0xb0,get_field_1c_026dd8,pcVar7,pcVar2);
            *(undefined4 *)((int)puVar14 + -0x18c) = uVar1;
            iVar4 = *(int *)((int)puVar14 + -0x18c);
            if (iVar4 < 0x26) {
              pcVar7 = (code *)0x22;
              if (iVar4 < 0x22) {
                if (iVar4 < 5) {
                  if ((1 < iVar4) && ((iVar4 == 2 || (iVar4 == 4)))) {
                    pcVar2 = (code *)0x340;
                    uVar1 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,0x25,0x22,0x340);
                    *(undefined4 *)((int)puVar14 + -0x1b8) = uVar1;
                    if (*(int *)((int)puVar14 + -0x1b8) == 7) {
                      *(int *)((int)puVar14 + -0x264) = ar4;
                      *(int *)(*(int *)((int)puVar14 + -0x264) + 0x280) =
                           *(int *)(*(int *)((int)puVar14 + -0x264) + 0x280) + -1;
                    }
                    goto override_jmp_8c046852_case_6;
                  }
                }
                else if (iVar4 == 0x21) {
                  uVar1 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,0x25,0x22,pcVar2);
                  *(undefined4 *)((int)puVar14 + -0x194) = uVar1;
                  if (*(int *)((int)puVar14 + -0x194) == 7) {
                    *(int *)((int)puVar14 + -0x250) = ar4;
                    pcVar7 = (code *)(*(int *)(*(int *)((int)puVar14 + -0x250) + 0x280) + -1);
                    *(code **)(*(int *)((int)puVar14 + -0x250) + 0x280) = pcVar7;
                    *(undefined4 *)(ar4 + 0x218) = 6;
                  }
                  goto override_jmp_8c046852_case_6;
                }
              }
              else {
                if (iVar4 == 0x22) {
                  uVar1 = s_CAnimBody_AdvanceFrame_033d90
                                    (ar4 + 0xb0,s_CAnimBody_AdvanceFrame_033d90,0x22,pcVar2);
                  *(undefined4 *)((int)puVar14 + -0x198) = uVar1;
                  if (*(int *)((int)puVar14 + -0x198) == 7) {
                    *(int *)((int)puVar14 + -0x254) = ar4;
                    *(int *)(*(int *)((int)puVar14 + -0x254) + 0x280) =
                         *(int *)(*(int *)((int)puVar14 + -0x254) + 0x280) + -1;
                    *(undefined4 *)(ar4 + 0x218) = 7;
                  }
                  if (*(int *)(ar4 + 0x318) != 0) {
                    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,pcVar7,pcVar2);
                    *(undefined4 *)(ar4 + 0x280) = 0;
                  }
                  goto override_jmp_8c046852_case_6;
                }
                if (iVar4 == 0x23) {
                  uVar1 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,0x25,0xb0,pcVar2);
                  *(undefined4 *)((int)puVar14 + -400) = uVar1;
                  pcVar7 = *(code **)((int)puVar14 + -400);
                  if ((undefined **)pcVar7 == (undefined **)0x7) {
                    pcVar2 = (code *)0x0;
                    uVar1 = 0x1a;
                    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
                    pcVar7 = s_CAnimBody_SetFrame_033e6e;
                    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,s_CAnimBody_SetFrame_033e6e,pcVar2)
                    ;
                    *(undefined4 *)(ar4 + 0x280) = 0;
                  }
                  goto override_jmp_8c046852_case_6;
                }
                if ((iVar4 == 0x24) || (iVar4 == 0x25)) {
                  pcVar7 = (code *)(ar4 + 0x340);
                  uVar1 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,0x25,pcVar7,pcVar2);
                  *(undefined4 *)((int)puVar14 + -0x19c) = uVar1;
                  if (*(int *)((int)puVar14 + -0x19c) == 7) {
                    *(int *)((int)puVar14 + -600) = ar4;
                    pcVar7 = (code *)0x280;
                    *(int *)(*(int *)((int)puVar14 + -600) + 0x280) =
                         *(int *)(*(int *)((int)puVar14 + -600) + 0x280) + -1;
                  }
                  goto override_jmp_8c046852_case_6;
                }
              }
            }
            else if (iVar4 < 0x62) {
              if ((0x60 < iVar4) || (iVar4 == 0x60)) {
                pcVar2 = (code *)s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,0x25,ar4 + 0x340,pcVar2)
                ;
                *(code **)((int)puVar14 + -0x1a0) = pcVar2;
                pcVar7 = *(code **)((int)puVar14 + -0x1a0);
                if ((undefined **)pcVar7 == (undefined **)0x7) {
                  uVar1 = rand_range(ar4,0,0x1e,pcVar2);
                  *(undefined4 *)((int)puVar14 + -0x1a4) = uVar1;
                  if (*(int *)((int)puVar14 + -0x1a4) < 10) {
                    *(undefined4 *)((int)puVar14 + -0x290) = 0;
                    *(code **)((int)puVar14 + -0x298) = rand_range;
                    uVar1 = (**(code **)((int)puVar14 + -0x298))
                                      (ar4,*(undefined4 *)((int)puVar14 + -0x290),3,pcVar2);
                    *(undefined4 *)((int)puVar14 + -0x1a8) = uVar1;
                    *(undefined4 *)((int)puVar14 + -0x294) = 0xb0;
                    s_CAnimBody_SetAnimation_033a94
                              (ar4 + *(int *)((int)puVar14 + -0x294),
                               *(int *)((int)puVar14 + -0x1a8) + 0x60,0xffffffff,0);
                  }
                  *(int *)((int)puVar14 + -0x25c) = ar4;
                  pcVar2 = *(code **)((int)puVar14 + -0x25c);
                  pcVar7 = (code *)0x280;
                  *(int *)(pcVar2 + 0x280) = *(int *)(*(int *)((int)puVar14 + -0x25c) + 0x280) + -1;
                }
                goto override_jmp_8c046852_case_6;
              }
            }
            else if (iVar4 == 0x62) {
              pcVar7 = (code *)0x340;
              uVar1 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar4 + 0x340,0x340,pcVar2);
              *(undefined4 *)((int)puVar14 + -0x1ac) = uVar1;
              if (*(int *)((int)puVar14 + -0x1ac) == 7) {
                uVar1 = rand_range(ar4,0,0x1e,pcVar2);
                *(undefined4 *)((int)puVar14 + -0x1b0) = uVar1;
                if (*(int *)((int)puVar14 + -0x1b0) < 10) {
                  uVar1 = rand_range(ar4,0,3,pcVar2);
                  *(undefined4 *)((int)puVar14 + -0x1b4) = uVar1;
                  uVar6 = 0;
                  uVar1 = 0xffffffff;
                  iVar4 = *(int *)((int)puVar14 + -0x1b4) + 0x60;
                  s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar4,0xffffffff,0);
                  s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar4,uVar1,uVar6);
                }
                *(int *)((int)puVar14 + -0x260) = ar4;
                pcVar7 = *(code **)((int)puVar14 + -0x260);
                *(undefined **)(*(int *)((int)puVar14 + -0x260) + 0x280) =
                     *(undefined **)((int)pcVar7 + 0x280) + -1;
                pcVar2 = (code *)0x280;
              }
              goto override_jmp_8c046852_case_6;
            }
            s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0x25,pcVar7,pcVar2);
            *(undefined4 *)(ar4 + 0x280) = 0;
            goto override_jmp_8c046852_case_6;
          }
          if (*(int *)(ar4 + 0x128) != 3) goto override_jmp_8c046852_case_6;
          if (*(int *)(ar4 + 0x280) < 1) {
            uVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar4,pcVar7,pcVar2);
            *(undefined4 *)((int)puVar14 + -0x1e0) = uVar1;
            if (*(int *)((int)puVar14 + -0x1e0) == 1) {
              uVar13 = 0;
              *(undefined4 *)(ar4 + 0x134) = 0;
              pcVar7 = (code *)0x2b8;
              *(undefined4 *)(ar4 + 0x2b8) = 2;
              *(undefined4 *)(ar4 + 0x218) = 0xffffffff;
            }
            goto override_jmp_8c046852_case_6;
          }
          iVar3 = ar4 + 0xb0;
          pcVar12 = get_field_1c_026dd8;
          uVar1 = get_field_1c_026dd8(iVar3,get_field_1c_026dd8,iVar3,pcVar2);
          *(undefined4 *)((int)puVar14 + -0x1c0) = uVar1;
          iVar4 = *(int *)((int)puVar14 + -0x1c0);
          pcVar2 = (code *)0x60;
          if (iVar4 < 0x61) {
            if (0x5f < iVar4) {
code_r0x8c047be0:
              pcVar7 = s_CAnimBody_AdvanceFrame_033d90;
              uVar1 = s_CAnimBody_AdvanceFrame_033d90
                                (ar4 + 0xb0,ar4 + 0xb0,s_CAnimBody_AdvanceFrame_033d90,0x60);
              *(undefined4 *)((int)puVar14 + -0x1c4) = uVar1;
              if (*(int *)((int)puVar14 + -0x1c4) == 7) {
                uVar1 = rand_range(ar4,0,0x1e,pcVar2);
                *(undefined4 *)((int)puVar14 + -0x1c8) = uVar1;
                if (*(int *)((int)puVar14 + -0x1c8) < 10) {
                  uVar1 = rand_range(ar4,0,3,pcVar2);
                  *(undefined4 *)((int)puVar14 + -0x1cc) = uVar1;
                  uVar6 = 0;
                  uVar1 = 0xffffffff;
                  s_CAnimBody_SetAnimation_033a94
                            (ar4 + 0xb0,*(int *)((int)puVar14 + -0x1cc) + 0x60,0xffffffff,0);
                  s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e,uVar1,uVar6);
                }
                *(int *)((int)puVar14 + -0x268) = ar4;
                pcVar2 = *(code **)((int)puVar14 + -0x268);
                pcVar7 = (code *)0x280;
                *(int *)(pcVar2 + 0x280) = *(int *)(*(int *)((int)puVar14 + -0x268) + 0x280) + -1;
              }
              goto override_jmp_8c046852_case_6;
            }
            if (((iVar4 < 5) && (1 < iVar4)) && ((iVar4 == 2 || (iVar4 == 4)))) {
              pcVar7 = s_CAnimBody_AdvanceFrame_033d90;
              uVar1 = s_CAnimBody_AdvanceFrame_033d90
                                (ar4 + 0xb0,pcVar12,s_CAnimBody_AdvanceFrame_033d90,0x60);
              *(undefined4 *)((int)puVar14 + -0x1dc) = uVar1;
              if (*(int *)((int)puVar14 + -0x1dc) == 7) {
                *(int *)((int)puVar14 + -0x270) = ar4;
                pcVar7 = (code *)0x280;
                *(int *)(*(int *)((int)puVar14 + -0x270) + 0x280) =
                     *(int *)(*(int *)((int)puVar14 + -0x270) + 0x280) + -1;
              }
override_jmp_8c046852_case_6:
              *(undefined4 *)((int)puVar14 + -0x10c) = uVar13;
              *(code **)((int)puVar14 + -0x290) = free_if_nonnull_wrap_102790;
              (**(code **)((int)puVar14 + -0x290))
                        ((undefined1 *)((int)puVar14 + -0x44),0xffffffff,pcVar7,pcVar2);
              *(undefined4 *)((int)puVar14 + -0x298) = 0xffffffff;
              pcVar12 = free_if_nonnull_wrap_102790;
              free_if_nonnull_wrap_102790
                        ((undefined1 *)((int)puVar14 + -0x38),*(undefined4 *)((int)puVar14 + -0x298)
                         ,pcVar7,free_if_nonnull_wrap_102790);
              free_if_nonnull_wrap_102790
                        ((undefined1 *)((int)puVar14 + -0x2c),0xffffffff,pcVar7,pcVar12);
              *(undefined4 *)((int)puVar14 + -0x294) = *(undefined4 *)((int)puVar14 + -0x10c);
              return *(undefined4 *)((int)puVar14 + -0x294);
            }
          }
          else if ((iVar4 < 99) && (0x60 < iVar4)) {
            if (iVar4 == 0x61) goto code_r0x8c047be0;
            if (iVar4 == 0x62) {
              pcVar2 = s_CAnimBody_AdvanceFrame_033d90;
              pcVar7 = (code *)s_CAnimBody_AdvanceFrame_033d90
                                         (ar4 + 0xb0,pcVar12,iVar3,s_CAnimBody_AdvanceFrame_033d90);
              *(code **)((int)puVar14 + -0x1d0) = pcVar7;
              if (*(int *)((int)puVar14 + -0x1d0) == 7) {
                uVar1 = rand_range(ar4,0,0x1e,pcVar2);
                *(undefined4 *)((int)puVar14 + -0x1d4) = uVar1;
                if (*(int *)((int)puVar14 + -0x1d4) < 10) {
                  uVar1 = rand_range(ar4,0,3,pcVar2);
                  *(undefined4 *)((int)puVar14 + -0x1d8) = uVar1;
                  pcVar2 = (code *)0x0;
                  uVar1 = 0xffffffff;
                  s_CAnimBody_SetAnimation_033a94
                            (ar4 + 0xb0,*(int *)((int)puVar14 + -0x1d8) + 0x60,0xffffffff,0);
                  s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar1,pcVar2);
                }
                *(int *)((int)puVar14 + -0x26c) = ar4;
                pcVar7 = (code *)0x280;
                *(int *)(*(int *)((int)puVar14 + -0x26c) + 0x280) =
                     *(int *)(*(int *)((int)puVar14 + -0x26c) + 0x280) + -1;
              }
              goto override_jmp_8c046852_case_6;
            }
          }
          pcVar7 = (code *)0xb0;
          s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0xb0,0xb0,0x60);
          *(undefined4 *)(ar4 + 0x280) = 0;
          goto override_jmp_8c046852_case_6;
        case 4:
          *(undefined4 **)((int)puVar14 + -0x29c) = &DAT_8c125be0;
          *(undefined1 **)((int)puVar14 + -0x2a0) = (undefined1 *)((int)puVar14 + -0x94);
          puVar10 = &DAT_8c125bf0;
          FUN_8c032518(ar4,ar5,&DAT_8c125bf0,pcVar12);
          Vec3_assign(ar4 + 0x54,(undefined1 *)((int)puVar14 + -0x94),puVar10,pcVar12);
          Vec3_dtor((undefined1 *)((int)puVar14 + -0x94),0xffffffff,puVar10,pcVar12);
          FUN_8c031bb4(ar4,ar5,ar4 + 0x54,pcVar12);
          *(int *)((int)puVar14 + -0x274) = ar4;
          *(int *)(*(int *)((int)puVar14 + -0x274) + 0x134) =
               *(int *)(*(int *)((int)puVar14 + -0x274) + 0x134) + 1;
          *(undefined4 *)(ar4 + 0x40) = 0;
          pcVar2 = pcVar12;
        case 5:
          pcVar7 = (code *)(ar4 + 0x54);
          uVar1 = pure_virtual_stub(ar4,ar5,pcVar7,pcVar2);
          *(undefined4 *)((int)puVar14 + -0x1e4) = uVar1;
          if (*(int *)((int)puVar14 + -0x1e4) == 0) {
            uVar13 = 0;
            pcVar7 = (code *)0x0;
            *(undefined4 *)(ar4 + 0x134) = 0;
            *(undefined4 *)(ar4 + 0x40) = 5;
          }
        default:
          goto override_jmp_8c046852_case_6;
        case 7:
          uVar1 = get_field_24_026024(pcVar12,iVar4,pcVar7,pcVar2);
          *(undefined4 *)((int)puVar14 + -0x1e8) = uVar1;
          if (*(int *)((int)puVar14 + -0x1e8) == 0) {
            Vec3_ctor_xyz((undefined1 *)((int)puVar14 + -0xa4),iVar4,uVar1,Vec3_ctor_xyz);
            *(undefined1 **)((int)puVar14 + -0x29c) = (undefined1 *)((int)puVar14 + -0xa4);
            *(undefined1 **)((int)puVar14 + -0x2a0) = (undefined1 *)((int)puVar14 + -0xb4);
            puVar9 = (undefined1 *)((int)puVar14 + -0x2c);
            FUN_8c032518(ar4,ar5,puVar9,pcVar12);
            *(int *)((int)puVar14 + -0x290) = ar4;
            *(int *)((int)puVar14 + -0x290) = *(int *)((int)puVar14 + -0x290) + 0x54;
            *(code **)((int)puVar14 + -0x298) = Vec3_assign;
            (**(code **)((int)puVar14 + -0x298))
                      (*(undefined4 *)((int)puVar14 + -0x290),(undefined1 *)((int)puVar14 + -0xb4),
                       puVar9,pcVar12);
            pcVar12 = (code *)((int)puVar14 + -0xb4);
            Vec3_dtor(pcVar12,0xffffffff,puVar9,pcVar12);
            *(code **)((int)puVar14 + -0x294) = Vec3_dtor;
            (**(code **)((int)puVar14 + -0x294))
                      ((undefined1 *)((int)puVar14 + -0xa4),0xffffffff,puVar9,pcVar12);
          }
          else {
            uVar6 = ar5_00[1];
            *(undefined4 *)((int)puVar14 + -0x44) = *ar5_00;
            *(undefined4 *)((int)puVar14 + -0x40) = uVar6;
            uVar1 = ar5_00[2];
            *(undefined4 *)((int)puVar14 + -0x3c) = uVar1;
            Vec3_ctor_xyz((undefined1 *)((int)puVar14 + -0xc4),uVar1,Vec3_ctor_xyz,uVar6);
            *(undefined1 **)((int)puVar14 + -0x29c) = (undefined1 *)((int)puVar14 + -0xc4);
            *(undefined1 **)((int)puVar14 + -0x2a0) = (undefined1 *)((int)puVar14 + -0xd4);
            FUN_8c032518(ar4,ar5,(undefined1 *)((int)puVar14 + -0x44),pcVar12);
            pcVar2 = Vec3_assign;
            Vec3_assign(ar4 + 0x54,(undefined1 *)((int)puVar14 + -0xd4),Vec3_assign,pcVar12);
            Vec3_dtor((undefined1 *)((int)puVar14 + -0xd4),0xffffffff,pcVar2,pcVar12);
            Vec3_dtor((undefined1 *)((int)puVar14 + -0xc4),0xffffffff,
                      (undefined1 *)((int)puVar14 + -0xc4),pcVar12);
          }
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x58) = 0x43340000;
          }
          else {
            *(undefined8 *)(ar4 + 0x58) = 0xbf80000043340000;
          }
          FUN_8c031bb4(ar4,ar5,ar4 + 0x54,pcVar12);
          *(int *)((int)puVar14 + -0x278) = ar4;
          *(int *)(*(int *)((int)puVar14 + -0x278) + 0x134) =
               *(int *)(*(int *)((int)puVar14 + -0x278) + 0x134) + 1;
          uVar1 = rand_range(ar4,0,10,pcVar12);
          *(undefined4 *)((int)puVar14 + -0x1ec) = uVar1;
          if (8 < *(int *)((int)puVar14 + -0x1ec)) {
            *(undefined4 *)(ar4 + 700) = 1;
          }
          *(undefined4 *)(ar4 + 0x40) = 5;
        case 8:
          pcVar2 = (code *)(ar4 + 0x48);
          pcVar7 = (code *)(ar4 + 0x54);
          uVar1 = FUN_8c04c314(ar4,ar5,pcVar7,pcVar2);
          *(undefined4 *)((int)puVar14 + -0x1f0) = uVar1;
          *(undefined4 *)((int)puVar14 + -0xf0) = *(undefined4 *)((int)puVar14 + -0x1f0);
          if ((*(int *)(ar4 + 0x2b8) == 7) && (*(int *)(ar4 + 0x318) != 0)) {
            *(undefined4 *)((int)puVar14 + -0xf0) = 0;
            *(undefined4 *)(ar4 + 0x318) = 0;
          }
          if (*(int *)((int)puVar14 + -0xf0) == 0) {
            uVar13 = 0;
            *(undefined4 *)(ar4 + 0x134) = 0;
            *(undefined4 *)(ar4 + 700) = 0;
          }
          goto override_jmp_8c046852_case_6;
        case 10:
          *(undefined4 *)(ar4 + 700) = 1;
          pcVar7 = (code *)(ar4 + 0x34c);
          uVar1 = FUN_8c0564c4(ar4,ar5,pcVar7,ar7);
          *(undefined4 *)((int)puVar14 + -500) = uVar1;
          pcVar2 = ar7;
          if (*(int *)((int)puVar14 + -500) == 0) {
            *(undefined4 *)(ar4 + 0x178) = 0;
            *(undefined4 *)(ar4 + 700) = 0;
            pcVar7 = (code *)0x134;
            *(undefined4 *)(ar4 + 0x134) = 0;
            uVar13 = 0;
          }
          goto override_jmp_8c046852_case_6;
        case 0xb:
          pcVar7 = (code *)(ar4 + 0x34c);
          uVar1 = FUN_8c055c38(ar4,ar5,pcVar7,ar7);
          *(undefined4 *)((int)puVar14 + -0x1f8) = uVar1;
          pcVar2 = ar7;
          if (*(int *)((int)puVar14 + -0x1f8) == 0) {
            pcVar7 = (code *)0x178;
            *(undefined4 *)(ar4 + 0x178) = 0;
            *(undefined4 *)(ar4 + 0x134) = 0;
            uVar13 = 0;
            pcVar2 = (code *)0x0;
          }
          goto override_jmp_8c046852_case_6;
        case 0xc:
          FUN_8c03f460((undefined1 *)((int)puVar14 + -0xe0),ar5_00,
                       (undefined1 *)((int)puVar14 + -0xe0),pcVar2);
          *(undefined4 *)((int)puVar14 + -0x29c) = 0xffffffff;
          pcVar2 = (code *)((int)puVar14 + -0xe0);
          uVar1 = FUN_8c059fc4(ar4,ar5,*(undefined4 *)((int)puVar14 + -0x28c),pcVar2);
          *(undefined4 *)((int)puVar14 + -0x1fc) = uVar1;
          *(uint *)((int)puVar14 + -0x110) = (uint)(*(int *)((int)puVar14 + -0x1fc) == 0);
          pcVar7 = (code *)0xffffffff;
          free_if_nonnull_wrap_102790
                    ((undefined1 *)((int)puVar14 + -0xe0),0xffffffff,0xffffffff,pcVar2);
          if (*(int *)((int)puVar14 + -0x110) != 0) {
            *(undefined4 *)(ar4 + 0x134) = 0;
            uVar13 = 0;
          }
          goto override_jmp_8c046852_case_6;
        case 0xd:
          FUN_8c03f460((undefined1 *)((int)puVar14 + -0xec),ar5_00,pcVar7,pcVar2);
          *(undefined4 *)((int)puVar14 + -0x29c) = 0xffffffff;
          pcVar7 = *(code **)((int)puVar14 + -0x28c);
          pcVar2 = (code *)FUN_8c059fc4(ar4,ar5,pcVar7,(undefined1 *)((int)puVar14 + -0xec));
          *(code **)((int)puVar14 + -0x200) = pcVar2;
          *(uint *)((int)puVar14 + -0x114) = (uint)(*(int *)((int)puVar14 + -0x200) == 0);
          free_if_nonnull_wrap_102790((undefined1 *)((int)puVar14 + -0xec),0xffffffff,pcVar7,pcVar2)
          ;
          if (*(int *)((int)puVar14 + -0x114) != 0) {
            *(undefined4 *)(ar4 + 0x134) = 0;
            uVar13 = 0;
          }
          goto override_jmp_8c046852_case_6;
        case 0x12:
          pcVar2 = (code *)0x0;
          uVar11 = 0xffffffff;
          uVar6 = 0x1a;
          uVar1 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
          *(undefined4 *)((int)puVar14 + -0x204) = uVar1;
          if (*(int *)((int)puVar14 + -0x204) != 6) {
            pcVar2 = s_CAnimBody_SetFrame_033e6e;
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar6,uVar11,s_CAnimBody_SetFrame_033e6e);
          }
          pcVar7 = (code *)0xb0;
          uVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar6,0xb0,pcVar2);
          *(undefined4 *)((int)puVar14 + -0x208) = uVar1;
          if (*(int *)((int)puVar14 + -0x208) == 1) {
            *(int *)((int)puVar14 + -0x27c) = ar4;
            *(int *)(*(int *)((int)puVar14 + -0x27c) + 0x134) =
                 *(int *)(*(int *)((int)puVar14 + -0x27c) + 0x134) + 1;
          }
          goto override_jmp_8c046852_case_6;
        case 0x13:
          ppuVar8 = ar5;
          Vec3_assign(ar4 + 0x54,ar5,pcVar7,pcVar2);
          uVar1 = get_field_24_026024(pcVar12,ppuVar8,pcVar7,pcVar2);
          *(undefined4 *)((int)puVar14 + -0x20c) = uVar1;
          if (*(int *)((int)puVar14 + -0x20c) == 0) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x5c) = 0xc4e10000;
            }
            else {
              *(undefined8 *)(ar4 + 0x5c) = 0x290c4e10000;
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar16 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
            }
            else {
              in_xd0 = *(undefined8 *)(ar4 + 0x48);
              dVar16 = 1.1551152234084103e+238;
            }
            if (in_FPSCR_PR == '\0') {
              fVar15 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
            }
            else {
              fVar15 = SUB84(dVar16 * dVar16,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(ar4 + 0x5c) = fVar15;
            }
            else {
              *(undefined8 *)(ar4 + 0x5c) = in_xd0;
            }
          }
          *(undefined4 *)(ar4 + 0x40) = 5;
          *(undefined4 *)(ar4 + 0x290) = 0;
          *(int *)((int)puVar14 + -0x280) = ar4;
          *(int *)(*(int *)((int)puVar14 + -0x280) + 0x134) =
               *(int *)(*(int *)((int)puVar14 + -0x280) + 0x134) + 1;
        case 0x14:
          *(undefined4 *)(ar4 + 700) = 1;
          pcVar7 = (code *)(ar4 + 0x54);
          uVar1 = FUN_8c04c314(ar4,ar5,pcVar7,pcVar2);
          *(undefined4 *)((int)puVar14 + -0x210) = uVar1;
          if (*(int *)((int)puVar14 + -0x210) == 0) {
            *(undefined4 *)(ar4 + 0x40) = 5;
            *(int *)((int)puVar14 + -0x284) = ar4;
            pcVar7 = *(code **)((int)puVar14 + -0x284);
            *(undefined **)(*(int *)((int)puVar14 + -0x284) + 0x134) =
                 *(undefined **)((int)pcVar7 + 0x134) + 1;
            Vec3_assign(ar4 + 0x54,ar5,pcVar7,pcVar2);
            uVar1 = get_field_24_026024(pcVar12,ar5,pcVar7,pcVar2);
            *(undefined4 *)((int)puVar14 + -0x214) = uVar1;
            if (*(int *)((int)puVar14 + -0x214) == 0) {
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(ar4 + 0x54) = 0xc4fa0000;
              }
              else {
                *(undefined8 *)(ar4 + 0x54) = 0xe301d523c4fa0000;
              }
            }
            else {
              if (in_FPSCR_SZ == '\0') {
                dVar16 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
              }
              else {
                in_xd0 = *(undefined8 *)(ar4 + 0x48);
                dVar16 = 8.295285811779487e+237;
              }
              if (in_FPSCR_PR == '\0') {
                fVar15 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
              }
              else {
                fVar15 = SUB84(dVar16 * dVar16,0);
              }
              if (in_FPSCR_SZ == '\0') {
                *(float *)(ar4 + 0x54) = fVar15;
              }
              else {
                *(undefined8 *)(ar4 + 0x54) = in_xd0;
              }
            }
          }
          goto override_jmp_8c046852_case_6;
        case 0x15:
          *(undefined4 *)(ar4 + 700) = 1;
          pcVar7 = (code *)(ar4 + 0x54);
          uVar1 = FUN_8c04c314(ar4,ar5,pcVar7,pcVar2);
          *(undefined4 *)((int)puVar14 + -0x218) = uVar1;
          if (*(int *)((int)puVar14 + -0x218) == 0) {
            *(undefined4 *)(ar4 + 0x40) = 5;
            *(int *)((int)puVar14 + -0x288) = ar4;
            uVar6 = 0x134;
            *(int *)(*(int *)((int)puVar14 + -0x288) + 0x134) =
                 *(int *)(*(int *)((int)puVar14 + -0x288) + 0x134) + 1;
            uVar1 = get_field_24_026024(pcVar12,0x134,pcVar7,pcVar2);
            *(undefined4 *)((int)puVar14 + -0x21c) = uVar1;
            if (*(int *)((int)puVar14 + -0x21c) == 0) {
              FUN_8c022d04(ar4 + 0x54,ar4 + 0x54,pcVar7,pcVar2);
            }
            else {
              FUN_8c022d04(ar4 + 0x54,uVar6,pcVar7,pcVar2);
            }
          }
          goto override_jmp_8c046852_case_6;
        case 0x16:
          *(undefined4 *)(ar4 + 700) = 1;
          *(undefined4 *)(ar4 + 800) = 1;
          pcVar7 = (code *)(ar4 + 0x54);
          uVar1 = FUN_8c04c314(ar4,ar5,pcVar7,pcVar2);
          *(undefined4 *)((int)puVar14 + -0x220) = uVar1;
          if (*(int *)((int)puVar14 + -0x220) == 0) {
            *(undefined4 *)(ar4 + 0x40) = 5;
            *(undefined4 *)(ar4 + 0x134) = 0;
            uVar13 = rand_range(ar4,0x78,0x96,pcVar2);
            *(undefined4 *)((int)puVar14 + -0x224) = uVar13;
            pcVar7 = (code *)0x31c;
            *(undefined4 *)(ar4 + 0x31c) = *(undefined4 *)((int)puVar14 + -0x224);
            uVar13 = 0;
          }
          goto override_jmp_8c046852_case_6;
        case 0x17:
          pcVar2 = (code *)FUN_8c05c640(ar4,ar5,ar7,pcVar12);
          *(code **)((int)puVar14 + -0x228) = pcVar2;
          pcVar7 = *(code **)((int)puVar14 + -0x228);
          if ((undefined **)pcVar7 == (undefined **)0x0) {
            *(undefined4 *)(ar4 + 0x40) = 5;
            *(undefined4 *)(ar4 + 0x134) = 0;
            uVar13 = 0;
          }
          goto override_jmp_8c046852_case_6;
        }
        ppuVar8 = &(&DATA_8c046ba0);
        pcVar7 = (code *)ppuVar8;
        switch(iVar3) {
        case 0:
          iVar4 = 0x134;
          *(undefined4 *)(ar4 + 0x134) = 2;
          uVar17 = uVar17 & 0xffffffff;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x2c) = uVar17;
          }
          break;
        case 1:
          if (ar7 != (code *)0x0) {
            if (ar7 == (code *)0x1) {
              *(undefined4 *)(ar4 + 0x134) = 7;
              break;
            }
            if (ar7 != (code *)0x2) {
              uVar13 = rand_range(ar4,0,2,pcVar2);
              *(undefined4 *)((int)puVar14 + -0x134) = uVar13;
              uVar13 = 0;
              s_CAnimBody_SetAnimation_033a94
                        (ar4 + 0xb0,*(undefined4 *)((int)puVar14 + -0x134),0xffffffff,0);
              *(undefined4 *)(ar4 + 0x134) = 0;
              *(undefined4 *)((int)puVar14 + -0x108) = 0;
              puVar9 = (undefined1 *)((int)puVar14 + -0x44);
              free_if_nonnull_wrap_102790(puVar9,0xffffffff,puVar9,uVar13);
              free_if_nonnull_wrap_102790
                        ((undefined1 *)((int)puVar14 + -0x38),0xffffffff,puVar9,uVar13);
              free_if_nonnull_wrap_102790
                        ((undefined1 *)((int)puVar14 + -0x2c),0xffffffff,puVar9,uVar13);
              return *(undefined4 *)((int)puVar14 + -0x108);
            }
          }
          *(undefined4 *)(ar4 + 0x134) = 4;
          break;
        case 2:
          if (ar7 == (code *)0x1) {
            iVar4 = 10;
            *(undefined4 *)(ar4 + 0x134) = 10;
          }
          else {
            *(undefined4 *)(ar4 + 0x134) = 0xb;
          }
          break;
        case 3:
          pcVar2 = (code *)((int)puVar14 + -0x54);
          *(code **)((int)puVar14 + -0x29c) = pcVar2;
          FUN_8c0230f0(ar4 + 0x14,iVar4,&(&DATA_8c046ba0),pcVar2,
                       *(undefined4 *)((int)puVar14 + -0x29c));
          FUN_8c022dac((undefined1 *)((int)puVar14 + -0x54),&DAT_8c125d48,ppuVar8,pcVar2);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar14 + -0x138) = (int)(uVar17 >> 0x20);
            in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                       *(undefined4 *)((int)puVar14 + -0x138));
          }
          else {
            *(ulonglong *)((int)puVar14 + -0x138) = uVar17;
          }
          iVar4 = -1;
          Vec3_dtor((undefined1 *)((int)puVar14 + -0x54),0xffffffff,ppuVar8,pcVar2);
          if (in_FPSCR_SZ == '\0') {
            dVar16 = (double)CONCAT44(0x41c80000,(int)uVar17);
          }
          else {
            dVar16 = 2473901701376.0;
          }
          if (in_FPSCR_PR == '\0') {
            bVar18 = (float)((ulonglong)dVar16 >> 0x20) < SUB84(in_dr14,0);
          }
          else {
            bVar18 = dVar16 < in_dr14;
          }
          if (bVar18) {
            if (in_FPSCR_SZ == '\0') {
              dVar16 = (double)CONCAT44(0x42820000,SUB84(dVar16,0));
            }
            else {
              dVar16 = -7.94374682731178e-251;
            }
            if (in_FPSCR_PR == '\0') {
              bVar18 = (float)((ulonglong)dVar16 >> 0x20) < SUB84(in_dr14,0);
            }
            else {
              bVar18 = dVar16 < in_dr14;
            }
            if (!bVar18) {
              pcVar2 = (code *)(ar4 + 0x14);
              uVar1 = FUN_8c023334(pcVar2,&DAT_8c125d48,FUN_8c023334,pcVar2);
              *(undefined4 *)((int)puVar14 + -0x13c) = uVar1;
              if (*(int *)((int)puVar14 + -0x13c) == 3) {
                pcVar2 = (code *)0x0;
                s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x24,0xffffffff,0);
              }
              else if (*(int *)((int)puVar14 + -0x13c) == 4) {
                pcVar2 = (code *)0x0;
                s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x25,0xffffffff,0);
              }
              *(undefined4 *)(ar4 + 0x2b8) = 3;
              *(undefined4 *)(ar4 + 0x134) = 3;
              uVar6 = 10;
              uVar1 = rand_range(ar4,3,10,pcVar2);
              *(undefined4 *)((int)puVar14 + -0x140) = uVar1;
              *(undefined4 *)(ar4 + 0x280) = *(undefined4 *)((int)puVar14 + -0x140);
              if (*(int *)(ar4 + 0x128) == 3) {
                *(undefined4 *)(ar4 + 0x280) = 0;
              }
              FUN_8c032be0(ar4,0x50,uVar6,pcVar2);
              if (in_FPSCR_SZ == '\0') {
                *(int *)((int)puVar14 + -0x144) = (int)((ulonglong)dVar16 >> 0x20);
                uVar17 = CONCAT44(*(undefined4 *)((int)puVar14 + -0x144),SUB84(dVar16,0));
                *(undefined4 *)(ar4 + 0x340) = *(undefined4 *)((int)puVar14 + -0x144);
              }
              else {
                *(double *)((int)puVar14 + -0x144) = dVar16;
                uVar17 = *(ulonglong *)((int)puVar14 + -0x144);
                *(ulonglong *)(ar4 + 0x340) = uVar17;
              }
              iVar4 = ar4 + 0x340;
              pcVar7 = (code *)0xb0;
              s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar4,0xb0,pcVar2);
              break;
            }
          }
          *(undefined4 *)(ar4 + 0x134) = 2;
          uVar17 = (ulonglong)dVar16 & 0xffffffff;
          pcVar7 = (code *)ppuVar8;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x2c) = uVar17;
          }
          break;
        case 4:
          *(undefined4 *)(ar4 + 0x134) = 0xd;
          break;
        default:
          *(undefined4 *)(ar4 + 0x134) = 2;
          uVar17 = uVar17 & 0xffffffff;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x2c) = uVar17;
          }
          break;
        case 6:
          goto LAB_8c046e6c;
        }
      } while( true );
    }
    *(undefined4 *)((int)puVar14 + -0x104) = 0;
    free_if_nonnull_wrap_102790((undefined1 *)((int)puVar14 + -0x44),0xffffffff,pcVar7,pcVar2);
    free_if_nonnull_wrap_102790((undefined1 *)((int)puVar14 + -0x38),0xffffffff,pcVar7,pcVar2);
    free_if_nonnull_wrap_102790((undefined1 *)((int)puVar14 + -0x2c),0xffffffff,pcVar7,pcVar2);
    uVar13 = *(undefined4 *)((int)puVar14 + -0x104);
  }
  else {
    *(undefined4 *)((int)puVar14 + -0x100) = 0;
    free_if_nonnull_wrap_102790((undefined1 *)((int)puVar14 + -0x44),0xffffffff,pcVar7,pcVar2);
    free_if_nonnull_wrap_102790((undefined1 *)((int)puVar14 + -0x38),0xffffffff,pcVar7,pcVar2);
    free_if_nonnull_wrap_102790((undefined1 *)((int)puVar14 + -0x2c),0xffffffff,pcVar7,pcVar2);
    uVar13 = *(undefined4 *)((int)puVar14 + -0x100);
  }
  return uVar13;
LAB_8c046e6c:
  pcVar7 = (code *)0x12;
  *(undefined4 *)(ar4 + 0x134) = 0x12;
  goto LAB_8c046822;
}

__asm__(".globl _FUN_8c046684\n.set _FUN_8c046684, _FUN_8c046684_def\n");
