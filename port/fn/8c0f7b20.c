#include "../decls.h"
undefined4 main_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  game_init(ar4,ar5,ar6,ar7);
  while( true ) {
    uVar2 = 0x8c286ebc;
    iVar1 = game_poll_exit(0x8c286ebc,ar5,ar6,ar7);
    if (iVar1 < 0) break;
    game_frame(uVar2,ar5,ar6,ar7);
  }
  game_shutdown_a(uVar2,ar5,ar6,ar7);
  uVar2 = game_shutdown_b(uVar2,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _main\n.set _main, _main_def\n");
