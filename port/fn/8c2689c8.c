#include "../decls.h"
undefined4 FUN_8c2689c8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 ar4_01;
  undefined4 uVar1;
  undefined4 *ar6_00;
  undefined4 a7;
  undefined4 in_PR;
  
  noop_26a0f8(ar4,ar5,ar6,ar7,in_PR);
  memset(&DAT_8c4bd580,0,0x480,ar7);
  memset(0x8c4bda00,0,0x820,ar7);
  uVar1 = 0x80808080;
  ar4_00 = 0;
  a7 = 0x200;
  ar6_00 = (undefined4 *)&DAT_8c4be220;
  do {
    ar4_00 = ar4_00 + 1;
    *ar6_00 = 0x80808080;
    ar6_00 = ar6_00 + 1;
  } while (ar4_00 < 0x200);
  if (DAT_8c2785cc == 0) {
    DAT_8c2785cc = ret_const_8c2785e8_26b1ca(ar4_00,0x80808080,ar6_00,0x200);
  }
  ar4_01 = 0;
  (**(code **)(DAT_8c2785cc + 0xc))(0,uVar1,ar6_00,a7);
  noop_2689c4(ar4_01,uVar1,ar6_00,a7,in_PR);
  uVar1 = FUN_8c26a130(0,0,ar6_00,a7);
  return uVar1;
}

__asm__(".globl _FUN_8c2689c8\n.set _FUN_8c2689c8, _FUN_8c2689c8_def\n");
