#include "../decls.h"
undefined4 FUN_8c019b48_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 in_dr4;
  
  *(float *)(ar4 + 0x84) = -(float)((ulonglong)in_dr4 >> 0x20);
  return 0x84;
}

__asm__(".globl _FUN_8c019b48\n.set _FUN_8c019b48, _FUN_8c019b48_def\n");
