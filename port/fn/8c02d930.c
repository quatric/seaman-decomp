#include "../decls.h"
uint FUN_8c02d930_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  
  bVar1 = *(int *)(ar4 + 0x14) != 0;
  if (bVar1) {
    *(undefined4 *)(ar4 + 4) = 1;
    *(undefined4 *)(ar4 + 8) = 1;
  }
  return (uint)bVar1;
}

__asm__(".globl _FUN_8c02d930\n.set _FUN_8c02d930, _FUN_8c02d930_def\n");
