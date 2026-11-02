#include "../decls.h"
undefined4
FUN_8c25ece6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            )

{
  undefined4 uVar1;
  
  uVar1 = vsprintf_like(0x8c4b3340,s0,&s4,ar7);
  if (DAT_8c277d98 != (code *)0x0) {
    uVar1 = (*DAT_8c277d98)(DAT_8c277d9c,0x8c4b3340);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c25ece6\n.set _FUN_8c25ece6, _FUN_8c25ece6_def\n");
