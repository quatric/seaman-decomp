#include "../decls.h"
undefined4 s_CMushroomerBody_AwayFrom_0a1ed0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int ar6_00;
  undefined4 ar7_00;
  undefined4 uVar5;
  undefined4 in_fr1;
  double dVar6;
  char cVar7;
  char cVar8;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [20];
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar5 = 1;
  iVar1 = *(int *)(ar4 + 300);
  iVar3 = ar5;
  if (iVar1 == 0) {
    if (*(int *)(ar4 + 0x270) == 1) {
      FUN_8c033474(ar4,1,ar5,in_stack_00000000);
      *(undefined4 *)(ar4 + 0x270) = 0;
    }
    ar7_00 = 0;
    uVar4 = 0xffffffff;
    uVar2 = 5;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar4,ar7_00);
    if (ar6 == 0) {
LAB_8c0a1f82:
      Vec3_sub(ar5,ar7,uVar4,ar7_00,auStack_2c);
      uVar2 = Vec3_length(auStack_2c,ar7,uVar4,ar7_00);
      Vec3_assign(ar4 + 0x14,uVar2,uVar4,ar7_00);
      Vec3_dtor(auStack_2c,0xffffffff,uVar4,ar7_00);
      if (cVar8 != '\0') {
        in_fr1 = 0x40400000;
      }
      FUN_8c032518(ar4,ar5,in_stack_00000004,in_stack_00000000);
      Vec3_assign(ar4 + 0x260,auStack_3c,in_stack_00000004,in_stack_00000000);
      Vec3_dtor(auStack_3c,0xffffffff,in_stack_00000004,in_stack_00000000);
      ar7 = in_stack_00000000;
    }
    else {
      if (ar6 != 1) {
        ar7_00 = 2;
        uVar4 = 1;
        report_error_message
                  (s_Invalid_Flag_Number___8c13b03f,s_CMushroomerBody__AwayFrom___8c13b055,1,2);
        goto LAB_8c0a1f82;
      }
      Vec3_scale(ar7,&DAT_8c13af90,uVar4,ar7_00,auStack_4c);
      Vec3_assign(ar4 + 0x14,auStack_4c,uVar4,ar7_00);
      Vec3_dtor(auStack_4c,0xffffffff,uVar4,ar7_00);
      if (cVar8 != '\0') {
        in_fr1 = 0x40400000;
      }
      FUN_8c032518(ar4,ar5,in_stack_00000004,in_stack_00000000);
      Vec3_assign(ar4 + 0x260,auStack_5c,in_stack_00000004,in_stack_00000000);
      Vec3_dtor(auStack_5c,0xffffffff,in_stack_00000004,in_stack_00000000);
      ar7 = in_stack_00000000;
    }
    iVar1 = ar5;
    Vec3_sub(ar4 + 0x260,ar5,in_stack_00000004,ar7,auStack_6c);
    uVar2 = Vec3_length(auStack_6c,iVar1,in_stack_00000004,ar7);
    Vec3_assign(ar4 + 0x14,uVar2,in_stack_00000004,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_6c,0xffffffff,in_stack_00000004,ar7);
    vec3_clear(ar4 + 0x224,uVar2,in_stack_00000004,ar7);
    FUN_8c031b68(ar4,0x8c2851b0,in_stack_00000004,ar7);
    if (cVar8 == '\0') {
      *(undefined4 *)(ar4 + 0x34) = 0x40000000;
    }
    else {
      in_fr1 = 0x40000000;
      *(undefined8 *)(ar4 + 0x34) = 0x8c032a6440000000;
    }
    uVar4 = 0x5a;
    uVar2 = 0x1e;
    iVar1 = rand_range(ar4,0x1e,0x5a,ar7);
    if (cVar7 == '\0') {
      dVar6 = (double)CONCAT44((float)iVar1,in_fr1);
    }
    else {
      dVar6 = (double)iVar1;
    }
    if (cVar8 == '\0') {
      *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar6 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x38) = dVar6;
    }
    FUN_8c032ab0(ar4,uVar2,uVar4,ar7);
    ar6 = ar4 + 0x260;
    FUN_8c031bb4(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      iVar3 = ar4 + 0x260;
      FUN_8c031764(ar4,iVar3,ar5,ar7);
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar3,ar5,ar7);
      ar6_00 = ar5;
      if (iVar1 == 1) {
        ar7 = 0;
        ar6_00 = -1;
        iVar3 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar3,ar6_00,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
    }
    else {
      ar6_00 = ar6;
      if (iVar1 == 3) {
        iVar3 = ar4 + 0x260;
        FUN_8c031764(ar4,iVar3,ar5,ar7);
        iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar3,ar5,ar7);
        ar6_00 = ar5;
        if (iVar1 == 1) {
          iVar3 = -0x73d7ae50;
          FUN_8c031b68(ar4,0x8c2851b0,ar5,ar7);
          uVar5 = 0;
          *(undefined4 *)(ar4 + 300) = 0;
          ar6_00 = ar5;
        }
      }
    }
    goto LAB_8c0a231a;
  }
  s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar3,ar6,ar7);
  iVar3 = ar4 + 0x260;
  FUN_8c031764(ar4,iVar3,ar5,ar7);
  ar6_00 = ar5;
  if (*(int *)(ar4 + 0x40) == 4) {
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
LAB_8c0a231a:
  FUN_8c0230f0(ar4 + 0x14,iVar3,ar6_00,ar7,auStack_7c);
  uVar2 = Vec3_length(auStack_7c,iVar3,ar6_00,ar7);
  Vec3_scale(uVar2,&DAT_8c13af94,ar6_00,ar7,auStack_8c);
  Vec3_assign(ar4 + 0x80,auStack_8c,ar6_00,ar7);
  Vec3_dtor(auStack_8c,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_7c,0xffffffff,ar6_00,ar7);
  return uVar5;
}

__asm__(".globl _s_CMushroomerBody_AwayFrom_0a1ed0\n.set _s_CMushroomerBody_AwayFrom_0a1ed0, _s_CMushroomerBody_AwayFrom_0a1ed0_def\n");
