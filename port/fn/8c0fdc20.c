#include "../decls.h"
undefined4 * FUN_8c0fdc20_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int in_stack_fffffff0;
  
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0xffffffff;
  iVar1 = 0;
  while (iVar2 = iVar1, iVar2 < 0x400) {
    *(undefined1 *)(ar4 + iVar2 + 4) = 0;
    in_stack_fffffff0 = iVar2;
    iVar1 = iVar2 + 1;
  }
  strcpy(ar4 + 0x2b,&DAT_8c141e2a,ar6,ar7,in_stack_fffffff0);
  strcpy(ar4 + 0x2c,&DAT_8c141e2c,ar6,ar7,in_stack_fffffff0);
  return ar4;
}

__asm__(".globl _FUN_8c0fdc20\n.set _FUN_8c0fdc20, _FUN_8c0fdc20_def\n");
