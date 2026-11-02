/* Seaman (USA) region 0x8c040000-0x8c050000 (Ghidra decompiler) */

/* ret_const_0_046674 @ 8c046674 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_046674(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_04667c @ 8c04667c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_04667c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c046684 @ 8c046684 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c04732e) */
/* WARNING: Removing unreachable block (ram,0x8c046b66) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c046684(int ar4,undefined **ar5,undefined4 ar6,code *ar7)

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
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
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
                    /* WARNING: Switch is manually overridden */
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
        ppuVar8 = &PTR_LAB_8c046b84;
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
          FUN_8c0230f0(ar4 + 0x14,iVar4,&PTR_LAB_8c046b84,pcVar2,
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



/* FUN_8c048868 @ 8c048868 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c048868(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar6_00;
  undefined4 *puVar4;
  undefined4 uVar5;
  float fVar6;
  ulonglong in_dr0;
  ulonglong uVar7;
  double dVar8;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  
  uVar5 = 1;
  FUN_8c10277c(auStack_2c,ar5,ar6,ar7);
  iVar2 = ar4 + 0x14;
  Vec3_assign(ar4 + 0x80,iVar2,ar6,ar7);
LAB_8c0488bc:
  fVar6 = (float)in_dr0;
  iVar1 = *(int *)(ar4 + 0x134);
  if ((iVar1 < 7) && (-1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 0:
      iVar2 = FUN_8c05c28c(ar4,iVar2,ar6,ar7);
      if (iVar2 == 0) {
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      }
      break;
    case 1:
      iVar1 = get_field_1c_026dd8(ar4 + 0xb0,iVar2,ar6,ar7);
      if ((iVar1 != 0x15) && (iVar2 = get_field_1c_026dd8(ar4 + 0xb0,iVar2,ar6,ar7), iVar2 != 0x16))
      goto LAB_8c04899c;
      *(undefined4 *)(ar4 + 0x134) = 0;
      uVar5 = 0;
      break;
    case 2:
      if (in_FPSCR_SZ == '\0') {
        fVar6 = *(float *)(ar4 + 0x1c);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x1c);
      }
      uVar7 = (ulonglong)(uint)fVar6;
      if (in_FPSCR_PR != '\0' || fVar6 <= 0.0) {
LAB_8c048a88:
        iVar2 = rand_range(ar4,0,100,ar7);
        if (iVar2 < 0x33) {
          iVar2 = 0;
        }
        else {
          iVar2 = 1;
        }
      }
      else {
        ar6_00 = 100;
        uVar3 = 0;
        iVar2 = rand_range(ar4,0,100,ar7);
        if (2 < iVar2) goto LAB_8c048a88;
        uVar3 = get_field_94_02aaa4(in_stack_00000008,uVar3,ar6_00,ar7);
        iVar2 = libgcc_divide_helper_0101e4(uVar3,5,ar6_00,ar7);
        if ((iVar2 == 3) || (iVar2 == 8)) {
          iVar2 = 4;
          *(undefined4 *)(ar4 + 0x218) = 0xd;
        }
        else {
          iVar2 = 2;
          *(undefined4 *)(ar4 + 0x218) = 0xb;
        }
      }
      ar7 = 0;
      ar6 = -1;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar2,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar2,ar6,ar7);
      *(undefined4 *)(ar4 + 0x2b8) = 3;
      FUN_8c032ab0(ar4,iVar2,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x340) = (int)(uVar7 >> 0x20);
      }
      else {
        *(ulonglong *)(ar4 + 0x340) = uVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = uVar7 & 0xffffffff;
      }
      iVar1 = get_field_1c_026dd8(ar4 + 0xb0,iVar2,ar6,ar7);
      if ((iVar1 == 2) || (iVar1 == 4)) {
        ar6 = 4;
        iVar2 = 2;
        uVar3 = rand_range(ar4,2,4,ar7);
        *(undefined4 *)(ar4 + 0x280) = uVar3;
      }
      else {
        *(undefined4 *)(ar4 + 0x280) = 0;
      }
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
    case 3:
      FUN_8c0230f0(ar4 + 0x14,iVar2,ar6,ar7,auStack_3c);
      Vec3_normalize(auStack_3c,iVar2,ar6,ar7);
      Vec3_scale(auStack_4c,&DAT_8c136588,ar6,ar7,auStack_5c);
      FUN_8c031c74(ar4,auStack_5c,ar5,ar7);
      Vec3_dtor(auStack_5c,0xffffffff,ar5,ar7);
      Vec3_dtor(auStack_4c,0xffffffff,ar5,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_3c,0xffffffff,ar5,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(0x3f7fbe77,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar8 = 52776566456188.93;
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 * dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x28) = fVar6;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      FUN_8c05ae54(ar4,uVar3,ar5,ar7);
      if (*(int *)(ar4 + 0x280) < 1) {
        iVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar3,ar5,ar7);
        ar6 = ar5;
        if (iVar2 == 1) {
          uVar5 = 0;
          *(undefined4 *)(ar4 + 0x134) = 0;
          *(undefined4 *)(ar4 + 0x2b8) = 2;
          *(undefined4 *)(ar4 + 0x218) = 0xffffffff;
        }
      }
      else {
        iVar2 = get_field_1c_026dd8(ar4 + 0xb0,uVar3,ar5,ar7);
        if ((iVar2 == 2) || (iVar2 = get_field_1c_026dd8(ar4 + 0xb0,uVar3,ar5,ar7), iVar2 == 4)) {
          FUN_8c031748(ar4,uVar3,ar5,ar7);
          iVar2 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,uVar3,ar5,ar7);
          ar6 = ar5;
          if (iVar2 == 7) {
            *(int *)(ar4 + 0x280) = *(int *)(ar4 + 0x280) + -1;
          }
        }
        else {
          iVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar3,ar5,ar7);
          ar6 = ar5;
          if (iVar2 == 1) {
            *(undefined4 *)(ar4 + 0x280) = 0;
          }
        }
      }
      break;
    case 4:
      if (*(int *)(ar4 + 0x128) == 0) {
        puVar4 = &DAT_8c125bf0;
        FUN_8c032518(ar4,ar5,&DAT_8c125bf0,in_stack_00000004);
        Vec3_assign(ar4 + 0x54,auStack_6c,puVar4,in_stack_00000004);
        Vec3_dtor(auStack_6c,0xffffffff,puVar4,in_stack_00000004);
      }
      else {
        puVar4 = &DAT_8c125bf0;
        FUN_8c032518(ar4,ar5,&DAT_8c125bf0,in_stack_00000004);
        Vec3_assign(ar4 + 0x54,auStack_7c,puVar4,in_stack_00000004);
        Vec3_dtor(auStack_7c,0xffffffff,puVar4,in_stack_00000004);
      }
      FUN_8c031bb4(ar4,ar5,ar4 + 0x54,in_stack_00000004);
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      *(undefined4 *)(ar4 + 0x40) = 0;
      ar7 = in_stack_00000004;
    case 5:
      ar6 = ar4 + 0x54;
      iVar2 = pure_virtual_stub(ar4,ar5,ar6,ar7);
      if (iVar2 == 0) {
        uVar5 = 0;
        *(undefined4 *)(ar4 + 0x134) = 0;
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
      break;
    case 6:
      ar6 = in_stack_0000000c[1];
      iVar2 = FUN_8c05c9fc(ar4,*in_stack_0000000c,ar6,ar7);
      if (iVar2 == 0) {
        *(undefined4 *)(ar4 + 0x178) = 0;
        *(undefined4 *)(ar4 + 0x40) = 5;
        *(undefined4 *)(ar4 + 0x134) = 0;
        uVar5 = 0;
      }
    }
  }
  free_if_nonnull_wrap_102790(auStack_2c,0xffffffff,ar6,ar7);
  return uVar5;
LAB_8c04899c:
  ar6 = 200;
  iVar2 = 0;
  iVar1 = rand_range(ar4,0,200,ar7);
  if (iVar1 < 100) {
    *(undefined4 *)(ar4 + 0x134) = 2;
    in_dr0 = in_dr0 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = in_dr0;
    }
  }
  else if (iVar1 < 0xc5) {
    *(undefined4 *)(ar4 + 0x134) = 4;
  }
  else {
    *(undefined4 *)(ar4 + 0x134) = 6;
  }
  goto LAB_8c0488bc;
}



/* FUN_8c048f8c @ 8c048f8c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c04924c) */
/* WARNING: Removing unreachable block (ram,0x8c048fac) */
/* WARNING: Removing unreachable block (ram,0x8c048f90) */
/* WARNING: Removing unreachable block (ram,0x8c048f8c) */
/* WARNING: Removing unreachable block (ram,0x8c048f8e) */
/* WARNING: Removing unreachable block (ram,0x8c048f92) */
/* WARNING: Removing unreachable block (ram,0x8c048fb0) */
/* WARNING: Removing unreachable block (ram,0x8c049a3e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c048f8c(ulonglong *ar4,undefined4 ar5,int ar6,ulonglong *ar7)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined4 *ar5_00;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  double in_dr0;
  ulonglong uVar8;
  float fVar11;
  undefined8 uVar9;
  double dVar10;
  undefined8 in_dr6;
  double in_dr14;
  ulonglong in_xd0;
  bool bVar12;
  char cVar13;
  char cVar14;
  undefined8 uStack_12c;
  float fStack_e4;
  float fStack_e0;
  float afStack_dc [4];
  undefined1 auStack_cc [12];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [20];
  
  cVar14 = '\0';
  cVar13 = '\0';
  uVar5 = (undefined4)((ulonglong)in_dr6 >> 0x20);
  uVar6 = 1;
  uVar4 = ar5;
  iVar2 = ar6;
  Vec3_sub(ar6,ar5,ar6,ar7,auStack_54);
  Vec3_normalize(auStack_54,uVar4,iVar2,ar7);
  Vec3_ctor_copy(auStack_34,auStack_64,iVar2,ar7);
  Vec3_dtor(auStack_64,0xffffffff,iVar2,ar7);
  uVar4 = 0xffffffff;
  Vec3_dtor(auStack_54,0xffffffff,iVar2,ar7);
  FUN_8c0230f0((undefined4 *)((int)ar4 + 0x14),uVar4,iVar2,ar7,auStack_74);
  FUN_8c0230f0(auStack_34,uVar4,iVar2,ar7,auStack_84);
  FUN_8c022dac(auStack_74,auStack_84,iVar2,ar7);
  fStack_e0 = SUB84(in_dr0,0);
  fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
  if (cVar14 == '\0') {
    fStack_e0 = fVar7;
    fVar7 = afStack_dc[0];
  }
  afStack_dc[0] = fVar7;
  Vec3_dtor(auStack_84,0xffffffff,iVar2,ar7);
  Vec3_dtor(auStack_74,0xffffffff,iVar2,ar7);
  Vec3_ctor_copy(auStack_44,ar5,iVar2,ar7);
  ar5_00 = (undefined4 *)((int)ar4 + 0x14);
  Vec3_assign(ar4 + 0x10,ar5_00,iVar2,ar7);
  iVar1 = get_field_1c_026dd8(ar4 + 0x16,ar5_00,iVar2,ar7);
  fVar7 = SUB84(in_dr0,0);
  if (iVar1 == 5) {
    if (cVar14 == '\0') {
      in_dr14 = 402653249.1875;
      in_dr0 = (double)CONCAT44(0x40a00000,fVar7);
    }
    else {
      in_dr14 = 2048.000501394272;
      in_dr0 = 2.97615090336666e-312;
      fStack_e0 = 1.96182e-43;
    }
    fStack_e4 = 5.0;
  }
  else if (iVar1 == 6) {
    in_dr0 = (double)CONCAT44(0x3f800000,fVar7);
    if (cVar14 == '\0') {
      fStack_e4 = 1.0;
      in_dr14 = 402653249.1875;
    }
    else {
      fStack_e0 = 1.0;
      in_dr14 = 2.97624156480792e-312;
      fStack_e4 = fVar7;
    }
  }
  else if (iVar1 == 10) {
    if (cVar14 == '\0') {
      in_dr14 = 33554440.1484375;
    }
    else {
      in_dr14 = -8.977643917409603e-251;
    }
  }
  iVar1 = (int)ar4[8];
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 0:
      iVar1 = FUN_8c05c28c(ar4,ar5_00,iVar2,ar7);
      if (iVar1 != 0) {
        Vec3_dtor(auStack_44,0xffffffff,iVar2,ar7);
        Vec3_dtor(auStack_34,0xffffffff,iVar2,ar7);
        return 1;
      }
      if (cVar14 == '\0') {
        fVar7 = SUB84(in_dr0,0);
        *(undefined4 *)(ar4 + 0x44) = 0x455ac000;
      }
      else {
        fVar7 = 3500.0;
        ar4[0x44] = 0x8c031bb4455ac000;
      }
      iVar1 = ar6;
      FUN_8c031bb4(ar4,ar5,ar6,ar7);
      uVar4 = 0x8c2803f4;
      iVar2 = (int)ar4[0x25] * 0x18 + -0x73d7fc0c;
      FUN_8c031b68(ar4,iVar2,iVar1,0x8c2803f4);
      FUN_8c03c314(ar4,iVar2,iVar1,uVar4);
      if (cVar14 == '\0') {
        fVar7 = *(float *)((int)ar4 + 0x24);
      }
      else {
        in_xd0 = *(ulonglong *)((int)ar4 + 0x24);
      }
      uVar8 = (ulonglong)(uint)fVar7;
      if (fVar7 == 0.0) {
        if (cVar14 == '\0') {
          dVar10 = (double)CONCAT44(0x41a00000,fVar7);
          *(undefined4 *)(ar4 + 6) = 0x41a00000;
        }
        else {
          dVar10 = 4.67383042659946e-312;
          ar4[6] = 0xdc41a00000;
        }
      }
      else {
        iVar2 = ar6;
        FUN_8c022fc0(ar5,ar6,iVar1,uVar4);
        if (cVar14 == '\0') {
          dVar10 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x24),(int)(uVar8 >> 0x20));
        }
        else {
          dVar10 = *(double *)((int)ar4 + 0x24);
          in_xd0 = uVar8;
        }
        if (cVar13 == '\0') {
          dVar10 = (double)(ulonglong)(uint)(SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20));
        }
        else {
          dVar10 = dVar10 / dVar10;
        }
        if (cVar14 == '\0') {
          *(int *)(ar4 + 6) = SUB84(dVar10,0);
        }
        else {
          ar4[6] = in_xd0;
        }
      }
      uVar8 = (ulonglong)dVar10 & 0xffffffff;
      if (cVar14 == '\0') {
        *(undefined4 *)((int)ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x2c) = uVar8;
      }
      FUN_8c0230f0((undefined4 *)((int)ar4 + 0x14),iVar2,iVar1,uVar4,auStack_94);
      FUN_8c0230f0(auStack_34,iVar2,iVar1,uVar4,auStack_a4);
      FUN_8c022dac(auStack_94,auStack_a4,iVar1,uVar4);
      if (cVar14 == '\0') {
        *(int *)((int)ar4 + 0x224) = (int)(uVar8 >> 0x20);
      }
      else {
        *(ulonglong *)((int)ar4 + 0x224) = uVar8;
      }
      Vec3_dtor(auStack_a4,0xffffffff,iVar1,uVar4);
      Vec3_dtor(auStack_94,0xffffffff,iVar1,uVar4);
      if (cVar14 == '\0') {
        uVar8 = CONCAT44((int)ar4[0x44],*(undefined4 *)((int)ar4 + 0x24));
      }
      else {
        in_xd0 = *(ulonglong *)((int)ar4 + 0x24);
        uVar8 = ar4[0x44];
      }
      if (cVar13 == '\0' && (float)uVar8 < (float)(uVar8 >> 0x20)) {
        iVar2 = rand_range(ar4,0,2,uVar4);
        ar7 = (ulonglong *)0x0;
        uVar4 = 0xffffffff;
        iVar2 = iVar2 + 5;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,iVar2,0xffffffff,0);
      }
      else {
        ar7 = (ulonglong *)0x0;
        uVar4 = 0xffffffff;
        iVar2 = 10;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,10,0xffffffff,0);
      }
      iVar1 = get_field_1c_026dd8(ar4 + 0x16,iVar2,uVar4,ar7);
      if (iVar1 == 5) {
        if (cVar14 != '\0') {
          fStack_e0 = 1.96182e-43;
        }
      }
      else if ((iVar1 == 6) && (cVar14 != '\0')) {
        fStack_e0 = 1.0;
      }
      if (*(int *)((int)ar4 + 0x124) == 0x11) {
        if (cVar14 == '\0') {
          *(undefined4 *)((int)ar4 + 0x24) = 0x40c00000;
        }
        else {
          *(undefined8 *)((int)ar4 + 0x24) = 0xb040c00000;
        }
      }
      puVar3 = ar4 + 0x16;
      s_CAnimBody_SetFrame_033e6e(puVar3,iVar2,uVar4,ar7);
      *(undefined4 *)(ar4 + 8) = 1;
      if (cVar14 == '\0') {
        uVar8 = CONCAT44(0x42340000,fStack_e0);
      }
      else {
        in_xd0 = CONCAT44(afStack_dc[0],fStack_e0);
        uVar8 = 0x8c01420042340000;
      }
      if (cVar13 == '\0' && (float)uVar8 < (float)(uVar8 >> 0x20)) {
        uVar5 = rand(puVar3,iVar2,uVar4,ar7);
        iVar2 = libgcc_divide_helper_01031c(uVar5,8,uVar4,ar7);
        *(int *)(ar4 + 0x50) = iVar2 + 8;
        *(undefined4 *)(ar4 + 8) = 3;
        break;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)((int)ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x2c) = uVar8 & 0xffffffff;
      }
      ar7 = (ulonglong *)0x0;
      iVar2 = -1;
      ar5_00 = (undefined4 *)0x6;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,6,0xffffffff,0);
      *(undefined4 *)(ar4 + 0x50) = 0;
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x4f) = 0x3f000000;
      }
      else {
        ar4[0x4f] = 0x2b83f000000;
      }
      *(undefined4 *)(ar4 + 8) = 1;
      *(undefined4 *)(ar4 + 0x57) = 3;
    case 1:
      if (cVar14 == '\0') {
        fVar7 = 90.0;
      }
      else {
        in_xd0 = CONCAT44(afStack_dc[0],fStack_e0);
        fStack_e0 = 90.0;
        fVar7 = 3.0;
      }
      if (cVar13 == '\0' && fVar7 < fStack_e0) {
        if (cVar14 == '\0') {
          fVar7 = *(float *)(ar4 + 5);
          fVar11 = 3.0;
        }
        else {
          in_xd0 = ar4[5];
          fVar7 = 3.0;
          fVar11 = 0.05;
        }
        if (cVar13 != '\0' || fVar7 <= fVar11) {
          if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44(0x3d4ccccd,(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = 6.20130889485342e-312;
          }
          if (cVar13 == '\0') {
            fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar10 + dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(ar4 + 5) = fVar7;
          }
          else {
            ar4[5] = in_xd0;
          }
        }
        else {
          if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44(0x3d4ccccd,(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = 8.741916293825089e+86;
          }
          if (cVar13 == '\0') {
            fVar7 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar10 - dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(ar4 + 5) = fVar7;
          }
          else {
            ar4[5] = in_xd0;
          }
        }
        iVar1 = ar6;
        if (*(int *)((int)ar4 + 0x124) == 0x11) {
          Vec3_set_xyz(auStack_b0,ar5_00,iVar2,ar7);
          ar7 = (ulonglong *)((int)ar4 + 0x14);
          FUN_8c031eb0(ar4,ar5,ar6,ar7,auStack_c0);
          Vec3_assign((undefined4 *)((int)ar4 + 0x14),auStack_c0,iVar1,ar7);
          Vec3_dtor(auStack_c0,0xffffffff,iVar1,ar7);
          uVar4 = 0xffffffff;
          object_dtor_delete(auStack_b0,0xffffffff,iVar1,ar7);
        }
        else {
          Vec3_set_xyz(auStack_cc,ar5_00,iVar2,ar7);
          ar7 = (ulonglong *)((int)ar4 + 0x14);
          FUN_8c031eb0(ar4,ar5,ar6,ar7,afStack_dc);
          Vec3_assign((undefined4 *)((int)ar4 + 0x14),afStack_dc,iVar1,ar7);
          Vec3_dtor(afStack_dc,0xffffffff,iVar1,ar7);
          uVar4 = 0xffffffff;
          object_dtor_delete(auStack_cc,0xffffffff,iVar1,ar7);
        }
        if (cVar14 == '\0') {
          dVar10 = (double)CONCAT44(0x3e99999a,(int)ar4[0x4f]);
        }
        else {
          in_xd0 = ar4[0x4f];
          dVar10 = 8192.001910400391;
        }
        if (cVar13 == '\0') {
          fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar14 == '\0') {
          *(float *)(ar4 + 0x4f) = fVar7;
          fVar7 = *(float *)(ar4 + 0x4f);
          fVar11 = 6.0;
        }
        else {
          ar4[0x4f] = in_xd0;
          fVar7 = 6.0;
          fVar11 = 24.0;
        }
        if (cVar13 == '\0' && fVar11 < fVar7) {
          if (cVar14 == '\0') {
            *(undefined4 *)(ar4 + 0x4f) = 0x40c00000;
          }
          else {
            ar4[0x4f] = 0x41c0000040c00000;
          }
        }
        s_CAnimBody_AdvanceFrame_033d90(ar4 + 0x16,uVar4,iVar1,ar7);
      }
      else {
        ar7 = (ulonglong *)0x0;
        uVar5 = 0xffffffff;
        uVar4 = 5;
        puVar3 = ar4 + 0x16;
        iVar2 = s_CAnimBody_SetAnimation_033a94(puVar3,5,0xffffffff,0);
        if (iVar2 != 6) {
          puVar3 = ar4 + 0x16;
          s_CAnimBody_SetFrame_033e6e(puVar3,uVar4,uVar5,ar7);
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x12) = 0;
        }
        else {
          ar4[0x12] = (ulonglong)(uint)fStack_e0;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x13) = 0;
        }
        else {
          ar4[0x13] = (ulonglong)(uint)fStack_e0;
        }
        *(undefined4 *)(ar4 + 8) = 3;
        uVar4 = rand(puVar3,uVar4,uVar5,ar7);
        iVar2 = libgcc_divide_helper_01031c(uVar4,8,uVar5,ar7);
        *(int *)(ar4 + 0x50) = iVar2 + 8;
      }
      break;
    case 3:
      if (*(int *)((int)ar4 + 0x124) == 0x11) {
        if (cVar14 == '\0') {
          in_dr0 = (double)(ulonglong)(uint)ar4[0x4f];
        }
        else {
          in_xd0 = ar4[0x4f];
        }
        dVar10 = (double)CONCAT44(0x3f800000,SUB84(in_dr0,0));
        if (cVar13 == '\0') {
          fVar7 = SUB84(in_dr0,0) + 1.0;
        }
        else {
          fVar7 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar14 == '\0') {
          *(float *)(ar4 + 0x4f) = fVar7;
          dVar10 = (double)CONCAT44(0x3f000000,(int)ar4[5]);
        }
        else {
          ar4[0x4f] = in_xd0;
          in_xd0 = ar4[5];
          dVar10 = 3.73993469111571e-312;
        }
        if (cVar13 == '\0') {
          fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar14 == '\0') {
          *(float *)(ar4 + 5) = fVar7;
          in_dr0 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x24),(int)ar4[5]);
        }
        else {
          ar4[5] = in_xd0;
          in_xd0 = ar4[5];
          in_dr0 = *(double *)((int)ar4 + 0x24);
        }
        if (cVar13 == '\0' && (float)((ulonglong)in_dr0 >> 0x20) < SUB84(in_dr0,0)) {
          if (cVar14 == '\0') {
            uVar4 = *(undefined4 *)((int)ar4 + 0x24);
            in_dr0 = (double)CONCAT44(uVar4,SUB84(in_dr0,0));
            *(undefined4 *)(ar4 + 5) = uVar4;
          }
          else {
            in_dr0 = *(double *)((int)ar4 + 0x24);
            ar4[5] = (ulonglong)in_dr0;
          }
        }
      }
      iVar1 = get_field_1c_026dd8(ar4 + 0x16,ar4 + 0x16,iVar2,ar7);
      if ((iVar1 == 5) || (iVar1 == 6)) {
        CAnimBody_GetCurFrame(ar4 + 0x16,iVar1,iVar2,ar7,uVar5);
        if (cVar13 == '\0') {
          bVar12 = SUB84(in_dr14,0) < (float)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          bVar12 = in_dr14 < in_dr0;
        }
        if (bVar12) {
          if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44(0x3d4ccccd,(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = 1.268568884059579e+106;
          }
          if (cVar13 == '\0') {
            fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar10 + dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(ar4 + 5) = fVar7;
            uVar9 = CONCAT44(*(undefined4 *)((int)ar4 + 0x24),(int)ar4[5]);
          }
          else {
            ar4[5] = in_xd0;
            in_xd0 = ar4[5];
            uVar9 = *(undefined8 *)((int)ar4 + 0x24);
          }
          puVar3 = (ulonglong *)((int)ar4 + 0x24);
          if (cVar13 == '\0' && (float)((ulonglong)uVar9 >> 0x20) < (float)uVar9) {
            if (cVar14 == '\0') {
              *(undefined4 *)(ar4 + 5) = *(undefined4 *)((int)ar4 + 0x24);
            }
            else {
              ar4[5] = *(ulonglong *)((int)ar4 + 0x24);
            }
          }
        }
        else {
          puVar3 = ar4 + 5;
          if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44(0x3d4ccccd,(int)*puVar3);
          }
          else {
            in_xd0 = *puVar3;
            dVar10 = 1.34160945841353e-311;
          }
          if (cVar13 == '\0') {
            fVar7 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar10 - dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(ar4 + 5) = fVar7;
            fVar7 = *(float *)(ar4 + 5);
          }
          else {
            ar4[5] = in_xd0;
            in_xd0 = ar4[5];
          }
          if (cVar13 == '\0' && fVar7 < 0.0) {
            if (cVar14 == '\0') {
              *(undefined4 *)(ar4 + 5) = 0;
            }
            else {
              ar4[5] = (ulonglong)(uint)fVar7;
            }
          }
        }
        if (cVar14 == '\0') {
          fVar7 = *(float *)(ar4 + 0x4f);
        }
        else {
          in_xd0 = ar4[0x4f];
          fVar7 = fStack_e4;
          fStack_e4 = fStack_e0;
        }
        if (cVar13 != '\0' || fVar7 <= fStack_e4) {
          if (cVar14 == '\0') {
            in_dr0 = (double)CONCAT44(0x3e19999a,(int)ar4[0x4f]);
          }
          else {
            in_xd0 = ar4[0x4f];
            in_dr0 = 1.3585920559782e-311;
          }
          if (cVar13 == '\0') {
            fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
            in_dr0 = (double)CONCAT44(fVar7,SUB84(in_dr0,0) + fVar7);
          }
          else {
            in_dr0 = in_dr0 + in_dr0;
          }
          if (cVar14 == '\0') {
            *(int *)(ar4 + 0x4f) = SUB84(in_dr0,0);
          }
          else {
            ar4[0x4f] = in_xd0;
          }
        }
        else {
          if (cVar14 == '\0') {
            in_dr0 = (double)CONCAT44(0x3e19999a,(int)ar4[0x4f]);
          }
          else {
            in_xd0 = ar4[0x4f];
            in_dr0 = 2.6866146507523e+96;
          }
          if (cVar13 == '\0') {
            fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
            in_dr0 = (double)CONCAT44(fVar7,SUB84(in_dr0,0) - fVar7);
          }
          else {
            in_dr0 = in_dr0 - in_dr0;
          }
          puVar3 = ar4;
          if (cVar14 == '\0') {
            *(int *)(ar4 + 0x4f) = SUB84(in_dr0,0);
          }
          else {
            ar4[0x4f] = in_xd0;
          }
        }
        if ((int)ar4[0x50] < 1) {
          iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,puVar3,iVar2,ar7);
          if (iVar1 == 1) {
            *(undefined4 *)(ar4 + 0x57) = 2;
            ar7 = (ulonglong *)0x0;
            iVar2 = -1;
            uVar4 = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0,0xffffffff,0);
            s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,uVar4,iVar2,ar7);
            *(undefined4 *)(ar4 + 0x50) = 0;
          }
        }
        else {
          iVar1 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0x16,puVar3,iVar2,ar7);
          if (iVar1 == 1) {
            *(int *)(ar4 + 0x50) = (int)ar4[0x50] + -1;
          }
        }
      }
      else {
        uStack_12c._4_4_ = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,iVar1,iVar2,ar7);
        if (uStack_12c._4_4_ == 1) {
          *(undefined4 *)(ar4 + 0x57) = 2;
          *(undefined4 *)(ar4 + 8) = 5;
        }
      }
      FUN_8c022fc0(ar5,ar6,iVar2,ar7);
      if (cVar14 == '\0') {
        uStack_12c = (double)CONCAT44(uStack_12c._4_4_,(int)((ulonglong)in_dr0 >> 0x20));
        dVar10 = (double)CONCAT44((int)ar4[9],(int)ar4[5]);
      }
      else {
        in_xd0 = ar4[5];
        dVar10 = (double)ar4[9];
        uStack_12c = in_dr0;
      }
      if (cVar13 == '\0') {
        fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar14 == '\0') {
        uStack_12c = (double)CONCAT44((undefined4)uStack_12c,fVar7);
      }
      if (cVar13 != '\0' || (float)((ulonglong)uStack_12c >> 0x20) <= SUB84(uStack_12c,0)) {
        uVar8 = (ulonglong)uStack_12c & 0xffffffff;
        if (cVar14 == '\0') {
          *(undefined4 *)((int)ar4 + 0x2c) = 0;
          uVar8 = (ulonglong)(uint)ar4[7];
        }
        else {
          *(ulonglong *)((int)ar4 + 0x2c) = uVar8;
          in_xd0 = ar4[7];
        }
        if ((float)uVar8 == 0.0) {
          if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44(0x41a00000,(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = 1.0392155376404425e+106;
          }
          if (cVar13 == '\0') {
            fVar7 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar10 / dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)((int)ar4 + 0x3c) = fVar7;
          }
          else {
            *(ulonglong *)((int)ar4 + 0x3c) = in_xd0;
          }
        }
        else {
          if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44((int)ar4[7],(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = (double)ar4[7];
          }
          if (cVar13 == '\0') {
            fVar7 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar10 / dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)((int)ar4 + 0x3c) = fVar7;
          }
          else {
            *(ulonglong *)((int)ar4 + 0x3c) = in_xd0;
          }
        }
        ar7 = (ulonglong *)0x40;
        *(undefined4 *)(ar4 + 8) = 4;
      }
      break;
    case 4:
      if (cVar14 == '\0') {
        dVar10 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x3c),(int)ar4[5]);
      }
      else {
        in_xd0 = ar4[5];
        dVar10 = *(double *)((int)ar4 + 0x3c);
      }
      if (cVar13 == '\0') {
        fVar7 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar10 - dVar10,0);
      }
      if (cVar14 == '\0') {
        *(float *)(ar4 + 5) = fVar7;
        fVar7 = *(float *)(ar4 + 5);
      }
      else {
        ar4[5] = in_xd0;
      }
      if (cVar13 == '\0' && fVar7 < 0.0) {
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 5) = 0;
        }
        else {
          ar4[5] = (ulonglong)(uint)fVar7;
        }
      }
      ar7 = ar4 + 0x4f;
      iVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,s_CAnimBody_AdvanceFrame_033ba0,0xb0,ar7);
      if (iVar2 == 1) {
        *(undefined4 *)(ar4 + 0x57) = 2;
        uVar6 = 0;
      }
    }
  }
  FUN_8c051a68(ar4,ar6,ar5,ar7);
  Vec3_dtor(auStack_44,0xffffffff,ar5,ar7);
  Vec3_dtor(auStack_34,0xffffffff,ar5,ar7);
  return uVar6;
}



/* FUN_8c049b68 @ 8c049b68 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c04ab60) */
/* WARNING: Removing unreachable block (ram,0x8c04ad6e) */
/* WARNING: Removing unreachable block (ram,0x8c04a458) */
/* WARNING: Removing unreachable block (ram,0x8c04a6e8) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c049b68(int ar4,undefined8 *ar5,code *ar6,code *ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  double *ar6_00;
  code *pcVar9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 uVar10;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  double *pdVar11;
  uint uVar12;
  float fVar13;
  undefined8 in_dr0;
  double dVar14;
  double dVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined4 in_fr3;
  undefined8 in_dr4;
  undefined8 in_dr6;
  double in_dr12;
  float fVar18;
  double in_dr14;
  float fVar19;
  undefined8 in_xd0;
  undefined8 in_xd4;
  undefined8 in_xd6;
  undefined8 in_xd14;
  bool bVar20;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [16];
  double dStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    pdVar11 = &dStack_10;
    dStack_10 = (double)CONCAT44(SUB84(in_dr12,0),(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    pdVar11 = (double *)auStack_20;
    uStack_8 = in_xd14;
    dStack_10 = in_dr14;
  }
  *(undefined4 *)((int)pdVar11 + -4) = unaff_r14;
  *(undefined4 *)((int)pdVar11 + -8) = unaff_r13;
  *(undefined4 *)((int)pdVar11 + -0xc) = unaff_r12;
  *(undefined4 *)((int)pdVar11 + -0x10) = unaff_r11;
  *(undefined4 *)((int)pdVar11 + -0x14) = unaff_r10;
  *(undefined4 *)((int)pdVar11 + -0x18) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar11 + -0x268) = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)((int)pdVar11 + -0x264) = (int)in_dr4;
    *(int *)((int)pdVar11 + -0x260) = (int)((ulonglong)in_dr6 >> 0x20);
    *(int *)((int)pdVar11 + -0x25c) = (int)in_dr6;
  }
  else {
    *(undefined8 *)((int)pdVar11 + -0x268) = in_dr4;
    *(undefined8 *)((int)pdVar11 + -0x264) = in_xd4;
    *(undefined8 *)((int)pdVar11 + -0x260) = in_dr6;
    *(undefined8 *)((int)pdVar11 + -0x25c) = in_xd6;
  }
  uVar10 = 1;
  pcVar5 = Vec3_set_zero;
  pcVar9 = ar6;
  Vec3_set_zero((undefined1 *)((int)pdVar11 + -0x24),Vec3_set_zero,ar6,ar7);
  Vec3_set_zero((undefined1 *)((int)pdVar11 + -0x30),pcVar5,pcVar9,ar7);
  Vec3_ctor_copy((undefined1 *)((int)pdVar11 + -0x40),ar6,pcVar9,ar7);
  FUN_8c022fc0(ar5,(undefined1 *)((int)pdVar11 + -0x40),pcVar9,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar11 + -0x158) = (int)((ulonglong)in_dr0 >> 0x20);
    dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x158),(int)in_dr0);
    *(undefined4 *)((int)pdVar11 + -0x140) = *(undefined4 *)((int)pdVar11 + -0x158);
  }
  else {
    *(undefined8 *)((int)pdVar11 + -0x158) = in_dr0;
    dVar14 = *(double *)((int)pdVar11 + -0x158);
    *(double *)((int)pdVar11 + -0x140) = dVar14;
  }
  *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -0x70);
  puVar6 = ar5;
  Vec3_sub((undefined1 *)((int)pdVar11 + -0x40),ar5,pcVar9,ar7,
           *(undefined4 *)((int)pdVar11 + -0x26c));
  *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -0x80);
  Vec3_normalize((undefined1 *)((int)pdVar11 + -0x70),puVar6,pcVar9,ar7);
  Vec3_ctor_copy((undefined1 *)((int)pdVar11 + -0x50),(undefined1 *)((int)pdVar11 + -0x80),pcVar9,
                 ar7);
  Vec3_dtor((undefined1 *)((int)pdVar11 + -0x80),0xffffffff,pcVar9,ar7);
  Vec3_dtor((undefined1 *)((int)pdVar11 + -0x70),0xffffffff,pcVar9,ar7);
  Vec3_ctor_copy((undefined1 *)((int)pdVar11 + -0x60),ar5,pcVar9,ar7);
  pcVar5 = (code *)(ar4 + 0x14);
  Vec3_assign(ar4 + 0x80,pcVar5,pcVar9,ar7);
  uVar2 = SUB84(dVar14,0);
  if (*(int *)(ar4 + 0x128) == 1) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x220) = 0x40d00000;
    }
    else {
      uVar2 = 0x40d00000;
      *(undefined8 *)(ar4 + 0x220) = 0xb040d00000;
    }
    uVar1 = get_field_1c_026dd8(ar4 + 0xb0,pcVar5,pcVar9,ar7);
    *(undefined4 *)((int)pdVar11 + -0x15c) = uVar1;
    iVar4 = *(int *)((int)pdVar11 + -0x15c);
    uVar1 = SUB84(in_dr14,0);
    if (iVar4 == 5) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)pdVar11 + -0x144) = 0x42000000;
        in_dr14 = (double)CONCAT44(0x41980000,uVar1);
        in_dr12 = 524288.1283569336;
      }
      else {
        in_dr12 = 8589936676.0;
        uVar2 = 0x42000000;
        *(undefined8 *)((int)pdVar11 + -0x144) = 0x12442000000;
        in_dr14 = 402653249.59375;
      }
    }
    else if (iVar4 == 6) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)pdVar11 + -0x144) = 0x42200000;
        in_dr14 = (double)CONCAT44(0x41800000,uVar1);
        in_dr12 = 536871043.6875;
      }
      else {
        in_dr12 = 34359746784.0;
        uVar2 = 0x42200000;
        *(undefined8 *)((int)pdVar11 + -0x144) = 0x12442200000;
        in_dr14 = 1610612998.0;
      }
    }
    else if (iVar4 == 10) {
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44(0x41200000,uVar1);
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),0x41800000);
      }
      else {
        in_dr14 = 33554440.140625;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(0x3f333333,uVar2);
      *(undefined4 *)((int)pdVar11 + -0x148) = 0x3f333333;
    }
    else {
      dVar14 = 6.11658655508794e-312;
      *(undefined8 *)((int)pdVar11 + -0x148) = 0x1203f333333;
    }
  }
  else if (*(int *)(ar4 + 0x128) == 2) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x220) = 0x40d00000;
    }
    else {
      uVar2 = 0x40d00000;
      *(undefined8 *)(ar4 + 0x220) = 0xb040d00000;
    }
    pcVar5 = get_field_1c_026dd8;
    uVar1 = get_field_1c_026dd8(ar4 + 0xb0,get_field_1c_026dd8,pcVar9,ar7);
    *(undefined4 *)((int)pdVar11 + -0x160) = uVar1;
    iVar4 = *(int *)((int)pdVar11 + -0x160);
    uVar1 = SUB84(in_dr14,0);
    if (iVar4 == 5) {
      in_dr12 = (double)((ulonglong)in_dr12 & 0xffffffff);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)pdVar11 + -0x144) = 0x42440000;
        in_dr14 = (double)CONCAT44(0x41300000,uVar1);
        in_dr12 = 5.44745745654293e-315;
      }
      else {
        uVar2 = 0x42440000;
        *(undefined8 *)((int)pdVar11 + -0x144) = 0x12442440000;
        in_dr14 = 402653249.1875;
      }
    }
    else if (iVar4 == 6) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)pdVar11 + -0x144) = 0x421c0000;
        in_dr14 = (double)CONCAT44(0x41300000,uVar1);
        in_dr12 = 536871043.4375;
      }
      else {
        in_dr12 = 30064775280.0;
        uVar2 = 0x421c0000;
        *(undefined8 *)((int)pdVar11 + -0x144) = 0x124421c0000;
        in_dr14 = 402653249.1875;
      }
    }
    else if (iVar4 == 10) {
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44(0x40e00000,uVar1);
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),0x41300000);
      }
      else {
        in_dr14 = 1048576.2534179688;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(0x3f000000,uVar2);
      *(undefined4 *)((int)pdVar11 + -0x148) = 0x3f000000;
    }
    else {
      dVar14 = 6.11656997699681e-312;
      *(undefined8 *)((int)pdVar11 + -0x148) = 0x1203f000000;
    }
  }
  iVar4 = *(int *)(ar4 + 0x40);
  if ((5 < iVar4) || (iVar4 < 0)) goto override_jmp_8c049e5a_case_2;
                    /* WARNING: Switch is manually overridden */
  switch(iVar4) {
  case 0:
    if (*(int *)(ar4 + 0x124) == 0x11) {
      uVar2 = FUN_8c05c28c(ar4,pcVar5,pcVar9,ar7);
      *(undefined4 *)((int)pdVar11 + -0x164) = uVar2;
      iVar4 = *(int *)((int)pdVar11 + -0x164);
    }
    else {
      uVar2 = FUN_8c05c28c(ar4,pcVar5,pcVar9,ar7);
      *(undefined4 *)((int)pdVar11 + -0x168) = uVar2;
      iVar4 = *(int *)((int)pdVar11 + -0x168);
    }
    if (iVar4 != 0) {
      *(undefined4 *)((int)pdVar11 + -0x150) = 1;
      Vec3_dtor((undefined1 *)((int)pdVar11 + -0x60),0xffffffff,pcVar9,ar7);
      Vec3_dtor((undefined1 *)((int)pdVar11 + -0x50),0xffffffff,pcVar9,ar7);
      Vec3_dtor((undefined1 *)((int)pdVar11 + -0x40),0xffffffff,pcVar9,ar7);
      object_dtor_delete((undefined1 *)((int)pdVar11 + -0x30),0xffffffff,pcVar9,ar7);
      object_dtor_delete((undefined1 *)((int)pdVar11 + -0x24),0xffffffff,pcVar9,ar7);
      return *(undefined4 *)((int)pdVar11 + -0x150);
    }
    if (*(int *)(ar4 + 0x1b8) == 1) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x18c) = *(undefined4 *)ar5;
        *(undefined4 *)(ar4 + 400) = *(undefined4 *)((int)ar5 + 4);
        *(undefined4 *)(ar4 + 0x194) = *(undefined4 *)(ar5 + 1);
        *(undefined4 *)(ar4 + 0x198) = *(undefined4 *)((int)pdVar11 + -0x40);
        *(undefined4 *)(ar4 + 0x19c) = *(undefined4 *)((int)pdVar11 + -0x3c);
        dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x38),SUB84(dVar14,0));
        *(undefined4 *)(ar4 + 0x1a0) = *(undefined4 *)((int)pdVar11 + -0x38);
      }
      else {
        *(undefined8 *)(ar4 + 0x18c) = *ar5;
        *(undefined8 *)(ar4 + 400) = *(undefined8 *)((int)ar5 + 4);
        *(undefined8 *)(ar4 + 0x194) = ar5[1];
        *(undefined8 *)(ar4 + 0x198) = *(undefined8 *)((int)pdVar11 + -0x40);
        *(undefined8 *)(ar4 + 0x19c) = *(undefined8 *)((int)pdVar11 + -0x3c);
        dVar14 = *(double *)((int)pdVar11 + -0x38);
        *(double *)(ar4 + 0x1a0) = dVar14;
      }
    }
    uVar12 = SUB84(dVar14,0);
    *(undefined4 *)((int)pdVar11 + -0x220) = *(undefined4 *)(ar4 + 0x128);
    iVar4 = (*(int *)((int)pdVar11 + -0x220) * 2 + *(int *)((int)pdVar11 + -0x220)) * 8 +
            -0x73d7fc0c;
    FUN_8c031b68(ar4,iVar4,pcVar9,ar7);
    FUN_8c03c314(ar4,iVar4,pcVar9,ar7);
    puVar8 = (undefined1 *)((int)pdVar11 + -0x40);
    puVar6 = ar5;
    FUN_8c031bb4(ar4,ar5,puVar8,ar7);
    uVar16 = (ulonglong)uVar12;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = uVar16;
    }
    FUN_8c0231c8((undefined1 *)((int)pdVar11 + -0x50),puVar6,puVar8,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar11 + -0x16c) = (int)(uVar16 >> 0x20);
    }
    else {
      *(ulonglong *)((int)pdVar11 + -0x16c) = uVar16;
    }
    FUN_8c0231c8(ar4 + 0x14,puVar6,puVar8,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar11 + -0x170) = (int)(uVar16 >> 0x20);
      uVar17 = CONCAT44(*(undefined4 *)((int)pdVar11 + -0x170),(int)uVar16);
    }
    else {
      *(ulonglong *)((int)pdVar11 + -0x170) = uVar16;
      uVar17 = *(undefined8 *)((int)pdVar11 + -0x170);
    }
    FUN_8c010e38(FUN_8c010e38,puVar6,puVar8,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar11 + -0x174) = (int)((ulonglong)uVar17 >> 0x20);
      uVar17 = CONCAT44(*(undefined4 *)((int)pdVar11 + -0x174),(int)uVar17);
      *(undefined4 *)(ar4 + 0x228) = *(undefined4 *)((int)pdVar11 + -0x174);
    }
    else {
      *(undefined8 *)((int)pdVar11 + -0x174) = uVar17;
      uVar17 = *(undefined8 *)((int)pdVar11 + -0x174);
      *(undefined8 *)(ar4 + 0x228) = uVar17;
    }
    *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -0x90);
    FUN_8c0230f0(ar4 + 0x14,ar4 + 0x228,puVar8,ar7,*(undefined4 *)((int)pdVar11 + -0x26c));
    *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -0xa0);
    FUN_8c0230f0((undefined1 *)((int)pdVar11 + -0x50),(undefined1 *)((int)pdVar11 + -0xa0),puVar8,
                 ar7,*(undefined4 *)((int)pdVar11 + -0x26c));
    FUN_8c022dac((undefined1 *)((int)pdVar11 + -0x90),(undefined1 *)((int)pdVar11 + -0xa0),puVar8,
                 ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar11 + -0x178) = (int)((ulonglong)uVar17 >> 0x20);
      *(undefined4 *)(ar4 + 0x224) = *(undefined4 *)((int)pdVar11 + -0x178);
    }
    else {
      *(undefined8 *)((int)pdVar11 + -0x178) = uVar17;
      *(undefined8 *)(ar4 + 0x224) = *(undefined8 *)((int)pdVar11 + -0x178);
    }
    Vec3_dtor((undefined1 *)((int)pdVar11 + -0xa0),0xffffffff,puVar8,ar7);
    Vec3_dtor((undefined1 *)((int)pdVar11 + -0x90),0xffffffff,puVar8,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x278) = 0x3f4ccccd;
      uVar17 = CONCAT44(*(undefined4 *)(ar4 + 0x220),*(undefined4 *)(ar4 + 0x24));
    }
    else {
      *(undefined8 *)(ar4 + 0x278) = 0x2203f4ccccd;
      in_xd0 = *(undefined8 *)(ar4 + 0x24);
      uVar17 = *(undefined8 *)(ar4 + 0x220);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar17 < (float)((ulonglong)uVar17 >> 0x20)) {
      uVar2 = rand_range(ar4,0,2,ar4 + 0x220);
      *(undefined4 *)((int)pdVar11 + -0x17c) = uVar2;
      ar7 = (code *)0x0;
      uVar1 = 0xffffffff;
      iVar4 = *(int *)((int)pdVar11 + -0x17c) + 5;
      uVar2 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar4,0xffffffff,0);
      *(undefined4 *)((int)pdVar11 + -0x180) = uVar2;
      if (*(int *)((int)pdVar11 + -0x180) != 6) {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar4,uVar1,ar7);
      }
    }
    else {
      ar7 = (code *)0x0;
      uVar1 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar17 = CONCAT44(0x42340000,*(undefined4 *)(ar4 + 0x224));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x224);
      uVar17 = 0x21842340000;
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar17 >> 0x20) < (float)uVar17) {
      uVar2 = FUN_8c023334(ar4 + 0x14,(undefined1 *)((int)pdVar11 + -0x50),uVar1,ar7);
      *(undefined4 *)((int)pdVar11 + -0x184) = uVar2;
      *(undefined4 *)(ar4 + 0x27c) = *(undefined4 *)((int)pdVar11 + -0x184);
      if (*(int *)(ar4 + 0x27c) == 3) {
        ar7 = (code *)0x0;
        uVar7 = 0xffffffff;
        uVar2 = 7;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0);
        uVar2 = FUN_8c026db0(ar4,uVar2,uVar7,ar7);
        *(undefined4 *)((int)pdVar11 + -0x188) = uVar2;
        uVar1 = *(undefined4 *)((int)pdVar11 + -0x188);
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,uVar1,uVar7,ar7);
        *(undefined4 *)((int)pdVar11 + -0x18c) = uVar2;
        uVar2 = deref_u32(*(undefined4 *)((int)pdVar11 + -0x18c),uVar1,uVar7,ar7);
        *(undefined4 *)((int)pdVar11 + -400) = uVar2;
        puVar3 = *(undefined4 **)((int)pdVar11 + -400);
        uVar2 = puVar3[1];
        *(undefined4 *)(ar4 + 0xb4) = *puVar3;
        *(undefined4 *)(ar4 + 0xb8) = uVar2;
        *(undefined4 *)(ar4 + 0xbc) = puVar3[2];
        if (*(int *)(ar4 + 0x128) == 1) {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c13630c;
        }
        else {
          ar7 = (code *)&DAT_8c136354;
          *(undefined **)(ar4 + 0xb4) = &DAT_8c136354;
        }
      }
      else {
        ar7 = (code *)0x0;
        uVar7 = 0xffffffff;
        uVar2 = 8;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
        uVar2 = FUN_8c026db0(ar4,uVar2,uVar7,ar7);
        *(undefined4 *)((int)pdVar11 + -0x194) = uVar2;
        uVar1 = *(undefined4 *)((int)pdVar11 + -0x194);
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,uVar1,uVar7,ar7);
        *(undefined4 *)((int)pdVar11 + -0x198) = uVar2;
        uVar2 = deref_u32(*(undefined4 *)((int)pdVar11 + -0x198),uVar1,uVar7,ar7);
        *(undefined4 *)((int)pdVar11 + -0x19c) = uVar2;
        puVar3 = *(undefined4 **)((int)pdVar11 + -0x19c);
        uVar2 = puVar3[1];
        *(undefined4 *)(ar4 + 0xb4) = *puVar3;
        *(undefined4 *)(ar4 + 0xb8) = uVar2;
        *(undefined4 *)(ar4 + 0xbc) = puVar3[2];
        if (*(int *)(ar4 + 0x128) == 1) {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c136324;
        }
        else {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c13636c;
        }
      }
      FUN_8c032ab0(ar4,uVar1,uVar7,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar11 + -0x1a0) = (int)((ulonglong)uVar17 >> 0x20);
        dVar14 = (double)CONCAT44(0x42700000,*(undefined4 *)(ar4 + 0x224));
      }
      else {
        *(undefined8 *)((int)pdVar11 + -0x1a0) = uVar17;
        in_xd0 = *(undefined8 *)(ar4 + 0x224);
        dVar14 = 3.74021962707397e-312;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) / (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 / dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x1a0),fVar13);
      }
      else {
        dVar14 = *(double *)((int)pdVar11 + -0x1a0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 * dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x2c0) = fVar13;
      }
      else {
        *(undefined8 *)(ar4 + 0x2c0) = in_xd0;
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar7,ar7);
      uVar2 = get_field_1c_026dd8(ar4 + 0xb0,uVar1,uVar7,ar7);
      *(undefined4 *)((int)pdVar11 + -0x1a4) = uVar2;
      uVar1 = 0xb0;
      uVar2 = s_Check_This_Motion_Data_0314fc
                        (ar4 + 0xb0,*(undefined4 *)((int)pdVar11 + -0x1a4),0xb0,ar7);
      *(undefined4 *)((int)pdVar11 + -0x1a8) = uVar2;
      if (*(int *)((int)pdVar11 + -0x1a8) == 0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x228) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x228) = CONCAT44(0x3f800000,fVar13);
        }
      }
      else {
        uVar2 = get_field_1c_026dd8(ar4 + 0xb0,get_field_1c_026dd8,uVar1,ar7);
        *(undefined4 *)((int)pdVar11 + -0x1ac) = uVar2;
        uVar2 = s_Check_This_Motion_Data_0314fc
                          (ar4 + 0xb0,*(undefined4 *)((int)pdVar11 + -0x1ac),uVar1,ar7);
        *(undefined4 *)((int)pdVar11 + -0x1b0) = uVar2;
        *(int *)((int)pdVar11 + -0x224) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)pdVar11 + -0x224) + 0x228),in_fr3)
          ;
        }
        else {
          dVar14 = *(double *)(*(int *)((int)pdVar11 + -0x224) + 0x228);
        }
        fVar13 = (float)*(int *)((int)pdVar11 + -0x1b0);
        dVar15 = (double)(ulonglong)(uint)fVar13;
        if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(0x4f800000,fVar13);
          }
          else {
            dVar15 = 5.4415140602002105e+158;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = (float)((ulonglong)dVar15 >> 0x20);
            dVar15 = (double)CONCAT44(fVar13,SUB84(dVar15,0) + fVar13);
          }
          else {
            dVar15 = dVar15 + dVar15;
          }
        }
        if (in_FPSCR_PR == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) / SUB84(dVar15,0),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 / dVar15;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(*(int *)((int)pdVar11 + -0x224) + 0x228) = (int)((ulonglong)dVar14 >> 0x20);
        }
        else {
          *(double *)(*(int *)((int)pdVar11 + -0x224) + 0x228) = dVar14;
        }
      }
    }
    *(undefined4 *)(ar4 + 0x2b8) = 3;
    *(undefined4 *)(ar4 + 0x40) = 1;
    uVar2 = rand(rand,1,uVar1,ar7);
    *(undefined4 *)((int)pdVar11 + -0x1b4) = uVar2;
    uVar7 = 3;
    uVar2 = libgcc_divide_helper_01031c(*(undefined4 *)((int)pdVar11 + -0x1b4),3,uVar1,ar7);
    *(undefined4 *)((int)pdVar11 + -0x228) = uVar2;
    *(int *)(ar4 + 0x280) = *(int *)((int)pdVar11 + -0x228) + 1;
    FUN_8c02a1fc(ar4 + 0x2c8,uVar7,uVar1,ar7);
    break;
  case 1:
    *(undefined4 *)(ar4 + 0x40) = 3;
  case 3:
    uVar2 = get_field_1c_026dd8(ar4 + 0xb0,pcVar5,pcVar9,ar7);
    *(undefined4 *)((int)pdVar11 + -0x1b8) = uVar2;
    iVar4 = *(int *)((int)pdVar11 + -0x1b8);
    if ((iVar4 < 0xb) && (-1 < iVar4)) {
      pcVar5 = (code *)(&switchD_8c04a56e::switchdataD_8c04a57c)[iVar4];
      switch(iVar4) {
      case 0:
      case 1:
        uVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar5,pcVar9,ar7);
        *(undefined4 *)((int)pdVar11 + -0x1bc) = uVar2;
        if (*(int *)((int)pdVar11 + -0x1bc) == 1) {
          *(undefined4 *)(ar4 + 0x40) = 5;
          *(undefined4 *)(ar4 + 0x2b8) = 2;
        }
        *(int *)((int)pdVar11 + -0x22c) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(0x3dcccccd,
                                    *(undefined4 *)(*(int *)((int)pdVar11 + -0x22c) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x22c) + 0x28);
          dVar14 = 2.6649806623074442e+256;
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)pdVar11 + -0x22c) + 0x28) = fVar13;
          fVar13 = *(float *)(ar4 + 0x28);
        }
        else {
          *(undefined8 *)(*(int *)((int)pdVar11 + -0x22c) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
        }
        dVar14 = (double)(ulonglong)(uint)fVar13;
        if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
          dVar14 = (double)(ulonglong)(uint)fVar13;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(double *)(ar4 + 0x28) = dVar14;
          }
        }
        break;
      default:
        goto switchD_8c04a56e_caseD_2;
      case 5:
        s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,pcVar5,pcVar9,ar7);
        CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar5,pcVar9,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x1ec) = (int)((ulonglong)dVar14 >> 0x20);
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                     *(undefined4 *)((int)pdVar11 + -0x1ec));
        }
        else {
          *(double *)((int)pdVar11 + -0x1ec) = dVar14;
        }
        if (in_FPSCR_PR == '\0' && (float)((ulonglong)in_dr14 >> 0x20) < SUB84(in_dr14,0)) {
          if (in_FPSCR_PR == '\0') {
            bVar20 = SUB84(in_dr14,0) < SUB84(in_dr12,0);
          }
          else {
            bVar20 = in_dr14 < in_dr12;
          }
          if (bVar20) {
            uVar2 = get_field_1c_026dd8(ar4 + 0xb0,pcVar5,pcVar9,ar7);
            *(undefined4 *)((int)pdVar11 + -0x1f0) = uVar2;
            uVar2 = *(undefined4 *)((int)pdVar11 + -0x1f0);
            uVar1 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar2,pcVar9,ar7);
            *(undefined4 *)((int)pdVar11 + -500) = uVar1;
            Vec3_set_xyz((undefined1 *)((int)pdVar11 + -0x110),uVar2,pcVar9,ar7);
            *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -0x110);
            *(undefined1 **)((int)pdVar11 + -0x270) = (undefined1 *)((int)pdVar11 + -0x120);
            ar7 = (code *)(ar4 + 0x14);
            pcVar9 = (code *)((int)pdVar11 + -0x40);
            FUN_8c031eb0(ar4,ar5,pcVar9,ar7,*(undefined4 *)((int)pdVar11 + -0x270));
            Vec3_assign(ar4 + 0x14,(undefined1 *)((int)pdVar11 + -0x120),pcVar9,ar7);
            Vec3_dtor((undefined1 *)((int)pdVar11 + -0x120),0xffffffff,pcVar9,ar7);
            object_dtor_delete((undefined1 *)((int)pdVar11 + -0x110),0xffffffff,pcVar9,ar7);
            *(int *)((int)pdVar11 + -0x240) = ar4;
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x264),
                                        *(undefined4 *)(*(int *)((int)pdVar11 + -0x240) + 0x28));
            }
            else {
              in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x240) + 0x28);
              dVar14 = *(double *)((int)pdVar11 + -0x264);
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar14 + dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(*(int *)((int)pdVar11 + -0x240) + 0x28) = fVar13;
              dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
            }
            else {
              *(undefined8 *)(*(int *)((int)pdVar11 + -0x240) + 0x28) = in_xd0;
              in_xd0 = *(undefined8 *)(ar4 + 0x28);
              dVar14 = *(double *)(ar4 + 0x24);
            }
            if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar14 >> 0x20) < SUB84(dVar14,0)) {
              if (in_FPSCR_SZ == '\0') {
                uVar2 = *(undefined4 *)(ar4 + 0x24);
                dVar14 = (double)CONCAT44(uVar2,SUB84(dVar14,0));
                *(undefined4 *)(ar4 + 0x28) = uVar2;
              }
              else {
                dVar14 = *(double *)(ar4 + 0x24);
                *(double *)(ar4 + 0x28) = dVar14;
              }
            }
            break;
          }
        }
        FUN_8c032ab0(ar4,pcVar5,pcVar9,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x1f8) = (int)((ulonglong)dVar14 >> 0x20);
        }
        else {
          *(double *)((int)pdVar11 + -0x1f8) = dVar14;
        }
        *(int *)((int)pdVar11 + -0x244) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x1f8),
                                    *(undefined4 *)(*(int *)((int)pdVar11 + -0x244) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x244) + 0x28);
          dVar14 = *(double *)((int)pdVar11 + -0x1f8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)pdVar11 + -0x244) + 0x28) = fVar13;
          fVar13 = *(float *)(ar4 + 0x28);
        }
        else {
          *(undefined8 *)(*(int *)((int)pdVar11 + -0x244) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
        }
        dVar14 = (double)(ulonglong)(uint)fVar13;
        if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
          dVar14 = (double)(ulonglong)(uint)fVar13;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(double *)(ar4 + 0x28) = dVar14;
          }
        }
        break;
      case 6:
        if (in_FPSCR_SZ == '\0') {
          uVar17 = CONCAT44(0x40400000,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          uVar17 = 0x27840400000;
        }
        if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar17 >> 0x20) < (float)uVar17) {
          s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,pcVar5,pcVar9,ar7);
        }
        else {
          uVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar5,pcVar9,ar7);
          *(undefined4 *)((int)pdVar11 + -0x1fc) = uVar2;
          if (*(int *)((int)pdVar11 + -0x1fc) == 1) {
            *(undefined4 *)(ar4 + 0x40) = 5;
            *(undefined4 *)(ar4 + 0x2b8) = 2;
          }
        }
        CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar5,pcVar9,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x200) = (int)((ulonglong)uVar17 >> 0x20);
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                     *(undefined4 *)((int)pdVar11 + -0x200));
        }
        else {
          *(undefined8 *)((int)pdVar11 + -0x200) = uVar17;
        }
        if (in_FPSCR_PR == '\0' && (float)((ulonglong)in_dr14 >> 0x20) < SUB84(in_dr14,0)) {
          if (in_FPSCR_PR == '\0') {
            bVar20 = SUB84(in_dr14,0) < SUB84(in_dr12,0);
          }
          else {
            bVar20 = in_dr14 < in_dr12;
          }
          if (bVar20) {
            uVar1 = 6;
            uVar2 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,6,pcVar9,ar7);
            *(undefined4 *)((int)pdVar11 + -0x204) = uVar2;
            Vec3_set_xyz((undefined1 *)((int)pdVar11 + -300),uVar1,pcVar9,ar7);
            *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -300);
            *(undefined1 **)((int)pdVar11 + -0x270) = (undefined1 *)((int)pdVar11 + -0x13c);
            ar7 = (code *)(ar4 + 0x14);
            pcVar9 = (code *)((int)pdVar11 + -0x40);
            FUN_8c031eb0(ar4,ar5,pcVar9,ar7,*(undefined4 *)((int)pdVar11 + -0x270));
            Vec3_assign(ar4 + 0x14,(undefined1 *)((int)pdVar11 + -0x13c),pcVar9,ar7);
            Vec3_dtor((undefined1 *)((int)pdVar11 + -0x13c),0xffffffff,pcVar9,ar7);
            object_dtor_delete((undefined1 *)((int)pdVar11 + -300),0xffffffff,pcVar9,ar7);
            *(int *)((int)pdVar11 + -0x248) = ar4;
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x264),
                                        *(undefined4 *)(*(int *)((int)pdVar11 + -0x248) + 0x28));
            }
            else {
              in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x248) + 0x28);
              dVar14 = *(double *)((int)pdVar11 + -0x264);
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar14 + dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(*(int *)((int)pdVar11 + -0x248) + 0x28) = fVar13;
              dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
            }
            else {
              *(undefined8 *)(*(int *)((int)pdVar11 + -0x248) + 0x28) = in_xd0;
              in_xd0 = *(undefined8 *)(ar4 + 0x28);
              dVar14 = *(double *)(ar4 + 0x24);
            }
            if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar14 >> 0x20) < SUB84(dVar14,0)) {
              if (in_FPSCR_SZ == '\0') {
                uVar2 = *(undefined4 *)(ar4 + 0x24);
                dVar14 = (double)CONCAT44(uVar2,SUB84(dVar14,0));
                *(undefined4 *)(ar4 + 0x28) = uVar2;
              }
              else {
                dVar14 = *(double *)(ar4 + 0x24);
                *(double *)(ar4 + 0x28) = dVar14;
              }
            }
            break;
          }
        }
        FUN_8c032ab0(ar4,pcVar5,pcVar9,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x208) = (int)((ulonglong)uVar17 >> 0x20);
        }
        else {
          *(undefined8 *)((int)pdVar11 + -0x208) = uVar17;
        }
        *(int *)((int)pdVar11 + -0x24c) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x208),
                                    *(undefined4 *)(*(int *)((int)pdVar11 + -0x24c) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x24c) + 0x28);
          dVar14 = *(double *)((int)pdVar11 + -0x208);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)pdVar11 + -0x24c) + 0x28) = fVar13;
          fVar13 = *(float *)(ar4 + 0x28);
        }
        else {
          *(undefined8 *)(*(int *)((int)pdVar11 + -0x24c) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
        }
        dVar14 = (double)(ulonglong)(uint)fVar13;
        if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
          dVar14 = (double)(ulonglong)(uint)fVar13;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(double *)(ar4 + 0x28) = dVar14;
          }
        }
        break;
      case 7:
      case 8:
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)dVar14 & 0xffffffff;
        }
        *(int *)((int)pdVar11 + -0x230) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(0x3d4ccccd,
                                    *(undefined4 *)(*(int *)((int)pdVar11 + -0x230) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x230) + 0x28);
          dVar14 = 5.238690701939511e-11;
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 + dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)pdVar11 + -0x230) + 0x28) = fVar13;
          fVar13 = *(float *)(ar4 + 0x28);
        }
        else {
          *(undefined8 *)(*(int *)((int)pdVar11 + -0x230) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
        }
        dVar14 = (double)CONCAT44(0x3f800000,fVar13);
        if (in_FPSCR_PR == '\0' && 1.0 < fVar13) {
          *(int *)((int)pdVar11 + -0x234) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(0x3dcccccd,
                                      *(undefined4 *)(*(int *)((int)pdVar11 + -0x234) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x234) + 0x28);
            dVar14 = 3.73983522256399e-312;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = (float)((ulonglong)dVar14 >> 0x20);
            dVar14 = (double)CONCAT44(fVar13,SUB84(dVar14,0) - fVar13);
          }
          else {
            dVar14 = dVar14 - dVar14;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(*(int *)((int)pdVar11 + -0x234) + 0x28) = SUB84(dVar14,0);
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar11 + -0x234) + 0x28) = in_xd0;
          }
        }
        CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,pcVar9,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x1c0) = (int)((ulonglong)dVar14 >> 0x20);
        }
        else {
          *(double *)((int)pdVar11 + -0x1c0) = dVar14;
        }
        *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -0xac);
        FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(*(int *)(ar4 + 0xb4) + 4),pcVar9,ar7);
        vec3_copy_8c023d8c((undefined1 *)((int)pdVar11 + -0x24),(undefined1 *)((int)pdVar11 + -0xac)
                           ,pcVar9,ar7);
        uVar2 = 0xffffffff;
        object_dtor_delete((undefined1 *)((int)pdVar11 + -0xac),0xffffffff,pcVar9,ar7);
        CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,pcVar9,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x1c4) = (int)((ulonglong)dVar14 >> 0x20);
        }
        else {
          *(double *)((int)pdVar11 + -0x1c4) = dVar14;
        }
        uVar2 = get_field_1c_026dd8(ar4 + 0xb0,uVar2,pcVar9,ar7);
        *(undefined4 *)((int)pdVar11 + -0x1c8) = uVar2;
        uVar2 = s_Check_This_Motion_Data_0314fc
                          (ar4 + 0xb0,*(undefined4 *)((int)pdVar11 + -0x1c8),pcVar9,ar7);
        *(undefined4 *)((int)pdVar11 + -0x1cc) = uVar2;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x1c4),in_fr3);
        }
        else {
          dVar14 = *(double *)((int)pdVar11 + -0x1c4);
        }
        fVar13 = (float)*(int *)((int)pdVar11 + -0x1cc);
        dVar15 = (double)(ulonglong)(uint)fVar13;
        if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(0x4f800000,fVar13);
          }
          else {
            dVar15 = 2.0000005923211575;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = (float)((ulonglong)dVar15 >> 0x20);
            dVar15 = (double)CONCAT44(fVar13,SUB84(dVar15,0) + fVar13);
          }
          else {
            dVar15 = dVar15 + dVar15;
          }
        }
        if (in_FPSCR_PR == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) / SUB84(dVar15,0),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 / dVar15;
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = 1.0 - (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84((double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),0x3f800000) - dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(0x40000000,fVar13);
        }
        else {
          dVar14 = 6.03177303581879e-312;
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)pdVar11 + -0x14c) = fVar13;
          dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c8),
                                    *(undefined4 *)((int)pdVar11 + -0x24));
        }
        else {
          *(undefined8 *)((int)pdVar11 + -0x14c) = in_xd0;
          in_xd0 = *(undefined8 *)((int)pdVar11 + -0x24);
          dVar14 = *(double *)(ar4 + 0x2c8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c0),fVar13);
        }
        else {
          dVar14 = *(double *)(ar4 + 0x2c0);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x14c),fVar13);
        }
        else {
          dVar14 = *(double *)((int)pdVar11 + -0x14c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)pdVar11 + -0x30) = fVar13;
          dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2cc),
                                    *(undefined4 *)((int)pdVar11 + -0x20));
        }
        else {
          *(undefined8 *)((int)pdVar11 + -0x30) = in_xd0;
          in_xd0 = *(undefined8 *)((int)pdVar11 + -0x20);
          dVar14 = *(double *)(ar4 + 0x2cc);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        ar6_00 = (double *)(ar4 + 0x2c0);
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)ar6_00,fVar13);
        }
        else {
          dVar14 = *ar6_00;
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x14c),fVar13);
        }
        else {
          dVar14 = *(double *)((int)pdVar11 + -0x14c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)pdVar11 + -0x2c) = fVar13;
          dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2d0),
                                    *(undefined4 *)((int)pdVar11 + -0x1c));
        }
        else {
          *(undefined8 *)((int)pdVar11 + -0x2c) = in_xd0;
          in_xd0 = *(undefined8 *)((int)pdVar11 + -0x1c);
          dVar14 = *(double *)(ar4 + 0x2d0);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c0),fVar13);
        }
        else {
          dVar14 = *(double *)(ar4 + 0x2c0);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x14c),fVar13);
        }
        else {
          dVar14 = *(double *)((int)pdVar11 + -0x14c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = (float)((ulonglong)dVar14 >> 0x20);
          dVar14 = (double)CONCAT44(fVar13,SUB84(dVar14,0) * fVar13);
        }
        else {
          dVar14 = dVar14 * dVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x28) = SUB84(dVar14,0);
        }
        else {
          *(undefined8 *)((int)pdVar11 + -0x28) = in_xd0;
        }
        vec3_copy_8c023d8c(ar4 + 0x2c8,(undefined1 *)((int)pdVar11 + -0x24),ar6_00,ar7);
        vec3_copy_8c02b5fc((undefined1 *)((int)pdVar11 + -0xb8),(undefined1 *)((int)pdVar11 + -0x30)
                           ,ar6_00,ar7);
        *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -200);
        FUN_8c023484(ar4 + 0x14,(undefined1 *)((int)pdVar11 + -0xb8),ar6_00,ar7,
                     *(undefined4 *)((int)pdVar11 + -0x26c));
        Vec3_assign(ar4 + 0x14,(undefined1 *)((int)pdVar11 + -200),ar6_00,ar7);
        Vec3_dtor((undefined1 *)((int)pdVar11 + -200),0xffffffff,ar6_00,ar7);
        uVar2 = 0xffffffff;
        object_dtor_delete((undefined1 *)((int)pdVar11 + -0xb8),0xffffffff,ar6_00,ar7);
        Vec3_set_xyz((undefined1 *)((int)pdVar11 + -0xd4),uVar2,ar6_00,ar7);
        *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -0xd4);
        *(undefined1 **)((int)pdVar11 + -0x270) = (undefined1 *)((int)pdVar11 + -0xe4);
        iVar4 = ar4 + 0x14;
        puVar8 = (undefined1 *)((int)pdVar11 + -0x40);
        FUN_8c031eb0(ar4,ar5,puVar8,iVar4,*(undefined4 *)((int)pdVar11 + -0x270));
        Vec3_assign(ar4 + 0x14,(undefined1 *)((int)pdVar11 + -0xe4),puVar8,iVar4);
        puVar8 = (undefined1 *)((int)pdVar11 + -0xe4);
        Vec3_dtor(puVar8,0xffffffff,puVar8,iVar4);
        uVar1 = 0xffffffff;
        ar7 = object_dtor_delete;
        object_dtor_delete((undefined1 *)((int)pdVar11 + -0xd4),0xffffffff,puVar8,object_dtor_delete
                          );
        pcVar9 = (code *)(ar4 + 0x14);
        Vec3_length(pcVar9,uVar1,pcVar9,ar7);
        uVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar1,pcVar9,ar7);
        *(undefined4 *)((int)pdVar11 + -0x1d0) = uVar2;
        if (*(int *)((int)pdVar11 + -0x1d0) == 1) {
          FUN_8c0231c8((undefined1 *)((int)pdVar11 + -0x50),uVar1,pcVar9,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar11 + -0x1d4) = (int)((ulonglong)dVar14 >> 0x20);
          }
          else {
            *(double *)((int)pdVar11 + -0x1d4) = dVar14;
          }
          iVar4 = ar4 + 0x14;
          FUN_8c0231c8(iVar4,uVar1,pcVar9,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar11 + -0x1d8) = (int)((ulonglong)dVar14 >> 0x20);
            uVar17 = CONCAT44(*(undefined4 *)((int)pdVar11 + -0x1d8),SUB84(dVar14,0));
          }
          else {
            *(double *)((int)pdVar11 + -0x1d8) = dVar14;
            uVar17 = *(undefined8 *)((int)pdVar11 + -0x1d8);
          }
          FUN_8c010e38(iVar4,uVar1,pcVar9,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar11 + -0x1dc) = (int)((ulonglong)uVar17 >> 0x20);
          }
          else {
            *(undefined8 *)((int)pdVar11 + -0x1dc) = uVar17;
          }
          uVar2 = 0x228;
          if (in_FPSCR_SZ == '\0') {
            uVar17 = CONCAT44(*(undefined4 *)((int)pdVar11 + -0x1dc),(int)uVar17);
            *(undefined4 *)(ar4 + 0x228) = *(undefined4 *)((int)pdVar11 + -0x1dc);
          }
          else {
            uVar17 = *(undefined8 *)((int)pdVar11 + -0x1dc);
            *(undefined8 *)(ar4 + 0x228) = uVar17;
          }
          *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -0xf4);
          FUN_8c0230f0(ar4 + 0x14,0x228,pcVar9,ar7,*(undefined4 *)((int)pdVar11 + -0x26c));
          *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -0x104);
          FUN_8c0230f0((undefined1 *)((int)pdVar11 + -0x50),uVar2,pcVar9,ar7,
                       *(undefined4 *)((int)pdVar11 + -0x26c));
          ar7 = (code *)((int)pdVar11 + -0xf4);
          pcVar9 = FUN_8c022dac;
          FUN_8c022dac(ar7,(undefined1 *)((int)pdVar11 + -0x104),FUN_8c022dac,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar11 + -0x1e0) = (int)((ulonglong)uVar17 >> 0x20);
            dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x1e0),(int)uVar17);
            *(undefined4 *)(ar4 + 0x224) = *(undefined4 *)((int)pdVar11 + -0x1e0);
          }
          else {
            *(undefined8 *)((int)pdVar11 + -0x1e0) = uVar17;
            dVar14 = *(double *)((int)pdVar11 + -0x1e0);
            *(double *)(ar4 + 0x224) = dVar14;
          }
          Vec3_dtor((undefined1 *)((int)pdVar11 + -0x104),0xffffffff,pcVar9,ar7);
          Vec3_dtor((undefined1 *)((int)pdVar11 + -0xf4),0xffffffff,pcVar9,ar7);
          *(undefined4 *)(ar4 + 0x290) = 0;
          *(undefined4 *)(ar4 + 0x40) = 5;
          *(undefined4 *)(ar4 + 0x2b8) = 2;
        }
        break;
      case 10:
        CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar5,pcVar9,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x1e4) = (int)((ulonglong)dVar14 >> 0x20);
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                     *(undefined4 *)((int)pdVar11 + -0x1e4));
        }
        else {
          *(double *)((int)pdVar11 + -0x1e4) = dVar14;
        }
        if (in_FPSCR_PR != '\0' || SUB84(in_dr14,0) <= (float)((ulonglong)in_dr14 >> 0x20)) {
LAB_8c04aa78:
          *(int *)((int)pdVar11 + -0x23c) = ar4;
          ar7 = (code *)(*(int *)((int)pdVar11 + -0x23c) + 0x28);
          pcVar9 = *(code **)((int)pdVar11 + -0x23c);
          pcVar5 = pcVar9 + 0x28;
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(0x3c23d70a,*(float *)pcVar5);
          }
          else {
            in_xd0 = *(undefined8 *)pcVar5;
            dVar14 = 3.73969762439725e-312;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
          }
          else {
            fVar13 = SUB84(dVar14 - dVar14,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)ar7 = fVar13;
            fVar13 = *(float *)(ar4 + 0x28);
          }
          else {
            *(undefined8 *)ar7 = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
          }
          dVar14 = (double)(ulonglong)(uint)fVar13;
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            dVar14 = (double)(ulonglong)(uint)fVar13;
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x28) = 0;
            }
            else {
              *(double *)(ar4 + 0x28) = dVar14;
            }
          }
        }
        else {
          if (in_FPSCR_PR == '\0') {
            bVar20 = SUB84(in_dr14,0) < SUB84(in_dr12,0);
          }
          else {
            bVar20 = in_dr14 < in_dr12;
          }
          if (!bVar20) goto LAB_8c04aa78;
          *(int *)((int)pdVar11 + -0x238) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(0x40000000,
                                      *(undefined4 *)(*(int *)((int)pdVar11 + -0x238) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x238) + 0x28);
            dVar14 = 6.6797933913687535e+115;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
          }
          else {
            fVar13 = SUB84(dVar14 + dVar14,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)pdVar11 + -0x238) + 0x28) = fVar13;
            dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar11 + -0x238) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            dVar14 = *(double *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar14 >> 0x20) < SUB84(dVar14,0)) {
            if (in_FPSCR_SZ == '\0') {
              uVar2 = *(undefined4 *)(ar4 + 0x24);
              dVar14 = (double)CONCAT44(uVar2,SUB84(dVar14,0));
              *(undefined4 *)(ar4 + 0x28) = uVar2;
            }
            else {
              dVar14 = *(double *)(ar4 + 0x24);
              *(double *)(ar4 + 0x28) = dVar14;
            }
          }
        }
        uVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar5,pcVar9,ar7);
        *(undefined4 *)((int)pdVar11 + -0x1e8) = uVar2;
        if (*(int *)((int)pdVar11 + -0x1e8) == 1) {
          *(undefined4 *)(ar4 + 0x2b8) = 2;
          *(undefined4 *)(ar4 + 0x40) = 5;
        }
      }
    }
    else {
switchD_8c04a56e_caseD_2:
      *(undefined4 *)(ar4 + 0x2b8) = 3;
      uVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar5,pcVar9,ar7);
      *(undefined4 *)((int)pdVar11 + -0x20c) = uVar2;
      if (*(int *)((int)pdVar11 + -0x20c) == 1) {
        *(undefined4 *)(ar4 + 0x2b8) = 2;
      }
    }
    FUN_8c022fc0(ar5,ar6,pcVar9,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar11 + -0x210) = (int)((ulonglong)dVar14 >> 0x20);
      dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(ar4 + 0x28));
    }
    else {
      *(double *)((int)pdVar11 + -0x210) = dVar14;
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar14 = *(double *)(ar4 + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fVar13 = SUB84(dVar14 + dVar14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar16 = CONCAT44(*(undefined4 *)((int)pdVar11 + -0x210),fVar13);
    }
    else {
      uVar16 = *(ulonglong *)((int)pdVar11 + -0x210);
    }
    if (in_FPSCR_PR != '\0' || (float)(uVar16 >> 0x20) <= (float)uVar16) {
      *(undefined4 *)(ar4 + 0x40) = 4;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
        dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = uVar16 & 0xffffffff;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar14 = *(double *)(ar4 + 0x38);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) / (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 / dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x3c) = fVar13;
      }
      else {
        *(undefined8 *)(ar4 + 0x3c) = in_xd0;
      }
      *(undefined4 *)(ar4 + 0x40) = 4;
    }
    break;
  case 4:
    pcVar9 = CAnimBody_GetCurFrame;
    CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar5,CAnimBody_GetCurFrame,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar11 + -0x214) = (int)((ulonglong)dVar14 >> 0x20);
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)pdVar11 + -0x214));
    }
    else {
      *(double *)((int)pdVar11 + -0x214) = dVar14;
    }
    uVar2 = get_field_1c_026dd8(ar4 + 0xb0,pcVar5,pcVar9,ar7);
    fVar13 = SUB84(dVar14,0);
    *(undefined4 *)((int)pdVar11 + -0x218) = uVar2;
    fVar19 = (float)((ulonglong)in_dr14 >> 0x20);
    fVar18 = SUB84(in_dr14,0);
    if (*(int *)((int)pdVar11 + -0x218) == 5) {
      if (in_FPSCR_PR == '\0' && fVar19 < fVar18) {
        if (in_FPSCR_PR == '\0') {
          bVar20 = fVar18 < SUB84(in_dr12,0);
        }
        else {
          bVar20 = in_dr14 < in_dr12;
        }
        if (bVar20) {
          *(int *)((int)pdVar11 + -0x250) = ar4;
          pcVar5 = (code *)(*(int *)((int)pdVar11 + -0x250) + 0x28);
          if (in_FPSCR_SZ == '\0') {
            fVar13 = *(float *)pcVar5;
          }
          else {
            in_xd0 = *(undefined8 *)pcVar5;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = fVar13 + 1.0;
          }
          else {
            fVar13 = SUB84((double)CONCAT44(0x3f800000,fVar13) + (double)CONCAT44(0x3f800000,fVar13)
                           ,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)pdVar11 + -0x250) + 0x28) = fVar13;
            uVar17 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar11 + -0x250) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            uVar17 = *(undefined8 *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar17 >> 0x20) < (float)uVar17) {
            pcVar5 = (code *)(ar4 + 0x24);
            if (in_FPSCR_SZ == '\0') {
              *(float *)(ar4 + 0x28) = *(float *)pcVar5;
            }
            else {
              *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)pcVar5;
            }
          }
        }
      }
    }
    else if ((*(int *)((int)pdVar11 + -0x218) == 6) && (in_FPSCR_PR == '\0' && fVar19 < fVar18)) {
      if (in_FPSCR_PR == '\0') {
        bVar20 = fVar18 < SUB84(in_dr12,0);
      }
      else {
        bVar20 = in_dr14 < in_dr12;
      }
      if (bVar20) {
        *(int *)((int)pdVar11 + -0x254) = ar4;
        if (in_FPSCR_SZ == '\0') {
          fVar13 = *(float *)(*(int *)((int)pdVar11 + -0x254) + 0x28);
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x254) + 0x28);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = fVar13 + 1.0;
        }
        else {
          fVar13 = SUB84((double)CONCAT44(0x3f800000,fVar13) + (double)CONCAT44(0x3f800000,fVar13),0
                        );
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)pdVar11 + -0x254) + 0x28) = fVar13;
          uVar17 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(*(int *)((int)pdVar11 + -0x254) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          uVar17 = *(undefined8 *)(ar4 + 0x24);
        }
        pcVar5 = (code *)(ar4 + 0x24);
        if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar17 >> 0x20) < (float)uVar17) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
          }
        }
      }
    }
    *(int *)((int)pdVar11 + -600) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x3c),
                                *(undefined4 *)(*(int *)((int)pdVar11 + -600) + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -600) + 0x28);
      dVar14 = *(double *)(ar4 + 0x3c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fVar13 = SUB84(dVar14 - dVar14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)pdVar11 + -600) + 0x28) = fVar13;
      fVar13 = *(float *)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)(*(int *)((int)pdVar11 + -600) + 0x28) = in_xd0;
    }
    if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar13;
      }
    }
    ar7 = (code *)0xb0;
    uVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar5,ar4 + 0xb0,0xb0);
    *(undefined4 *)((int)pdVar11 + -0x21c) = uVar2;
    if (*(int *)((int)pdVar11 + -0x21c) == 1) {
      FUN_8c02a1fc(ar4 + 0x2c8,uVar2,FUN_8c02a1fc,ar7);
      uVar10 = 0;
      *(undefined4 *)(ar4 + 0x2b8) = 2;
      ar7 = (code *)(ar4 + 0x2c);
      if (in_FPSCR_SZ == '\0') {
        *(float *)ar7 = 0.0;
      }
      else {
        *(ulonglong *)ar7 = (ulonglong)(uint)fVar13;
      }
    }
  }
