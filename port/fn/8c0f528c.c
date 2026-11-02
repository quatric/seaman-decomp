#include "../decls.h"
undefined4
FUN_8c0f528c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined4 in_fr11;
  undefined4 in_fr10;
  
  *(undefined4 *)(ar4 + 0x30) = in_fr4;
  *(undefined4 *)(ar4 + 0x34) = in_fr5;
  *(undefined4 *)(ar4 + 0x38) = in_fr6;
  *(undefined4 *)(ar4 + 0x50) = in_fr7;
  *(undefined4 *)(ar4 + 0x54) = in_fr8;
  *(undefined4 *)(ar4 + 0x58) = in_fr9;
  *(undefined4 *)(ar4 + 0x5c) = in_fr10;
  *(undefined4 *)(ar4 + 0x60) = in_fr11;
  *(undefined4 *)(ar4 + 100) = s0;
  return 0;
}

__asm__(".globl _FUN_8c0f528c\n.set _FUN_8c0f528c, _FUN_8c0f528c_def\n");
