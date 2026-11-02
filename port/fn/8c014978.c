#include "../decls.h"
undefined4 Class_129808_m3_014978_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x24) = in_fr4;
  *(undefined4 *)(ar4 + 8) = in_fr5;
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0xbf800000;
  *(undefined4 *)(ar4 + 0x1c) = 0;
  uVar1 = FUN_8c0149d4(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_129808_m3_014978\n.set _Class_129808_m3_014978, _Class_129808_m3_014978_def\n");
