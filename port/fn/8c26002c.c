#include "../decls.h"
undefined4 FUN_8c26002c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 8);
  (*(code *)(&FUN_8c264fa4))
            (uVar1,*(undefined4 *)(ar4 + 0x50),ar5 << 1,
             *(int *)(ar4 + 0x6c) * 2 + *(int *)(ar4 + 100) + *(int *)(ar4 + 0x70) * 2);
  uVar1 = FUN_8c264fc2(uVar1);
  return uVar1;
}

__asm__(".globl _FUN_8c26002c\n.set _FUN_8c26002c, _FUN_8c26002c_def\n");
