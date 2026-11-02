#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f43d6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  int in_r0;
  int *in_r3;
  int a4;
  
  a4 = *in_r3;
  if (*(int *)(in_r0 + a4) != 0) {
    return 0xfffffffd;
  }
  if ((*(uint *)(*(int *)(0x10f4 + a4) + 0x18) & 1) != 0) {
    return 0xffffffff;
  }
  bVar1 = **(byte **)(&DATA_8c1f5a28);
  **(byte **)(&DATA_8c1f5a28) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(a4,ar5,ar6,ar7);
    return 0xfffffffe;
  }
  return 0;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f43d6\n.set _s_FATAL_ERROR_Cannot_get_semap_1f43d6, _s_FATAL_ERROR_Cannot_get_semap_1f43d6_def\n");
