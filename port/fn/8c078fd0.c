#include "../decls.h"
undefined4 FUN_8c078fd0_def(int ar4,int *ar5,int *ar6,int *ar7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *ar6_00;
  code *pcVar4;
  undefined1 *ar6_01;
  int *ar7_00;
  undefined4 uVar5;
  float fVar6;
  undefined8 in_dr0;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar10;
  double dVar9;
  undefined8 in_xd0;
  char cVar11;
  char cVar12;
  int *in_stack_00000000;
  int *in_stack_00000004;
  undefined1 auStack_1ac [16];
  undefined1 auStack_19c [16];
  undefined1 auStack_18c [16];
  undefined1 auStack_17c [16];
  undefined1 auStack_16c [256];
  undefined1 auStack_6c [48];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [20];
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar5 = 1;
  piVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_30,ar5,ar6,ar7);
  FUN_8c102748(auStack_3c,piVar2,ar6_00,ar7_00);
  (**(code **)(*in_stack_00000004 + 0x184))(in_stack_00000004,piVar2,ar6_00,ar7_00);
  if (cVar12 == '\0') {
    uVar7 = CONCAT44(0x44610000,(int)((ulonglong)in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    uVar7 = 0x1fc44610000;
  }
  uVar8 = uVar7;
  if (cVar11 == '\0' && (float)uVar7 < (float)((ulonglong)uVar7 >> 0x20)) {
    ar6_00 = (int *)(ar4 + 0x1fc);
    FUN_8c030f2c(ar6_00,piVar2,ar6_00,ar7_00);
    (**(code **)(*in_stack_00000004 + 0x184))(in_stack_00000004,piVar2,ar6_00,ar7_00);
    if (cVar12 == '\0') {
      uVar8 = CONCAT44(0x43200000,(int)((ulonglong)uVar7 >> 0x20));
    }
    else {
      uVar8 = 0x13443200000;
      in_dr0 = uVar7;
    }
    if (cVar11 == '\0' && (float)((ulonglong)uVar8 >> 0x20) < (float)uVar8) {
      piVar2 = (int *)(ar4 + 0x50);
    }
  }
  iVar1 = *(int *)(ar4 + 0x134);
  if ((iVar1 < 10) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      ar6_00 = *(int **)(ar4 + 0x128);
      if (((int)ar6_00 < 8) && (-1 < (int)ar6_00)) {
                    
                    
        uVar5 = (*(code *)((code **)&DATA_8c079148)[(int)ar6_00])();
        return uVar5;
      }
      break;
    case 1:
      FUN_8c031c74(ar4,ar5,ar5,ar7_00);
      iVar1 = *in_stack_00000004;
      (**(code **)(iVar1 + 0x184))(in_stack_00000004,iVar1,ar5,ar7_00);
      if (cVar12 == '\0') {
        fVar6 = (float)((ulonglong)uVar8 >> 0x20);
        fVar10 = 900.0;
        uVar8 = in_dr0;
      }
      else {
        fVar6 = 900.0;
        fVar10 = 0.97;
      }
      if (cVar11 == '\0' && fVar6 < fVar10) {
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(0x3f7851ec,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          uVar8 = *(undefined8 *)(ar4 + 0x28);
          dVar9 = 3.73997364963455e-312;
        }
        if (cVar11 == '\0') {
          fVar6 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar9 * dVar9,0);
        }
        if (cVar12 == '\0') {
          *(float *)(ar4 + 0x28) = fVar6;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = uVar8;
        }
      }
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar5,ar7_00);
      ar6_00 = ar5;
      if (iVar1 == 1) {
        ar7_00 = (int *)0x0;
        ar6_00 = (int *)0xffffffff;
        uVar5 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,ar6_00,ar7_00);
        FUN_8c03c314(ar4,uVar5,ar6_00,ar7_00);
        uVar5 = 0;
        iVar1 = *(int *)(ar4 + 0x2a0) + -1;
        *(int *)(ar4 + 0x2a0) = iVar1;
        if (iVar1 < 0) {
          *(undefined4 *)(ar4 + 0x2a0) = 0;
        }
        *(undefined4 *)(ar4 + 0x134) = 0;
      }
      break;
    case 2:
      iVar1 = *in_stack_00000004;
      (**(code **)(iVar1 + 0x184))(in_stack_00000004,iVar1,ar6_00,ar7_00);
      if (cVar12 == '\0') {
        fVar6 = (float)((ulonglong)uVar8 >> 0x20);
        fVar10 = 900.0;
        uVar8 = in_dr0;
      }
      else {
        fVar6 = 900.0;
        fVar10 = 0.97;
      }
      if (cVar11 == '\0' && fVar6 < fVar10) {
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(0x3f7851ec,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          uVar8 = *(undefined8 *)(ar4 + 0x28);
          dVar9 = 3.73997364963455e-312;
        }
        if (cVar11 == '\0') {
          fVar6 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar9 * dVar9,0);
        }
        if (cVar12 == '\0') {
          *(float *)(ar4 + 0x28) = fVar6;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = uVar8;
        }
      }
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6_00,ar7_00);
      if (iVar1 == 1) {
        *(undefined4 *)(ar4 + 0x40) = 5;
        ar6_00 = (int *)0x134;
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      }
      break;
    case 3:
      if (*(int *)(ar4 + 0x1d4) == 1) {
        Vec3_ctor_zero(auStack_6c,piVar2,ar6_00,ar7_00);
        fVar6 = (float)((ulonglong)uVar8 >> 0x20);
        pcVar4 = Vec3_ctor_xyz;
        Vec3_ctor_xyz(auStack_16c,piVar2,Vec3_ctor_xyz,ar7_00);
        iVar1 = FUN_8c023cd4(ar4 + 0x200,auStack_16c,pcVar4,ar7_00);
        uVar3 = 0xffffffff;
        Vec3_dtor(auStack_16c,0xffffffff,pcVar4,ar7_00);
        if (iVar1 == 0) {
          uVar3 = Vec3_length(ar4 + 0x200,uVar3,pcVar4,ar7_00);
          Vec3_assign(auStack_6c,uVar3,pcVar4,ar7_00);
        }
        else {
          iVar1 = ar4 + 0x54;
          piVar2 = ar5;
          Vec3_sub(iVar1,ar5,iVar1,ar7_00,auStack_17c);
          uVar3 = Vec3_length(auStack_17c,piVar2,iVar1,ar7_00);
          Vec3_scale(uVar3,&DAT_8c137998,iVar1,ar7_00,auStack_18c);
          Vec3_assign(auStack_6c,auStack_18c,iVar1,ar7_00);
          Vec3_dtor(auStack_18c,0xffffffff,iVar1,ar7_00);
          pcVar4 = (code *)auStack_17c;
          Vec3_dtor(pcVar4,0xffffffff,pcVar4,ar7_00);
        }
        FUN_8c022dac(auStack_6c,ar4 + 0x14,pcVar4,ar7_00);
        if (cVar12 == '\0') {
          fVar10 = 90.0;
        }
        else {
          fVar6 = 90.0;
          fVar10 = 2.9147e-43;
        }
        if (cVar11 == '\0' && fVar10 < fVar6) {
          ar6_01 = auStack_19c;
          FUN_8c03263c(ar4,auStack_6c,ar6_01,ar7_00);
          Vec3_add(auStack_19c,ar5,ar6_01,ar7_00,auStack_1ac);
          Vec3_assign(ar4 + 0x54,auStack_1ac,ar6_01,ar7_00);
          pcVar4 = Vec3_dtor;
          Vec3_dtor(auStack_1ac,0xffffffff,Vec3_dtor,ar7_00);
          Vec3_dtor(auStack_19c,0xffffffff,pcVar4,ar7_00);
          FUN_8c032788(ar4,ar4 + 0x54,ar7,in_stack_00000004);
          *(undefined4 *)(ar4 + 0x40) = 5;
          ar7_00 = in_stack_00000004;
        }
        Vec3_dtor(auStack_6c,0xffffffff,Vec3_dtor,ar7_00);
      }
      ar6_00 = (int *)(ar4 + 0x54);
      iVar1 = pure_virtual_stub(ar4,ar5,ar6_00,ar7_00);
      if (iVar1 == 0) {
        uVar5 = 0;
        ar6_00 = (int *)0x0;
        *(undefined4 *)(ar4 + 0x134) = 0;
      }
      break;
    case 4:
      ar6_00 = (int *)(ar4 + 0x54);
      iVar1 = FUN_8c07f8e0(ar4,ar5,ar6_00,in_stack_00000004);
      ar7_00 = in_stack_00000004;
      if (iVar1 == 0) {
        uVar5 = 0;
        ar6_00 = (int *)0x0;
        *(undefined4 *)(ar4 + 0x134) = 0;
      }
      break;
    case 5:
      ar6_00 = (int *)(ar4 + 0x54);
      iVar1 = FUN_8c07ff08(ar4,ar5,ar6_00,in_stack_00000004);
      ar7_00 = in_stack_00000004;
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(ar4 + 0x134) = 0;
      }
      break;
    case 6:
      iVar1 = FUN_8c080e80(ar4,ar5,in_stack_00000004,ar7_00);
      ar6_00 = in_stack_00000004;
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(ar4 + 0x134) = 0;
      }
      break;
    case 7:
      iVar1 = FUN_8c08248c(ar4,ar5,ar6,in_stack_00000004);
      ar6_00 = ar6;
      ar7_00 = in_stack_00000004;
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(ar4 + 0x134) = 0;
        ar6_00 = ar6;
      }
      break;
    case 8:
      iVar1 = FUN_8c0831c8(ar4,ar5,in_stack_00000000,in_stack_00000004);
      ar6_00 = in_stack_00000000;
      ar7_00 = in_stack_00000004;
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(ar4 + 0x134) = 0;
        ar6_00 = in_stack_00000000;
      }
      break;
    case 9:
      iVar1 = FUN_8c080890(ar4,ar5,in_stack_00000004,ar7_00);
      ar6_00 = in_stack_00000004;
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(ar4 + 0x134) = 0;
      }
    }
  }
  free_if_nonnull_wrap_102790(auStack_3c,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7_00);
  return uVar5;
}

__asm__(".globl _FUN_8c078fd0\n.set _FUN_8c078fd0, _FUN_8c078fd0_def\n");
