#include "../decls.h"
undefined4 FUN_8c123594_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(char *)(0x4bc + ar4) == '\0') {
    if (((short)ar5 == 0) || (*(short *)(0x4b8 + ar4) == (short)ar5)) {
      return (int)*(short *)(0x4b8 + ar4);
    }
    iVar1 = (int)0x4bc;
    *(undefined1 *)(iVar1 + ar4) = 1;
    *(undefined2 *)(iVar1 + 2 + ar4) = 0x32;
    *(undefined2 *)(iVar1 + -4 + ar4) = 0;
    FUN_8c120348(ar4,0xb,(short)ar5,0);
  }
  return 0;
}

__asm__(".globl _FUN_8c123594\n.set _FUN_8c123594, _FUN_8c123594_def\n");
