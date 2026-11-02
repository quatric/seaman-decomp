#include "../decls.h"
undefined4 FUN_8c0ff730_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar6_00;
  undefined4 uVar1;
  undefined4 in_PR;
  
  *(undefined4 *)(ar4 + 0x20) = 0;
  *(undefined4 *)(ar4 + 0x24) = 0x43f00000;
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined4 *)(ar4 + 0x2c) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0x44200000;
  *(undefined4 *)(ar4 + 0x34) = 0;
  *(undefined4 *)(ar4 + 0x38) = 0x44200000;
  *(undefined4 *)(ar4 + 0x3c) = 0x43f00000;
  *(undefined4 *)(ar4 + 0x40) = 0xff000000;
  *(undefined4 *)(ar4 + 0x44) = 0xff000000;
  *(undefined4 *)(ar4 + 0x48) = 0xff000000;
  *(undefined4 *)(ar4 + 0x4c) = 0xff000000;
  uVar1 = 4;
  ar6_00 = ar4 + 0x40;
  FUN_8c016318(ar4 + 0xc,ar4 + 0x20,ar6_00,4,in_PR);
  uVar1 = FUN_8c015198(ar4 + 0xc,0x20,ar6_00,uVar1,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c0ff730\n.set _FUN_8c0ff730, _FUN_8c0ff730_def\n");
