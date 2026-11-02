#include "../decls.h"
undefined4 FUN_8c07c5f8_def(int ar4,int ar5,undefined4 ar6,undefined1 *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 ar6_00;
  undefined1 *ar7_00;
  undefined4 uVar4;
  uint uVar5;
  undefined8 in_dr0;
  ulonglong uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined4 in_stack_00000000;
  int in_stack_00000004;
  int *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_fffffea8;
  undefined1 auStack_104 [16];
  undefined1 auStack_f4 [12];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar8 = '\0';
  *(undefined4 *)(ar4 + 0x214) = 0;
  uVar4 = 1;
  iVar1 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_38,iVar1,ar6_00,ar7_00);
  iVar1 = *(int *)(ar4 + 300);
  if ((iVar1 < 5) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      if (in_stack_00000004 == 1) {
        uVar4 = 0;
        break;
      }
      *(undefined4 *)(ar4 + 0x2ac) = 1;
      FUN_8c031748(ar4,iVar1 * 4,ar6_00,ar7_00);
      FUN_8c03f39c(in_stack_0000000c,FUN_8c03f39c,ar6_00,ar7_00);
      Vec3_scale(ar7,&DAT_8c1379b4,ar6_00,ar7_00,auStack_48);
      Vec3_add(ar6,auStack_48,ar6_00,ar7_00,auStack_58);
      Vec3_sub(auStack_58,ar5,ar6_00,ar7_00,auStack_68);
      Vec3_normalize(auStack_68,Vec3_normalize,ar6_00,ar7_00);
      Vec3_assign(ar4 + 0x54,auStack_78,ar6_00,ar7_00);
      Vec3_dtor(auStack_78,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7_00);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 1:
      Vec3_ctor_copy(auStack_88,ar4 + 0x54,ar6_00,ar7_00);
      ar6_00 = 1;
      iVar1 = FUN_8c0811b4(ar4,auStack_88,1,ar7_00);
      Vec3_dtor(auStack_88,0xffffffff,ar6_00,ar7_00);
      if (iVar1 == 0) {
        ar7_00 = (undefined1 *)0x0;
        ar6_00 = 0xffffffff;
        uVar2 = 1;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7_00);
      break;
    case 2:
      Vec3_ctor_copy(auStack_98,ar7,ar6_00,ar7_00);
      ar7_00 = auStack_98;
      iVar1 = FUN_8c032d48(ar4,ar5,ar6,ar7_00);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_98,0xffffffff,ar6,ar7_00);
      ar6_00 = ar6;
      if (iVar1 == 0) {
        vec3_clear(ar4 + 0x244,uVar2,ar6,ar7_00);
        *(undefined4 *)(ar4 + 0x298) = 0;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        ar6_00 = ar6;
      }
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7_00);
      break;
    case 3:
      Vec3_ctor_xyz(auStack_a8,iVar1 * 4,ar6_00,ar7_00);
      ar6_00 = 1;
      iVar1 = FUN_8c0811b4(ar4,auStack_a8,1,ar7_00);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_a8,0xffffffff,ar6_00,ar7_00);
      if (iVar1 == 0) {
        Vec3_ctor_xyz(auStack_b8,uVar2,ar6_00,ar7_00);
        Vec3_assign(ar4 + 0x14,auStack_b8,ar6_00,ar7_00);
        Vec3_dtor(auStack_b8,0xffffffff,ar6_00,ar7_00);
        ar7_00 = (undefined1 *)0x0;
        ar6_00 = 0xffffffff;
        uVar2 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 4:
      uVar2 = 0x11;
      iVar1 = FUN_8c031de8(ar4,0x11,ar6_00,ar7_00);
      if (iVar1 == 0) {
        ar7_00 = (undefined1 *)0x0;
        ar6_00 = 0xffffffff;
        uVar4 = 0x13;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0);
        uVar5 = (uint)in_dr0;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7_00);
        FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00);
        uVar6 = (ulonglong)uVar5;
        if (cVar8 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = uVar6;
        }
        iVar1 = ar4 + 0x14;
        Vec3_assign(ar4 + 0x80,iVar1,ar6_00,ar7_00);
        if (cVar8 == '\0') {
          uVar7 = CONCAT44(0x40000000,(int)uVar6);
          *(undefined4 *)(ar4 + 0x38) = 0x40000000;
        }
        else {
          uVar7 = 0x8c03c31440000000;
          *(undefined8 *)(ar4 + 0x38) = 0x8c03c31440000000;
        }
        FUN_8c03c314(ar4,iVar1,ar6_00,ar7_00);
        *(undefined4 *)(ar4 + 300) = 0;
        *(undefined4 *)(ar4 + 0x298) = 1;
        *(undefined4 *)(ar4 + 0x40) = 0;
        *(undefined4 *)(ar4 + 0x2ac) = 0;
        *(undefined4 *)(ar4 + 100) = 1;
        *(undefined4 *)(ar4 + 0x214) = 1;
        uVar4 = 0;
        (**(code **)(*in_stack_00000008 + 0x128))(in_stack_00000008,ar5,ar6_00,ar7_00);
        if (cVar8 == '\0') {
          *(int *)(ar5 + 4) = (int)((ulonglong)uVar7 >> 0x20);
        }
        else {
          *(undefined8 *)(ar5 + 4) = uVar7;
        }
      }
      else {
        iVar1 = get_field_1c_026dd8(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        if (iVar1 == 0x11) {
          CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6_00,ar7_00,in_stack_fffffea8);
          FUN_8c034384(ar4 + 0xb0,
                       *(undefined4 *)(&DAT_8c1377f8 + (*(int *)(ar4 + 0x128) + -6) * 0x18),ar6_00,
                       ar7_00);
          Vec3_assign(auStack_28,auStack_c8,ar6_00,ar7_00);
          Vec3_dtor(auStack_c8,0xffffffff,ar6_00,ar7_00);
          Vec3_sub(auStack_28,ar4 + 0x244,ar6_00,ar7_00,auStack_d8);
          Vec3_assign(auStack_38,auStack_d8,ar6_00,ar7_00);
          Vec3_dtor(auStack_d8,0xffffffff,ar6_00,ar7_00);
          puVar3 = auStack_28;
          Vec3_assign(ar4 + 0x244,puVar3,ar6_00,ar7_00);
          Vec3_ctor_xyz(auStack_e8,puVar3,ar6_00,ar7_00);
          iVar1 = FUN_8c023d04(auStack_38,auStack_e8,ar6_00,ar7_00);
          Vec3_dtor(auStack_e8,0xffffffff,ar6_00,ar7_00);
          uVar2 = 0;
          if (iVar1 != 0) {
            vec3_copy_8c02b5fc(auStack_f4,in_stack_00000000,ar6_00,ar7_00);
            puVar3 = auStack_f4;
            FUN_8c023484(auStack_38,puVar3,ar6_00,ar7_00,auStack_104);
            uVar2 = Vec3_length(auStack_104,puVar3,ar6_00,ar7_00);
            Vec3_assign(ar4 + 0x14,uVar2,ar6_00,ar7_00);
            Vec3_dtor(auStack_104,0xffffffff,ar6_00,ar7_00);
            uVar2 = 0xffffffff;
            object_dtor_delete(auStack_f4,0xffffffff,ar6_00,ar7_00);
          }
          Vec3_length_sq(auStack_38,uVar2,ar6_00,ar7_00);
          if (cVar8 == '\0') {
            *(int *)(ar4 + 0x28) = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = in_dr0;
          }
        }
      }
    }
  }
  Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7_00);
  return uVar4;
}

__asm__(".globl _FUN_8c07c5f8\n.set _FUN_8c07c5f8, _FUN_8c07c5f8_def\n");
