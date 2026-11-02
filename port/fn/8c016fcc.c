#include "../decls.h"
undefined4 * FUN_8c016fcc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c016a7c(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c129938);
  FUN_8c015ab8((int)ar4 + 0x90,ar5,ar6,ar7);
  FUN_8c017804(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c016fcc\n.set _FUN_8c016fcc, _FUN_8c016fcc_def\n");
