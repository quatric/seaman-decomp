#include "../decls.h"
undefined4 FUN_8c013d78_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  float in_fr4;
  
  if (in_fr4 == 0.0) {
    *ar4 = 0;
  }
  else {
    if (((uint)in_fr4 & 0x7f800000) != 0x7f800000) {
      *ar4 = ((int)((uint)in_fr4 & 0x7f800000) >> 0x17) + -0x7e;
      return ain0;
    }
    if (((uint)in_fr4 & 0x7fffff) == 0) {
      ain0 = 0x44c;
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c013d78\n.set _FUN_8c013d78, _FUN_8c013d78_def\n");
