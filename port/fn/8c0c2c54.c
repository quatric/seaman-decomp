#include "../decls.h"
int FUN_8c0c2c54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(0x384 + ar4) = 0xffffffff;
  iVar1 = 0x388;
  *(undefined1 *)(0x388 + ar4) = 0x30;
  return iVar1;
}

__asm__(".globl _FUN_8c0c2c54\n.set _FUN_8c0c2c54, _FUN_8c0c2c54_def\n");
