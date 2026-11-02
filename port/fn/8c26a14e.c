#include "../decls.h"
undefined4
debug_printf_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            )

{
  undefined4 uVar1;
  
  uVar1 = vsprintf_like(0x8c4bea48,s0,&s4);
  if (*(code **)(&DATA_8c2785e0) != (code *)0x0) {
    uVar1 = (**(code **)(&DATA_8c2785e0))(*(undefined4 *)(&DATA_8c2785e4),0x8c4bea48);
  }
  return uVar1;
}

__asm__(".globl _debug_printf\n.set _debug_printf, _debug_printf_def\n");
