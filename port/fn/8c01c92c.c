#include "../decls.h"
int FUN_8c01c92c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x18);
  if ((-1 < iVar1) && (iVar1 = 10, *(int *)(ar4 + 0x18) < 0xb)) {
    iVar1 = 0xf;
    *(undefined4 *)(ar4 + 0x18) = 0xf;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01c92c\n.set _FUN_8c01c92c, _FUN_8c01c92c_def\n");
