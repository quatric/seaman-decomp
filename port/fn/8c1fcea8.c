#include "../decls.h"
undefined4
FUN_8c1fcea8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
            undefined4 s8)

{
  undefined4 in_r0;
  int iVar1;
  
  iVar1 = ar4 * 0x80 + 0x8c475fc0;
  *(undefined4 *)(iVar1 + 0x14) = ar5;
  *(undefined4 *)(iVar1 + 0x18) = ar6;
  *(undefined4 *)(iVar1 + 0x1c) = ar7;
  *(undefined4 *)(iVar1 + 0x20) = s0;
  *(undefined4 *)(iVar1 + 0x24) = s4;
  *(undefined4 *)(iVar1 + 0x28) = s8;
  *(undefined4 *)(iVar1 + 4) = 1;
  return in_r0;
}

__asm__(".globl _FUN_8c1fcea8\n.set _FUN_8c1fcea8, _FUN_8c1fcea8_def\n");
