#include "../decls.h"
undefined4 FUN_8c0db188_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0d66d8(ar4 + 0xa68,ar5,ar6,ar7);
  FUN_8c019560(ar4 + 0x9e8,ar5,ar6,ar7);
  FUN_8c019574(ar4 + 0x9e8,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 0x9e8) + 0xc))((int *)(ar4 + 0x9e8),ar5,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0db188\n.set _FUN_8c0db188, _FUN_8c0db188_def\n");
