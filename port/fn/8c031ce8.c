#include "../decls.h"
undefined4 FUN_8c031ce8_def(undefined4 ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *ar6_00;
  undefined8 in_dr0;
  undefined4 uVar2;
  char cVar3;
  undefined4 in_stack_00000000;
  undefined4 auStack_34 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  cVar3 = '\0';
  ar6_00 = ar6;
  Vec3_ctor_zero(&uStack_24,ar5,ar6,ar7);
  FUN_8c032ab0(ar4,ar5,ar6_00,ar7);
  uStack_24 = (undefined4)in_dr0;
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uVar1 = uVar2;
  if (cVar3 == '\0') {
    uVar1 = auStack_34[0];
    uStack_24 = uVar2;
    uVar2 = uStack_20;
  }
  uStack_20 = uVar2;
  auStack_34[0] = uVar1;
  FUN_8c032ab0(ar4,ar5,ar6_00,ar7);
  uStack_1c = (undefined4)in_dr0;
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar3 == '\0') {
    uStack_1c = uVar1;
    uVar1 = uStack_18;
  }
  uStack_18 = uVar1;
  Vec3_ctor_xyz(auStack_34,ar5,ar6_00,ar7);
  (**(code **)(*ar6 + 0x128))(ar6,auStack_34,ar6_00,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
  FUN_8c032ab0(ar4,uVar1,ar6_00,ar7);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uStack_20 = uVar1;
  if (cVar3 != '\0') {
    uStack_20 = (undefined4)in_dr0;
    uStack_1c = uVar1;
  }
  Vec3_ctor_copy(in_stack_00000000,&uStack_24,ar6_00,ar7);
  Vec3_dtor(&uStack_24,0xffffffff,ar6_00,ar7);
  return 0;
}

__asm__(".globl _FUN_8c031ce8\n.set _FUN_8c031ce8, _FUN_8c031ce8_def\n");
