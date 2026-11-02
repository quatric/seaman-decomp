#include "../decls.h"
undefined4 FUN_8c022fc0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined8 in_dr0;
  undefined4 uVar1;
  char cVar2;
  undefined4 auStack_28 [4];
  undefined1 auStack_18 [24];
  
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  cVar2 = '\0';
  Vec3_sub(ar5,ar4,ar6,ar7,auStack_28);
  Vec3_ctor_copy(auStack_18,auStack_28,ar6,ar7);
  ar5_00 = 0xffffffff;
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  Vec3_length_sq(auStack_18,ar5_00,ar6,ar7);
  if (cVar2 != '\0') {
    auStack_28[0] = uVar1;
  }
  Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  return 0xc;
}

__asm__(".globl _FUN_8c022fc0\n.set _FUN_8c022fc0, _FUN_8c022fc0_def\n");
