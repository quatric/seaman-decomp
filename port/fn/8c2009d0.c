#include "../decls.h"
undefined4 FUN_8c2009d0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (**(code **)(*(undefined4 *)0x8c4783dc + 0xc))
                    (*(undefined4 *)(ar4 * 0x148 + 0x8c4783e0 + 0x24),ar5 << 1);
  return uVar1;
}

__asm__(".globl _FUN_8c2009d0\n.set _FUN_8c2009d0, _FUN_8c2009d0_def\n");
