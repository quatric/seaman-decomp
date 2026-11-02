#include "../decls.h"
int FUN_8c03220c_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  code *ar6_00;
  undefined1 *ar6_01;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  int in_stack_fffff62c;
  undefined4 uStack_9b8;
  undefined1 auStack_9b4 [16];
  undefined1 auStack_9a4 [16];
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  undefined4 *puStack_988;
  undefined4 *puStack_984;
  undefined4 uStack_980;
  undefined4 uStack_97c;
  undefined1 auStack_978 [2404];
  
  cVar7 = '\0';
  if (*(int *)(ar4 + 0x1b4) == 1) {
    if (DAT_8c27defc == '\0') {
      uVar4 = 0x10;
      FUN_8c010120(0x8c27d590,Vec3_ctor_zero,Vec3_dtor,0x10,0x96);
      global_list_push(0,FUN_8c032484,0x8c27def0,uVar4);
      DAT_8c27defc = '\x01';
    }
    uVar4 = 0x10;
    ar6_00 = Vec3_dtor;
    FUN_8c010120(auStack_978,Vec3_ctor_zero,Vec3_dtor,0x10,0x96);
    if (DAT_8c27df04 == '\0') {
      _DAT_8c27df00 = 0;
      DAT_8c27df04 = '\x01';
    }
    uStack_9b8 = 0xffffffff;
    puStack_988 = &uStack_994;
    puStack_984 = &uStack_9b8;
    uStack_980 = 0;
    uStack_97c = 1;
    Vec3_assign(_DAT_8c27df00 * 0x10 + -0x73d82a70,*ar5,ar6_00,uVar4);
    iVar1 = _DAT_8c27df00;
    iVar2 = _DAT_8c27df00 + 1;
    _DAT_8c27df00 = _DAT_8c27df00 + 1;
    if (0x95 < iVar2) {
      _DAT_8c27df00 = 0;
    }
    iVar2 = iVar1;
    for (iVar5 = 0; iVar5 < 0x96; iVar5 = iVar5 + 1) {
      if (0x95 < iVar2) {
        iVar2 = iVar2 + -0x96;
      }
      puVar3 = (undefined8 *)(iVar2 * 0x10 + -0x73d82a70);
      if (cVar7 == '\0') {
        uStack_994 = *(undefined4 *)puVar3;
      }
      else {
        uStack_994 = (undefined4)*puVar3;
      }
      puVar3 = (undefined8 *)(iVar2 * 0x10 + -0x73d82a6c);
      if (cVar7 == '\0') {
        uStack_990 = *(undefined4 *)puVar3;
      }
      else {
        uStack_990 = (undefined4)*puVar3;
      }
      puVar3 = (undefined8 *)(iVar2 * 0x10 + -0x73d82a68);
      if (cVar7 == '\0') {
        uStack_98c = *(undefined4 *)puVar3;
      }
      else {
        uVar6 = *puVar3;
        uStack_98c = (undefined4)uVar6;
        puStack_988 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
      }
      if (iVar1 < 0) {
        iVar1 = 0x95;
      }
      in_stack_fffff62c = iVar1;
      Vec3_assign(auStack_978 + iVar5 * 0x10,iVar1 * 0x10 + -0x73d82a70,ar6_00,uVar4);
      ar6_00 = (code *)0x0;
      FUN_8c234fd0(&puStack_988,uStack_97c,0,uVar4);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    }
    ar7 = 0x96;
    ar6 = 0x10;
    vec_delete_array(auStack_978,Vec3_dtor,0x10,0x96,in_stack_fffff62c);
  }
  if (*(int *)(ar4 + 0x1b8) == 1) {
    ar6 = 0;
    FUN_8c234d68(ar4 + 0x17c,*(int *)(ar4 + 0x188) + -1,0,ar7);
  }
  iVar1 = *(int *)(ar4 + 0x1c0);
  if (iVar1 == 1) {
    Vec3_scale(ar4 + 0x80,ar4 + 0x48,ar6,ar7,auStack_9a4);
    Vec3_scale(auStack_9a4,&DAT_8c132bf8,ar6,ar7,auStack_9b4);
    uVar4 = 0xffff0000;
    ar6_01 = auStack_9b4;
    FUN_8c032cb8(ar4,*ar5,ar6_01,0xffff0000);
    Vec3_dtor(auStack_9b4,0xffffffff,ar6_01,uVar4);
    iVar1 = Vec3_dtor(auStack_9a4,0xffffffff,ar6_01,uVar4);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c03220c\n.set _FUN_8c03220c, _FUN_8c03220c_def\n");
