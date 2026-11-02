#include "../decls.h"
undefined4 FUN_8c10289c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*ar4 != 0) {
    FUN_8c1fb57c(*ar4,ar5,ar6,ar7);
    *ar4 = 0;
  }
  return 0;
}

__asm__(".globl _FUN_8c10289c\n.set _FUN_8c10289c, _FUN_8c10289c_def\n");
