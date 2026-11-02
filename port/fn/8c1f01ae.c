#include "../decls.h"
undefined4 FUN_8c1f01ae_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_8c1efffa(ar5,8,ar6,ar7);
  if (puVar1 == (undefined1 *)0x0) {
    return 0xffffffff;
  }
  *ar4 = *puVar1;
  ar4[1] = puVar1[1];
  ar4[2] = puVar1[2];
  ar4[3] = puVar1[3];
  return 0;
}

__asm__(".globl _FUN_8c1f01ae\n.set _FUN_8c1f01ae, _FUN_8c1f01ae_def\n");
