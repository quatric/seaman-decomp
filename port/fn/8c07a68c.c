#include "../decls.h"
undefined4 FUN_8c07a68c_def(double *ar4,double *ar5,double *ar6,code *ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  double *pdVar4;
  code *ar5_00;
  double *ar6_00;
  undefined4 ar7_00;
  double in_dr0;
  undefined4 *puVar7;
  double dVar5;
  float fVar8;
  double dVar6;
  double in_xd0;
  char cVar9;
  char cVar10;
  int *in_stack_00000000;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 auStack_84 [4];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  
  cVar10 = '\0';
  cVar9 = '\0';
  pdVar4 = ar5;
  ar6_00 = ar6;
  Vec3_ctor_zero(&fStack_24,ar5,ar6,ar7);
  fVar3 = *(float *)(ar4 + 0xd);
  if ((5 < (int)fVar3) || ((int)fVar3 < 0)) goto switchD_8c07a6ce_default;
                    
  switch(fVar3) {
  case 0.0:
    *(float *)(ar4 + 0x2f) = 0.0;
    FUN_8c030f2c((float *)((int)ar4 + 0x1fc),pdVar4,ar6_00,ar7);
    pdVar4 = ar4 + 0x48;
    dVar6 = (double)((ulonglong)in_dr0 & 0xffffffff);
    if (cVar10 == '\0') {
      *(float *)pdVar4 = 0.0;
    }
    else {
      *pdVar4 = dVar6;
    }
    (**(code **)(*in_stack_00000000 + 0x184))(in_stack_00000000,pdVar4,0x240,ar7);
    fVar3 = (float)((ulonglong)dVar6 >> 0x20);
    if (cVar10 == '\0') {
      puVar7 = (undefined4 *)0x44610000;
      dVar6 = in_xd0;
    }
    else {
      fVar3 = 900.0;
      puVar7 = &DAT_8c125be0;
    }
    if (cVar9 == '\0' && fVar3 < (float)(uint)puVar7) {
      if (cVar10 == '\0') {
        fVar3 = *(float *)ar5;
      }
      else {
        dVar6 = *ar5;
        fVar3 = 0.0;
      }
      if (cVar9 != '\0' || 0.0 <= fVar3) {
        if (cVar10 == '\0') {
          dVar5 = 1.2986507827891524e+23;
        }
        else {
          dVar6 = 0.0;
          dVar5 = 3.051758593897169e-05;
        }
        if (cVar9 == '\0') {
          fVar3 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar5 + dVar5,0);
        }
        if (cVar10 == '\0') {
          dVar5 = (double)CONCAT44(0x3f000000,fVar3);
        }
        else {
          dVar5 = -0.007812501833541319;
        }
        if (cVar9 == '\0') {
          fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar10 == '\0') {
          dVar5 = (double)CONCAT44(*(float *)(ar5 + 1),fVar3);
        }
        else {
          dVar5 = ar5[1];
        }
        if (cVar9 == '\0') {
          fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar5 - dVar5,0);
        }
        if (cVar10 == '\0') {
          *(float *)((int)ar4 + 0x2c4) = fVar3;
        }
        else {
          *(double *)((int)ar4 + 0x2c4) = dVar6;
        }
      }
    }
    ar7_00 = 0;
    uVar2 = 0xffffffff;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,8,0xffffffff,0);
    FUN_8c031b68(ar4,(int)*(float *)(ar4 + 0x25) * 0x18 + -0x73d7f14c,uVar2,ar7_00);
    pdVar4 = ar4 + 0x14;
    if (cVar10 == '\0') {
      in_dr0 = (double)CONCAT44(0x43160000,*(float *)pdVar4);
      in_xd0 = dVar6;
    }
    else {
      in_xd0 = *pdVar4;
      in_dr0 = -8.625516875868561e-251;
    }
    if (cVar9 == '\0') {
      fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44(fVar3,SUB84(in_dr0,0) * fVar3);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (cVar10 == '\0') {
      *(float *)(ar4 + 0x14) = SUB84(in_dr0,0);
    }
    else {
      ar4[0x14] = in_xd0;
    }
    FUN_8c03c314(ar4,pdVar4,0xa0,ar7_00);
    ar6_00 = ar4 + 0xd;
    *(int *)(ar4 + 0xd) = (int)*(float *)ar6_00 + 1;
  case 1.4013e-45:
    ar7 = s_CAnimBody_AdvanceFrame_033ba0;
    s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,pdVar4,ar6_00,s_CAnimBody_AdvanceFrame_033ba0);
    ar6_00 = (double *)((int)ar4 + 100);
    fVar3 = *(float *)ar6_00;
    if (fVar3 == 0.0) {
      Vec3_normalize((float *)((int)ar4 + 4),0,ar6_00,ar7);
      Vec3_assign((float *)((int)ar4 + 0x14),auStack_34,ar6_00,ar7);
      fVar3 = -NAN;
      Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
    }
    if (ar6 != (double *)0x3) {
      if (ar6 == (double *)0x1) {
        *(float *)(ar4 + 0xd) = 4.2039e-45;
        Vec3_assign(ar4 + 0x46,(float *)((int)ar4 + 0x14),ar6_00,ar7);
switchD_8c07a6ce_caseD_3:
        in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
        if (cVar10 == '\0') {
          *(float *)(ar4 + 5) = 0.0;
        }
        else {
          ar4[5] = in_dr0;
        }
        pdVar4 = ar4 + 0x46;
        Vec3_assign(&fStack_24,pdVar4,ar6_00,ar7);
        fStack_20 = SUB84(in_dr0,0);
        if (cVar10 == '\0') {
          fStack_20 = *(float *)(ar4 + 0x46);
        }
        else {
          in_xd0 = ar4[0x46];
        }
        if (fStack_20 == 0.0) {
          if (cVar10 == '\0') {
            fStack_20 = *(float *)(ar4 + 0x47);
          }
          else {
            in_xd0 = ar4[0x47];
          }
          if ((fStack_20 == 0.0) && (fStack_24 = fStack_20, cVar10 == '\0')) {
            fStack_24 = 1.0;
          }
        }
        if (cVar10 == '\0') {
          fStack_20 = 0.0;
        }
        else {
          uStack_1c = 0;
        }
        uVar2 = Vec3_length(&fStack_24,pdVar4,ar6_00,ar7);
        Vec3_assign(&fStack_24,uVar2,ar6_00,ar7);
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(0x3e4ccccd,*(float *)(ar4 + 0x48));
        }
        else {
          in_xd0 = ar4[0x48];
          dVar6 = 3.57011700451707e-312;
        }
        if (cVar9 == '\0') {
          fVar3 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar6 + dVar6,0);
        }
        if (cVar10 == '\0') {
          *(float *)(ar4 + 0x48) = fVar3;
          fVar3 = *(float *)(ar4 + 0x48);
        }
        else {
          ar4[0x48] = in_xd0;
          in_xd0 = ar4[0x48];
        }
        if (cVar9 != '\0' || 1.0 <= fVar3) {
          if (cVar10 == '\0') {
            *(float *)(ar4 + 0x48) = 1.0;
          }
          else {
            ar4[0x48] = (double)CONCAT44(0x3f800000,fVar3);
          }
        }
        if (cVar10 == '\0') {
          fVar3 = *(float *)(ar4 + 0x48);
        }
        else {
          in_xd0 = ar4[0x48];
        }
        if (cVar9 == '\0') {
          dVar6 = (double)CONCAT44(1.0 - fVar3,fVar3);
        }
        else {
          dVar6 = (double)CONCAT44(0x3f800000,fVar3) - (double)CONCAT44(0x3f800000,fVar3);
        }
        uVar2 = (undefined4)((ulonglong)dVar6 >> 0x20);
        uStack_88 = uVar2;
        if (cVar10 != '\0') {
          uStack_88 = SUB84(dVar6,0);
          auStack_84[0] = uVar2;
        }
        Vec3_scale(ar4 + 0x46,&uStack_88,ar6_00,ar7,auStack_44);
        if (cVar10 == '\0') {
          fStack_8c = *(float *)(ar4 + 0x48);
          dVar6 = (double)CONCAT44(fStack_8c,SUB84(dVar6,0));
        }
        else {
          dVar6 = ar4[0x48];
          fStack_8c = SUB84(dVar6,0);
          uStack_88 = (undefined4)((ulonglong)dVar6 >> 0x20);
        }
        fVar3 = SUB84(dVar6,0);
        Vec3_scale(&fStack_24,&fStack_8c,ar6_00,ar7,auStack_54);
        Vec3_add(auStack_44,auStack_54,ar6_00,ar7,auStack_64);
        Vec3_assign((float *)((int)ar4 + 0x14),auStack_64,ar6_00,ar7);
        Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
        if (cVar10 == '\0') {
          fVar3 = *(float *)(ar4 + 0x48);
        }
        else {
          in_xd0 = ar4[0x48];
        }
        if (fVar3 == 1.0) {
          ar7 = (code *)0x0;
          ar6_00 = (double *)0xffffffff;
          uVar2 = 0x13;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0x13,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,uVar2,ar6_00,ar7);
          dVar6 = (double)(ulonglong)(uint)fVar3;
          if (cVar10 == '\0') {
            *(float *)(ar4 + 0x48) = 0.0;
          }
          else {
            ar4[0x48] = dVar6;
          }
          *(float *)((int)ar4 + 100) = 1.4013e-45;
          *(float *)(ar4 + 0xd) = 0.0;
          FUN_8c0230f0((float *)((int)ar4 + 0x14),uVar2,ar6_00,ar7,auStack_74);
          Vec3_assign((float *)((int)ar4 + 0x14),auStack_74,ar6_00,ar7);
          uVar2 = 0xffffffff;
          Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
          (**(code **)((int)*(float *)ar4 + 0x2c))(ar4,uVar2,ar6_00,ar7);
          FUN_8c031b68(ar4,(int)*(float *)(ar4 + 0x25) * 0x18 + -0x73d7f14c,ar6_00,ar7);
          pdVar4 = ar5;
          (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000,ar5,ar6_00,ar7);
          if (cVar10 == '\0') {
            dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(float *)((int)ar4 + 0x7c));
          }
          else {
            in_xd0 = *(double *)((int)ar4 + 0x7c);
          }
          if (cVar9 == '\0') {
            fVar3 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
          }
          else {
            fVar3 = SUB84(dVar6 + dVar6,0);
          }
          if (cVar10 == '\0') {
            *(float *)((int)ar5 + 4) = fVar3;
          }
          else {
            *(double *)((int)ar5 + 4) = in_xd0;
          }
          FUN_8c030f2c((float *)((int)ar4 + 0x1fc),pdVar4,ar6_00,ar7);
        }
      }
      else if (ar6 == (double *)0x2) {
        *(float *)(ar4 + 0x56) = 0.0;
        *(float *)((int)ar4 + 0x2b4) = 0.0;
        *(float *)(ar4 + 0xd) = 5.60519e-45;
      }
      else {
        Vec3_length_sq((float *)((int)ar4 + 4),fVar3,ar6_00,ar7);
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(0x3f4ccccd,(int)((ulonglong)in_dr0 >> 0x20));
        }
        else {
          dVar6 = 6.2863545074132e-312;
          in_xd0 = in_dr0;
        }
        if (cVar9 == '\0') {
          fVar3 = (float)((ulonglong)dVar6 >> 0x20);
          in_dr0 = (double)CONCAT44(fVar3,SUB84(dVar6,0) * fVar3);
        }
        else {
          in_dr0 = dVar6 * dVar6;
        }
        if (cVar10 == '\0') {
          *(float *)(ar4 + 5) = SUB84(in_dr0,0);
        }
        else {
          ar4[5] = in_xd0;
        }
        FUN_8c031b68(ar4,(int)*(float *)(ar4 + 0x25) * 0x18 + -0x73d7f14c,ar6_00,ar7);
        *(float *)((int)ar4 + 0x44) = 1.4013e-45;
        *(float *)(ar4 + 8) = 7.00649e-45;
        *(int *)(ar4 + 0xd) = (int)*(float *)(ar4 + 0xd) + 1;
        pdVar4 = ar4;
