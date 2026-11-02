#include "../decls.h"
undefined4 * FUN_8c0e6c54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0xa68) = in_fr4;
  *(undefined4 *)(ar4 + 0xa6c) = 0x44610000;
  *(undefined4 *)(ar4 + 0xa70) = 0x4544e000;
  return &DAT_8c0e6c88;
}

__asm__(".globl _FUN_8c0e6c54\n.set _FUN_8c0e6c54, _FUN_8c0e6c54_def\n");
