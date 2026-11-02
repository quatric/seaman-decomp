#include "../decls.h"
undefined4 s_CAnimal_RunIncubator_026882_def(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  FUN_8c02c398(ar4 + 0x174,ar5,ar6,ar7);
  if (*(int *)(0x30c + ar4) == 0) {
    ar7 = 2;
    ar6 = 1;
    ar5 = (&DATA_8c12fdac) + 0x73;
    report_error_message((&DATA_8c12fdac) + 99,ar5,1,2);
  }
  else {
    (**(code **)(**(int **)(0x30c + ar4) + 0x14))(*(int **)(0x30c + ar4),ar5,ar6,ar7);
  }
  uVar1 = FUN_8c02aabc(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _s_CAnimal_RunIncubator_026882\n.set _s_CAnimal_RunIncubator_026882, _s_CAnimal_RunIncubator_026882_def\n");
