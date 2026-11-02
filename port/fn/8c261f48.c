#include "../decls.h"
undefined4 FUN_8c261f48_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_8c261f22(ar4,ar5,ar6,ar7);
  if (puVar1 == (undefined1 *)0x0) {
    return 0;
  }
  puVar1[1] = 1;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 0x20) = 0;
  *(undefined4 *)(puVar1 + 0x24) = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *puVar1 = 1;
  return puVar1;
}

__asm__(".globl _FUN_8c261f48\n.set _FUN_8c261f48, _FUN_8c261f48_def\n");
