#include "../decls.h"
undefined4 FUN_8c0c4cd8_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *a4;
  undefined1 *a5;
  int ar6_00;
  undefined1 auStack_1c [20];
  
  Vec3_ctor_zero(auStack_1c,ar5,ar6,ar7);
  a5 = auStack_1c;
  ar6_00 = ar6;
  (**(code **)(0x150 + *(int *)(ar4 + 8)))(ar4,a5,ar6,ar7);
  FUN_8c036988(ar4,a5,ar6_00,ar7);
  a4 = *(int **)(ar6 * 4 + ar5);
  (**(code **)(*a4 + 0x50))(a4,ar4,ar6_00,ar7);
  FUN_8c0c4d70(0x8c2b5628,0x96,ar6_00,ar7);
  uVar1 = Vec3_dtor(auStack_1c,0xffffffff,ar6_00,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0c4cd8\n.set _FUN_8c0c4cd8, _FUN_8c0c4cd8_def\n");
