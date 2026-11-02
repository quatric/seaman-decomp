#include "../decls.h"
undefined4 FUN_8c0fa910_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0fa9fc(ar4,ar5,ar6,ar7);
  while (*ar4 != 1) {
    s_SPEECH_0faa98(ar4,ar5,ar6,ar7);
  }
  *ar4 = 1;
  return 1;
}

__asm__(".globl _FUN_8c0fa910\n.set _FUN_8c0fa910, _FUN_8c0fa910_def\n");
