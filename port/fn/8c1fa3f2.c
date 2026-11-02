#include "../decls.h"
undefined1 * FUN_8c1fa3f2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = &DAT_8c475bc8;
  for (puVar2 = *(undefined4 **)(&DAT_8c475bc8 + ((int)(short)ar4 >> 4) * 4);
      puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[1]) {
    puVar1 = (undefined1 *)(*(code *)*puVar2)(puVar2[2]);
  }
  return puVar1;
}

__asm__(".globl _FUN_8c1fa3f2\n.set _FUN_8c1fa3f2, _FUN_8c1fa3f2_def\n");
