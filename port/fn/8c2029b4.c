#include "../decls.h"
undefined4
FUN_8c2029b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint s0,uint s4,uint s8,
            uint s12)

{
  if (s0 == s8) {
    if (s4 == s12) {
      return 0;
    }
    if (s12 < s4) {
      return 1;
    }
  }
  else if (s8 < s0) {
    return 1;
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c2029b4\n.set _FUN_8c2029b4, _FUN_8c2029b4_def\n");
