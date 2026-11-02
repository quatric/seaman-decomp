#include "../decls.h"
uint FUN_8c04eb14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined1 *ar7)

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

__asm__(".globl _FUN_8c04eb14\n.set _FUN_8c04eb14, _FUN_8c04eb14_def\n");