override_jmp_8c049e5a_case_2:
  Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar4 + 0x14,ar7);
  FUN_8c051a68(ar4,(undefined1 *)((int)pdVar11 + -0x40),ar5,ar7);
  *(undefined4 *)((int)pdVar11 + -0x154) = uVar10;
  Vec3_dtor((undefined1 *)((int)pdVar11 + -0x60),0xffffffff,ar5,ar7);
  Vec3_dtor((undefined1 *)((int)pdVar11 + -0x50),0xffffffff,ar5,ar7);
  Vec3_dtor((undefined1 *)((int)pdVar11 + -0x40),0xffffffff,ar5,ar7);
  object_dtor_delete((undefined1 *)((int)pdVar11 + -0x30),0xffffffff,ar5,ar7);
  object_dtor_delete((undefined1 *)((int)pdVar11 + -0x24),0xffffffff,ar5,ar7);
  return *(undefined4 *)((int)pdVar11 + -0x154);
}



/* FUN_8c04b168 @ 8c04b168 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c04bcc4) */
/* WARNING: Removing unreachable block (ram,0x8c04bea2) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c04b168(int ar4,undefined8 *ar5,code *ar6,code *ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *ar4_00;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *ar5_00;
  undefined1 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 ar7_00;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 uVar9;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  double *pdVar10;
  uint uVar11;
  float fVar12;
  undefined8 in_dr0;
  double dVar13;
  ulonglong uVar14;
  float fVar16;
  undefined8 uVar15;
  undefined4 in_fr3;
  undefined8 in_dr6;
  double in_dr12;
  double in_dr14;
  double dVar17;
  undefined8 in_xd0;
  undefined8 in_xd6;
  undefined8 in_xd14;
  bool bVar18;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [16];
  double dStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    pdVar10 = &dStack_10;
    dStack_10 = (double)CONCAT44(SUB84(in_dr12,0),(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    pdVar10 = (double *)auStack_20;
    uStack_8 = in_xd14;
    dStack_10 = in_dr14;
  }
  *(undefined4 *)((int)pdVar10 + -4) = unaff_r14;
  *(undefined4 *)((int)pdVar10 + -8) = unaff_r13;
  *(undefined4 *)((int)pdVar10 + -0xc) = unaff_r12;
  *(undefined4 *)((int)pdVar10 + -0x10) = unaff_r11;
  *(undefined4 *)((int)pdVar10 + -0x14) = unaff_r10;
  *(undefined4 *)((int)pdVar10 + -0x18) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar10 + -0x228) = (int)((ulonglong)in_dr6 >> 0x20);
    *(int *)((int)pdVar10 + -0x224) = (int)in_dr6;
  }
  else {
    *(undefined8 *)((int)pdVar10 + -0x228) = in_dr6;
    *(undefined8 *)((int)pdVar10 + -0x224) = in_xd6;
  }
  uVar9 = 1;
  pcVar7 = ar6;
  Vec3_ctor_zero((undefined1 *)((int)pdVar10 + -0x28),ar5,ar6,ar7);
  Vec3_ctor_copy((undefined1 *)((int)pdVar10 + -0x38),ar6,pcVar7,ar7);
  FUN_8c022fc0(ar5,(undefined1 *)((int)pdVar10 + -0x38),pcVar7,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar10 + -0x160) = (int)((ulonglong)in_dr0 >> 0x20);
    dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -0x160),(int)in_dr0);
    *(undefined4 *)((int)pdVar10 + -0x134) = *(undefined4 *)((int)pdVar10 + -0x160);
  }
  else {
    *(undefined8 *)((int)pdVar10 + -0x160) = in_dr0;
    dVar13 = *(double *)((int)pdVar10 + -0x160);
    *(double *)((int)pdVar10 + -0x134) = dVar13;
  }
  *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0x80);
  puVar3 = ar5;
  Vec3_sub((undefined1 *)((int)pdVar10 + -0x38),ar5,pcVar7,ar7,
           *(undefined4 *)((int)pdVar10 + -0x22c));
  *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0x90);
  Vec3_normalize((undefined1 *)((int)pdVar10 + -0x80),puVar3,pcVar7,ar7);
  Vec3_ctor_copy((undefined1 *)((int)pdVar10 + -0x48),(undefined1 *)((int)pdVar10 + -0x90),pcVar7,
                 ar7);
  Vec3_dtor((undefined1 *)((int)pdVar10 + -0x90),0xffffffff,pcVar7,ar7);
  Vec3_dtor((undefined1 *)((int)pdVar10 + -0x80),0xffffffff,pcVar7,ar7);
  puVar3 = ar5;
  Vec3_ctor_copy((undefined1 *)((int)pdVar10 + -0x58),ar5,pcVar7,ar7);
  Vec3_set_zero((undefined1 *)((int)pdVar10 + -100),puVar3,pcVar7,ar7);
  Vec3_set_zero((undefined1 *)((int)pdVar10 + -0x70),puVar3,pcVar7,ar7);
  if (*(int *)(ar4 + 0x128) == 3) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44(0x40800000,SUB84(in_dr14,0));
      *(undefined4 *)((int)pdVar10 + -0x138) = 0x41c80000;
      *(undefined4 *)((int)pdVar10 + -0x13c) = 0x42040000;
      *(undefined4 *)((int)pdVar10 + -0x140) = 0x41200000;
      *(undefined4 *)((int)pdVar10 + -0x144) = 0x429e0000;
      in_dr12 = 16777220.078125;
      *(undefined4 *)((int)pdVar10 + -0x150) = 0x41c80000;
      *(undefined4 *)((int)pdVar10 + -0x148) = 0x41f00000;
      *(undefined4 *)((int)pdVar10 + -0x14c) = 0x42200000;
      dVar13 = (double)CONCAT44(0x41700000,SUB84(dVar13,0));
      *(undefined4 *)((int)pdVar10 + -0x154) = 0x41700000;
    }
    else {
      in_dr14 = 2097152.50390625;
      *(undefined8 *)((int)pdVar10 + -0x138) = 0xf041c80000;
      *(undefined8 *)((int)pdVar10 + -0x13c) = 0xec42040000;
      *(undefined8 *)((int)pdVar10 + -0x140) = 0xe841200000;
      *(undefined8 *)((int)pdVar10 + -0x144) = 0xe4429e0000;
      in_dr12 = 4.58893505299949e-312;
      *(undefined8 *)((int)pdVar10 + -0x150) = 0xf041c80000;
      *(undefined8 *)((int)pdVar10 + -0x148) = 0xe041f00000;
      *(undefined8 *)((int)pdVar10 + -0x14c) = 0xdc42200000;
      dVar13 = 4.58893505299949e-312;
      *(undefined8 *)((int)pdVar10 + -0x154) = 0xd841700000;
    }
  }
  else if (*(int *)(ar4 + 0x128) == 4) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44(0x41700000,SUB84(in_dr14,0));
      *(undefined4 *)((int)pdVar10 + -0x138) = 0x420c0000;
      *(undefined4 *)((int)pdVar10 + -0x13c) = 0x42280000;
      *(undefined4 *)((int)pdVar10 + -0x140) = 0x41200000;
      *(undefined4 *)((int)pdVar10 + -0x144) = 0x429e0000;
      in_dr12 = 8388610.052734375;
      *(undefined4 *)((int)pdVar10 + -0x150) = 0x41c80000;
      *(undefined4 *)((int)pdVar10 + -0x148) = 0x420c0000;
      *(undefined4 *)((int)pdVar10 + -0x14c) = 0x42280000;
      dVar13 = (double)CONCAT44(0x41700000,SUB84(dVar13,0));
      *(undefined4 *)((int)pdVar10 + -0x154) = 0x41700000;
    }
    else {
      in_dr14 = 268435521.4375;
      *(undefined8 *)((int)pdVar10 + -0x138) = 0xf0420c0000;
      *(undefined8 *)((int)pdVar10 + -0x13c) = 0xec42280000;
      *(undefined8 *)((int)pdVar10 + -0x140) = 0xe841200000;
      *(undefined8 *)((int)pdVar10 + -0x144) = 0xe4429e0000;
      in_dr12 = 805306498.75;
      *(undefined8 *)((int)pdVar10 + -0x150) = 0xd841c80000;
      *(undefined8 *)((int)pdVar10 + -0x148) = 0xf0420c0000;
      *(undefined8 *)((int)pdVar10 + -0x14c) = 0xec42280000;
      dVar13 = 268435521.4375;
      *(undefined8 *)((int)pdVar10 + -0x154) = 0x41b0000041700000;
    }
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if ((5 < iVar1) || (iVar1 < 0)) goto switchD_8c04b39c_caseD_2;
                    /* WARNING: Switch is manually overridden */
  switch(iVar1) {
  case 0:
    uVar5 = FUN_8c05c28c(ar4,iVar1 * 4,pcVar7,ar7);
    *(undefined4 *)((int)pdVar10 + -0x164) = uVar5;
    if (*(int *)((int)pdVar10 + -0x164) != 0) {
      *(undefined4 *)((int)pdVar10 + -0x158) = 1;
      object_dtor_delete((undefined1 *)((int)pdVar10 + -0x70),0xffffffff,pcVar7,ar7);
      object_dtor_delete((undefined1 *)((int)pdVar10 + -100),0xffffffff,pcVar7,ar7);
      Vec3_dtor((undefined1 *)((int)pdVar10 + -0x58),0xffffffff,pcVar7,ar7);
      Vec3_dtor((undefined1 *)((int)pdVar10 + -0x48),0xffffffff,pcVar7,ar7);
      Vec3_dtor((undefined1 *)((int)pdVar10 + -0x38),0xffffffff,pcVar7,ar7);
      Vec3_dtor((undefined1 *)((int)pdVar10 + -0x28),0xffffffff,pcVar7,ar7);
      return *(undefined4 *)((int)pdVar10 + -0x158);
    }
    if (*(int *)(ar4 + 0x1b8) == 1) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x18c) = *(undefined4 *)ar5;
        *(undefined4 *)(ar4 + 400) = *(undefined4 *)((int)ar5 + 4);
        *(undefined4 *)(ar4 + 0x194) = *(undefined4 *)(ar5 + 1);
        *(undefined4 *)(ar4 + 0x198) = *(undefined4 *)((int)pdVar10 + -0x38);
        *(undefined4 *)(ar4 + 0x19c) = *(undefined4 *)((int)pdVar10 + -0x34);
        dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -0x30),SUB84(dVar13,0));
        *(undefined4 *)(ar4 + 0x1a0) = *(undefined4 *)((int)pdVar10 + -0x30);
      }
      else {
        *(undefined8 *)(ar4 + 0x18c) = *ar5;
        *(undefined8 *)(ar4 + 400) = *(undefined8 *)((int)ar5 + 4);
        *(undefined8 *)(ar4 + 0x194) = ar5[1];
        *(undefined8 *)(ar4 + 0x198) = *(undefined8 *)((int)pdVar10 + -0x38);
        *(undefined8 *)(ar4 + 0x19c) = *(undefined8 *)((int)pdVar10 + -0x34);
        dVar13 = *(double *)((int)pdVar10 + -0x30);
        *(double *)(ar4 + 0x1a0) = dVar13;
      }
    }
    uVar11 = SUB84(dVar13,0);
    FUN_8c03c314(ar4,FUN_8c03c314,pcVar7,ar7);
    uVar14 = (ulonglong)uVar11;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0xa0) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0xa0) = uVar14;
    }
    *(undefined4 *)((int)pdVar10 + -0x1fc) = *(undefined4 *)(ar4 + 0x128);
    FUN_8c031b68(ar4,(*(int *)((int)pdVar10 + -0x1fc) * 2 + *(int *)((int)pdVar10 + -0x1fc)) * 8 +
                     -0x73d7fc0c,pcVar7,ar7);
    uVar11 = (uint)uVar14;
    puVar6 = (undefined1 *)((int)pdVar10 + -0x38);
    puVar3 = ar5;
    FUN_8c031bb4(ar4,ar5,puVar6,ar7);
    uVar14 = (ulonglong)uVar11;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = uVar14;
    }
    FUN_8c0231c8((undefined1 *)((int)pdVar10 + -0x48),puVar3,puVar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar10 + -0x168) = (int)(uVar14 >> 0x20);
    }
    else {
      *(ulonglong *)((int)pdVar10 + -0x168) = uVar14;
    }
    iVar1 = ar4 + 0x14;
    FUN_8c0231c8(iVar1,puVar3,puVar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar10 + -0x16c) = (int)(uVar14 >> 0x20);
      uVar15 = CONCAT44(*(undefined4 *)((int)pdVar10 + -0x16c),(int)uVar14);
    }
    else {
      *(ulonglong *)((int)pdVar10 + -0x16c) = uVar14;
      uVar15 = *(undefined8 *)((int)pdVar10 + -0x16c);
    }
    FUN_8c010e38(iVar1,puVar3,puVar6,ar7,*(undefined4 *)((int)pdVar10 + -0x228));
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar10 + -0x170) = (int)((ulonglong)uVar15 >> 0x20);
    }
    else {
      *(undefined8 *)((int)pdVar10 + -0x170) = uVar15;
    }
    uVar5 = 0x228;
    if (in_FPSCR_SZ == '\0') {
      uVar4 = *(undefined4 *)((int)pdVar10 + -0x170);
      uVar15 = CONCAT44(uVar4,(int)uVar15);
      *(undefined4 *)(ar4 + 0x228) = uVar4;
    }
    else {
      uVar15 = *(undefined8 *)((int)pdVar10 + -0x170);
      *(undefined8 *)(ar4 + 0x228) = uVar15;
    }
    *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0xa0);
    FUN_8c0230f0(ar4 + 0x14,0x228,puVar6,ar7,*(undefined4 *)((int)pdVar10 + -0x22c));
    *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0xb0);
    FUN_8c0230f0((undefined1 *)((int)pdVar10 + -0x48),uVar5,puVar6,ar7,
                 *(undefined4 *)((int)pdVar10 + -0x22c));
    FUN_8c022dac((undefined1 *)((int)pdVar10 + -0xa0),(undefined1 *)((int)pdVar10 + -0xb0),puVar6,
                 ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar10 + -0x174) = (int)((ulonglong)uVar15 >> 0x20);
      uVar15 = CONCAT44(*(undefined4 *)((int)pdVar10 + -0x174),(int)uVar15);
      *(undefined4 *)(ar4 + 0x224) = *(undefined4 *)((int)pdVar10 + -0x174);
    }
    else {
      *(undefined8 *)((int)pdVar10 + -0x174) = uVar15;
      uVar15 = *(undefined8 *)((int)pdVar10 + -0x174);
      *(undefined8 *)(ar4 + 0x224) = uVar15;
    }
    uVar5 = (undefined4)uVar15;
    pcVar7 = Vec3_dtor;
    Vec3_dtor((undefined1 *)((int)pdVar10 + -0xb0),0xffffffff,Vec3_dtor,ar7);
    Vec3_dtor((undefined1 *)((int)pdVar10 + -0xa0),0xffffffff,pcVar7,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x278) = 0x3f800000;
      uVar15 = CONCAT44(*(undefined4 *)(ar4 + 0x220),*(undefined4 *)(ar4 + 0x24));
    }
    else {
      *(undefined8 *)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar5);
      in_xd0 = *(undefined8 *)(ar4 + 0x24);
      uVar15 = *(undefined8 *)(ar4 + 0x220);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar15 < (float)((ulonglong)uVar15 >> 0x20)) {
      ar7 = (code *)0x0;
      pcVar7 = (code *)0xffffffff;
      uVar4 = 6;
      ar4_00 = (undefined *)(ar4 + 0xb0);
      uVar5 = s_CAnimBody_SetAnimation_033a94(ar4_00,6,0xffffffff,0);
      *(undefined4 *)((int)pdVar10 + -0x178) = uVar5;
      if (*(int *)((int)pdVar10 + -0x178) != 6) {
        ar4_00 = (undefined *)(ar4 + 0xb0);
        s_CAnimBody_SetFrame_033e6e(ar4_00,uVar4,pcVar7,ar7);
      }
    }
    else {
      ar7 = (code *)0x0;
      pcVar7 = (code *)0xffffffff;
      uVar4 = 10;
      ar4_00 = (undefined *)(ar4 + 0xb0);
      s_CAnimBody_SetAnimation_033a94(ar4_00,10,0xffffffff,0);
    }
    if (in_FPSCR_SZ == '\0') {
      fVar12 = *(float *)(ar4 + 0x224);
      fVar16 = 45.0;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x224);
      fVar12 = 45.0;
      fVar16 = 6.72623e-43;
    }
    if (in_FPSCR_PR == '\0' && fVar16 < fVar12) {
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar13 = *(double *)(ar4 + 0x38);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar13 / dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x3c) = fVar12;
      }
      else {
        *(undefined8 *)(ar4 + 0x3c) = in_xd0;
      }
      uVar5 = FUN_8c023334(ar4 + 0x14,(undefined1 *)((int)pdVar10 + -0x48),pcVar7,ar7);
      *(undefined4 *)((int)pdVar10 + -0x17c) = uVar5;
      *(undefined4 *)(ar4 + 0x27c) = *(undefined4 *)((int)pdVar10 + -0x17c);
      if (*(int *)(ar4 + 0x27c) == 3) {
        ar7_00 = 0;
        uVar8 = 0xffffffff;
        uVar4 = 7;
        uVar5 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0);
        *(undefined4 *)((int)pdVar10 + -0x180) = uVar5;
        iVar1 = *(int *)((int)pdVar10 + -0x180);
        uVar5 = FUN_8c026db0(ar4,uVar4,uVar8,ar7_00);
        *(undefined4 *)((int)pdVar10 + -0x184) = uVar5;
        uVar4 = *(undefined4 *)((int)pdVar10 + -0x184);
        uVar5 = FUN_8c03c0f0(ar4 + 0xb0,uVar4,uVar8,ar7_00);
        *(undefined4 *)((int)pdVar10 + -0x188) = uVar5;
        uVar5 = deref_u32(*(undefined4 *)((int)pdVar10 + -0x188),uVar4,uVar8,ar7_00);
        *(undefined4 *)((int)pdVar10 + -0x18c) = uVar5;
        ar7 = (code *)(ar4 + 0xb4);
        pcVar7 = *(code **)((int)pdVar10 + -0x18c);
        uVar4 = *(undefined4 *)(pcVar7 + 4);
        *(undefined4 *)ar7 = *(undefined4 *)pcVar7;
        *(undefined4 *)(ar4 + 0xb8) = uVar4;
        ar4_00 = *(undefined **)(pcVar7 + 8);
        *(undefined **)(ar4 + 0xbc) = ar4_00;
        if (*(int *)(ar4 + 0x128) == 3) {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c135fdc;
        }
        else {
          ar4_00 = &DAT_8c1362c4;
          *(undefined **)(ar4 + 0xb4) = &DAT_8c1362c4;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c0) = *(undefined4 *)(ar4 + 0x224);
        }
        else {
          *(undefined8 *)(ar4 + 0x2c0) = *(undefined8 *)(ar4 + 0x224);
        }
      }
      else {
        ar7 = (code *)0x0;
        pcVar7 = (code *)0xffffffff;
        uVar4 = 8;
        uVar5 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
        *(undefined4 *)((int)pdVar10 + -400) = uVar5;
        iVar1 = *(int *)((int)pdVar10 + -400);
        uVar5 = FUN_8c026db0(ar4,uVar4,pcVar7,ar7);
        *(undefined4 *)((int)pdVar10 + -0x194) = uVar5;
        uVar4 = *(undefined4 *)((int)pdVar10 + -0x194);
        uVar5 = FUN_8c03c0f0(ar4 + 0xb0,uVar4,pcVar7,ar7);
        *(undefined4 *)((int)pdVar10 + -0x198) = uVar5;
        uVar5 = deref_u32(*(undefined4 *)((int)pdVar10 + -0x198),uVar4,pcVar7,ar7);
        *(undefined4 *)((int)pdVar10 + -0x19c) = uVar5;
        puVar2 = *(undefined4 **)((int)pdVar10 + -0x19c);
        uVar4 = puVar2[1];
        *(undefined4 *)(ar4 + 0xb4) = *puVar2;
        *(undefined4 *)(ar4 + 0xb8) = uVar4;
        ar4_00 = (undefined *)puVar2[2];
        *(undefined **)(ar4 + 0xbc) = ar4_00;
        if (*(int *)(ar4 + 0x128) == 3) {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c135ff4;
        }
        else {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c1362dc;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c0) = *(undefined4 *)(ar4 + 0x224);
        }
        else {
          *(undefined8 *)(ar4 + 0x2c0) = *(undefined8 *)(ar4 + 0x224);
        }
      }
      if (iVar1 != 6) {
        ar4_00 = (undefined *)(ar4 + 0xb0);
        s_CAnimBody_SetFrame_033e6e(ar4_00,uVar4,pcVar7,ar7);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x278) = 0x3f333333;
      }
      else {
        *(undefined8 *)(ar4 + 0x278) = 0x2b83f333333;
      }
    }
    *(undefined4 *)(ar4 + 0x2b8) = 3;
    *(undefined4 *)(ar4 + 0x40) = 1;
    uVar5 = rand(ar4_00,uVar4,pcVar7,ar7);
    *(undefined4 *)((int)pdVar10 + -0x1a0) = uVar5;
    uVar4 = 3;
    uVar5 = libgcc_divide_helper_01031c(*(undefined4 *)((int)pdVar10 + -0x1a0),3,pcVar7,ar7);
    *(undefined4 *)((int)pdVar10 + -0x200) = uVar5;
    *(int *)(ar4 + 0x280) = *(int *)((int)pdVar10 + -0x200) + 1;
    FUN_8c02a1fc(ar4 + 0x2c8,uVar4,pcVar7,ar7);
    break;
  case 1:
    *(undefined4 *)(ar4 + 0x40) = 3;
    *(undefined4 *)(ar4 + 0x290) = 0;
  case 3:
    uVar5 = get_field_1c_026dd8(ar4 + 0xb0,iVar1 * 4,pcVar7,ar7);
    uVar4 = (undefined4)((ulonglong)in_dr14 >> 0x20);
    *(undefined4 *)((int)pdVar10 + -0x1a4) = uVar5;
    iVar1 = *(int *)((int)pdVar10 + -0x1a4);
    if (iVar1 == 5) {
      uVar5 = get_field_1c_026dd8(ar4 + 0xb0,uVar5,pcVar7,ar7);
      uVar11 = SUB84(dVar13,0);
      *(undefined4 *)((int)pdVar10 + -0x1c0) = uVar5;
      uVar5 = s_Check_This_Motion_Data_0314fc
                        (ar4 + 0xb0,*(undefined4 *)((int)pdVar10 + -0x1c0),pcVar7,ar7);
      *(undefined4 *)((int)pdVar10 + -0x1c4) = uVar5;
      fVar12 = (float)*(int *)((int)pdVar10 + -0x1c4);
      dVar17 = (double)CONCAT44(uVar4,fVar12);
      dVar13 = (double)(ulonglong)uVar11;
      if (in_FPSCR_PR == '\0') {
        bVar18 = fVar12 < 0.0;
      }
      else {
        bVar18 = dVar17 < dVar13;
      }
      if (bVar18) {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(0x4f800000,uVar11);
        }
        else {
          dVar13 = 1.16351267261062e-311;
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44(uVar4,fVar12 + (float)((ulonglong)dVar13 >> 0x20));
        }
        else {
          dVar17 = dVar17 + dVar13;
        }
      }
      Vec3_set_xyz((undefined1 *)((int)pdVar10 + -0x104),0x228,pcVar7,ar7);
      *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0x104);
      *(undefined1 **)((int)pdVar10 + -0x230) = (undefined1 *)((int)pdVar10 + -0x114);
      iVar1 = ar4 + 0x14;
      puVar6 = (undefined1 *)((int)pdVar10 + -0x38);
      FUN_8c031eb0(ar4,ar5,puVar6,iVar1,*(undefined4 *)((int)pdVar10 + -0x230));
      Vec3_assign(ar4 + 0x14,(undefined1 *)((int)pdVar10 + -0x114),puVar6,iVar1);
      Vec3_dtor((undefined1 *)((int)pdVar10 + -0x114),0xffffffff,puVar6,iVar1);
      pcVar7 = object_dtor_delete;
      object_dtor_delete((undefined1 *)((int)pdVar10 + -0x104),0xffffffff,object_dtor_delete,
                         (undefined1 *)((int)pdVar10 + -0x104));
      ar7 = s_CAnimBody_AdvanceFrame_033ba0;
      pcVar7 = (code *)s_CAnimBody_AdvanceFrame_033ba0
                                 (ar4 + 0xb0,0x278,pcVar7,s_CAnimBody_AdvanceFrame_033ba0);
      *(code **)((int)pdVar10 + -0x1c8) = pcVar7;
      iVar1 = *(int *)((int)pdVar10 + -0x1c8);
      if (iVar1 == 1) {
        *(undefined4 *)(ar4 + 0x2b8) = 2;
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
      CAnimBody_GetCurFrame(ar4 + 0xb0,iVar1,pcVar7,ar7,*(undefined4 *)((int)pdVar10 + -0x228));
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar10 + -0x1cc) = (int)((ulonglong)dVar13 >> 0x20);
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                  *(undefined4 *)((int)pdVar10 + -0x1cc));
      }
      else {
        *(double *)((int)pdVar10 + -0x1cc) = dVar13;
      }
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar17 >> 0x20) < SUB84(dVar17,0)) {
        if (in_FPSCR_PR == '\0') {
          bVar18 = SUB84(dVar17,0) < SUB84(in_dr12,0);
        }
        else {
          bVar18 = dVar17 < in_dr12;
        }
        if (bVar18) {
          *(int *)((int)pdVar10 + -0x208) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(0x3e4ccccd,
                                      *(undefined4 *)(*(int *)((int)pdVar10 + -0x208) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)pdVar10 + -0x208) + 0x28);
            dVar13 = -5.8130718906204204e+255;
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar12 = SUB84(dVar13 + dVar13,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)pdVar10 + -0x208) + 0x28) = fVar12;
            dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar10 + -0x208) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            dVar13 = *(double *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar13 >> 0x20) < SUB84(dVar13,0)) {
            if (in_FPSCR_SZ == '\0') {
              uVar5 = *(undefined4 *)(ar4 + 0x24);
              dVar13 = (double)CONCAT44(uVar5,SUB84(dVar13,0));
              *(undefined4 *)(ar4 + 0x28) = uVar5;
            }
            else {
              dVar13 = *(double *)(ar4 + 0x24);
              *(double *)(ar4 + 0x28) = dVar13;
            }
          }
          goto LAB_8c04c060;
        }
      }
      FUN_8c032ab0(ar4,iVar1,pcVar7,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar10 + -0x1d0) = (int)((ulonglong)dVar13 >> 0x20);
      }
      else {
        *(double *)((int)pdVar10 + -0x1d0) = dVar13;
      }
      *(int *)((int)pdVar10 + -0x20c) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -0x1d0),
                                  *(undefined4 *)(*(int *)((int)pdVar10 + -0x20c) + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)pdVar10 + -0x20c) + 0x28);
        dVar13 = *(double *)((int)pdVar10 + -0x1d0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar13 - dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)pdVar10 + -0x20c) + 0x28) = fVar12;
        fVar12 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(*(int *)((int)pdVar10 + -0x20c) + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
      }
      dVar13 = (double)(ulonglong)(uint)fVar12;
      if (in_FPSCR_PR == '\0' && fVar12 < 0.0) {
        ar7 = (code *)(ar4 + 0x28);
        dVar13 = (double)(ulonglong)(uint)fVar12;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)ar7 = 0;
        }
        else {
          *(double *)ar7 = dVar13;
        }
      }
    }
    else if (iVar1 == 6) {
      uVar8 = 0xb0;
      uVar5 = get_field_1c_026dd8(ar4 + 0xb0,ar4 + 0xb0,0xb0,ar7);
      uVar11 = SUB84(dVar13,0);
      *(undefined4 *)((int)pdVar10 + -0x1d4) = uVar5;
      uVar5 = s_Check_This_Motion_Data_0314fc
                        (ar4 + 0xb0,*(undefined4 *)((int)pdVar10 + -0x1d4),uVar8,ar7);
      *(undefined4 *)((int)pdVar10 + -0x1d8) = uVar5;
      fVar12 = (float)*(int *)((int)pdVar10 + -0x1d8);
      dVar17 = (double)CONCAT44(uVar4,fVar12);
      dVar13 = (double)(ulonglong)uVar11;
      if (in_FPSCR_PR == '\0') {
        bVar18 = fVar12 < 0.0;
      }
      else {
        bVar18 = dVar17 < dVar13;
      }
      if (bVar18) {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(0x4f800000,uVar11);
        }
        else {
          dVar13 = 1.16351267261062e-311;
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44(uVar4,fVar12 + (float)((ulonglong)dVar13 >> 0x20));
        }
        else {
          dVar17 = dVar17 + dVar13;
        }
      }
      Vec3_set_xyz((undefined1 *)((int)pdVar10 + -0x120),*(int *)((int)pdVar10 + -0x1d8),uVar8,ar7);
      *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0x120);
      *(undefined1 **)((int)pdVar10 + -0x230) = (undefined1 *)((int)pdVar10 + -0x130);
      iVar1 = ar4 + 0x14;
      puVar6 = (undefined1 *)((int)pdVar10 + -0x38);
      FUN_8c031eb0(ar4,ar5,puVar6,iVar1,*(undefined4 *)((int)pdVar10 + -0x230));
      Vec3_assign(ar4 + 0x14,(undefined1 *)((int)pdVar10 + -0x130),puVar6,iVar1);
      Vec3_dtor((undefined1 *)((int)pdVar10 + -0x130),0xffffffff,puVar6,iVar1);
      uVar5 = 0xffffffff;
      object_dtor_delete((undefined1 *)((int)pdVar10 + -0x120),0xffffffff,puVar6,iVar1);
      ar7 = (code *)(ar4 + 0xb0);
      pcVar7 = s_CAnimBody_AdvanceFrame_033d90;
      s_CAnimBody_AdvanceFrame_033d90(ar7,uVar5,s_CAnimBody_AdvanceFrame_033d90,ar7);
      uVar5 = 0xb0;
      CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,pcVar7,ar7,*(undefined4 *)((int)pdVar10 + -0x228));
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar10 + -0x1dc) = (int)((ulonglong)dVar13 >> 0x20);
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                  *(undefined4 *)((int)pdVar10 + -0x1dc));
      }
      else {
        *(double *)((int)pdVar10 + -0x1dc) = dVar13;
      }
      if (in_FPSCR_PR == '\0') {
        bVar18 = (float)((ulonglong)in_dr12 >> 0x20) < SUB84(dVar17,0);
      }
      else {
        bVar18 = in_dr12 < dVar17;
      }
      if (bVar18) {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -0x150),SUB84(dVar13,0));
        }
        else {
          dVar13 = *(double *)((int)pdVar10 + -0x150);
        }
        if (in_FPSCR_PR == '\0') {
          bVar18 = SUB84(dVar17,0) < (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          bVar18 = dVar17 < dVar13;
        }
        if (bVar18) {
          *(int *)((int)pdVar10 + -0x210) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(0x3f19999a,
                                      *(undefined4 *)(*(int *)((int)pdVar10 + -0x210) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)pdVar10 + -0x210) + 0x28);
            dVar13 = -5.813068321944503e+255;
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar12 = SUB84(dVar13 + dVar13,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)pdVar10 + -0x210) + 0x28) = fVar12;
            dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar10 + -0x210) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            dVar13 = *(double *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar13 >> 0x20) < SUB84(dVar13,0)) {
            if (in_FPSCR_SZ == '\0') {
              uVar5 = *(undefined4 *)(ar4 + 0x24);
              dVar13 = (double)CONCAT44(uVar5,SUB84(dVar13,0));
              *(undefined4 *)(ar4 + 0x28) = uVar5;
            }
            else {
              dVar13 = *(double *)(ar4 + 0x24);
              *(double *)(ar4 + 0x28) = dVar13;
            }
          }
          goto LAB_8c04c060;
        }
      }
      FUN_8c032ab0(ar4,uVar5,pcVar7,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar10 + -0x1e0) = (int)((ulonglong)dVar13 >> 0x20);
      }
      else {
        *(double *)((int)pdVar10 + -0x1e0) = dVar13;
      }
      *(int *)((int)pdVar10 + -0x214) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -0x1e0),
                                  *(undefined4 *)(*(int *)((int)pdVar10 + -0x214) + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)pdVar10 + -0x214) + 0x28);
        dVar13 = *(double *)((int)pdVar10 + -0x1e0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar13 - dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)pdVar10 + -0x214) + 0x28) = fVar12;
        fVar12 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(*(int *)((int)pdVar10 + -0x214) + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
      }
      dVar13 = (double)(ulonglong)(uint)fVar12;
      if (in_FPSCR_PR == '\0' && fVar12 < 0.0) {
        dVar13 = (double)(ulonglong)(uint)fVar12;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(double *)(ar4 + 0x28) = dVar13;
        }
      }
    }
    else if ((iVar1 == 7) || (iVar1 == 8)) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)dVar13 & 0xffffffff;
      }
      *(int *)((int)pdVar10 + -0x204) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(0x3f666666,*(undefined4 *)(*(int *)((int)pdVar10 + -0x204) + 0x28)
                                 );
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)pdVar10 + -0x204) + 0x28);
        dVar13 = 3.73996784729797e-312;
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = (float)((ulonglong)dVar13 >> 0x20);
        dVar13 = (double)CONCAT44(fVar12,SUB84(dVar13,0) * fVar12);
      }
      else {
        dVar13 = dVar13 * dVar13;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)((int)pdVar10 + -0x204) + 0x28) = SUB84(dVar13,0);
      }
      else {
        *(undefined8 *)(*(int *)((int)pdVar10 + -0x204) + 0x28) = in_xd0;
      }
      CAnimBody_GetCurFrame(ar4 + 0xb0,ar4 + 0xb0,pcVar7,ar7,*(undefined4 *)((int)pdVar10 + -0x228))
      ;
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar10 + -0x1a8) = (int)((ulonglong)dVar13 >> 0x20);
      }
      else {
        *(double *)((int)pdVar10 + -0x1a8) = dVar13;
      }
      *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0xbc);
      FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(*(int *)(ar4 + 0xb4) + 4),pcVar7,ar7);
      vec3_copy_8c023d8c((undefined1 *)((int)pdVar10 + -100),(undefined1 *)((int)pdVar10 + -0xbc),
                         pcVar7,ar7);
      object_dtor_delete((undefined1 *)((int)pdVar10 + -0xbc),0xffffffff,pcVar7,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c8),*(undefined4 *)((int)pdVar10 + -100))
        ;
      }
      else {
        in_xd0 = *(undefined8 *)((int)pdVar10 + -100);
        dVar13 = *(double *)(ar4 + 0x2c8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar13 - dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)pdVar10 + -0x70) = fVar12;
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2cc),*(undefined4 *)((int)pdVar10 + -0x60)
                                 );
      }
      else {
        *(undefined8 *)((int)pdVar10 + -0x70) = in_xd0;
        in_xd0 = *(undefined8 *)((int)pdVar10 + -0x60);
        dVar13 = *(double *)(ar4 + 0x2cc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar13 - dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)pdVar10 + -0x6c) = fVar12;
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2d0),*(undefined4 *)((int)pdVar10 + -0x5c)
                                 );
      }
      else {
        *(undefined8 *)((int)pdVar10 + -0x6c) = in_xd0;
        in_xd0 = *(undefined8 *)((int)pdVar10 + -0x5c);
        dVar13 = *(double *)(ar4 + 0x2d0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = (float)((ulonglong)dVar13 >> 0x20);
        dVar13 = (double)CONCAT44(fVar12,SUB84(dVar13,0) - fVar12);
      }
      else {
        dVar13 = dVar13 - dVar13;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar10 + -0x68) = SUB84(dVar13,0);
      }
      else {
        *(undefined8 *)((int)pdVar10 + -0x68) = in_xd0;
      }
      vec3_copy_8c023d8c(ar4 + 0x2c8,(undefined1 *)((int)pdVar10 + -100),pcVar7,ar7);
      vec3_copy_8c02b5fc((undefined1 *)((int)pdVar10 + -200),(undefined1 *)((int)pdVar10 + -0x70),
                         pcVar7,ar7);
      *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0xd8);
      FUN_8c023484(ar4 + 0x14,(undefined1 *)((int)pdVar10 + -200),pcVar7,ar7,
                   *(undefined4 *)((int)pdVar10 + -0x22c));
      Vec3_assign(ar4 + 0x14,(undefined1 *)((int)pdVar10 + -0xd8),pcVar7,ar7);
      Vec3_dtor((undefined1 *)((int)pdVar10 + -0xd8),0xffffffff,pcVar7,ar7);
      uVar5 = 0xffffffff;
      object_dtor_delete((undefined1 *)((int)pdVar10 + -200),0xffffffff,pcVar7,ar7);
      Vec3_length(ar4 + 0x14,uVar5,pcVar7,ar7);
      uVar4 = 0x278;
      uVar5 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0x278,pcVar7,ar7);
      *(undefined4 *)((int)pdVar10 + -0x1ac) = uVar5;
      if (*(int *)((int)pdVar10 + -0x1ac) == 1) {
        FUN_8c0231c8((undefined1 *)((int)pdVar10 + -0x48),uVar4,pcVar7,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar10 + -0x1b0) = (int)((ulonglong)dVar13 >> 0x20);
        }
        else {
          *(double *)((int)pdVar10 + -0x1b0) = dVar13;
        }
        iVar1 = ar4 + 0x14;
        FUN_8c0231c8(iVar1,uVar4,pcVar7,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar10 + -0x1b4) = (int)((ulonglong)dVar13 >> 0x20);
          uVar15 = CONCAT44(*(undefined4 *)((int)pdVar10 + -0x1b4),SUB84(dVar13,0));
        }
        else {
          *(double *)((int)pdVar10 + -0x1b4) = dVar13;
          uVar15 = *(undefined8 *)((int)pdVar10 + -0x1b4);
        }
        FUN_8c010e38(iVar1,uVar4,pcVar7,ar7,*(undefined4 *)((int)pdVar10 + -0x228));
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar10 + -0x1b8) = (int)((ulonglong)uVar15 >> 0x20);
          uVar15 = CONCAT44(*(undefined4 *)((int)pdVar10 + -0x1b8),(int)uVar15);
          *(undefined4 *)(ar4 + 0x228) = *(undefined4 *)((int)pdVar10 + -0x1b8);
        }
        else {
          *(undefined8 *)((int)pdVar10 + -0x1b8) = uVar15;
          uVar15 = *(undefined8 *)((int)pdVar10 + -0x1b8);
          *(undefined8 *)(ar4 + 0x228) = uVar15;
        }
        *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0xe8);
        FUN_8c0230f0(ar4 + 0x14,uVar4,pcVar7,ar7,*(undefined4 *)((int)pdVar10 + -0x22c));
        *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0xf8);
        FUN_8c0230f0((undefined1 *)((int)pdVar10 + -0x48),uVar4,pcVar7,ar7,
                     *(undefined4 *)((int)pdVar10 + -0x22c));
        FUN_8c022dac((undefined1 *)((int)pdVar10 + -0xe8),(undefined1 *)((int)pdVar10 + -0xf8),
                     pcVar7,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar10 + -0x1bc) = (int)((ulonglong)uVar15 >> 0x20);
          dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -0x1bc),(int)uVar15);
          *(undefined4 *)(ar4 + 0x224) = *(undefined4 *)((int)pdVar10 + -0x1bc);
        }
        else {
          *(undefined8 *)((int)pdVar10 + -0x1bc) = uVar15;
          dVar13 = *(double *)((int)pdVar10 + -0x1bc);
          *(double *)(ar4 + 0x224) = dVar13;
        }
        Vec3_dtor((undefined1 *)((int)pdVar10 + -0xf8),0xffffffff,pcVar7,ar7);
        Vec3_dtor((undefined1 *)((int)pdVar10 + -0xe8),0xffffffff,pcVar7,ar7);
        *(undefined4 *)(ar4 + 0x290) = 0;
        pcVar7 = (code *)0x2b8;
        *(undefined4 *)(ar4 + 0x2b8) = 2;
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
    }
    else {
      *(undefined4 *)(ar4 + 0x2b8) = 3;
      uVar5 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,pcVar7,ar7);
      *(undefined4 *)((int)pdVar10 + -0x1e4) = uVar5;
      if (*(int *)((int)pdVar10 + -0x1e4) == 1) {
        *(undefined4 *)(ar4 + 0x2b8) = 2;
      }
    }
