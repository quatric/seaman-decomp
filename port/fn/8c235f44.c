#include "../decls.h"
undefined4 FUN_8c235f44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float in_fr4;
  
  if (ar4 == 0) {
    ar4 = _DAT_8c4c0cc0;
  }
  *(float *)(ar4 + 0x40) = in_fr4 * *(float *)(ar4 + 0x4c) + *(float *)(ar4 + 0x40);
  *(float *)(ar4 + 0x44) = in_fr4 * *(float *)(ar4 + 0x50) + *(float *)(ar4 + 0x44);
  *(float *)(ar4 + 0x48) = in_fr4 * *(float *)(ar4 + 0x54) + *(float *)(ar4 + 0x48);
  return 0x48;
}

__asm__(".globl _FUN_8c235f44\n.set _FUN_8c235f44, _FUN_8c235f44_def\n");
