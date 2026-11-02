#include "../decls.h"
undefined4
FUN_8c1fd5c0_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
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
  uVar1 = vsprintf_like(0x8c47e2ec,s4,ar6_00,ar7);
  if (DAT_8c273a50 != (code *)0x0) {
    uVar1 = (*DAT_8c273a50)(0x8c47e2ec,s4,ar6_00,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1fd5c0\n.set _FUN_8c1fd5c0, _FUN_8c1fd5c0_def\n");
