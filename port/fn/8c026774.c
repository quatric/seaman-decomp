#include "../decls.h"
undefined4 CAnimal_m5_026774_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  *(undefined4 *)(ar4 + 0x70) = 0;
  (**(code **)(**(int **)(0x30c + ar4) + 0x14))(*(int **)(0x30c + ar4),ar5,ar6,ar7);
  FUN_8c02a788(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c02aabc(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _CAnimal_m5_026774\n.set _CAnimal_m5_026774, _CAnimal_m5_026774_def\n");
