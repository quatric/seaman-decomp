#include "../decls.h"
undefined4 Class_12ab2c_m5_09dcf8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  uVar1 = (**(code **)(**(int **)(0x30c + ar4) + 0x14))
                    (*(int **)(0x30c + ar4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_12ab2c_m5_09dcf8\n.set _Class_12ab2c_m5_09dcf8, _Class_12ab2c_m5_09dcf8_def\n");
