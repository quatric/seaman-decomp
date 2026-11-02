#include "../decls.h"
int FUN_8c02ede0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c02da10))
                    (ar4 + 0xa8,*(undefined4 *)(0x13c + ar4),ar6,ar7);
  return (char)uVar1 * 0x62;
}

__asm__(".globl _FUN_8c02ede0\n.set _FUN_8c02ede0, _FUN_8c02ede0_def\n");
