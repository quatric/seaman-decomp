#include "../decls.h"
undefined4 FUN_8c048868_def(int ar4,int ar5,int ar6,undefined4 ar7)

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
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
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

__asm__(".globl _FUN_8c048868\n.set _FUN_8c048868, _FUN_8c048868_def\n");