LAB_8c04c060:
    FUN_8c022fc0(ar5,ar6,pcVar7,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar10 + -0x1e8) = (int)((ulonglong)dVar13 >> 0x20);
      dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),in_fr3);
      dVar17 = (double)CONCAT44(0x40400000,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      *(double *)((int)pdVar10 + -0x1e8) = dVar13;
      dVar13 = *(double *)(ar4 + 0x48);
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar17 = 2.0000004786998034;
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = SUB84(dVar17,0) * (float)((ulonglong)dVar17 >> 0x20);
      dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) + fVar12,SUB84(dVar13,0));
    }
    else {
      fVar12 = SUB84(dVar17 * dVar17,0);
      dVar13 = dVar13 + dVar17 * dVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -0x1e8),fVar12);
    }
    else {
      dVar17 = *(double *)((int)pdVar10 + -0x1e8);
    }
    if (in_FPSCR_PR == '\0') {
      bVar18 = (float)((ulonglong)dVar13 >> 0x20) < (float)((ulonglong)dVar17 >> 0x20);
    }
    else {
      bVar18 = dVar13 < dVar17;
    }
    if (!bVar18) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)dVar17 & 0xffffffff;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar13 = *(double *)(ar4 + 0x38);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar13 / dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x3c) = fVar12;
        fVar12 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x3c) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
      }
      uVar14 = (ulonglong)(uint)fVar12;
      if (in_FPSCR_PR == '\0' && 0.0 < fVar12) {
        FUN_8c022fc0(ar5,ar6,pcVar7,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar10 + -0x1ec) = (int)(uVar14 >> 0x20);
          dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),
                                    *(undefined4 *)((int)pdVar10 + -0x1ec));
        }
        else {
          *(ulonglong *)((int)pdVar10 + -0x1ec) = uVar14;
          in_xd0 = *(undefined8 *)((int)pdVar10 + -0x1ec);
          dVar13 = *(double *)(ar4 + 0x28);
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          fVar12 = SUB84(dVar13 / dVar13,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(0x40000000,fVar12);
        }
        else {
          dVar13 = 1.0045666267400928e+178;
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          fVar12 = SUB84(dVar13 * dVar13,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x38) = fVar12;
          dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(ar4 + 0x38) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar13 = *(double *)(ar4 + 0x38);
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          fVar12 = SUB84(dVar13 / dVar13,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x3c) = fVar12;
        }
        else {
          *(undefined8 *)(ar4 + 0x3c) = in_xd0;
        }
      }
      *(undefined4 *)(ar4 + 0x40) = 4;
    }
    break;
  case 4:
    uVar5 = 0xb0;
    CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,pcVar7,ar7,*(undefined4 *)((int)pdVar10 + -0x228));
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar10 + -0x1f0) = (int)((ulonglong)dVar13 >> 0x20);
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)pdVar10 + -0x1f0));
    }
    else {
      *(double *)((int)pdVar10 + -0x1f0) = dVar13;
    }
    uVar5 = get_field_1c_026dd8(ar4 + 0xb0,uVar5,pcVar7,ar7);
    *(undefined4 *)((int)pdVar10 + -500) = uVar5;
    fVar12 = SUB84(in_dr14,0);
    if (*(int *)((int)pdVar10 + -500) == 5) {
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)in_dr14 >> 0x20) < fVar12) {
        if (in_FPSCR_PR == '\0') {
          bVar18 = fVar12 < SUB84(in_dr12,0);
        }
        else {
          bVar18 = in_dr14 < in_dr12;
        }
        if (bVar18) {
          *(int *)((int)pdVar10 + -0x218) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(0x3d4ccccd,
                                      *(undefined4 *)(*(int *)((int)pdVar10 + -0x218) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)pdVar10 + -0x218) + 0x28);
            dVar13 = -3.862675775024149e-255;
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar12 = SUB84(dVar13 + dVar13,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)pdVar10 + -0x218) + 0x28) = fVar12;
            uVar15 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar10 + -0x218) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            uVar15 = *(undefined8 *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar15 >> 0x20) < (float)uVar15) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
            }
          }
        }
      }
    }
    else if (*(int *)((int)pdVar10 + -500) == 6) {
      if (in_FPSCR_PR == '\0') {
        bVar18 = (float)((ulonglong)in_dr12 >> 0x20) < fVar12;
      }
      else {
        bVar18 = in_dr12 < in_dr14;
      }
      if (bVar18) {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -0x150),SUB84(dVar13,0));
        }
        else {
          dVar13 = *(double *)((int)pdVar10 + -0x150);
        }
        if (in_FPSCR_PR == '\0') {
          bVar18 = fVar12 < (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          bVar18 = in_dr14 < dVar13;
        }
        if (bVar18) {
          *(int *)((int)pdVar10 + -0x21c) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(0x3dcccccd,
                                      *(undefined4 *)(*(int *)((int)pdVar10 + -0x21c) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)pdVar10 + -0x21c) + 0x28);
            dVar13 = 1.34161360293656e-311;
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar12 = SUB84(dVar13 + dVar13,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)pdVar10 + -0x21c) + 0x28) = fVar12;
            uVar15 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar10 + -0x21c) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            uVar15 = *(undefined8 *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar15 >> 0x20) < (float)uVar15) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
            }
          }
        }
      }
    }
    *(int *)((int)pdVar10 + -0x220) = ar4;
    ar5_00 = (float *)(*(int *)((int)pdVar10 + -0x220) + 0x28);
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x3c),
                                *(undefined4 *)(*(int *)((int)pdVar10 + -0x220) + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)pdVar10 + -0x220) + 0x28);
      dVar13 = *(double *)(ar4 + 0x3c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar12 = SUB84(dVar13 - dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *ar5_00 = fVar12;
      fVar12 = *(float *)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)ar5_00 = in_xd0;
    }
    if (in_FPSCR_PR == '\0' && fVar12 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar12;
      }
    }
    uVar5 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,pcVar7,ar7);
    *(undefined4 *)((int)pdVar10 + -0x1f8) = uVar5;
    if (*(int *)((int)pdVar10 + -0x1f8) == 1) {
      uVar9 = 0;
      *(undefined4 *)(ar4 + 0x2b8) = 2;
    }
  }
