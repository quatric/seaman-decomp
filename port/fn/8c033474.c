#include "../decls.h"
undefined4 FUN_8c033474_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  undefined4 uVar1;
  undefined1 *a6;
  undefined1 *a7;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined1 auStack_c [12];
  
  uVar1 = 0;
  if (*(char *)(0x210 + ar4) != '\0') {
    Vec3_ctor_zero(auStack_14,ar5,ar6,ar7);
    a7 = auStack_c;
    a6 = auStack_10;
    (**(code **)(0x13c + *ar7))(ar7,auStack_14,a6,a7);
    Vec3_sub(ar6,auStack_14,a6,a7,auStack_34);
    Vec3_ctor_copy(auStack_24,auStack_34,a6,a7);
    Vec3_dtor(auStack_34,0xffffffff,a6,a7);
    FUN_8c02174c(0x8c2b59d0,ar5,a6,a7);
    Vec3_dtor(auStack_24,0xffffffff,a6,a7);
    uVar1 = Vec3_dtor(auStack_14,0xffffffff,a6,a7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c033474\n.set _FUN_8c033474, _FUN_8c033474_def\n");
