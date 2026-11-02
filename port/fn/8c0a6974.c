#include "../decls.h"
int FUN_8c0a6974_def(int ar4,ulonglong *ar5,ulonglong *ar6,ulonglong *ar7)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong *ar5_00;
  undefined4 ar6_00;
  ulonglong *ar6_01;
  undefined1 *puVar4;
  undefined4 ar7_00;
  ulonglong *ar7_01;
  int iVar5;
  ulonglong in_dr0;
  char cVar6;
  ulonglong *in_stack_00000000;
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [12];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  ulonglong auStack_28 [2];
  
  cVar6 = '\0';
  iVar5 = 1;
  iVar2 = *(int *)(ar4 + 0x134);
  if ((8 < iVar2) || (iVar2 < 0)) goto switchD_8c0a69b0_default;
  ar5_00 = ar5;
  puVar1 = ar6;
  ar7_01 = ar7;
                    
  switch(iVar2) {
  case 0:
    iVar2 = (**(code **)((int)*in_stack_00000000 + 0x1a8))(in_stack_00000000,ar5,ar6,ar7);
    if (iVar2 == 1) {
      *(undefined4 *)(ar4 + 0x134) = 8;
      if (cVar6 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
      }
      ar7_00 = 0;
      ar6_00 = 0xffffffff;
      uVar3 = 2;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6_00,ar7_00);
      goto switchD_8c0a69b0_default;
    }
    ar5_00 = (ulonglong *)0x0;
    puVar1 = (ulonglong *)rand_range(ar4,0,7,ar7_01);
    if (((int)puVar1 < 7) && (-1 < (int)puVar1)) {
      ar6_01 = (ulonglong *)((int)puVar1 * 4);
                    
      switch((uint)puVar1) {
      case 0x0:
        ar5_00 = (ulonglong *)(ar4 + 0x28);
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar6 == '\0') {
          *(undefined4 *)ar5_00 = 0;
        }
        else {
          *ar5_00 = in_dr0;
        }
        if (*(int *)(ar4 + 0x2198) == 6) {
          *(undefined4 *)(ar4 + 0x134) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        *(undefined4 *)(ar4 + 0x228) = 0;
        puVar1 = ar6_01;
        break;
      case 0x1:
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar6 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = in_dr0;
        }
        if (*(int *)(ar4 + 0x2198) == 6) {
          *(undefined4 *)(ar4 + 0x134) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        *(undefined4 *)(ar4 + 0x228) = 1;
        puVar1 = ar6_01;
        break;
      case 0x2:
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar6 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = in_dr0;
        }
        if (*(int *)(ar4 + 0x2198) == 6) {
          *(undefined4 *)(ar4 + 0x134) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        *(undefined4 *)(ar4 + 0x228) = 2;
        puVar1 = ar6_01;
        break;
      case 0x3:
        ar6_01 = (ulonglong *)(ar4 + 0x28);
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar6 == '\0') {
          *(int *)ar6_01 = 0;
        }
        else {
          *ar6_01 = in_dr0;
        }
        if (*(int *)(ar4 + 0x2198) == 6) {
          *(undefined4 *)(ar4 + 0x134) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        ar5_00 = (ulonglong *)0x3;
        *(undefined4 *)(ar4 + 0x228) = 3;
        puVar1 = ar6_01;
        break;
      case 0x4:
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar6 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = in_dr0;
        }
        if (*(int *)(ar4 + 0x2198) == 6) {
          *(undefined4 *)(ar4 + 0x134) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        *(undefined4 *)(ar4 + 0x228) = 4;
        puVar1 = ar6_01;
        break;
      case 0x5:
switchD_8c0a6a7a_caseD_5:
        puVar1 = ar6_01;
        if (*(int *)(ar4 + 0x2198) == 6) {
          *(undefined4 *)(ar4 + 0x228) = 8;
        }
        else {
          *(undefined4 *)(ar4 + 0x228) = 5;
        }
        break;
      case 0x6:
        if (*(int *)(ar4 + 0x2198) == 0) {
          iVar2 = get_field_24_026024(in_stack_00000000,ar5_00,ar6_01,ar7_01);
          puVar1 = ar6_01;
          if (iVar2 == 1) {
            *(undefined4 *)(ar4 + 0x228) = 6;
          }
          else {
            *(undefined4 *)(ar4 + 0x228) = 5;
          }
        }
        else if ((*(int *)(ar4 + 0x2198) == 5) || (*(int *)(ar4 + 0x2198) == 6)) {
          *(undefined4 *)(ar4 + 0x228) = 8;
          puVar1 = ar6_01;
        }
        else {
          puVar1 = (ulonglong *)0x2;
          ar5_00 = (ulonglong *)0x0;
          iVar2 = rand_range(ar4,0,2,ar7_01);
          if (iVar2 == 0) {
            *(undefined4 *)(ar4 + 0x228) = 7;
          }
          else {
            *(undefined4 *)(ar4 + 0x228) = 9;
          }
        }
      }
    }
    *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
    break;
  case 2:
    goto switchD_8c0a69b0_caseD_2;
  case 3:
    goto switchD_8c0a69b0_caseD_3;
  case 4:
    goto switchD_8c0a69b0_caseD_4;
  case 5:
    goto switchD_8c0a69b0_caseD_5;
  case 6:
    goto switchD_8c0a69b0_caseD_6;
  case 7:
    goto switchD_8c0a69b0_caseD_7;
  case 8:
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
    goto switchD_8c0a69b0_default;
  }
  uVar3 = (undefined4)in_dr0;
  iVar2 = *(int *)(ar4 + 0x228);
  if ((9 < iVar2) || (iVar2 < 0)) goto switchD_8c0a6c88_default;
                    
  switch(iVar2) {
  case 0:
    ar7_01 = (ulonglong *)0x0;
    puVar1 = (ulonglong *)0xffffffff;
    ar5_00 = (ulonglong *)0x2;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,puVar1,ar7_01);
    break;
  case 1:
    ar7_01 = (ulonglong *)0x0;
    puVar1 = (ulonglong *)0xffffffff;
    ar5_00 = (ulonglong *)0x3;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,puVar1,ar7_01);
    break;
  case 2:
    ar7_01 = (ulonglong *)0x0;
    puVar1 = (ulonglong *)0xffffffff;
    ar5_00 = (ulonglong *)0x4;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,puVar1,ar7_01);
    break;
  case 3:
    ar7_01 = (ulonglong *)0x0;
    puVar1 = (ulonglong *)0xffffffff;
    ar5_00 = (ulonglong *)0x5;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,puVar1,ar7_01);
    break;
  case 4:
    ar7_01 = (ulonglong *)0x0;
    puVar1 = (ulonglong *)0xffffffff;
    ar5_00 = (ulonglong *)0x6;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,6,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,puVar1,ar7_01);
    break;
  case 5:
    iVar5 = get_field_24_026024(in_stack_00000000,ar5_00,puVar1,ar7_01);
    if (iVar5 == 0) {
      FUN_8c10277c(auStack_28,ar5_00,puVar1,ar7_01);
      Vec3_ctor_xyz(auStack_38,ar5_00,puVar1,ar7_01);
      if (cVar6 == '\0') {
        in_dr0 = CONCAT44(0x40000000,uVar3);
      }
      else {
        in_dr0 = 0x42c8000040000000;
      }
      puVar1 = auStack_28;
      ar7_01 = in_stack_00000000;
      FUN_8c032518(ar4,ar5,puVar1,in_stack_00000000);
      Vec3_assign(ar4 + 0x54,auStack_48,puVar1,ar7_01);
      Vec3_dtor(auStack_48,0xffffffff,puVar1,ar7_01);
      Vec3_dtor(auStack_38,0xffffffff,puVar1,ar7_01);
      free_if_nonnull_wrap_102790(auStack_28,0xffffffff,puVar1,ar7_01);
    }
    else {
      if (cVar6 == '\0') {
        in_dr0 = CONCAT44(0x40400000,uVar3);
      }
      else {
        in_dr0 = 0x8c031ce840400000;
      }
      puVar1 = in_stack_00000000;
      FUN_8c031ce8(ar4,ar6,in_stack_00000000,ar7_01);
      Vec3_assign(ar4 + 0x54,auStack_58,puVar1,ar7_01);
      Vec3_dtor(auStack_58,0xffffffff,puVar1,ar7_01);
    }
    *(undefined4 *)(ar4 + 0x134) = 3;
