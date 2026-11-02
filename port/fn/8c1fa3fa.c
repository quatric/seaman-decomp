#include "../decls.h"
int FUN_8c1fa3fa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint in_r3;
  int unaff_r14;
  int iVar1;
  undefined4 *puVar2;
  
  if ((int)in_r3 < 0) {
    iVar1 = unaff_r14 >> (~in_r3 & 0x1f) + 1;
  }
  else {
    iVar1 = unaff_r14 << (in_r3 & 0x1f);
  }
  for (puVar2 = *(undefined4 **)(in_r0 + iVar1 * 4); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    in_r0 = (*(code *)*puVar2)(puVar2[2],ar5,ar6,ar7);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1fa3fa\n.set _FUN_8c1fa3fa, _FUN_8c1fa3fa_def\n");