switchD_8c04b39c_caseD_2:
  Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar7,ar7);
  FUN_8c051a68(ar4,(undefined1 *)((int)pdVar10 + -0x38),ar5,ar7);
  *(undefined4 *)((int)pdVar10 + -0x15c) = uVar9;
  object_dtor_delete((undefined1 *)((int)pdVar10 + -0x70),0xffffffff,ar5,ar7);
  object_dtor_delete((undefined1 *)((int)pdVar10 + -100),0xffffffff,ar5,ar7);
  Vec3_dtor((undefined1 *)((int)pdVar10 + -0x58),0xffffffff,ar5,ar7);
  Vec3_dtor((undefined1 *)((int)pdVar10 + -0x48),0xffffffff,ar5,ar7);
  Vec3_dtor((undefined1 *)((int)pdVar10 + -0x38),0xffffffff,ar5,ar7);
  Vec3_dtor((undefined1 *)((int)pdVar10 + -0x28),0xffffffff,ar5,ar7);
  return *(undefined4 *)((int)pdVar10 + -0x15c);
}



/* FUN_8c04c314 @ 8c04c314 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c04c89c) */
/* WARNING: Removing unreachable block (ram,0x8c04c338) */
/* WARNING: Removing unreachable block (ram,0x8c04c31a) */
/* WARNING: Removing unreachable block (ram,0x8c04c316) */
/* WARNING: Removing unreachable block (ram,0x8c04c314) */
/* WARNING: Removing unreachable block (ram,0x8c04c318) */
/* WARNING: Removing unreachable block (ram,0x8c04c334) */
/* WARNING: Removing unreachable block (ram,0x8c04c33c) */
/* WARNING: Removing unreachable block (ram,0x8c04cf66) */
/* WARNING: Removing unreachable block (ram,0x8c04ca3a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c04c314(int ar4,code *ar5,code *ar6,undefined4 ar7)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  code *ar6_00;
  code *pcVar9;
  code *pcVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 in_dr0;
  double dVar13;
  float fVar16;
  ulonglong uVar14;
  float fVar17;
  float fVar18;
  double dVar15;
  undefined8 in_dr2;
  undefined8 in_dr4;
  double in_dr12;
  double in_dr14;
  double in_xd0;
  double in_xd12;
  bool bVar19;
  char cVar20;
  char cVar21;
  undefined4 uStack_1cc;
  float fStack_1bc;
  float fStack_1b8;
  undefined4 uStack_1b4;
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [12];
  undefined1 auStack_194 [16];
  undefined1 auStack_184 [12];
  undefined1 auStack_178 [16];
  double dStack_168;
  undefined1 auStack_15c [16];
  undefined1 auStack_14c [12];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  double dStack_30;
  
  cVar21 = '\0';
  cVar20 = '\0';
  fVar17 = (float)((ulonglong)in_dr4 >> 0x20);
  uVar11 = 1;
  pcVar9 = Vec3_ctor_zero;
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_38,ar5,ar6,Vec3_ctor_zero);
  Vec3_ctor_zero(auStack_48,Vec3_ctor_zero,ar6_00,pcVar9);
  if (DAT_8c280478 == '\0') {
    _DAT_8c280474 = 0;
    DAT_8c280478 = '\x01';
  }
  if (*(int *)(ar4 + 0x324) != 1) {
    *(undefined4 *)(ar4 + 0x2e8) = 2;
  }
  pcVar10 = ar5;
  Vec3_sub(ar6,ar5,ar6_00,pcVar9,auStack_90);
  Vec3_normalize(auStack_90,pcVar10,ar6_00,pcVar9);
  pcVar9 = Vec3_ctor_copy;
  Vec3_ctor_copy(auStack_58,auStack_a0,ar6_00,Vec3_ctor_copy);
  Vec3_dtor(auStack_a0,0xffffffff,ar6_00,pcVar9);
  Vec3_dtor(auStack_90,0xffffffff,ar6_00,pcVar9);
  uStack_1b4 = 0xffffffff;
  puVar8 = auStack_58;
  uVar2 = FUN_8c023334(ar4 + 0x14,puVar8,ar6_00,pcVar9);
  *(undefined4 *)(ar4 + 0x27c) = uVar2;
  pcVar10 = Vec3_set_zero;
  Vec3_set_zero(auStack_64,puVar8,ar6_00,Vec3_set_zero);
  pcVar9 = Vec3_set_zero;
  Vec3_set_zero(auStack_70,Vec3_set_zero,ar6_00,pcVar10);
  FUN_8c0230f0(ar4 + 0x14,pcVar9,ar6_00,pcVar10,auStack_b0);
  FUN_8c0230f0(auStack_58,pcVar9,ar6_00,pcVar10,auStack_c0);
  FUN_8c022dac(auStack_b0,auStack_c0,ar6_00,pcVar10);
  if (cVar21 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
  }
  Vec3_dtor(auStack_c0,0xffffffff,ar6_00,pcVar10);
  uVar2 = (undefined4)in_dr0;
  Vec3_dtor(auStack_b0,0xffffffff,ar6_00,pcVar10);
  if (cVar21 == '\0') {
    fStack_1b8 = 30.0;
    fStack_1bc = 60.0;
    dVar13 = (double)CONCAT44(0x41200000,uVar2);
  }
  else {
    uStack_1b4 = 0xc4;
    fStack_1b8 = 2.69049e-43;
    dVar13 = 3.99475032826028e-312;
    fStack_1bc = 2.63444e-43;
  }
  Vec3_ctor_copy(auStack_80,ar6,ar6_00,pcVar10);
  if (*(int *)(ar4 + 0x128) == 3) {
    if (cVar21 == '\0') {
      dVar13 = (double)CONCAT44(0x42fff3ba,SUB84(dVar13,0));
      in_dr12 = 34144997571.25;
    }
    else {
      in_dr12 = 562106598554828.8;
      dVar13 = 3.7402662374345e-312;
      in_xd12 = -4.8084574610579776e+231;
    }
    uStack_1cc = 0x42fff3ba;
  }
  else if (*(int *)(ar4 + 0x128) == 4) {
    if (cVar21 == '\0') {
      dVar13 = (double)CONCAT44(0x4302f7fa,SUB84(dVar13,0));
      uStack_1cc = 0x4302f7fa;
      in_dr12 = 26070880467.71875;
    }
    else {
      in_dr12 = 667400475445497.0;
      dVar13 = 3.74026721418252e-312;
      uStack_1cc = 0x4302f7fa;
      in_xd12 = -9.066781293775917e-251;
    }
  }
LAB_8c04c588:
  iVar6 = *(int *)(ar4 + 0x40);
  if ((iVar6 < 6) && (-1 < iVar6)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar6) {
    case 0:
      if (*(int *)(ar4 + 0x2b8) != 2) goto code_r0x8c04c5ee;
      puVar8 = auStack_80;
      FUN_8c022fc0(ar5,puVar8,ar6_00,pcVar10);
      dVar15 = dVar13;
      fVar18 = fVar17;
      fVar16 = (float)in_dr4;
      if (cVar21 == '\0') {
        dVar15 = in_xd0;
        fVar18 = (float)((ulonglong)dVar13 >> 0x20);
        fVar16 = fVar17;
      }
      in_xd0 = dVar15;
      if (cVar20 == '\0' && fVar16 < fVar18) {
        FUN_8c0230f0(ar4 + 0x14,puVar8,ar6_00,pcVar10,auStack_d0);
        Vec3_length(auStack_d0,puVar8,ar6_00,pcVar10);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_d0,0xffffffff,ar6_00,pcVar10);
        uVar14 = (ulonglong)(uint)fVar18;
        if (cVar21 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = uVar14;
        }
        FUN_8c031748(ar4,uVar2,ar6_00,pcVar10);
        FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,pcVar10,auStack_e0);
        FUN_8c0230f0(auStack_58,uVar2,ar6_00,pcVar10,auStack_f0);
        FUN_8c022dac(auStack_e0,auStack_f0,ar6_00,pcVar10);
        uVar2 = (undefined4)uVar14;
        if (cVar21 == '\0') {
          *(int *)(ar4 + 0x224) = (int)(uVar14 >> 0x20);
        }
        else {
          *(ulonglong *)(ar4 + 0x224) = uVar14;
        }
        Vec3_dtor(auStack_f0,0xffffffff,ar6_00,pcVar10);
        pcVar10 = Vec3_dtor;
        Vec3_dtor(auStack_e0,0xffffffff,ar6_00,Vec3_dtor);
        uVar7 = 0x278;
        dVar13 = (double)CONCAT44(0x3f800000,uVar2);
        if (cVar21 == '\0') {
          *(undefined4 *)(ar4 + 0x278) = 0x3f800000;
        }
        else {
          *(double *)(ar4 + 0x278) = dVar13;
        }
        *(undefined4 *)(ar4 + 0x40) = 1;
        FUN_8c02a1fc(ar4 + 0x2c8,0x278,ar6_00,pcVar10);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,ar6_00,pcVar10);
        *(undefined4 *)(ar4 + 0x290) = 0;
        goto switchD_8c04c5a8_caseD_1;
      }
      uVar11 = 0;
      *(undefined4 *)(ar4 + 0x330) = 0;
      break;
    case 1:
switchD_8c04c5a8_caseD_1:
      *(undefined4 *)(ar4 + 0x40) = 3;
    case 3:
      pcVar9 = (code *)auStack_80;
      FUN_8c022fc0(ar5,pcVar9,ar6_00,pcVar10);
      if (cVar21 == '\0') {
        dVar15 = (double)CONCAT44(fVar17,(int)((ulonglong)dVar13 >> 0x20));
        dVar13 = in_xd0;
      }
      else {
        dVar15 = (double)CONCAT44((float)in_dr4,fVar17);
      }
      if (cVar20 != '\0' || SUB84(dVar15,0) <= (float)((ulonglong)dVar15 >> 0x20)) {
        pcVar9 = (code *)0x1;
        *(undefined4 *)(ar4 + 0x290) = 1;
      }
      goto LAB_8c04c728;
    case 4:
      *(undefined4 *)(ar4 + 0x40) = 5;
    }
  }
  goto switchD_8c04c5a8_caseD_2;
code_r0x8c04c5ee:
  *(undefined4 *)(ar4 + 0x40) = 3;
  goto LAB_8c04c588;
LAB_8c04c728:
  do {
    switch(*(undefined4 *)(ar4 + 0x2b8)) {
    case 1:
    case 7:
      goto switchD_8c04c74a_caseD_1;
    case 2:
      *(undefined4 *)(ar4 + 0x330) = 0;
      *(undefined4 *)(ar4 + 800) = 0;
      if (*(int *)(ar4 + 0x290) == 1) {
        *(undefined4 *)(ar4 + 0x290) = 0;
        *(undefined4 *)(ar4 + 0x330) = 0;
        Vec3_dtor(auStack_80,0xffffffff,ar6_00,pcVar10);
        object_dtor_delete(auStack_70,0xffffffff,ar6_00,pcVar10);
        object_dtor_delete(auStack_64,0xffffffff,ar6_00,pcVar10);
        Vec3_dtor(auStack_58,0xffffffff,ar6_00,pcVar10);
        Vec3_dtor(auStack_48,0xffffffff,ar6_00,pcVar10);
        Vec3_dtor(auStack_38,0xffffffff,ar6_00,pcVar10);
        return 0;
      }
      uVar2 = 100;
      iVar6 = ar4;
      iVar3 = rand_range(ar4,0,100,pcVar10);
      uVar7 = (undefined4)in_dr2;
      fVar18 = fStack_1bc;
      fVar16 = fStack_1b8;
      if (cVar21 == '\0') {
        fVar18 = (float)iVar3;
        fVar16 = fStack_1bc;
      }
      if ((cVar20 != '\0' || fVar16 <= fVar18) || (iVar6 = *(int *)(ar4 + 700), iVar6 != 0)) {
        if (cVar21 == '\0') {
          dVar15 = (double)CONCAT44(0x41200000,fVar18);
        }
        else {
          dVar15 = 1.07851368593492e-311;
        }
        if (cVar20 == '\0') {
          bVar19 = (float)((ulonglong)dVar15 >> 0x20) < SUB84(in_dr14,0);
        }
        else {
          bVar19 = dVar15 < in_dr14;
        }
        if (bVar19) {
          ar6_00 = (code *)auStack_80;
          FUN_8c057b6c(ar4,ar5,ar6_00,pcVar10);
        }
        else if (*(int *)(ar4 + 700) == -1) {
LAB_8c04ca6c:
          uVar2 = SUB84(dVar15,0);
          *(undefined4 *)(ar4 + 0x2b8) = 7;
          pcVar9 = (code *)0x0;
          ar6_00 = (code *)0xffffffff;
          iVar3 = 0x12;
          iVar6 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x12,0xffffffff,0);
          if (iVar6 == 6) {
            if (cVar21 == '\0') {
              *(int *)(ar4 + 0x2dc) = (int)((ulonglong)in_dr12 >> 0x20);
            }
            else {
              *(double *)(ar4 + 0x2dc) = in_dr12;
            }
          }
          else {
            pcVar9 = vec3_clear;
            vec3_clear(ar4 + 0x2d4,iVar3,ar6_00,vec3_clear);
            iVar3 = ar4 + 0xb0;
            s_CAnimBody_SetFrame_033e6e(iVar3,iVar3,ar6_00,pcVar9);
          }
          uVar7 = FUN_8c026db0(ar4,iVar3,ar6_00,pcVar9);
          uVar4 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,ar6_00,pcVar9);
          puVar5 = (undefined4 *)deref_u32(uVar4,uVar7,ar6_00,pcVar9);
          uVar7 = puVar5[1];
          *(undefined4 *)(ar4 + 0xb4) = *puVar5;
          *(undefined4 *)(ar4 + 0xb8) = uVar7;
          pcVar10 = (code *)puVar5[2];
          *(code **)(ar4 + 0xbc) = pcVar10;
          if (*(int *)(ar4 + 0x128) == 3) {
            *(undefined **)(ar4 + 0xb4) = &DAT_8c135fac;
          }
          else {
            *(undefined **)(ar4 + 0xb4) = &DAT_8c13624c;
          }
          FUN_8c022fc0(ar5,auStack_80,ar6_00,pcVar10);
          if (cVar21 == '\0') {
            uStack_1cc = uVar2;
          }
          dVar15 = (double)CONCAT44(0x3f800000,uStack_1cc);
          if (cVar21 == '\0') {
            *(undefined4 *)(ar4 + 0x2c0) = 0x3f800000;
          }
          else {
            *(double *)(ar4 + 0x2c0) = dVar15;
          }
        }
        else {
          if (*(int *)(ar4 + 700) == 0) {
            uVar4 = rand(iVar6,rand,uVar2,pcVar10);
            iVar6 = libgcc_divide_helper_01031c(uVar4,100,uVar2,pcVar10);
            if (cVar21 == '\0') {
              dVar15 = (double)CONCAT44(fStack_1b8,(float)iVar6);
            }
            else {
              dVar15 = (double)CONCAT44(uStack_1b4,fStack_1b8);
            }
            if (cVar20 == '\0' && SUB84(dVar15,0) < (float)((ulonglong)dVar15 >> 0x20)) {
              FUN_8c022fc0(ar5,auStack_80,uVar2,pcVar10);
              if (cVar21 == '\0') {
                dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),uVar7);
                in_xd12 = (double)CONCAT44(SUB84(in_dr12,0),0x40400000);
              }
              if (cVar20 == '\0') {
                fVar17 = (float)((ulonglong)in_xd12 >> 0x20) * SUB84(in_xd12,0);
                bVar19 = (float)((ulonglong)dVar15 >> 0x20) < fVar17;
                dVar15 = (double)CONCAT44(fVar17,SUB84(in_xd12,0));
              }
              else {
                bVar19 = dVar15 < in_xd12 * in_xd12;
                dVar15 = in_xd12 * in_xd12;
              }
              if (bVar19) goto LAB_8c04ca6c;
            }
          }
          uVar4 = SUB84(in_dr14,0);
          *(undefined4 *)(ar4 + 0x2b8) = 5;
          pcVar10 = (code *)0x0;
          ar6_00 = (code *)0xffffffff;
          uVar2 = 0x18;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x18,0xffffffff,0);
          vec3_clear(ar4 + 0x2d4,uVar2,ar6_00,pcVar10);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,ar6_00,pcVar10);
          uVar2 = FUN_8c026db0(ar4,FUN_8c026db0,ar6_00,pcVar10);
          uVar7 = FUN_8c03c0f0(ar4 + 0xb0,uVar2,ar6_00,pcVar10);
          puVar5 = (undefined4 *)deref_u32(uVar7,uVar2,ar6_00,pcVar10);
          uVar2 = puVar5[1];
          *(undefined4 *)(ar4 + 0xb4) = *puVar5;
          *(undefined4 *)(ar4 + 0xb8) = uVar2;
          *(undefined4 *)(ar4 + 0xbc) = puVar5[2];
          if (*(int *)(ar4 + 0x128) == 3) {
            *(undefined **)(ar4 + 0xb4) = &DAT_8c135fc4;
          }
          else {
            *(undefined **)(ar4 + 0xb4) = &DAT_8c136264;
          }
          FUN_8c022fc0(ar5,auStack_80,ar6_00,pcVar10);
          fVar17 = (float)((ulonglong)dVar15 >> 0x20);
          dVar13 = dVar15;
          if (cVar21 == '\0') {
            dVar13 = (double)CONCAT44(fVar17,uVar4);
          }
          if (cVar20 == '\0') {
            fVar18 = fVar17 / SUB84(in_dr12,0);
            dVar15 = (double)CONCAT44(fVar18,SUB84(dVar15,0));
            iVar6 = (int)fVar18;
          }
          else {
            dVar15 = dVar15 / in_dr12;
            iVar6 = (int)dVar15;
          }
          if (cVar20 == '\0') {
            fVar18 = (float)(iVar6 + 1);
            dVar15 = (double)CONCAT44(fVar18,SUB84(dVar15,0));
            in_dr12 = (double)CONCAT44((fVar17 / fVar18) / SUB84(in_dr12,0),SUB84(dVar13,0));
          }
          else {
            dVar15 = (double)(iVar6 + 1);
            in_dr12 = (dVar13 / dVar15) / in_dr12;
          }
          if (cVar21 == '\0') {
            *(int *)(ar4 + 0x2c0) = (int)((ulonglong)in_dr12 >> 0x20);
          }
          else {
            *(double *)(ar4 + 0x2c0) = in_dr12;
          }
        }
        goto switchD_8c04c74a_default;
      }
      iVar6 = rand_range(ar4,0,3,pcVar10);
      uVar2 = 0;
      ar6_00 = (code *)0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar6 + 0x1a,0xffffffff,0);
      pcVar9 = get_field_1c_026dd8;
      iVar6 = get_field_1c_026dd8(ar4 + 0xb0,get_field_1c_026dd8,ar6_00,uVar2);
      if (iVar6 == 0x20) {
        uVar2 = 0;
        ar6_00 = (code *)0xffffffff;
        pcVar9 = (code *)0x1a;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,pcVar9,ar6_00,uVar2);
      pcVar9 = get_field_1c_026dd8;
      iVar6 = get_field_1c_026dd8(ar4 + 0xb0,get_field_1c_026dd8,ar6_00,uVar2);
      *(undefined4 *)(ar4 + 0x218) =
           *(undefined4 *)
            (&DAT_8c13639c + (iVar6 + -0x1a) * 4 + (*(int *)(ar4 + 0x128) + -3) * 0x28);
      if (cVar21 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar18;
      }
      dVar15 = (double)CONCAT44(0x3f800000,fVar18);
      if (cVar21 == '\0') {
        *(undefined4 *)(ar4 + 0x278) = 0x3f800000;
      }
      else {
        *(double *)(ar4 + 0x278) = dVar15;
      }
      *(undefined4 *)(ar4 + 0x2b8) = 3;
      pcVar10 = (code *)0x2c8;
      FUN_8c02a1fc(ar4 + 0x2c8,pcVar9,ar6_00,0x2c8);
      break;
    case 3:
      iVar6 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar9,ar6_00,pcVar10);
      if (iVar6 == 1) {
        *(undefined4 *)(ar4 + 0x2b8) = 2;
      }
      if (cVar21 == '\0') {
        *(undefined4 *)(ar4 + 0x24) = 0;
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x24) = (ulonglong)dVar15 & 0xffffffff;
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar15 & 0xffffffff;
      }
      dVar15 = (double)((ulonglong)dVar15 & 0xffffffff);
      goto switchD_8c04c74a_default;
    case 4:
      iVar6 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,ar6_00,pcVar10);
      if (iVar6 == 1) {
        *(undefined4 *)(ar4 + 0x2b8) = 3;
        *(undefined4 *)(ar4 + 0x290) = 0;
      }
      goto switchD_8c04c74a_default;
    case 5:
      *(undefined4 *)(ar4 + 0x330) = 1;
      pcVar9 = CAnimBody_GetCurFrame;
      CAnimBody_GetCurFrame(ar4 + 0xb0,CAnimBody_GetCurFrame,ar6_00,pcVar10,fVar17);
      if (cVar21 == '\0') {
        dVar1 = (double)CONCAT44(0x40e00000,(int)((ulonglong)dVar15 >> 0x20));
      }
      else {
        dVar1 = 1.69813438463526e-311;
        dVar13 = dVar15;
      }
      dVar15 = dVar1;
      if ((cVar20 != '\0' || (float)((ulonglong)dVar15 >> 0x20) <= SUB84(dVar15,0)) &&
         (*(int *)(ar4 + 800) == 0)) {
        *(int *)(ar4 + 800) = *(int *)(ar4 + 800) + 1;
        pcVar10 = *(code **)(ar4 + 0x244);
        pcVar9 = (code *)0xd;
        ar6_00 = ar5;
        FUN_8c033474(ar4,0xd,ar5,pcVar10);
      }
      goto switchD_8c04c74a_caseD_1;
    case 6:
      iVar6 = FUN_8c057e58(ar4,pcVar9,ar6_00,pcVar10);
      if (iVar6 == 0) {
        *(undefined4 *)(ar4 + 0x330) = 0;
        *(undefined4 *)(ar4 + 0x2b8) = 0;
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
    default:
      goto switchD_8c04c74a_default;
    }
  } while( true );
switchD_8c04c74a_caseD_1:
  *(undefined4 *)(ar4 + 0x330) = 1;
  CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar9,ar6_00,pcVar10,fVar17);
  FUN_8c034384(ar4 + 0xb0,**(undefined4 **)(ar4 + 0xb4),ar6_00,pcVar10);
  Vec3_assign(auStack_38,auStack_100,ar6_00,pcVar10);
  Vec3_dtor(auStack_100,0xffffffff,ar6_00,pcVar10);
  dVar1 = dStack_30;
  if ((*(int *)(ar4 + 0x128) == 3) && (*(int *)(ar4 + 0x2b8) == 5)) {
    if (cVar21 == '\0') {
      dVar15 = (double)CONCAT44(0x41100000,dStack_30._0_4_);
    }
    else {
      dVar15 = 7.72945773970538e-312;
      dVar13 = dStack_30;
    }
    if (cVar20 == '\0') {
      fVar17 = (float)((ulonglong)dVar15 >> 0x20);
      dVar15 = (double)CONCAT44(fVar17,SUB84(dVar15,0) + fVar17);
    }
    else {
      dVar15 = dVar15 + dVar15;
    }
    dVar1 = dVar13;
    if (cVar21 == '\0') {
      dStack_30 = (double)CONCAT44(dStack_30._4_4_,SUB84(dVar15,0));
      dVar1 = dStack_30;
    }
  }
  dStack_30 = dVar1;
  Vec3_sub(auStack_38,ar4 + 0x2d4,ar6_00,pcVar10,auStack_110);
  Vec3_assign(auStack_48,auStack_110,ar6_00,pcVar10);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_110,0xffffffff,ar6_00,pcVar10);
  FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,pcVar10,auStack_120);
  Vec3_ctor_xyz(auStack_130,uVar2,ar6_00,pcVar10);
  FUN_8c022dac(auStack_120,auStack_130,ar6_00,pcVar10);
  Vec3_dtor(auStack_130,0xffffffff,ar6_00,pcVar10);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_120,0xffffffff,ar6_00,pcVar10);
  Vec3_ctor_xyz(auStack_140,uVar2,ar6_00,pcVar10);
  pcVar9 = (code *)FUN_8c023334(ar4 + 0x14,auStack_140,ar6_00,pcVar10);
  uVar2 = 0xffffffff;
  ar6_00 = pcVar9;
  Vec3_dtor(auStack_140,0xffffffff,pcVar9,pcVar10);
  if (pcVar9 == (code *)0x3) {
    Vec3_set_xyz(auStack_14c,uVar2,Vec3_set_xyz,pcVar10);
    pcVar10 = (code *)(ar4 + 0x2a8);
    ar6_00 = FUN_8c023484;
    FUN_8c023484(pcVar10,auStack_14c,FUN_8c023484,pcVar10,auStack_15c);
    Vec3_assign(ar4 + 0x2a8,auStack_15c,ar6_00,pcVar10);
    Vec3_dtor(auStack_15c,0xffffffff,ar6_00,pcVar10);
    object_dtor_delete(auStack_14c,0xffffffff,ar6_00,pcVar10);
  }
  else if (pcVar9 == (code *)0x4) {
    pcVar10 = (code *)&dStack_168;
    ar6_00 = Vec3_set_xyz;
    Vec3_set_xyz(pcVar10,uVar2,Vec3_set_xyz,pcVar10);
    FUN_8c023484(ar4 + 0x2a8,&dStack_168,ar6_00,pcVar10,auStack_178);
    Vec3_assign(ar4 + 0x2a8,auStack_178,ar6_00,pcVar10);
    Vec3_dtor(auStack_178,0xffffffff,ar6_00,pcVar10);
    object_dtor_delete(&dStack_168,0xffffffff,ar6_00,pcVar10);
  }
  puVar8 = auStack_38;
  Vec3_assign(ar4 + 0x2d4,puVar8,ar6_00,pcVar10);
  Vec3_length_sq(auStack_48,puVar8,ar6_00,pcVar10);
  if (cVar21 == '\0') {
    dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),*(undefined4 *)(ar4 + 0x2c0));
  }
  else {
    dVar13 = *(double *)(ar4 + 0x2c0);
  }
  if (cVar20 == '\0') {
    dVar15 = (double)(ulonglong)(uint)(SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20));
  }
  else {
    dVar15 = dVar15 * dVar15;
  }
  if (cVar21 == '\0') {
    *(int *)(ar4 + 0x28) = SUB84(dVar15,0);
  }
  else {
    *(double *)(ar4 + 0x28) = dVar13;
  }
  iVar6 = *(int *)(ar4 + 0x2b8);
  if (iVar6 == 1) {
    pcVar10 = (code *)(ar4 + 0x2b0);
    dVar15 = (double)((ulonglong)dVar15 & 0xffffffff);
    if (cVar21 == '\0') {
      *(undefined4 *)pcVar10 = 0;
    }
    else {
      *(double *)pcVar10 = dVar15;
    }
  }
  else {
    if (iVar6 == 5) {
      if (*(int *)(ar4 + 0x290) != 1) {
        Vec3_set_xyz(auStack_184,puVar8,ar6_00,pcVar10);
        pcVar10 = (code *)(ar4 + 0x14);
        FUN_8c031eb0(ar4,ar5,auStack_80,pcVar10,auStack_194);
        ar6_00 = (code *)auStack_194;
        Vec3_assign(ar4 + 0x14,ar6_00,ar6_00,pcVar10);
        Vec3_dtor(auStack_194,0xffffffff,ar6_00,pcVar10);
        puVar8 = (undefined1 *)0xffffffff;
        object_dtor_delete(auStack_184,0xffffffff,ar6_00,pcVar10);
      }
      iVar6 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,puVar8,ar6_00,pcVar10);
      if (iVar6 == 1) {
        *(undefined4 *)(ar4 + 0x2b8) = 0;
      }
      goto switchD_8c04c74a_default;
    }
    if (iVar6 != 7) goto switchD_8c04c74a_default;
  }
  ar6_00 = (code *)0x290;
  pcVar9 = *(code **)(ar4 + 0x290);
  if ((double *)pcVar9 == (double *)0x1) {
    iVar6 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,1,0x290,pcVar10);
    if (iVar6 == 1) {
      *(undefined4 *)(ar4 + 0x2b8) = 0;
      pcVar10 = (code *)0x0;
      ar6_00 = (code *)0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
      pcVar9 = s_CAnimBody_SetFrame_033e6e;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e,ar6_00,pcVar10);
    }
  }
  else if (*(int *)(ar4 + 0x2b8) == 1) {
    iVar6 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar9,0x290,pcVar10);
    if (iVar6 == 1) {
      *(undefined4 *)(ar4 + 0x2b8) = 2;
      vec3_clear(ar4 + 0x2d4,ar4 + 0x2d4,ar6_00,pcVar10);
      pcVar10 = (code *)0x0;
      ar6_00 = (code *)0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
      pcVar9 = (code *)(ar4 + 0xb0);
      s_CAnimBody_SetFrame_033e6e(pcVar9,pcVar9,ar6_00,pcVar10);
    }
  }
  else {
    iVar6 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,pcVar9,0x290,pcVar10);
    if (iVar6 == 7) {
      pcVar10 = (code *)0x1;
      *(undefined4 *)(ar4 + 0x2b8) = 1;
      pcVar9 = (code *)(ar4 + 0x2dc);
      if (cVar21 == '\0') {
        *(int *)pcVar9 = (int)((ulonglong)in_dr12 >> 0x20);
      }
      else {
        *(double *)pcVar9 = in_dr12;
      }
    }
  }
  if (*(int *)(ar4 + 0x290) != 1) {
    Vec3_set_xyz(auStack_1a0,pcVar9,ar6_00,pcVar10);
    pcVar10 = (code *)(ar4 + 0x14);
    ar6_00 = (code *)auStack_80;
    FUN_8c031eb0(ar4,ar5,ar6_00,pcVar10,auStack_1b0);
    Vec3_assign(ar4 + 0x14,auStack_1b0,ar6_00,pcVar10);
    Vec3_dtor(auStack_1b0,0xffffffff,ar6_00,pcVar10);
    object_dtor_delete(auStack_1a0,0xffffffff,ar6_00,pcVar10);
  }
switchD_8c04c74a_default:
  uVar12 = SUB84(dVar15,0);
  if (*(int *)(ar4 + 0x290) == 1) {
    if (*(int *)(ar4 + 0x2b8) == 0) {
      *(undefined4 *)(ar4 + 0x330) = 0;
      *(undefined4 *)(ar4 + 0x290) = 0;
      if (cVar21 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar15 & 0xffffffff;
      }
      uVar11 = 0;
      *(undefined4 *)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(ar4 + 0x40) = 0;
      FUN_8c022d04(ar4 + 0x2d4,ar4 + 0x2d4,ar6_00,pcVar10);
      *(undefined4 *)(ar4 + 800) = 0;
    }
    else {
      pcVar10 = *(code **)(ar4 + 0x2b8);
      if ((double *)pcVar10 == (double *)0x1) {
        uVar2 = 0x278;
        iVar6 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0x278,ar6_00,1);
        if (iVar6 == 1) {
          *(undefined4 *)(ar4 + 0x330) = 0;
          FUN_8c022d04(ar4 + 0x2d4,uVar2,ar6_00,pcVar10);
          FUN_8c022d04(ar4 + 0x2a8,FUN_8c022d04,ar6_00,pcVar10);
          *(undefined4 *)(ar4 + 0x2b8) = 2;
          *(undefined4 *)(ar4 + 0x290) = 0;
          if (cVar21 == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = (ulonglong)uVar12;
          }
          uVar11 = 0;
          *(undefined4 *)(ar4 + 0x40) = 0;
        }
      }
    }
  }
  else if (*(int *)(ar4 + 0x2b8) == 0) {
    *(undefined4 *)(ar4 + 0x2b8) = 2;
  }
switchD_8c04c5a8_caseD_2:
  Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,pcVar10);
  Vec3_dtor(auStack_80,0xffffffff,ar6_00,pcVar10);
  object_dtor_delete(auStack_70,0xffffffff,ar6_00,pcVar10);
  object_dtor_delete(auStack_64,0xffffffff,ar6_00,pcVar10);
  Vec3_dtor(auStack_58,0xffffffff,ar6_00,pcVar10);
  Vec3_dtor(auStack_48,0xffffffff,ar6_00,pcVar10);
  Vec3_dtor(auStack_38,0xffffffff,ar6_00,pcVar10);
  return uVar11;
}



/* FUN_8c04d62c @ 8c04d62c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c04d72c) */
/* WARNING: Removing unreachable block (ram,0x8c04d656) */
/* WARNING: Removing unreachable block (ram,0x8c04d62c) */
/* WARNING: Removing unreachable block (ram,0x8c04d652) */
/* WARNING: Removing unreachable block (ram,0x8c04d658) */
/* WARNING: Removing unreachable block (ram,0x8c04db20) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c04d62c(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 uVar2;
  int *ar6_00;
  undefined4 uVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  double in_dr0;
  undefined4 uVar10;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  undefined4 in_fr3;
  undefined4 in_fr5;
  ulonglong in_dr14;
  bool bVar11;
  char cVar12;
  char cVar13;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar3 = 1;
  dVar8 = (double)(in_dr14 & 0xffffffff00000000);
  if (2 < *(int *)(ar4 + 0x128)) {
    in_dr0 = (double)CONCAT44(0x3ecccccd,SUB84(in_dr0,0));
    dVar8 = (double)CONCAT44((int)(in_dr14 >> 0x20),*(float *)(ar4 + 0x48) * 0.4);
  }
  iVar1 = *(int *)(ar4 + 300);
  if ((iVar1 < 7) && (-1 < iVar1)) {
    ar5_00 = ar5;
    ar6_00 = ar6;
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 0:
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
      if (iVar1 == 1) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)in_dr0 & 0xffffffff;
        }
        *(undefined4 *)(ar4 + 0x2e8) = 1;
        FUN_8c022d04(ar4 + 0x2d4,ar5,ar6,ar7);
        FUN_8c022d04(ar4 + 0x2a8,ar5,ar6,ar7);
      }
      break;
    case 1:
      ar7 = 0;
      ar6_00 = (int *)0xffffffff;
      ar5_00 = 9;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      if (cVar13 == '\0') {
        in_fr5 = 0x3f99999a;
      }
      else {
        in_fr5 = 0x3f4ccccd;
      }
      FUN_8c032ab0(ar4,ar5_00,ar6_00,ar7);
      if (cVar13 == '\0') {
        *(int *)(ar4 + 0x278) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x278) = in_dr0;
      }
    case 2:
      uVar2 = SUB84(in_dr0,0);
      if (cVar13 != '\0') {
        in_fr5 = (undefined4)*(undefined8 *)(ar4 + 0x94);
      }
      FUN_8c03c314(ar4,ar5_00,ar6_00,ar7);
      if (cVar13 == '\0') {
        fVar6 = -0.005;
        *(undefined4 *)(ar4 + 0xa0) = 0xbba3d70a;
      }
      else {
        uVar2 = 0xbba3d70a;
        fVar6 = 5.43704e-43;
        *(undefined8 *)(ar4 + 0xa0) = 0x184bba3d70a;
      }
      (**(code **)(*ar6 + 0x184))(ar6,ar5_00,ar6_00,ar7);
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x48));
        uVar2 = in_fr3;
      }
      else {
        dVar7 = -8.332610302023455e-251;
      }
      if (cVar12 == '\0') {
        fVar4 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
        dVar8 = (double)CONCAT44((fVar6 - fVar4) - SUB84(dVar8,0),uVar2);
      }
      else {
        fVar4 = SUB84(dVar7 * dVar7,0);
        dVar8 = ((double)CONCAT44(fVar6,uVar2) - dVar7 * dVar7) - dVar8;
      }
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),fVar4);
      }
      else {
        dVar7 = *(double *)(ar5 + 4);
      }
      if (cVar12 == '\0') {
        bVar11 = (float)((ulonglong)dVar8 >> 0x20) < (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        bVar11 = dVar8 < dVar7;
      }
      if (bVar11) {
        FUN_8c031748(ar4,ar5_00,ar6_00,ar7);
        dVar7 = (double)((ulonglong)dVar7 & 0xffffffff);
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0xa0) = 0;
        }
        else {
          *(double *)(ar4 + 0xa0) = dVar7;
        }
        vec3_clear(ar4 + 0x90,ar5_00,ar6_00,ar7);
      }
      uVar5 = SUB84(dVar7,0);
      if (cVar13 != '\0') {
        in_fr5 = 0x42c80000;
      }
      FUN_8c05ae54(ar4,ar5_00,ar6_00,ar7);
      if (cVar13 != '\0') {
        in_fr5 = (undefined4)*(undefined8 *)(ar4 + 0x278);
      }
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,ar6_00,ar7);
      if (iVar1 == 1) {
        uVar2 = 9;
        iVar1 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,9,ar6_00,ar7);
        if (cVar12 == '\0') {
          dVar8 = (double)CONCAT44((float)iVar1,in_fr5);
        }
        else {
          dVar8 = (double)iVar1;
        }
        if (cVar12 == '\0') {
          bVar11 = (float)((ulonglong)dVar8 >> 0x20) < 0.0;
        }
        else {
          bVar11 = dVar8 < (double)(ulonglong)uVar5;
        }
        if ((bVar11) && (cVar13 != '\0')) {
          uVar5 = 0x4f800000;
        }
        uVar10 = 0x3f800000;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7);
        FUN_8c03c314(ar4,uVar2,ar6_00,ar7);
        FUN_8c032ab0(ar4,uVar2,ar6_00,ar7);
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0xa0) = uVar10;
        }
        else {
          *(ulonglong *)(ar4 + 0xa0) = CONCAT44(uVar10,uVar5);
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 3:
      iVar1 = ar5;
      (**(code **)(*ar6 + 0x184))(ar6,ar5,ar6,ar7);
      if (cVar13 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
        dVar7 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        dVar7 = 1.53683721570537e-311;
      }
      if (cVar12 == '\0') {
        fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
        dVar8 = (double)CONCAT44(((float)((ulonglong)in_dr0 >> 0x20) - fVar6) - SUB84(dVar8,0),
                                 SUB84(in_dr0,0));
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
        dVar8 = (in_dr0 - dVar7 * dVar7) - dVar8;
      }
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),fVar6);
      }
      else {
        dVar7 = *(double *)(ar5 + 4);
      }
      if (cVar12 == '\0') {
        bVar11 = (float)((ulonglong)dVar8 >> 0x20) < (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        bVar11 = dVar8 < dVar7;
      }
      if (bVar11) {
        FUN_8c022d04(ar4 + 0x2d4,iVar1,ar6,ar7);
        uVar5 = SUB84(dVar7,0);
        FUN_8c022d04(ar4 + 0x2a8,iVar1,ar6,ar7);
        FUN_8c022d04(ar4 + 0x90,iVar1,ar6,ar7);
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0xa0) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0xa0) = (ulonglong)uVar5;
        }
        iVar1 = ar4 + 0x14;
        Vec3_assign(ar4 + 0x80,iVar1,ar6,ar7);
        FUN_8c031748(ar4,iVar1,ar6,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x280) = 0x1518;
      }
      break;
    case 4:
      FUN_8c031748(ar4,ar5,ar6,ar7);
      iVar1 = *(int *)(ar4 + 0x280);
      *(int *)(ar4 + 0x280) = iVar1 + -1;
      if (iVar1 < 1) {
        uVar9 = (ulonglong)in_dr0 & 0xffffffff;
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = uVar9;
        }
        FUN_8c03c314(ar4,ar5,ar6,ar7);
        FUN_8c032ab0(ar4,ar5,ar6,ar7);
        if (cVar13 == '\0') {
          *(int *)(ar4 + 0xa0) = (int)(uVar9 >> 0x20);
        }
        else {
          *(ulonglong *)(ar4 + 0xa0) = uVar9;
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        FUN_8c031700(ar4,ar5,ar6,ar7);
        *(undefined4 *)(ar4 + 0x280) = 0;
      }
      break;
    case 5:
      iVar1 = ar5;
      (**(code **)(*ar6 + 0x128))(ar6,ar5,ar6,ar7);
      uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar13 == '\0') {
        dVar8 = (double)CONCAT44(0x3da3d70a,*(undefined4 *)(ar4 + 0x48));
        uStack_3c = uVar2;
      }
      else {
        uStack_3c = SUB84(in_dr0,0);
        dVar8 = -8.332610297860959e-251;
        uStack_38 = uVar2;
      }
      if (cVar12 == '\0') {
        fVar6 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar13 == '\0') {
        dVar8 = (double)CONCAT44(uStack_3c,fVar6);
      }
      else {
        dVar8 = (double)CONCAT44(uStack_38,uStack_3c);
      }
      if (cVar12 == '\0') {
        fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 + dVar8,0);
      }
      if (cVar13 == '\0') {
        uVar9 = CONCAT44(*(undefined4 *)(ar5 + 4),fVar6);
      }
      else {
        uVar9 = *(ulonglong *)(ar5 + 4);
      }
      if (cVar12 != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
        uVar9 = uVar9 & 0xffffffff;
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0x70) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x70) = uVar9;
        }
        FUN_8c031748(ar4,iVar1,ar6,ar7);
        uVar5 = (uint)uVar9;
        FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7fc0c,ar6,ar7);
        *(undefined4 *)(ar4 + 0x280) = 0;
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0xa0) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0xa0) = (ulonglong)uVar5;
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x2e8) = 0;
      }
      break;
    case 6:
      *(undefined4 *)(ar4 + 0x70) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* FUN_8c04db38 @ 8c04db38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c04db38(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  uint in_fr1;
  char cVar2;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  cVar2 = '\0';
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    vec3_clear(ar4 + 0x2a8,ar5,ar6,ar7);
    vec3_clear(ar4 + 0x6c,ar5,ar6,ar7);
    vec3_clear(ar4 + 0x90,ar5,ar6,ar7);
    if (cVar2 == '\0') {
      *(undefined4 *)(ar4 + 0xa0) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0xa0) = (ulonglong)in_fr1;
    }
    if (*(int *)(ar4 + 0x128) == 4) {
      Vec3_set_xyz(auStack_18,ar5,ar6,ar7);
      FUN_8c023484(ar4 + 0x14,auStack_18,ar6,ar7,auStack_28);
      Vec3_assign(ar4 + 0x14,auStack_28,ar6,ar7);
      Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
      ar5 = 0xffffffff;
      object_dtor_delete(auStack_18,0xffffffff,ar6,ar7);
    }
    Vec3_length(ar4 + 0x14,ar5,ar6,ar7);
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7);
    ar7 = 0;
    ar6 = 0xffffffff;
    ar5 = 0x49;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x49,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x280) = 0;
      return 0;
    }
    if (iVar1 != 3) {
      return 1;
    }
    return 0;
  }
  iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7);
  if (iVar1 == 1) {
    ar5_00 = get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7);
    s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,ar5_00,ar6,ar7);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6,ar7);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    *(undefined4 *)(ar4 + 0x280) = 0;
  }
  return 1;
}



/* FUN_8c04dd34 @ 8c04dd34 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c04dd34) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c04dd34(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 in_dr0;
  double dVar3;
  double in_dr14;
  undefined8 in_xd14;
  char cVar4;
  char cVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 auStack_20 [5];
  
  cVar5 = '\0';
  cVar4 = '\0';
  FUN_8c0230f0(ar4 + 0x80,ar5,ar6,ar7,auStack_20);
  FUN_8c022dac(ar4 + 0x80,auStack_20,ar6,ar7);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar5 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),uVar1);
    uStack_24 = uVar1;
  }
  else {
    uStack_24 = (undefined4)in_dr0;
    in_xd14 = in_dr0;
    auStack_20[0] = uVar1;
  }
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
  fVar2 = (float)in_dr0;
  if (cVar5 == '\0') {
    fVar2 = *(float *)(ar4 + 0x84);
  }
  dVar3 = (double)(ulonglong)(uint)fVar2;
  if (cVar4 == '\0' && 0.0 < fVar2) {
    if (cVar5 == '\0') {
      dVar3 = (double)CONCAT44(0xbf800000,fVar2);
    }
    else {
      dVar3 = -7.94252464057912e-251;
    }
    if (cVar4 == '\0') {
      in_dr14 = (double)(ulonglong)(uint)(SUB84(in_dr14,0) * (float)((ulonglong)dVar3 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 * dVar3;
    }
  }
  if (cVar5 == '\0') {
    *(int *)ar5 = SUB84(in_dr14,0);
  }
  else {
    *ar5 = in_xd14;
  }
  FUN_8c02327c(ar4 + 0x80,uVar1,ar6,ar7);
  uVar1 = (undefined4)((ulonglong)dVar3 >> 0x20);
  uStack_28 = uVar1;
  if (cVar5 != '\0') {
    uStack_28 = SUB84(dVar3,0);
    uStack_24 = uVar1;
  }
  if (cVar5 == '\0') {
    *(undefined4 *)((int)ar5 + 4) = uStack_28;
  }
  else {
    *(undefined8 *)((int)ar5 + 4) = CONCAT44(uStack_24,uStack_28);
  }
  return 0;
}



/* FUN_8c04ddd4 @ 8c04ddd4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c04ddd4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c04ddd4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 in_dr0;
  double dVar5;
  float fVar6;
  double in_dr14;
  undefined8 in_xd14;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined4 in_stack_00000000;
  undefined4 ain0;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  uVar3 = ar7;
  ain0 = ar6;
  Vec3_sub(ar6,ar5,ar6,ar7,auStack_3c);
  Vec3_ctor_copy(auStack_2c,auStack_3c,ar6,uVar3);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_3c,0xffffffff,ar6,uVar3);
  iVar1 = get_field_6c_028cc4(ar7,uVar2,ar6,uVar3);
  if (iVar1 == 0) {
    Vec3_dtor(auStack_2c,0xffffffff,ar6,uVar3);
    return 2;
  }
  *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfb;
  Vec3_length_sq(auStack_2c,uVar2,ar6,uVar3);
  if (cVar9 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),(int)in_dr0);
    in_dr0 = in_xd14;
  }
  else {
    dVar5 = *(double *)(ar4 + 0x28);
  }
  fVar6 = SUB84(in_dr14,0);
  if (cVar8 == '\0') {
    bVar7 = fVar6 < (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    bVar7 = in_dr14 < dVar5;
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)(ar4 + 0x28) = fVar6;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_dr0;
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar5,0));
    }
    else {
      dVar5 = *(double *)(ar4 + 0x34);
    }
    if (cVar8 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 fVar6 / (float)((ulonglong)dVar5 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 / dVar5;
    }
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar5,0));
    }
    else {
      dVar5 = *(double *)(ar4 + 0x28);
    }
    if (cVar8 == '\0') {
      fVar6 = SUB84(in_dr14,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar6 = SUB84(in_dr14 + dVar5,0);
    }
    if (cVar9 == '\0') {
      *(float *)(ar4 + 0x28) = fVar6;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_dr0;
    }
  }
  FUN_8c031748(ar4,uVar2,ar6,uVar3);
  FUN_8c031700(ar4,uVar2,ar6,uVar3);
  uVar2 = Vec3_length(auStack_2c,uVar2,ar6,uVar3);
  Vec3_assign(ar4 + 0x14,uVar2,ar6,uVar3);
  (**(code **)(*(int *)(iVar1 + 8) + 0x140))(iVar1,uVar2,ar6,uVar3);
  Vec3_assign(ar4 + 0x80,auStack_4c,ar6,uVar3);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_4c,0xffffffff,ar6,uVar3);
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x178) = 1;
    uVar3 = 0;
    ar6 = 0xffffffff;
    uVar2 = 0x12;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x12,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,uVar3);
    *(undefined4 *)(ar4 + 0x280) = 0;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if ((iVar1 == 2) &&
       (iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,uVar3), iVar1 == 1)) {
      *(undefined4 *)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(ar4 + 300) = 0;
      FUN_8c030eb8(ar4 + 0x1fc,uVar2,ar6,uVar3);
      uVar4 = 0;
      iVar1 = ar4 + 0x80;
      Vec3_assign(ar4 + 0x14,iVar1,ar6,uVar3);
      *(undefined4 *)(ar4 + 0x178) = 0;
      FUN_8c03c314(ar4,iVar1,ar6,uVar3);
    }
    goto LAB_8c04e01e;
  }
  iVar1 = FUN_8c03f3ac(ar4 + 0xb0,uVar2,ar6,uVar3);
  if (iVar1 == 7) {
    iVar1 = *(int *)(ar4 + 0x280);
    *(int *)(ar4 + 0x280) = iVar1 + 1;
    if (4 < iVar1 + 1) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
  }
  else {
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,uVar3,ain0);
    if (cVar8 == '\0') {
      iVar1 = (int)(float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      iVar1 = (int)dVar5;
    }
    if (iVar1 == 0x4c) {
      uVar3 = 5;
      FUN_8c033474(ar4,5,ar5,in_stack_00000000);
      FUN_8c03f39c(ar7,uVar3,ar5,in_stack_00000000);
      ar6 = ar5;
      uVar3 = in_stack_00000000;
    }
  }
LAB_8c04e01e:
  Vec3_dtor(auStack_2c,0xffffffff,ar6,uVar3);
  return uVar4;
}



/* FUN_8c04e0bc @ 8c04e0bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c04e0bc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c04e0dc)(s0,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c04e0e0 @ 8c04e0e0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c04e0fc) */
/* WARNING: Removing unreachable block (ram,0x8c04e0e0) */
/* WARNING: Removing unreachable block (ram,0x8c04e0f6) */
/* WARNING: Removing unreachable block (ram,0x8c04e100) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c04e0e0(int ar4,undefined4 ar5,undefined1 *ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar6_00;
  int ar7_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 in_dr0;
  double dVar5;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  iVar1 = *(int *)(ar4 + 0x298);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(int *)(ar4 + 0x298) = *(int *)(ar4 + 0x298) + 1;
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_8c04c314(ar4,ar5,ar6,ar7_00);
    ar6_00 = ar6;
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 0x298) = *(int *)(ar4 + 0x298) + 1;
    }
  }
  else if (iVar1 == 2) {
    FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,ar7_00,auStack_38);
    FUN_8c0230f0(ar7,uVar2,ar6_00,ar7_00,auStack_48);
    FUN_8c022dac(auStack_38,auStack_48,ar6_00,ar7_00);
    if (cVar8 == '\0') {
      in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
    }
    Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7_00);
    uVar4 = (undefined4)in_dr0;
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7_00);
    if (cVar8 == '\0') {
      dVar5 = (double)CONCAT44(0x40400000,uVar4);
    }
    else {
      dVar5 = -7.937140056776321e-251;
    }
    if (cVar7 == '\0') {
      bVar6 = (float)((ulonglong)dVar5 >> 0x20) < in_fr15;
    }
    else {
      bVar6 = dVar5 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (bVar6) {
      Vec3_length(ar7,uVar2,ar6_00,ar7_00);
      if (cVar8 == '\0') {
        *(undefined4 *)(ar7 + 4) = 0;
      }
      else {
        *(ulonglong *)(ar7 + 4) = (ulonglong)dVar5 & 0xffffffff;
      }
      Vec3_scale(ar7,&DAT_8c13658c,ar6_00,ar7_00,auStack_58);
      Vec3_add(ar5,auStack_58,ar6_00,ar7_00,auStack_68);
      ar6_00 = auStack_68;
      FUN_8c057b6c(ar4,ar5,ar6_00,ar7_00);
      Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7_00);
      *(int *)(ar4 + 0x298) = *(int *)(ar4 + 0x298) + 1;
    }
    else {
      uVar3 = 0;
      *(undefined4 *)(ar4 + 0x298) = 0;
    }
  }
  else if ((iVar1 == 3) && (iVar1 = FUN_8c057e58(ar4,uVar2,ar6_00,ar7_00), iVar1 == 0)) {
    *(undefined4 *)(ar4 + 0x298) = 2;
  }
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7_00);
  return uVar3;
}



/* FUN_8c04e2d0 @ 8c04e2d0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c04e666) */
/* WARNING: Removing unreachable block (ram,0x8c04e682) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c04e2d0(int ar4,undefined4 ar5,undefined1 *ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *ar6_00;
  int ar7_00;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0;
  float fVar7;
  double dVar6;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  undefined4 in_stack_ffffff00;
  undefined4 auStack_a4 [4];
  undefined1 auStack_94 [12];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  iVar1 = *(int *)(ar4 + 0x298);
  if (iVar1 == 0) {
    uVar2 = ar5;
    ar6_00 = ar6;
    iVar1 = FUN_8c04b168(ar4,ar5,ar6,ar7_00);
    if (iVar1 == 0) {
      *(int *)(ar4 + 0x298) = *(int *)(ar4 + 0x298) + 1;
      *(undefined4 *)(ar4 + 0x40) = 5;
      FUN_8c031748(ar4,uVar2,ar6_00,ar7_00);
    }
  }
  else if (iVar1 == 1) {
    iVar1 = ar7;
    uVar2 = FUN_8c023334(ar4 + 0x14,ar7,ar6_00,ar7_00);
    *(undefined4 *)(ar4 + 0x27c) = uVar2;
    FUN_8c0230f0(ar4 + 0x14,iVar1,ar6_00,ar7_00,auStack_38);
    FUN_8c0230f0(ar7,iVar1,ar6_00,ar7_00,auStack_48);
    FUN_8c022dac(auStack_38,auStack_48,ar6_00,ar7_00);
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0x224) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(undefined8 *)(ar4 + 0x224) = in_dr0;
    }
    Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7_00);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7_00);
    FUN_8c0231c8(ar7,uVar2,ar6_00,ar7_00);
    iVar1 = ar4 + 0x14;
    FUN_8c0231c8(iVar1,uVar2,ar6_00,ar7_00);
    FUN_8c010e38(iVar1,uVar2,ar6_00,ar7_00,in_stack_ffffff00);
    fVar5 = (float)in_dr0;
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0x228) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(undefined8 *)(ar4 + 0x228) = in_dr0;
    }
    *(undefined4 *)(ar4 + 0x40) = 1;
    if (cVar9 == '\0') {
      fVar5 = *(float *)(ar4 + 0x224);
    }
    if (cVar8 == '\0' && 1.0 < fVar5) {
      uVar2 = FUN_8c023334(ar4 + 0x14,ar7,ar6_00,ar7_00);
      *(undefined4 *)(ar4 + 0x27c) = uVar2;
      if (*(int *)(ar4 + 0x27c) == 3) {
        ar7_00 = 0;
        ar6_00 = (undefined1 *)0xffffffff;
        uVar2 = 7;
        iVar1 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0);
        if (iVar1 != 6) {
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        }
      }
      else {
        ar7_00 = 0;
        ar6_00 = (undefined1 *)0xffffffff;
        uVar2 = 8;
        iVar1 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
        if (iVar1 != 6) {
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        }
      }
      if (cVar9 == '\0') {
        fVar5 = *(float *)(ar4 + 0x224);
        fVar7 = 45.0;
      }
      else {
        fVar5 = 45.0;
        fVar7 = 9.30462e-43;
      }
      if (cVar8 == '\0' && fVar7 < fVar5) {
        if (cVar9 == '\0') {
          *(undefined4 *)(ar4 + 0x224) = 0x42340000;
        }
        else {
          *(undefined8 *)(ar4 + 0x224) = 0x29842340000;
        }
      }
      *(int *)(ar4 + 0x298) = *(int *)(ar4 + 0x298) + 1;
    }
    else {
      *(undefined4 *)(ar4 + 0x280) = 0;
      *(undefined4 *)(ar4 + 0x298) = 0;
      uVar4 = 0;
    }
  }
  else if (iVar1 == 2) {
    Vec3_sub(ar6,ar5,ar6_00,ar7_00,auStack_58);
    Vec3_scale(auStack_58,&DAT_8c136590,ar6_00,ar7_00,auStack_68);
    Vec3_assign(auStack_28,auStack_68,ar6_00,ar7_00);
    Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7_00);
    puVar3 = auStack_28;
    Vec3_assign(ar4 + 0x2a8,puVar3,ar6_00,ar7_00);
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar6 = 1.34162686540996e-311;
    }
    if (cVar8 == '\0') {
      fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(ar4 + 0x28) = fVar5;
      uVar2 = 0x3f333333;
      *(undefined4 *)(ar4 + 0x278) = 0x3f333333;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_xd0;
      uVar2 = 0xb0;
      *(undefined8 *)(ar4 + 0x278) = 0xb03f333333;
    }
    CAnimBody_GetCurFrame(ar4 + 0xb0,puVar3,ar6_00,ar7_00,in_stack_ffffff00);
    if (cVar9 == '\0') {
      uVar2 = auStack_a4[0];
    }
    auStack_a4[0] = uVar2;
    FUN_8c0230f0(ar7,puVar3,ar6_00,ar7_00,auStack_78);
    puVar3 = auStack_78;
    Vec3_add(ar5,puVar3,ar6_00,ar7_00,auStack_88);
    uVar2 = get_field_1c_026dd8(ar4 + 0xb0,puVar3,ar6_00,ar7_00);
    s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
    uVar2 = get_field_1c_026dd8(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
    s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
    Vec3_set_xyz(auStack_94,uVar2,ar6_00,ar7_00);
    ar7_00 = ar4 + 0x14;
    ar6_00 = auStack_88;
    FUN_8c031eb0(ar4,ar5,ar6_00,ar7_00,auStack_a4);
    Vec3_assign(ar4 + 0x14,auStack_a4,ar6_00,ar7_00);
    Vec3_dtor(auStack_a4,0xffffffff,ar6_00,ar7_00);
    object_dtor_delete(auStack_94,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(auStack_88,0xffffffff,ar6_00,ar7_00);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_78,0xffffffff,ar6_00,ar7_00);
    iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
    if (iVar1 == 1) {
      *(int *)(ar4 + 0x298) = *(int *)(ar4 + 0x298) + -1;
    }
  }
  FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00);
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7_00);
  return uVar4;
}



/* FUN_8c04e7e0 @ 8c04e7e0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c04e7fc) */
/* WARNING: Removing unreachable block (ram,0x8c04e800) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c04e7e0(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_fr1;
  uint uVar5;
  double dVar6;
  double dVar7;
  double in_xd0;
  char cVar8;
  char cVar9;
  int *in_stack_00000000;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  dVar7 = (double)CONCAT44(0x41200000,in_fr1);
  iVar1 = ar5;
  Vec3_ctor_zero(auStack_24,ar5,ar6,ar7);
  do {
    iVar2 = *(int *)(ar4 + 300);
    if ((0xc < iVar2) || (iVar2 < 0)) goto switchD_8c04e828_caseD_4;
                    /* WARNING: Switch is manually overridden */
    switch(iVar2) {
    case 0:
      (**(code **)(*in_stack_00000000 + 0x178))(in_stack_00000000,iVar1,ar6,ar7);
      if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(0x41a00000,(int)((ulonglong)dVar7 >> 0x20));
      }
      else {
        dVar6 = -0.007812501909938874;
        in_xd0 = dVar7;
      }
      dVar7 = dVar6;
      if (cVar8 != '\0' || (float)((ulonglong)dVar6 >> 0x20) <= SUB84(dVar6,0)) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      else {
        *(undefined4 *)(ar4 + 300) = 10;
      }
      break;
    case 1:
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 2:
      ar7 = 0;
      ar6 = -1;
      uVar3 = 0x10;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0);
      uVar5 = SUB84(dVar7,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      if (cVar9 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)uVar5;
      }
      *(undefined4 *)(ar4 + 0x2b8) = 3;
      goto switchD_8c04e828_caseD_4;
    case 3:
      FUN_8c0230f0(ar4 + 0x14,iVar1,ar6,ar7,auStack_34);
      Vec3_normalize(auStack_34,iVar1,ar6,ar7);
      Vec3_scale(auStack_44,&DAT_8c136594,ar6,ar7,auStack_54);
      FUN_8c031c74(ar4,auStack_54,ar5,ar7);
      Vec3_dtor(auStack_54,0xffffffff,ar5,ar7);
      Vec3_dtor(auStack_44,0xffffffff,ar5,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_34,0xffffffff,ar5,ar7);
      FUN_8c05ae54(ar4,uVar3,ar5,ar7);
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar5,ar7);
      ar6 = ar5;
      if (iVar1 == 1) {
        uVar4 = 0;
        *(undefined4 *)(ar4 + 300) = 0;
        *(undefined4 *)(ar4 + 0x2b8) = 2;
      }
    default:
      goto switchD_8c04e828_caseD_4;
    case 10:
      Vec3_assign(ar4 + 0x54,&DAT_8c125be0,ar6,ar7);
      if (cVar9 == '\0') {
        *(undefined4 *)(ar4 + 0x54) = 0x450fc000;
        dVar7 = (double)CONCAT44(0x44688000,SUB84(dVar7,0));
        *(undefined4 *)(ar4 + 0x5c) = 0x44688000;
      }
      else {
        *(undefined8 *)(ar4 + 0x54) = 0x44688000450fc000;
        dVar7 = 6.286777928722e-312;
        *(undefined8 *)(ar4 + 0x5c) = 0x12844688000;
      }
      (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000,ar4 + 0x54,ar6,ar7);
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),*(undefined4 *)(ar4 + 0x48));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x48);
      }
      if (cVar8 == '\0') {
        dVar7 = (double)(ulonglong)(uint)(SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20));
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x58) = SUB84(dVar7,0);
      }
      else {
        *(double *)(ar4 + 0x58) = in_xd0;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 0xb:
      uVar5 = SUB84(dVar7,0);
      ar6 = ar4 + 0x54;
      iVar1 = pure_virtual_stub(ar4,ar5,ar6,ar7);
      if (iVar1 == 0) {
        ar7 = 0;
        ar6 = -1;
        uVar3 = 0x10;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        if (cVar9 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)uVar5;
        }
      }