switchD_8c0a69b0_caseD_3:
    if (*(int *)(ar4 + 0x2198) == 0) {
      (**(code **)((int)*in_stack_00000000 + 0x128))(in_stack_00000000,ar4 + 0x54,puVar1,ar7_01);
      if (cVar6 == '\0') {
        *(int *)(ar4 + 0x58) = (int)(in_dr0 >> 0x20);
      }
      else {
        *(ulonglong *)(ar4 + 0x58) = in_dr0;
      }
      Vec3_ctor_copy(auStack_68,ar5,puVar1,ar7_01);
      Vec3_ctor_copy(auStack_78,ar4 + 0x54,puVar1,ar7_01);
      puVar4 = auStack_78;
      iVar5 = FUN_8c0a72b4(ar4,auStack_68,puVar4,ar7_01);
      Vec3_dtor(auStack_78,0xffffffff,puVar4,ar7_01);
      Vec3_dtor(auStack_68,0xffffffff,puVar4,ar7_01);
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,puVar4,ar7_01);
    }
    else {
      switch(*(undefined4 *)(ar4 + 0x2198)) {
      case 1:
        if (cVar6 == '\0') {
          *(int *)(ar4 + 0x5c) = (int)ar6[1];
        }
        else {
          *(ulonglong *)(ar4 + 0x5c) = ar6[1];
        }
        break;
      case 2:
        if (cVar6 == '\0') {
          *(undefined4 *)(ar4 + 0x5c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x5c) = in_dr0 & 0xffffffff;
        }
        break;
      case 3:
        if (cVar6 == '\0') {
          *(int *)(ar4 + 0x54) = (int)*ar6;
        }
        else {
          *(ulonglong *)(ar4 + 0x54) = *ar6;
        }
        break;
      case 4:
        if (cVar6 == '\0') {
          *(undefined4 *)(ar4 + 0x54) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x54) = in_dr0 & 0xffffffff;
        }
        break;
      case 5:
        if (cVar6 == '\0') {
          *(int *)(ar4 + 0x58) = *(int *)((int)ar6 + 4);
        }
        else {
          *(undefined8 *)(ar4 + 0x58) = *(undefined8 *)((int)ar6 + 4);
        }
      }
      FUN_8c03f460(auStack_84,ar6,puVar1,ar7_01);
      iVar5 = FUN_8c0a8f94(ar4,ar5,ar4 + 0x54,auStack_84);
      free_if_nonnull_wrap_102790(auStack_84,0xffffffff,auStack_84,0xffffffff);
    }
    goto switchD_8c0a69b0_default;
  case 6:
    *(undefined4 *)(ar4 + 0x134) = 4;
