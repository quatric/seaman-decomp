#include "../decls.h"
undefined4
FUN_8c26a152_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
            undefined4 s8,undefined4 s12)

{
  undefined4 uVar1;
  undefined4 *ar6_00;
  
  if ((ar5 & (uint)&s8) == 0) {
    ar6_00 = &s8;
  }
  else {
    ar6_00 = &s12;
  }
  uVar1 = vsprintf_like(0x8c4bea48,s4,ar6_00,ar7);
  if (*(code **)(&DATA_8c2785e0) != (code *)0x0) {
    uVar1 = (**(code **)(&DATA_8c2785e0))(*(undefined4 *)(&DATA_8c2785e4),0x8c4bea48,ar6_00,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c26a152\n.set _FUN_8c26a152, _FUN_8c26a152_def\n");