switchD_8c07a6ce_caseD_2:
        (**(code **)(*in_stack_00000000 + 0x184))(in_stack_00000000,pdVar4,ar6_00,ar7);
        fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
        if (cVar10 == '\0') {
          fVar8 = 900.0;
          in_dr0 = in_xd0;
        }
        else {
          fVar3 = 900.0;
          fVar8 = 9.64093e-43;
        }
        if (cVar9 != '\0' || fVar8 <= fVar3) {
          s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,pdVar4,ar6_00,ar7);
          FUN_8c032ab0(ar4,pdVar4,ar6_00,ar7);
          if (cVar10 == '\0') {
            fVar3 = *(float *)(ar4 + 5);
          }
          else {
            in_dr0 = ar4[5];
          }
          if (cVar9 == '\0') {
            fVar3 = fVar3 * fVar8;
          }
          else {
            fVar3 = SUB84((double)CONCAT44(fVar8,fVar3) * (double)CONCAT44(fVar8,fVar3),0);
          }
          if (cVar10 == '\0') {
            *(float *)(ar4 + 5) = fVar3;
          }
          else {
            ar4[5] = in_dr0;
          }
          if (cVar10 == '\0') {
            dVar6 = (double)CONCAT44(*(float *)(ar4 + 5),
                                     *(undefined4 *)
                                      ((int)*(float *)(ar4 + 0x25) * 0x18 + -0x73d7f13c));
          }
          else {
            dVar6 = ar4[5];
          }
          if (cVar9 == '\0' && (float)((ulonglong)dVar6 >> 0x20) < SUB84(dVar6,0)) {
            *(float *)((int)ar4 + 100) = 0.0;
            *(float *)(ar4 + 0xd) = 0.0;
            (**(code **)((int)*(float *)ar4 + 0x2c))(ar4,pdVar4,ar6_00,ar7);
            iVar1 = (int)*(float *)(ar4 + 0x25) * 0x18 + -0x73d7f14c;
            FUN_8c031b68(ar4,iVar1,ar6_00,ar7);
            FUN_8c030eb8((float *)((int)ar4 + 0x1fc),iVar1,ar6_00,ar7);
          }
        }
        else {
          *(float *)(ar4 + 0x56) = 0.0;
          *(float *)((int)ar4 + 0x2b4) = 0.0;
          *(float *)(ar4 + 0xd) = 5.60519e-45;
          *(float *)(ar4 + 0x43) = 2.38221e-44;
        }
      }
    }
    break;
  case 2.8026e-45:
    goto switchD_8c07a6ce_caseD_2;
  case 4.2039e-45:
    goto switchD_8c07a6ce_caseD_3;
  case 5.60519e-45:
    if (cVar10 == '\0') {
      dVar6 = (double)CONCAT44(0x3f666666,*(float *)(ar4 + 5));
    }
    else {
      in_xd0 = ar4[5];
      dVar6 = -0.00781250184518285;
    }
    if (cVar9 == '\0') {
      fVar3 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar10 == '\0') {
      *(float *)(ar4 + 5) = fVar3;
    }
    else {
      ar4[5] = in_xd0;
    }
    Vec3_ctor_xyz(auStack_84,pdVar4,ar6_00,ar7);
    ar6_00 = (double *)0x1;
    iVar1 = FUN_8c0811b4(ar4,auStack_84,1,ar7);
    Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
    if (iVar1 == 0) {
      pdVar4 = ar4 + 5;
      if (cVar10 == '\0') {
        *(float *)pdVar4 = 0.0;
      }
      else {
        *pdVar4 = (double)(ulonglong)(uint)fVar3;
      }
      *(int *)(ar4 + 0xd) = (int)*(float *)(ar4 + 0xd) + 1;
      *(float *)((int)ar4 + 0x2b4) = 0.0;
      *(float *)((int)ar4 + 100) = 0.0;
      iVar1 = rand_range(ar4,0,100,pdVar4);
      if (iVar1 < 0x1f) {
        if (*(float *)(ar4 + 0x25) == 8.40779e-45) {
          ar7 = (code *)0x0;
          ar6_00 = (double *)0xffffffff;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0x26,0xffffffff,0);
        }
        else {
          ar7 = (code *)0x0;
          ar6_00 = (double *)0xffffffff;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0x30,0xffffffff,0);
        }
      }
      else {
        ar7 = (code *)0x0;
        ar6_00 = (double *)0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,0xb0,ar6_00,ar7);
    }
    break;
  case 7.00649e-45:
    ar5_00 = FUN_8c032ab0;
    FUN_8c032ab0(ar4,FUN_8c032ab0,ar6_00,ar7);
    iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,ar5_00,ar6_00,ar7);
    if (iVar1 == 1) {
      *(float *)(ar4 + 0xd) = 0.0;
      (**(code **)((int)*(float *)ar4 + 0x2c))(ar4,1,ar6_00,ar7);
      iVar1 = (int)*(float *)(ar4 + 0x25) * 0x18 + -0x73d7f14c;
      FUN_8c031b68(ar4,iVar1,ar6_00,ar7);
      FUN_8c030eb8((float *)((int)ar4 + 0x1fc),iVar1,ar6_00,ar7);
      ar7 = (code *)0x0;
      ar6_00 = (double *)0xffffffff;
      uVar2 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,uVar2,ar6_00,ar7);
    }
  }
switchD_8c07a6ce_default:
  uVar2 = Vec3_dtor(&fStack_24,0xffffffff,ar6_00,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c07a68c\n.set _FUN_8c07a68c, _FUN_8c07a68c_def\n");
