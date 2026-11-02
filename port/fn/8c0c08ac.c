#include "../decls.h"
undefined4 game_poll_exit_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = input_poll_device_state(0x8c3dd7dc,ar5,ar6,ar7);
  *(undefined4 *)(0x2d620 + ar4) = uVar1;
  iVar2 = FUN_8c01f794(0x8c3eb334,ar5,ar6,ar7);
  pack_close_and_flush(0x8c2b59d0,ar5,ar6,ar7);
  FUN_8c0f816c(0x8c35468c,ar5,ar6,ar7);
  FUN_8c0c2c0c(0x8c2b5628,ar5,ar6,ar7);
  pure_virtual_stub(ar4,ar4 + 0x2d59c,ar6,ar7);
  *(int *)(0x2d59c + ar4) = *(int *)(0x2d59c + ar4) + 1;
  *(undefined4 *)(0x2d624 + ar4) = *(undefined4 *)(0x2d620 + ar4);
  *(undefined4 *)0x8c431a50 = 0;
  if ((iVar2 == 1) || (*(int *)(0x2dd78 + ar4) == 4)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _game_poll_exit\n.set _game_poll_exit, _game_poll_exit_def\n");