switchD_8c04e828_caseD_4:
      Vec3_dtor(auStack_24,0xffffffff,ar6,ar7);
      return uVar4;
    case 0xc:
      FUN_8c05ae54(ar4,iVar1,ar6,ar7);
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6,ar7);
      if (iVar1 == 1) {
        uVar4 = 0;
        *(undefined4 *)(ar4 + 300) = 0;
      }
      goto switchD_8c04e828_caseD_4;
    }
  } while( true );
}



/* FUN_8c04eb14 @ 8c04eb14 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c04eb30) */
/* WARNING: Removing unreachable block (ram,0x8c04eb34) */
/* WARNING: Unknown calling convention */

uint FUN_8c04eb14(int ar4,undefined4 ar5,undefined4 ar6,undefined1 *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined1 *ar7_01;
  uint uVar3;
  undefined4 in_fr1;
  uint uVar4;
  ulonglong uVar5;
  char cVar6;
  char cVar7;
  int *in_stack_00000000;
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  uVar5 = CONCAT44(0x41200000,in_fr1);
  uVar2 = ar5;
  ar7_01 = ar7;
  Vec3_ctor_zero(auStack_20,ar5,ar6,ar7);
  do {
    uVar4 = (uint)uVar5;
    iVar1 = *(int *)(ar4 + 0x134);
    if ((0xe < iVar1) || (iVar1 < 0)) goto switchD_8c04eb5c_caseD_4;
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 0:
      iVar1 = FUN_8c057164(ar4,ar5,ar6,ar7_01);
      if (iVar1 == 0) {
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      }
      goto switchD_8c04eb5c_caseD_4;
    case 1:
      uVar5 = uVar5 & 0xffffffff;
      if (cVar7 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = uVar5;
      }
      (**(code **)(*in_stack_00000000 + 0x178))(in_stack_00000000,uVar2,ar6,ar7_01);
      if (cVar7 == '\0') {
        uVar5 = CONCAT44(0x41a00000,(int)(uVar5 >> 0x20));
      }
      else {
        uVar5 = 0x13441a00000;
      }
      if (cVar6 != '\0' || (float)(uVar5 >> 0x20) <= (float)uVar5) {
        *(undefined4 *)(ar4 + 0x134) = 10;
      }
      else {
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      }
      break;
    case 2:
      if ((*(int *)(ar4 + 0x128) == 4) && (iVar1 = rand_range(ar4,0,100,ar7_01), 0x46 < iVar1)) {
        ar7_01 = (undefined1 *)0x0;
        ar6 = 0xffffffff;
        uVar2 = 0x20;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x20,0xffffffff,0);
        *(undefined4 *)(ar4 + 0x218) = 5;
      }
      else {
        iVar1 = rand_range(ar4,0,100,ar7_01);
        if (iVar1 < 0x47) {
          ar7_01 = (undefined1 *)0x0;
          ar6 = 0xffffffff;
          uVar2 = 0x1a;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
        }
        else {
          ar7_01 = (undefined1 *)0x0;
          ar6 = 0xffffffff;
          uVar2 = 0x11;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x11,0xffffffff,0);
        }
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7_01);
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      *(undefined4 *)(ar4 + 0x2b8) = 3;
    case 3:
      iVar1 = get_field_1c_026dd8(ar4 + 0xb0,uVar2,ar6,ar7_01);
      if (iVar1 == 0x11) {
        iVar1 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,uVar2,ar6,ar7_01);
        if (iVar1 == 7) {
          *(undefined4 *)(ar4 + 0x134) = 0;
          uVar3 = 0;
        }
      }
      else if (iVar1 == 0x20) {
        *(undefined4 *)(ar4 + 0x218) = 5;
        iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7_01);
        if (iVar1 == 1) {
          *(undefined4 *)(ar4 + 0x134) = 0;
          *(undefined4 *)(ar4 + 0x2b8) = 2;
          uVar3 = 0;
        }
      }
      else {
        iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7_01);
        if (iVar1 == 1) {
          *(undefined4 *)(ar4 + 0x134) = 0;
          *(undefined4 *)(ar4 + 0x2b8) = 2;
          uVar3 = 0;
        }
      }
