#include "../decls.h"
int FUN_8c1fdd1a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = ar4 * 0x148 + 0x8c4783e0;
  if (*(char *)(iVar1 + 2) == '\0') {
    return (int)(int)0xffffff01;
  }
  *(undefined1 *)(iVar1 + 9) = 0;
  *(undefined1 *)(iVar1 + 8) = 0;
  *(undefined1 *)(iVar1 + 10) = 0;
  *(undefined1 *)(iVar1 + 0xb) = 0;
  *(undefined1 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  return 0;
}

__asm__(".globl _FUN_8c1fdd1a\n.set _FUN_8c1fdd1a, _FUN_8c1fdd1a_def\n");
