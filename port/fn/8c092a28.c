#include "../decls.h"
undefined4 FUN_8c092a28_def(code *ar4,undefined4 ar5,code *ar6,code *ar7)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  code *ar6_00;
  code *ar7_00;
  undefined4 uVar4;
  float fVar5;
  double in_dr0;
  undefined8 uVar6;
  double dVar7;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  code *in_stack_00000000;
  code *in_stack_fffffedc;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c03f480(ar5,ar5,ar6,ar7,auStack_48);
  Vec3_ctor_copy(auStack_28,auStack_48,ar6_00,ar7_00);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7_00);
  Vec3_ctor_zero(&uStack_38,uVar2,ar6_00,ar7_00);
  iVar1 = *(int *)(ar4 + 0x124);
  if ((iVar1 < 0xc) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      uVar4 = 0;
      break;
    default:
      goto switchD_8c092a98_caseD_1;
    case 2:
    case 7:
      uVar4 = FUN_8c09344c(ar4,auStack_28,ar6,ar7);
      ar6_00 = ar6;
      ar7_00 = ar7;
      break;
    case 4:
      iVar1 = get_field_24_026024(ar7,0xb,ar6_00,ar7_00);
      if (iVar1 != 0) {
        ar6_00 = (code *)auStack_28;
        uVar4 = FUN_8c093e80(ar4,in_stack_00000000,ar6_00,ar6);
        ar7_00 = ar6;
        break;
      }
      iVar1 = *(int *)(ar4 + 300);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
        if (cVar9 == '\0') {
          *(int *)(ar4 + 0x2e0) = *(int *)(iVar1 + 4);
        }
        else {
          *(undefined8 *)(ar4 + 0x2e0) = *(undefined8 *)(iVar1 + 4);
        }
        iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
        if (cVar9 == '\0') {
          *(int *)(ar4 + 0x2e4) = *(int *)(iVar1 + 8);
        }
        else {
          *(undefined8 *)(ar4 + 0x2e4) = *(undefined8 *)(iVar1 + 8);
        }
        iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
        if (cVar9 == '\0') {
          *(int *)(ar4 + 0x2e8) = *(int *)(iVar1 + 0xc);
        }
        else {
          *(undefined8 *)(ar4 + 0x2e8) = *(undefined8 *)(iVar1 + 0xc);
        }
        ar7_00 = (code *)0x5;
        *(int *)(ar4 + 0x40) = 5;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        ar6_00 = ar4;
LAB_8c092c4e:
        iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
        if (cVar9 == '\0') {
          uStack_38 = *(undefined4 *)(iVar1 + 4);
        }
        else {
          uVar6 = *(undefined8 *)(iVar1 + 4);
          uStack_38 = (undefined4)uVar6;
          fStack_34 = (float)((ulonglong)uVar6 >> 0x20);
        }
        iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x42a00000,*(undefined4 *)(iVar1 + 8));
        }
        else {
          in_xd0 = *(undefined8 *)(iVar1 + 8);
          dVar7 = 5.0983124752531e-312;
        }
        if (cVar8 == '\0') {
          fStack_34 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fStack_34 = SUB84(dVar7 + dVar7,0);
        }
        if (cVar9 != '\0') {
          fStack_34 = (float)in_xd0;
          fStack_30 = (float)((ulonglong)in_xd0 >> 0x20);
        }
        iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x41f00000,*(undefined4 *)(iVar1 + 0xc));
        }
        else {
          in_xd0 = *(undefined8 *)(iVar1 + 0xc);
          dVar7 = 262144.06439208984;
        }
        if (cVar8 == '\0') {
          fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar7 + dVar7,0);
        }
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x41100000,fVar5);
        }
        else {
          dVar7 = 5.18306279054705e-312;
        }
        if (cVar8 == '\0') {
          fStack_30 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fStack_30 = SUB84(dVar7 + dVar7,0);
        }
        if (cVar9 != '\0') {
          fStack_30 = (float)in_xd0;
          uStack_2c = (undefined4)((ulonglong)in_xd0 >> 0x20);
        }
        if (0 < *(int *)(ar4 + 0x260)) {
          Vec3_assign(ar4 + 0x264,&uStack_38,ar6_00,ar7_00);
        }
        pcVar3 = Vec3_ctor_xyz;
        Vec3_ctor_xyz(auStack_68,Vec3_ctor_xyz,ar6_00,ar7_00);
        Vec3_normalize(auStack_68,pcVar3,ar6_00,ar7_00);
        ar7_00 = (code *)auStack_78;
        iVar1 = FUN_8c095548(ar4,in_stack_00000000,&uStack_38,ar7_00);
        Vec3_dtor(auStack_78,0xffffffff,Vec3_dtor,ar7_00);
        ar6_00 = Vec3_dtor;
        Vec3_dtor(auStack_68,0xffffffff,Vec3_dtor,ar7_00);
        if (iVar1 == 0) {
          *(int *)(ar4 + 0x40) = 5;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
      }
      else {
        if (iVar1 == 1) goto LAB_8c092c4e;
        if (iVar1 == 2) {
          if (cVar9 == '\0') {
            *(int *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
          }
          iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
          if (cVar9 == '\0') {
            uStack_38 = *(undefined4 *)(iVar1 + 4);
          }
          else {
            uVar6 = *(undefined8 *)(iVar1 + 4);
            uStack_38 = (undefined4)uVar6;
            fStack_34 = (float)((ulonglong)uVar6 >> 0x20);
          }
          iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
          if (cVar9 == '\0') {
            dVar7 = (double)CONCAT44(0x42a00000,*(undefined4 *)(iVar1 + 8));
          }
          else {
            in_xd0 = *(undefined8 *)(iVar1 + 8);
            dVar7 = 5.0983124752531e-312;
          }
          if (cVar8 == '\0') {
            fStack_34 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fStack_34 = SUB84(dVar7 + dVar7,0);
          }
          if (cVar9 != '\0') {
            fStack_34 = (float)in_xd0;
            fStack_30 = (float)((ulonglong)in_xd0 >> 0x20);
          }
          iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
          if (cVar9 == '\0') {
            dVar7 = (double)CONCAT44(0x41f00000,*(undefined4 *)(iVar1 + 0xc));
          }
          else {
            in_xd0 = *(undefined8 *)(iVar1 + 0xc);
            dVar7 = 262144.06439208984;
          }
          if (cVar8 == '\0') {
            fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar5 = SUB84(dVar7 + dVar7,0);
          }
          if (cVar9 == '\0') {
            dVar7 = (double)CONCAT44(0x41100000,fVar5);
          }
          else {
            dVar7 = 5.18306279054705e-312;
          }
          if (cVar8 == '\0') {
            fStack_30 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fStack_30 = SUB84(dVar7 + dVar7,0);
          }
          if (cVar9 != '\0') {
            fStack_30 = (float)in_xd0;
            uStack_2c = (undefined4)((ulonglong)in_xd0 >> 0x20);
          }
          FUN_8c031de8(ar4,1,ar6_00,ar7_00);
          uVar4 = 0;
        }
        else {
          *(int *)(ar4 + 300) = 0;
        }
      }
      iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(*(int *)(ar4 + 0x2e0),*(undefined4 *)(iVar1 + 4));
      }
      else {
        in_xd0 = *(undefined8 *)(iVar1 + 4);
        dVar7 = *(double *)(ar4 + 0x2e0);
      }
      if (cVar8 == '\0') {
        fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 - dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(ar4 + 0x2d0) = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + 0x2d0) = in_xd0;
      }
      iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(*(int *)(ar4 + 0x2e4),*(undefined4 *)(iVar1 + 8));
      }
      else {
        in_xd0 = *(undefined8 *)(iVar1 + 8);
        dVar7 = *(double *)(ar4 + 0x2e4);
      }
      if (cVar8 == '\0') {
        fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 - dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(ar4 + 0x2d4) = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + 0x2d4) = in_xd0;
      }
      iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(*(int *)(ar4 + 0x2e8),*(undefined4 *)(iVar1 + 0xc));
      }
      else {
        in_xd0 = *(undefined8 *)(iVar1 + 0xc);
        dVar7 = *(double *)(ar4 + 0x2e8);
      }
      if (cVar8 == '\0') {
        fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 - dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(ar4 + 0x2d8) = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + 0x2d8) = in_xd0;
      }
      iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x2e0) = *(int *)(iVar1 + 4);
      }
      else {
        *(undefined8 *)(ar4 + 0x2e0) = *(undefined8 *)(iVar1 + 4);
      }
      iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x2e4) = *(int *)(iVar1 + 8);
      }
      else {
        *(undefined8 *)(ar4 + 0x2e4) = *(undefined8 *)(iVar1 + 8);
      }
      iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x2e8) = *(int *)(iVar1 + 0xc);
      }
      else {
        *(undefined8 *)(ar4 + 0x2e8) = *(undefined8 *)(iVar1 + 0xc);
      }
      break;
    case 6:
      ar6_00 = (code *)auStack_28;
      uVar4 = FUN_8c093e80(ar4,in_stack_00000000,ar6_00,ar6);
      ar7_00 = ar6;
      break;
    case 8:
      FUN_8c0988a4(ar4,in_stack_00000000,ar7,ar7_00);
      ar6_00 = ar7;
      break;
    case 9:
      *(int *)(ar4 + 0x214) = 0;
      if (*(int *)(ar4 + 300) == 0) {
        ar7_00 = (code *)0x0;
        ar6_00 = (code *)0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
        pcVar3 = ar4 + 0xb0;
        s_CAnimBody_SetFrame_033e6e(pcVar3,pcVar3,ar6_00,ar7_00);
        FUN_8c032204(ar4 + 0xb0,pcVar3,ar6_00,ar7_00,in_stack_fffffedc);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        in_stack_fffffedc = ar4;
      }
      uVar2 = 5;
      iVar1 = FUN_8c031de8(ar4,5,ar6_00,ar7_00);
      if (iVar1 == 0) {
        *(int *)(ar4 + 300) = 0;
        FUN_8c032204(ar4 + 0xb0,uVar2,ar6_00,ar7_00,in_stack_fffffedc);
        uVar4 = 0;
        if ((-1 < *(int *)(ar4 + 0x2f4)) && (-1 < *(int *)(ar4 + 0x2f8))) {
          FUN_8c06b1d8(*(int *)(ar4 + 0x2f4),*(int *)(ar4 + 0x2f8),ar6_00,ar7_00);
          ar7_00 = (code *)0x2f4;
          *(int *)(ar4 + 0x2f4) = -1;
          *(int *)(ar4 + 0x2f8) = -1;
        }
      }
      else {
        CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6_00,ar7_00,in_stack_fffffedc);
        if (cVar9 == '\0') {
          *(int *)(ar4 + 0x2fc) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x2fc) = in_dr0;
        }
      }
      FUN_8c031c74(ar4,auStack_28,in_stack_00000000,ar7_00);
      ar6_00 = in_stack_00000000;
      break;
    case 10:
      *(int *)(ar4 + 0x214) = 0;
      *(int *)(ar4 + 0x25c) = -1;
      iVar1 = *(int *)(ar4 + 300);
      if (iVar1 == 0) {
        iVar1 = FUN_8c093aec(ar4,in_stack_00000000,ar6,ar7);
        ar6_00 = ar6;
        ar7_00 = ar7;
        if (iVar1 == 0) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          ar7_00 = ar7;
        }
      }
      else if (iVar1 == 1) {
        ar6_00 = (code *)auStack_28;
        iVar1 = FUN_8c0967d8(ar4,in_stack_00000000,ar6_00,ar6);
        ar7_00 = ar6;
        if (iVar1 == 0) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
      }
      else if (iVar1 == 2) {
        iVar1 = FUN_8c034148(ar4 + 0xb0,6,ar6_00,ar7_00);
        if (0 < iVar1) {
          uVar2 = 300;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          FUN_8c0230f0(ar4 + 0x14,300,ar6_00,ar7_00,auStack_88);
          uVar2 = Vec3_length(auStack_88,uVar2,ar6_00,ar7_00);
          Vec3_assign(ar4 + 0x14,uVar2,ar6_00,ar7_00);
          uVar2 = 0xffffffff;
          Vec3_dtor(auStack_88,0xffffffff,ar6_00,ar7_00);
          FUN_8c031748(ar4,uVar2,ar6_00,ar7_00);
          *(int *)(ar4 + 0x284) = 0;
          ar6_00 = FUN_8c032204;
          FUN_8c032204(ar4 + 0xb0,0,FUN_8c032204,ar7_00);
        }
      }
      else if (iVar1 == 3) {
        iVar1 = FUN_8c031de8(ar4,6,ar6_00,ar7_00);
        if (iVar1 == 0) {
          iVar1 = *(int *)(ar4 + 0x284);
          *(int *)(ar4 + 0x284) = iVar1 + 1;
          if (1 < iVar1 + 1) {
            *(int *)(ar4 + 0x284) = 0;
            *(int *)(ar4 + 300) = 0;
            uVar4 = 0;
            *(int *)(ar4 + 0x248) = 0;
            *(int *)(ar4 + 0x40) = 5;
          }
        }
        else {
          CAnimBody_GetCurFrame(ar4 + 0xb0,CAnimBody_GetCurFrame,ar6_00,ar7_00,in_stack_fffffedc);
          if (cVar8 == '\0') {
            iVar1 = (int)(float)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            iVar1 = (int)in_dr0;
          }
          if (iVar1 == 0x38) {
            *(int *)(ar4 + 0x25c) = *(int *)(ar4 + 0x284);
          }
        }
      }
      break;
    case 0xb:
      Vec3_ctor_xyz(auStack_58,0xb,ar6_00,ar7_00);
      Vec3_assign(auStack_28,auStack_58,ar6_00,ar7_00);
      Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7_00);
      ar6_00 = (code *)auStack_28;
      uVar4 = FUN_8c097fcc(ar4,in_stack_00000000,ar6_00,ar6);
      ar7_00 = ar6;
    }
  }
  else {
switchD_8c092a98_caseD_1:
    uVar4 = 0;
  }
  Vec3_dtor(&uStack_38,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7_00);
  return uVar4;
}

__asm__(".globl _FUN_8c092a28\n.set _FUN_8c092a28, _FUN_8c092a28_def\n");
