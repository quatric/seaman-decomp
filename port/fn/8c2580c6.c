#include "../decls.h"
undefined4 FUN_8c2580c6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  if (_DAT_8c4aa6dc != 0) {
    ain0 = FUN_8c1fa54c(_DAT_8c4ab334,ar5,ar6,ar7);
  }
  DAT_8c277c68 = DAT_8c277c68 + 1;
  return ain0;
}

__asm__(".globl _FUN_8c2580c6\n.set _FUN_8c2580c6, _FUN_8c2580c6_def\n");
