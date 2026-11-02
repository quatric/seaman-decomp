#include "../decls.h"
undefined4 FUN_8c2219a8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  (*(uint *)0x8c4c0e80) = in_fr4;
  (*(uint *)0x8c4c0e84) = in_fr5;
  (*(uint *)0x8c4c0e88) = in_fr6;
  _DAT_8c4c0ed0 = _DAT_8c4c0ed0 & 0xfffffffd;
  return ain0;
}

__asm__(".globl _FUN_8c2219a8\n.set _FUN_8c2219a8, _FUN_8c2219a8_def\n");