switchD_8c04eb5c_caseD_4:
      Vec3_dtor(auStack_20,0xffffffff,ar6,ar7_01);
      return uVar3;
    default:
      goto switchD_8c04eb5c_caseD_4;
    case 10:
      if (*(int *)(ar4 + 0x128) != 4) {
LAB_8c04ee58:
        ar7_01 = (undefined1 *)0x0;
        ar6 = 0xffffffff;
        uVar2 = 0x47;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x47,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7_01);
        *(undefined4 *)(ar4 + 0x2b8) = 3;
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
        goto switchD_8c04eb5c_caseD_b;
      }
      ar6 = 100;
      uVar2 = 0;
      iVar1 = rand_range(ar4,0,100,ar7_01);
      if (iVar1 < 0x5b) goto LAB_8c04ee58;
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 2;
      break;
    case 0xb:
switchD_8c04eb5c_caseD_b:
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7_01);
      if (iVar1 == 1) {
        *(undefined4 *)(ar4 + 0x134) = 0;
        uVar3 = 0;
        *(undefined4 *)(ar4 + 0x2b8) = 2;
      }
      goto switchD_8c04eb5c_caseD_4;
    case 0xc:
      FUN_8c03f460(auStack_2c,ar7,ar6,ar7_01);
      ar7_01 = auStack_2c;
      iVar1 = FUN_8c059fc4(ar4,ar5,ar5,ar7_01);
      free_if_nonnull_wrap_102790(auStack_2c,0xffffffff,ar5,ar7_01);
      ar6 = ar5;
      if (iVar1 == 0) {
        uVar3 = 0;
        *(undefined4 *)(ar4 + 300) = 0;
      }
      goto switchD_8c04eb5c_caseD_4;
    case 0xd:
      ar7_00 = 0;
      ar6_00 = 0xffffffff;
      uVar2 = 0x55;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x55,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
      vec3_clear(ar4 + 0x2d4,uVar2,ar6_00,ar7_00);
      vec3_clear(ar4 + 0x2a8,uVar2,ar6_00,ar7_00);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x29c) = 0;
    case 0xe:
      ar7_01 = (undefined1 *)0x1c;
      ar6 = ar5;
      iVar1 = FUN_8c058024(ar4,ar5,ar5,0x1c);
      if (iVar1 == 0) {
        *(undefined4 *)(ar4 + 300) = 0;
        vec3_clear(ar4 + 0x2d4,ar5,ar6,ar7_01);
        vec3_clear(ar4 + 0x2a8,ar5,ar6,ar7_01);
      }
      uVar3 = (uint)(iVar1 != 0);
      if (cVar7 == '\0') {
        *(undefined4 *)(ar4 + 0x2ac) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2ac) = (ulonglong)uVar4;
      }
      goto switchD_8c04eb5c_caseD_4;
    }
  } while( true );
}



