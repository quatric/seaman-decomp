#include "../decls.h"
undefined4 game_shutdown_a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar4_00;
  
  ar4_00 = 0x8c286ebc;
  FUN_8c0c09a4(0x8c286ebc,ar5,ar6,ar7);
  FUN_8c25b37c(ar4_00,ar5,ar6,ar7);
  FUN_8c23403e(ar4_00,ar5,ar6,ar7);
  if (*(undefined4 *)0x8c43b570 != 0) {
    ar4_00 = *(undefined4 *)0x8c43b570;
    FUN_8c1fb57c(ar4_00,ar5,ar6,ar7);
  }
  if (*(undefined4 *)0x8c43b574 != 0) {
    ar4_00 = *(undefined4 *)0x8c43b574;
    FUN_8c1fb57c(ar4_00,ar5,ar6,ar7);
  }
  if (*(undefined4 *)0x8c43b578 != 0) {
    ar4_00 = *(undefined4 *)0x8c43b578;
    FUN_8c1fb57c(ar4_00,ar5,ar6,ar7);
  }
  if (*(undefined4 *)0x8c43b57c != 0) {
    ar4_00 = *(undefined4 *)0x8c43b57c;
    FUN_8c1fb57c(ar4_00,ar5,ar6,ar7);
  }
  if (*(undefined4 *)0x8c43b580 != 0) {
    ar4_00 = *(undefined4 *)0x8c43b580;
    FUN_8c1fb57c(ar4_00,ar5,ar6,ar7);
  }
  uVar1 = FUN_8c102d40(ar4_00,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _game_shutdown_a\n.set _game_shutdown_a, _game_shutdown_a_def\n");
