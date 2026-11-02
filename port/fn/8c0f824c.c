#include "../decls.h"
uint FUN_8c0f824c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)(&FUN_8c0fa944))
                    (ar4 + 0x1054,ar4 + 0x1010,*(undefined4 *)(0x89138 + ar4),ar7);
  if (iVar1 == 0) {
    *(undefined4 *)(0x89138 + ar4) = 0;
    *(undefined4 *)(0x89134 + ar4) = 0;
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c0f824c\n.set _FUN_8c0f824c, _FUN_8c0f824c_def\n");
