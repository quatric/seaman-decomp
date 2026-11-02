#include "../decls.h"
uint FUN_8c1f4636_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1f45b8(ar4,ar5,ar6,ar7);
  return (uint)*(byte *)(iVar1 + 0xc);
}

__asm__(".globl _FUN_8c1f4636\n.set _FUN_8c1f4636, _FUN_8c1f4636_def\n");
