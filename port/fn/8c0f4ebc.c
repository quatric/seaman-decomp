#include "../decls.h"
undefined4 FUN_8c0f4ebc_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x24) = *ar5;
  vec3_copy_8c023d8c(ar4 + 0x50,ar5 + 1,ar6,ar7);
  FUN_8c023e04(ar4 + 0x5c,ar5 + 4,ar6,ar7);
  *(undefined4 *)(ar4 + 0x6c) = ar5[7];
  *(undefined4 *)(ar4 + 0x74) = ar5[8];
  return 0x74;
}

__asm__(".globl _FUN_8c0f4ebc\n.set _FUN_8c0f4ebc, _FUN_8c0f4ebc_def\n");
