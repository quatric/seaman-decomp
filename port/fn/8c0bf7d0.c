#include "../decls.h"
undefined4 FUN_8c0bf7d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c014334))
                    (ar4 + 0x10,ar5,ar6,ar7,(&DATA_8c13bfe4) + 0x9b7
                    );
  return uVar1;
}

__asm__(".globl _FUN_8c0bf7d0\n.set _FUN_8c0bf7d0, _FUN_8c0bf7d0_def\n");
