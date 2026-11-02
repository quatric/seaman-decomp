#include "../decls.h"
undefined4 s_GRAPHICS_COMMON_106f5e_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *ar7_00;
  char cVar4;
  undefined4 in_stack_ffffff28;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  cVar4 = '\0';
  if (((*(char *)(ar4 + 0x81) == '\x01') && (1 < *(int *)(ar4 + 0x104))) &&
     (*(int *)(ar4 + 4) != 0xd)) {
    iVar3 = ar6;
    iVar2 = get_field_124_027930(*(undefined4 *)(ar6 + 8),ar5,ar6,ar7);
    if (iVar2 == 0) {
      iVar2 = get_field_13c_028d9c(*(undefined4 *)(ar6 + 4),ar5,iVar3,ar7);
      if (iVar2 == 2) {
        uVar1 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),ar5,iVar3,ar7);
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        iVar2 = libgcc_divide_helper_010284(uVar1 & 0xffff,0x3c,iVar3,ar7);
        if (iVar2 == 0) {
          *(undefined4 *)(ar4 + 0x40) = 0x15;
          *(undefined4 *)(ar4 + 0x840) = 0x15;
          DAT_8c1eee30 = 0x15;
          *(undefined4 *)(ar4 + 0x844) = 0x22;
          DAT_8c1eee34 = 0x22;
          *(undefined4 *)(ar4 + 0x848) = 0x22;
          DAT_8c1eee38 = 0x22;
        }
        else if (iVar2 == 1) {
          *(undefined4 *)(ar4 + 0x40) = 0xb;
          *(undefined4 *)(ar4 + 0x840) = 0xb;
          DAT_8c1eee30 = 0xb;
          *(undefined4 *)(ar4 + 0x844) = 0x1e;
          DAT_8c1eee34 = 0x1e;
          *(undefined4 *)(ar4 + 0x848) = 0x22;
          DAT_8c1eee38 = 0x22;
        }
        else {
          Vec3_ctor_copy(auStack_40,*(int *)(ar6 + 0x14) + 0x10,iVar3,ar7);
          Vec3_assign_wrap_063818(ar4,auStack_40,iVar3,ar7);
          Vec3_dtor(auStack_40,0xffffffff,iVar3,ar7);
          Vec3_ctor_copy(auStack_50,*(int *)(ar6 + 0x14) + 0x10,iVar3,ar7);
          Vec3_assign_wrap_05f640(ar4,auStack_50,iVar3,ar7);
          Vec3_dtor(auStack_50,0xffffffff,iVar3,ar7);
          if (cVar4 == '\0') {
            *(undefined4 *)(ar4 + 0x30) = 0x44960000;
            *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
          }
          else {
            *(undefined8 *)(ar4 + 0x30) = 0x44af000044960000;
            *(undefined8 *)(ar4 + 0x78) = 0x84044af0000;
          }
          *(undefined4 *)(ar4 + 0x40) = 0x14;
          *(undefined4 *)(ar4 + 0x840) = 0x14;
          DAT_8c1eee30 = 0x14;
          *(undefined4 *)(ar4 + 0x844) = 0x22;
          DAT_8c1eee34 = 0x22;
          *(undefined4 *)(ar4 + 0x848) = 0x22;
          DAT_8c1eee38 = 0x22;
        }
      }
      else if ((iVar2 == 3) || (iVar2 == 4)) {
        Vec3_ctor_copy(auStack_20,*(int *)(ar6 + 0x14) + 0x10,iVar3,ar7);
        Vec3_assign_wrap_063818(ar4,auStack_20,iVar3,ar7);
        Vec3_dtor(auStack_20,0xffffffff,iVar3,ar7);
        ar7_00 = Vec3_ctor_copy;
        Vec3_ctor_copy(auStack_30,*(int *)(ar6 + 0x14) + 0x10,iVar3,Vec3_ctor_copy);
        Vec3_assign_wrap_05f640(ar4,auStack_30,iVar3,ar7_00);
        Vec3_dtor(auStack_30,0xffffffff,iVar3,ar7_00);
        if (cVar4 == '\0') {
          *(undefined4 *)(ar4 + 0x30) = 0x44960000;
          *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
        }
        else {
          *(undefined8 *)(ar4 + 0x30) = 0x44af000044960000;
          *(undefined8 *)(ar4 + 0x78) = 0x8c1eee9044af0000;
        }
        FUN_8c0303b8(ar4 + 0x9c,0,0,"REACTION_TAP_RESPONSE",&DAT_8c1eeec3);
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x4b;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0x14;
        *(undefined4 *)(ar4 + 0x840) = 0x14;
        DAT_8c1eee30 = 0x14;
        *(undefined4 *)(ar4 + 0x844) = 0x22;
        DAT_8c1eee34 = 0x22;
        *(undefined4 *)(ar4 + 0x848) = 0x22;
        DAT_8c1eee38 = 0x22;
      }
    }
    else {
      iVar2 = get_field_124_027930(*(undefined4 *)(ar6 + 8),ar5,iVar3,ar7);
      if (iVar2 == 6) {
        FUN_8c063810(*(int *)(ar6 + 4) + 0xf8,1,iVar3,ar7,in_stack_ffffff28);
        FUN_8c0306d4(ar4 + 0x9c,0x22,0,"REACTION_WAKED_TAP");
      }
    }
  }
  else if (*(char *)(ar4 + 0x83) == '\x02') {
    iVar3 = ar6;
    iVar2 = get_field_124_027930(*(undefined4 *)(ar6 + 8),ar5,ar6,ar7);
    if (iVar2 == 0) {
      iVar2 = get_field_13c_028d9c(*(undefined4 *)(ar6 + 4),ar5,iVar3,ar7);
      if (iVar2 == 2) {
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x55;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0x15;
        *(undefined4 *)(ar4 + 0x840) = 0x15;
        DAT_8c1eee30 = 0x15;
        *(undefined4 *)(ar4 + 0x844) = 0x22;
        DAT_8c1eee34 = 0x22;
        *(undefined4 *)(ar4 + 0x848) = 0x22;
        DAT_8c1eee38 = 0x22;
      }
      else if ((iVar2 == 3) || (iVar2 == 4)) {
        Vec3_ctor_copy(auStack_60,*(int *)(ar6 + 0x14) + 0x10,iVar3,ar7);
        Vec3_assign_wrap_063818(ar4,auStack_60,iVar3,ar7);
        Vec3_dtor(auStack_60,0xffffffff,iVar3,ar7);
        Vec3_ctor_copy(auStack_70,*(int *)(ar6 + 0x14) + 0x10,iVar3,ar7);
        Vec3_assign_wrap_05f640(ar4,auStack_70,iVar3,ar7);
        Vec3_dtor(auStack_70,0xffffffff,iVar3,ar7);
        if (cVar4 == '\0') {
          *(undefined4 *)(ar4 + 0x30) = 0x44960000;
          *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
        }
        else {
          *(undefined8 *)(ar4 + 0x30) = 0x44af000044960000;
          *(undefined8 *)(ar4 + 0x78) = 0x84044af0000;
        }
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x4b;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0xb;
        *(undefined4 *)(ar4 + 0x840) = 0xb;
        DAT_8c1eee30 = 0xb;
        *(undefined4 *)(ar4 + 0x844) = 0x1e;
        DAT_8c1eee34 = 0x1e;
        *(undefined4 *)(ar4 + 0x848) = 0x22;
        DAT_8c1eee38 = 0x22;
      }
    }
    else {
      iVar2 = get_field_124_027930(*(undefined4 *)(ar6 + 8),get_field_124_027930,iVar3,ar7);
      if (iVar2 == 6) {
        FUN_8c063810(*(int *)(ar6 + 4) + 0xf8,2,iVar3,ar7,in_stack_ffffff28);
        FUN_8c0306d4(ar4 + 0x9c,0x23,0,"REACTION_WAKED_TAP");
      }
    }
  }
  *(undefined1 *)(ar4 + 0x81) = 0;
  return 0x81;
}

__asm__(".globl _s_GRAPHICS_COMMON_106f5e\n.set _s_GRAPHICS_COMMON_106f5e, _s_GRAPHICS_COMMON_106f5e_def\n");
