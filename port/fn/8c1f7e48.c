#include "../decls.h"
undefined4 game_shutdown_b_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(undefined4 *)0x8c0080fc != '\x01') {
                    
                    
    uVar1 = (*(code *)*(undefined4 *)0x8c0000e0)(1);
    return uVar1;
  }
  if (*(undefined4 *)0x8c0080fe == '\x01') {
    uVar1 = (*(code *)0x8c008300)();
    return uVar1;
  }
  *(undefined4 *)0x8c000064 = 0x8c008000;
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c0000e0)(3);
  return uVar1;
}

__asm__(".globl _game_shutdown_b\n.set _game_shutdown_b, _game_shutdown_b_def\n");
