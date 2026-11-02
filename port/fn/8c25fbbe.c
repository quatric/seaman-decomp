#include "../decls.h"
undefined4 FUN_8c25fbbe_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  *(int *)(ar4 + 0x9c) = *(int *)(ar4 + 0x9c) + ar6;
  *(int *)(ar4 + 0x98) = *(int *)(ar4 + 0x98) + ar6;
  return 0x98;
}

__asm__(".globl _FUN_8c25fbbe\n.set _FUN_8c25fbbe, _FUN_8c25fbbe_def\n");
