#include "../decls.h"
undefined4 FUN_8c04c314_def(int ar4,code *ar5,code *ar6,undefined4 ar7)

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
      dVar15 = (double)CONCAT44(0x41100000,(*(uint*)((uchar*)&dStack_30+0)));
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
      dStack_30 = (double)CONCAT44((*(uint*)((uchar*)&dStack_30+4)),SUB84(dVar15,0));
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

__asm__(".globl _FUN_8c04c314\n.set _FUN_8c04c314, _FUN_8c04c314_def\n");
