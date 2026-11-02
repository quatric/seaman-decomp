#include "../decls.h"
uint FUN_8c1f2b42_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)0xda;
  for (; *ar4 != '\0'; ar4 = ar4 + 1) {
    uVar1 = FUN_8c1f2a48((int)*ar4,ar5,ar6,ar7);
    uVar2 = uVar2 + (uVar1 & 0xff);
  }
  return uVar2 >> 2 & 0xff;
}

__asm__(".globl _FUN_8c1f2b42\n.set _FUN_8c1f2b42, _FUN_8c1f2b42_def\n");
