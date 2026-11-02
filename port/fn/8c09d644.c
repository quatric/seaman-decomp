#include "../decls.h"
undefined4 FUN_8c09d644_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar4 = 0;
  FUN_8c02a1fc(ar4 + 1,ar5,ar6,ar7);
  FUN_8c08a9b8(ar4 + 4,ar5,ar6,ar7);
  ar4[7] = 10;
  ar4[8] = ar4[8] | 0x80000001;
  FUN_8c09d6b8(ar4 + 9,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)((int)ar4 + iVar1 + 0x58) = 0;
  }
  return 0xf;
}

__asm__(".globl _FUN_8c09d644\n.set _FUN_8c09d644, _FUN_8c09d644_def\n");
