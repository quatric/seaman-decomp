#include "../decls.h"
undefined4 CAnimal_m4_0acfe4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  uVar1 = (**(code **)(**(int **)(0x30c + ar4) + 0x1c))
                    (*(int **)(0x30c + ar4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _CAnimal_m4_0acfe4\n.set _CAnimal_m4_0acfe4, _CAnimal_m4_0acfe4_def\n");