/* FUN_8c04f034 @ 8c04f034 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c04f034) */
/* WARNING: Removing unreachable block (ram,0x8c04f036) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c04f034(code *ar4,undefined4 ar5,code *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  code *pcVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 ar7_00;
  undefined1 *ar4_00;
  undefined4 uVar10;
  float fVar11;
  double in_dr0;
  double dVar12;
  float fVar13;
  undefined8 in_dr14;
  double in_xd0;
  bool bVar14;
  char cVar15;
  char cVar16;
  undefined4 in_stack_00000000;
  code *in_stack_00000004;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [12];
  undefined1 auStack_114 [12];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [12];
  undefined1 auStack_ec [16];
  undefined1 auStack_dc [12];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [12];
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [12];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  double dStack_64;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [20];
  
  cVar16 = '\0';
  cVar15 = '\0';
  uVar10 = 1;
  pcVar9 = ar6;
  uVar7 = ar7;
  uVar8 = ar7;
  Vec3_ctor_copy(auStack_2c,ar7,ar6,ar7);
  Vec3_ctor_zero(auStack_3c,ar7,pcVar9,uVar7);
  Vec3_ctor_zero(auStack_4c,ar7,pcVar9,uVar7);
  Vec3_ctor_zero(auStack_5c,ar7,pcVar9,uVar7);
  pcVar5 = Vec3_ctor_zero;
  Vec3_ctor_zero(&uStack_6c,Vec3_ctor_zero,pcVar9,uVar7);
  FUN_8c023dac(auStack_78,pcVar5,pcVar9,uVar7);
  FUN_8c023dac(auStack_84,pcVar5,pcVar9,uVar7);
  iVar1 = get_field_6c_028cc4(ar5,pcVar5,pcVar9,uVar7);
  if (iVar1 == 0) {
    uStack_194 = 2;
    free_if_nonnull_wrap_016ac4(auStack_84,0xffffffff,pcVar9,uVar7);
    free_if_nonnull_wrap_016ac4(auStack_78,0xffffffff,pcVar9,uVar7);
    Vec3_dtor(&uStack_6c,0xffffffff,pcVar9,uVar7);
    Vec3_dtor(auStack_5c,0xffffffff,pcVar9,uVar7);
    Vec3_dtor(auStack_4c,0xffffffff,pcVar9,uVar7);
    Vec3_dtor(auStack_3c,0xffffffff,pcVar9,uVar7);
    Vec3_dtor(auStack_2c,0xffffffff,pcVar9,uVar7);
    return uStack_194;
  }
  pcVar5 = get_field_6c_028cc4;
  uVar2 = get_field_6c_028cc4(ar5,get_field_6c_028cc4,pcVar9,uVar7);
  FUN_8c02f670(uVar2,pcVar5,pcVar9,uVar7,auStack_94);
  Vec3_assign(auStack_3c,auStack_94,pcVar9,uVar7);
  Vec3_dtor(auStack_94,0xffffffff,pcVar9,uVar7);
  pcVar5 = get_field_6c_028cc4;
  iVar1 = get_field_6c_028cc4(ar5,get_field_6c_028cc4,pcVar9,uVar7);
  iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,pcVar5,pcVar9,uVar7);
  dVar12 = in_dr0;
  if (iVar1 != 0x13) {
    iVar1 = get_field_6c_028cc4(ar5,pcVar5,pcVar9,uVar7);
    iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,pcVar5,pcVar9,uVar7);
    dVar12 = in_dr0;
    if (iVar1 != 0x18) goto LAB_8c04f31c;
  }
  (**(code **)(**(int **)(ar4 + 0x244) + 0x128))(*(int **)(ar4 + 0x244),auStack_3c,pcVar9,uVar7);
  if (cVar16 == '\0') {
    in_dr0 = (double)CONCAT44(0x43340000,(int)((ulonglong)dVar12 >> 0x20));
  }
  else {
    in_dr0 = 4.84372090138479e-312;
    in_xd0 = dVar12;
  }
  if (cVar15 == '\0' && SUB84(in_dr0,0) < (float)((ulonglong)in_dr0 >> 0x20)) {
    uStack_198 = 2;
    free_if_nonnull_wrap_016ac4(auStack_84,0xffffffff,pcVar9,uVar7);
    free_if_nonnull_wrap_016ac4(auStack_78,0xffffffff,pcVar9,uVar7);
    Vec3_dtor(&uStack_6c,0xffffffff,pcVar9,uVar7);
    Vec3_dtor(auStack_5c,0xffffffff,pcVar9,uVar7);
    uVar8 = 0xffffffff;
    Vec3_dtor(auStack_4c,0xffffffff,0xffffffff,uVar7);
    Vec3_dtor(auStack_3c,0xffffffff,uVar8,uVar7);
    Vec3_dtor(auStack_2c,0xffffffff,uVar8,uVar7);
    return uStack_198;
  }
LAB_8c04f31c:
  uVar2 = get_field_6c_028cc4(ar5,get_field_6c_028cc4,pcVar9,uVar7);
  FUN_8c02f670(uVar2,FUN_8c02f670,pcVar9,uVar7,auStack_a4);
  pcVar5 = (code *)auStack_4c;
  pcVar9 = Vec3_assign;
  Vec3_assign(pcVar5,auStack_a4,Vec3_assign,pcVar5);
  Vec3_dtor(auStack_a4,0xffffffff,pcVar9,pcVar5);
  iVar1 = (**(code **)(**(int **)(ar4 + 0x244) + 0x104))(*(int **)(ar4 + 0x244),2,pcVar9,pcVar5);
  Vec3_assign(auStack_5c,iVar1 + 4,pcVar9,pcVar5);
  do {
    uVar7 = (undefined4)in_dr14;
    iVar1 = *(int *)(ar4 + 300);
    if ((9 < iVar1) || (iVar1 < 0)) goto switchD_8c04f3ac_default;
    pcVar6 = (code *)(&switchD_8c04f3ac::switchdataD_8c04f3e4)[iVar1];
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 0:
      *(undefined4 *)(ar4 + 0x178) = 1;
      pcVar9 = ar4 + 0x34c;
      iVar1 = FUN_8c055c38(ar4,ar6,pcVar9,in_stack_00000004);
      pcVar5 = in_stack_00000004;
      if (iVar1 == 0) {
        vec3_clear(ar4 + 0x2a8,ar6,pcVar9,in_stack_00000004);
        *(undefined4 *)(ar4 + 0x178) = 0;
        pcVar9 = (code *)0x12c;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        pcVar5 = in_stack_00000004;
      }
      goto switchD_8c04f3ac_default;
    case 1:
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 2:
      pcVar5 = (code *)(*(int *)(ar4 + 300) + 1);
      *(code **)(ar4 + 300) = pcVar5;
      break;
    case 4:
      goto switchD_8c04f3ac_caseD_4;
    case 5:
      CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar6,pcVar9,pcVar5,uVar8);
      iVar1 = get_field_1c_026dd8(ar4 + 0xb0,pcVar6,pcVar9,pcVar5);
      iVar1 = *(int *)(ar4 + 0x128) + (iVar1 + -0x16) * 2;
      if (iVar1 == 3) {
        uVar8 = 0x5e;
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,0x5e,pcVar9,pcVar5);
        puVar3 = (undefined4 *)deref_u32(uVar7,uVar8,pcVar9,pcVar5);
        FUN_8c034384(ar4 + 0xb0,*(undefined4 *)*puVar3,pcVar9,pcVar5);
        Vec3_assign(auStack_3c,auStack_b4,pcVar9,pcVar5);
        Vec3_dtor(auStack_b4,0xffffffff,pcVar9,pcVar5);
        uVar8 = 0x5e;
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,0x5e,pcVar9,pcVar5);
        piVar4 = (int *)deref_u32(uVar7,uVar8,pcVar9,pcVar5);
        FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(*piVar4 + 8),pcVar9,pcVar5);
        FUN_8c023e04(auStack_84,auStack_c0,pcVar9,pcVar5);
        free_if_nonnull_wrap_016ac4(auStack_c0,0xffffffff,pcVar9,pcVar5);
      }
      else if (iVar1 == 4) {
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,0x5f,pcVar9,pcVar5);
        puVar3 = (undefined4 *)deref_u32(uVar7,uVar7,pcVar9,pcVar5);
        FUN_8c034384(ar4 + 0xb0,*(undefined4 *)*puVar3,pcVar9,pcVar5);
        Vec3_assign(auStack_3c,auStack_d0,pcVar9,pcVar5);
        Vec3_dtor(auStack_d0,0xffffffff,pcVar9,pcVar5);
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,0x5f,pcVar9,pcVar5);
        piVar4 = (int *)deref_u32(uVar7,uVar7,pcVar9,pcVar5);
        FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(*piVar4 + 8),pcVar9,pcVar5);
        FUN_8c023e04(auStack_84,auStack_dc,pcVar9,pcVar5);
        free_if_nonnull_wrap_016ac4(auStack_dc,0xffffffff,pcVar9,pcVar5);
      }
      else if (iVar1 == 5) {
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,0x5e,pcVar9,pcVar5);
        puVar3 = (undefined4 *)deref_u32(uVar7,uVar7,pcVar9,pcVar5);
        FUN_8c034384(ar4 + 0xb0,*(undefined4 *)*puVar3,pcVar9,pcVar5);
        Vec3_assign(auStack_3c,auStack_ec,pcVar9,pcVar5);
        Vec3_dtor(auStack_ec,0xffffffff,pcVar9,pcVar5);
        uVar8 = 0xb0;
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,0x5e,0xb0,pcVar5);
        piVar4 = (int *)deref_u32(uVar7,uVar7,uVar8,pcVar5);
        FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(*piVar4 + 8),uVar8,pcVar5);
        pcVar5 = FUN_8c023e04;
        FUN_8c023e04(auStack_84,auStack_f8,uVar8,FUN_8c023e04);
        pcVar9 = (code *)0xffffffff;
        free_if_nonnull_wrap_016ac4(auStack_f8,0xffffffff,0xffffffff,pcVar5);
      }
      else if (iVar1 == 6) {
        uVar8 = 0x5f;
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,0x5f,pcVar9,pcVar5);
        puVar3 = (undefined4 *)deref_u32(uVar7,uVar8,pcVar9,pcVar5);
        FUN_8c034384(ar4 + 0xb0,*(undefined4 *)*puVar3,pcVar9,pcVar5);
        Vec3_assign(auStack_3c,auStack_108,pcVar9,pcVar5);
        Vec3_dtor(auStack_108,0xffffffff,pcVar9,pcVar5);
        uVar8 = 0x5f;
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,0x5f,pcVar9,pcVar5);
        puVar3 = (undefined4 *)deref_u32(uVar7,uVar8,pcVar9,pcVar5);
        pcVar9 = (code *)*puVar3;
        FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(pcVar9 + 8),pcVar9,pcVar5);
        FUN_8c023e04(auStack_84,auStack_114,pcVar9,pcVar5);
        free_if_nonnull_wrap_016ac4(auStack_114,0xffffffff,pcVar9,pcVar5);
      }
      vec3_copy_8c02b5fc(auStack_120,in_stack_00000000,pcVar9,pcVar5);
      ar4_00 = auStack_3c;
      pcVar9 = FUN_8c023484;
      FUN_8c023484(ar4_00,auStack_120,FUN_8c023484,ar4_00,auStack_130);
      Vec3_assign(auStack_3c,auStack_130,pcVar9,ar4_00);
      Vec3_dtor(auStack_130,0xffffffff,pcVar9,ar4_00);
      pcVar5 = object_dtor_delete;
      object_dtor_delete(auStack_120,0xffffffff,pcVar9,object_dtor_delete);
      pcVar9 = (code *)auStack_3c;
      FUN_8c023aa0(pcVar9,ar6,pcVar9,pcVar5);
      uVar7 = get_field_6c_028cc4(ar5,ar6,pcVar9,pcVar5);
      FUN_8c036988(uVar7,ar6,pcVar9,pcVar5);
      uVar7 = get_field_6c_028cc4(ar5,ar6,pcVar9,pcVar5);
      FUN_8c038a10(uVar7,ar6,pcVar9,pcVar5);
      uVar7 = 0xb0;
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,pcVar9,pcVar5);
      if (iVar1 == 1) {
        FUN_8c03f3e8(ar5,uVar7,pcVar9,pcVar5);
        FUN_8c030eb8(ar4 + 0x1fc,0x1fc,pcVar9,pcVar5);
        *(undefined4 *)(ar4 + 0x2b8) = 2;
        uVar10 = 0;
        *(undefined4 *)(ar4 + 300) = 0;
        uVar8 = 0xffffffff;
        uVar7 = 0x1a;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
        pcVar5 = s_CAnimBody_SetFrame_033e6e;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar8,s_CAnimBody_SetFrame_033e6e);
        pcVar9 = (code *)0xa;
        iVar1 = rand_range(ar4,0,10,pcVar5);
        if (iVar1 < 6) {
          pcVar5 = (code *)0x0;
          pcVar9 = (code *)0xffffffff;
          uVar7 = 0x1e;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1e,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,pcVar9,pcVar5);
          *(undefined4 *)(ar4 + 0x2b8) = 3;
        }
      }
      goto switchD_8c04f3ac_default;
    case 6:
      iVar1 = get_field_6c_028cc4(ar5,pcVar6,pcVar9,pcVar5);
      iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,pcVar6,pcVar9,pcVar5);
      if (iVar1 == 0x13) {
        Vec3_assign(&uStack_6c,auStack_5c,pcVar9,pcVar5);
      }
      else {
        Vec3_assign(&uStack_6c,auStack_4c,pcVar9,pcVar5);
      }
      Vec3_assign(ar4 + 0x248,ar6,pcVar9,pcVar5);
      if (cVar16 == '\0') {
        dVar12 = (double)CONCAT44(0x43480000,dStack_64._0_4_);
      }
      else {
        dVar12 = 6.37156434669702e-312;
        in_xd0 = dStack_64;
      }
      if (cVar15 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar16 == '\0') {
        *(float *)(ar4 + 0x250) = fVar11;
        in_dr0 = (double)CONCAT44(0x43480000,uStack_6c);
      }
      else {
        *(double *)(ar4 + 0x250) = in_xd0;
        in_xd0 = (double)CONCAT44(uStack_68,uStack_6c);
        in_dr0 = 6.37156434669702e-312;
      }
      if (cVar15 == '\0') {
        in_dr0 = (double)(ulonglong)(uint)(SUB84(in_dr0,0) - (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr0 = in_dr0 - in_dr0;
      }
      if (cVar16 == '\0') {
        *(int *)(ar4 + 0x248) = SUB84(in_dr0,0);
      }
      else {
        *(double *)(ar4 + 0x248) = in_xd0;
      }
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 700) = 1;
      pcVar6 = ar6;
      Vec3_sub(&uStack_6c,ar6,pcVar9,pcVar5,auStack_140);
      Vec3_normalize(auStack_140,pcVar6,pcVar9,pcVar5);
      Vec3_assign(ar4 + 0x54,auStack_150,pcVar9,pcVar5);
      Vec3_dtor(auStack_150,0xffffffff,pcVar9,pcVar5);
      Vec3_dtor(auStack_140,0xffffffff,pcVar9,pcVar5);
    case 7:
      fVar11 = SUB84(in_dr0,0);
      pcVar9 = ar4 + 0x248;
      pcVar6 = ar6;
      iVar1 = FUN_8c04c314(ar4,ar6,pcVar9,pcVar5);
      if (iVar1 == 0) {
        iVar1 = get_field_6c_028cc4(ar5,pcVar6,pcVar9,pcVar5);
        iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,*(int *)(iVar1 + 8),pcVar9,pcVar5);
        if (iVar1 == 0x13) {
          Vec3_assign(&uStack_6c,auStack_5c,pcVar9,pcVar5);
          if (cVar16 == '\0') {
            dVar12 = (double)CONCAT44(0x42a00000,dStack_64._0_4_);
          }
          else {
            dVar12 = 1.881185915789446e-53;
            in_xd0 = dStack_64;
          }
          if (cVar15 == '\0') {
            fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar12 + dVar12,0);
          }
          dVar12 = in_xd0;
          if (cVar16 == '\0') {
            dStack_64 = (double)CONCAT44(dStack_64._4_4_,fVar11);
            dVar12 = dStack_64;
          }
        }
        else {
          Vec3_assign(&uStack_6c,auStack_4c,pcVar9,pcVar5);
          dVar12 = dStack_64;
        }
        dStack_64 = dVar12;
        Vec3_sub(&uStack_6c,ar6,pcVar9,pcVar5,auStack_160);
        Vec3_assign(ar4 + 0x54,auStack_160,pcVar9,pcVar5);
        Vec3_dtor(auStack_160,0xffffffff,pcVar9,pcVar5);
        if (cVar16 == '\0') {
          *(undefined4 *)(ar4 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x58) = (ulonglong)(uint)fVar11;
        }
        Vec3_length(ar4 + 0x54,Vec3_length,pcVar9,pcVar5);
        if (cVar16 == '\0') {
          dVar12 = (double)CONCAT44(0x42480000,*(undefined4 *)(ar4 + 0x48));
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x48);
          dVar12 = 4.67388482346422e-312;
        }
        if (cVar15 == '\0') {
          fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar11 = SUB84(dVar12 + dVar12,0);
        }
        dVar12 = in_xd0;
        if (cVar16 == '\0') {
          uStack_1a0 = (double)CONCAT44(uStack_1a0._4_4_,fVar11);
          dVar12 = uStack_1a0;
        }
        uStack_1a0 = dVar12;
        Vec3_scale(ar4 + 0x54,&uStack_1a0,pcVar9,pcVar5,auStack_170);
        Vec3_sub(&uStack_6c,auStack_170,pcVar9,pcVar5,auStack_180);
        Vec3_assign(ar4 + 0x248,auStack_180,pcVar9,pcVar5);
        Vec3_dtor(auStack_180,0xffffffff,pcVar9,pcVar5);
        Vec3_dtor(auStack_170,0xffffffff,pcVar9,pcVar5);
        if (cVar16 == '\0') {
          *(undefined4 *)(ar4 + 0x24c) = 0x43340000;
        }
        else {
          *(undefined8 *)(ar4 + 0x24c) = 0x12c43340000;
        }
        *(undefined4 *)(ar4 + 0x40) = 5;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 700) = 1;
      }
switchD_8c04f3ac_default:
      uStack_1a0._4_4_ = uVar10;
      free_if_nonnull_wrap_016ac4(auStack_84,0xffffffff,pcVar9,pcVar5);
      free_if_nonnull_wrap_016ac4(auStack_78,0xffffffff,pcVar9,pcVar5);
      Vec3_dtor(&uStack_6c,0xffffffff,pcVar9,pcVar5);
      Vec3_dtor(auStack_5c,0xffffffff,pcVar9,pcVar5);
      Vec3_dtor(auStack_4c,0xffffffff,pcVar9,pcVar5);
      pcVar5 = Vec3_dtor;
      Vec3_dtor(auStack_3c,0xffffffff,pcVar9,Vec3_dtor);
      Vec3_dtor(auStack_2c,0xffffffff,0xffffffff,pcVar5);
      return uStack_1a0._4_4_;
    case 8:
      Vec3_ctor_copy(auStack_190,ar4 + 0x54,pcVar9,pcVar5);
      pcVar5 = (code *)auStack_190;
      pcVar9 = ar4 + 0x248;
      iVar1 = FUN_8c04e0e0(ar4,ar6,pcVar9,pcVar5);
      uVar7 = 0xffffffff;
      Vec3_dtor(auStack_190,0xffffffff,pcVar9,pcVar5);
      if (iVar1 == 0) {
        iVar1 = get_field_6c_028cc4(ar5,uVar7,pcVar9,pcVar5);
        iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,iVar1,pcVar9,pcVar5);
        if (iVar1 == 0x13) {
          pcVar5 = (code *)0x0;
          pcVar9 = (code *)0xffffffff;
          uVar7 = 0x1a;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,pcVar9,pcVar5);
          *(undefined4 *)(ar4 + 0x2b8) = 3;
          *(undefined4 *)(ar4 + 700) = 0;
          FUN_8c030f2c(ar4 + 0x1fc,0,pcVar9,pcVar5);
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
        else {
          pcVar5 = (code *)0x0;
          uVar8 = 0xffffffff;
          uVar7 = 0x17;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x17,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar8,pcVar5);
          *(undefined4 *)(ar4 + 0x2b8) = 3;
          *(undefined4 *)(ar4 + 700) = 0;
          pcVar9 = (code *)0x1fc;
          FUN_8c030f2c(ar4 + 0x1fc,ar4 + 0x1fc,0x1fc,pcVar5);
          *(undefined4 *)(ar4 + 300) = 4;
        }
      }
      if (*(int *)(ar4 + 0x298) == 1) {
        FUN_8c030f2c(ar4 + 0x1fc,0x298,pcVar9,pcVar5);
      }
      goto switchD_8c04f3ac_default;
    case 9:
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar4 + 0xb0,pcVar9,pcVar5);
      fVar11 = (float)((ulonglong)in_dr0 >> 0x20);
      pcVar5 = FUN_8c022fc0;
      FUN_8c022fc0(auStack_4c,auStack_5c,pcVar9,FUN_8c022fc0);
      if (cVar16 == '\0') {
        fVar13 = 150.0;
      }
      else {
        fVar11 = 150.0;
        fVar13 = -1.0;
      }
      if (cVar15 == '\0' && fVar11 < fVar13) {
        uVar2 = 0;
        uVar8 = 0xffffffff;
        uVar7 = 0x16;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x16,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar8,uVar2);
        pcVar5 = (code *)0x3;
        *(undefined4 *)(ar4 + 0x2b8) = 3;
        pcVar9 = (code *)0x2bc;
        *(undefined4 *)(ar4 + 700) = 0;
        FUN_8c030f2c(ar4 + 0x1fc,uVar7,700,3);
        *(undefined4 *)(ar4 + 300) = 4;
      }
      goto switchD_8c04f3ac_default;
    }
    pcVar9 = (code *)auStack_78;
    pcVar6 = FUN_8c023df4;
    FUN_8c023df4(pcVar9,FUN_8c023df4,pcVar9,pcVar5);
    iVar1 = get_field_6c_028cc4(ar5,pcVar6,pcVar9,pcVar5);
    iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,pcVar6,pcVar9,pcVar5);
    uVar7 = (undefined4)in_dr14;
    if (iVar1 == 0x18) {
      ar7_00 = 0;
      uVar2 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x17,0xffffffff,0);
      *(undefined4 *)(ar4 + 0x2b8) = 3;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,3,uVar2,ar7_00);
      FUN_8c030f2c(ar4 + 0x1fc,FUN_8c030f2c,uVar2,ar7_00);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      pcVar6 = ar4;
switchD_8c04f3ac_caseD_4:
      pcVar5 = ar4 + 0xb0;
      pcVar9 = s_CAnimBody_AdvanceFrame_033ba0;
      s_CAnimBody_AdvanceFrame_033ba0(pcVar5,pcVar6,s_CAnimBody_AdvanceFrame_033ba0,pcVar5);
      CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar6,pcVar9,pcVar5,uVar8);
      uVar8 = SUB84(in_dr0,0);
      if (cVar16 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),uVar7);
        dVar12 = (double)CONCAT44(0x41a00000,uVar8);
      }
      else {
        dVar12 = 1.6981406014198e-311;
      }
      if (cVar15 == '\0') {
        bVar14 = (float)((ulonglong)in_dr0 >> 0x20) < (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        bVar14 = in_dr0 < dVar12;
      }
      if ((!bVar14) && (*(int *)(ar4 + 800) == 0)) {
        pcVar5 = *(code **)(ar4 + 0x244);
        FUN_8c033474(ar4,0x1a,ar6,pcVar5);
        *(undefined4 *)(ar4 + 800) = 1;
        pcVar9 = ar6;
      }
      if (cVar16 == '\0') {
        dVar12 = (double)CONCAT44(0x41b00000,SUB84(dVar12,0));
      }
      else {
        dVar12 = 5.444735897974836e+158;
      }
      if (cVar15 == '\0') {
        bVar14 = (float)((ulonglong)in_dr0 >> 0x20) < (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        bVar14 = in_dr0 < dVar12;
      }
      if (!bVar14) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        pcVar5 = ar4;
      }
      goto switchD_8c04f3ac_default;
    }
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(undefined4 *)(ar4 + 300) = 6;
  } while( true );
}


