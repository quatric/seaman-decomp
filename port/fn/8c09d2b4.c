#include "../decls.h"
int FUN_8c09d2b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 1;
  if ((*(char *)(ar4 + 0x9a0) != '\x01') && (iVar1 = (int)*(char *)(ar4 + 0x6e0), iVar1 == 1)) {
    *(undefined1 *)(ar4 + 0x9a0) = 1;
    *(undefined4 *)(ar4 + 0x6d8) = 0x3f8ccccd;
    *(undefined4 *)(ar4 + 0x6dc) = 0x3e2e147b;
    iVar1 = 0x6d4;
    *(undefined4 *)(ar4 + 0x6d4) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c09d2b4\n.set _FUN_8c09d2b4, _FUN_8c09d2b4_def\n");