switchD_8c0a69b0_caseD_4:
    FUN_8c03f460(auStack_90,ar6,puVar1,ar7_01);
    iVar5 = FUN_8c0a861c(ar4,ar5,auStack_90,ar7_01);
    free_if_nonnull_wrap_102790(auStack_90,0xffffffff,0xffffffff,ar7_01);
    goto switchD_8c0a69b0_default;
  case 7:
    *(undefined4 *)(ar4 + 0x134) = 5;
switchD_8c0a69b0_caseD_5:
    FUN_8c03f460(auStack_9c,ar6,FUN_8c03f460,ar7_01);
    puVar4 = auStack_9c;
    iVar5 = FUN_8c0a8c0c(ar4,ar5,puVar4,ar7);
    free_if_nonnull_wrap_102790(auStack_9c,0xffffffff,puVar4,ar7);
    goto switchD_8c0a69b0_default;
  case 8:
    *(undefined4 *)(ar4 + 0x134) = 6;
switchD_8c0a69b0_caseD_6:
    if (*(int *)(ar4 + 0x2198) == 6) {
      FUN_8c03f460(auStack_a8,ar6,puVar1,ar7_01);
      puVar4 = auStack_a8;
      iVar5 = FUN_8c0a8464(ar4,ar5,puVar4,ar7_01);
      free_if_nonnull_wrap_102790(auStack_a8,0xffffffff,puVar4,ar7_01);
    }
    else {
      (**(code **)((int)*in_stack_00000000 + 0x128))(in_stack_00000000,ar5,puVar1,ar7_01);
      iVar5 = FUN_8c0a77c8(ar4,ar5,ar7,ar7_01);
    }
    goto switchD_8c0a69b0_default;
  case 9:
    *(undefined4 *)(ar4 + 0x134) = 7;
switchD_8c0a69b0_caseD_7:
    FUN_8c03f460(auStack_b4,ar6,puVar1,ar7_01);
    puVar4 = auStack_b4;
    iVar5 = FUN_8c0a9578(ar4,ar5,puVar4,ar7);
    free_if_nonnull_wrap_102790(auStack_b4,0xffffffff,puVar4,ar7);
    goto switchD_8c0a69b0_default;
  }
switchD_8c0a6c88_default:
  *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
switchD_8c0a69b0_caseD_2:
  iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,puVar1,ar7_01);
  if (iVar2 == 1) {
    iVar5 = 0;
  }
switchD_8c0a69b0_default:
  if (iVar5 == 0) {
    *(undefined4 *)(ar4 + 0x134) = 0;
  }
  return iVar5;
}

__asm__(".globl _FUN_8c0a6974\n.set _FUN_8c0a6974, _FUN_8c0a6974_def\n");
