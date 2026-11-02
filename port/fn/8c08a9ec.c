#include "../decls.h"
undefined4 Class_12a5d0_m4_08a9ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  uVar1 = ar6;
  (**(code **)(**(int **)(0x308 + ar4) + 0x14))(*(int **)(0x308 + ar4),ar6,ar6,ar7);
  uVar1 = (**(code **)(**(int **)(0x30c + ar4) + 0x14))
                    (*(int **)(0x30c + ar4),ar6,uVar1,ar7);
  return uVar1;
}

__asm__(".globl _Class_12a5d0_m4_08a9ec\n.set _Class_12a5d0_m4_08a9ec, _Class_12a5d0_m4_08a9ec_def\n");
