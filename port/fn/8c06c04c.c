#include "../decls.h"
undefined4 FUN_8c06c04c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)(&FUN_8c01538c))
            (*(int *)(0x224 + ar4) + *(int *)(0x220 + ar4) * 0x124 + 0x78,ar5,
             ar6,ar7);
  uVar1 = (*(code *)(&FUN_8c015bb8))
                    (*(int *)(0x224 + ar4) + *(int *)(0x220 + ar4) * 0x124 +
                     0x70,ar5,ar6,ar7);
  uVar1 = FUN_8c219a9a(uVar1,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c06c04c\n.set _FUN_8c06c04c, _FUN_8c06c04c_def\n");
