#include "../decls.h"
undefined4 FUN_8c1f38f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int *in_r3;
  
  if (*in_r3 != 0) {
    ain0 = (**(code **)(*in_r3 + 0x14))(ar4,ar5,ar6,ar7);
    DAT_8c2739f0 = 0;
  }
  return ain0;
}

__asm__(".globl _FUN_8c1f38f4\n.set _FUN_8c1f38f4, _FUN_8c1f38f4_def\n");
