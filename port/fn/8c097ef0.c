#include "../decls.h"
undefined4 FUN_8c097ef0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_PR;
  
  *(undefined4 *)(ar4 + 300) = 0;
  *(undefined4 *)(ar4 + 0x40) = 5;
  *(undefined4 *)(ar4 + 0x134) = 0;
  FUN_8c031b58(ar4 + 0xb0,ar5,ar6,ar7);
  FUN_8c032204(ar4 + 0xb0,ar5,ar6,ar7,in_PR);
  ar5_00 = 1;
  FUN_8c0321fc(ar4 + 0xb0,1,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x138) = 0;
  *(undefined4 *)(ar4 + 0x1e8) = 0;
  FUN_8c030eb8(ar4 + 0x1fc,ar5_00,ar6,ar7);
  *(undefined4 *)(ar4 + 0x214) = 1;
  if ((-1 < *(int *)(ar4 + 0x2f4)) && (-1 < *(int *)(ar4 + 0x2f8))) {
    FUN_8c06b1d8(*(undefined4 *)(ar4 + 0x2f4),*(undefined4 *)(ar4 + 0x2f8),ar6,ar7);
    *(undefined4 *)(ar4 + 0x2f4) = 0xffffffff;
    *(undefined4 *)(ar4 + 0x2f8) = 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x240) = 0;
  *(undefined4 *)(ar4 + 0x244) = 0;
  return 0x244;
}

__asm__(".globl _FUN_8c097ef0\n.set _FUN_8c097ef0, _FUN_8c097ef0_def\n");
