#include "../decls.h"
uint FUN_8c0f4fa4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  *ar5 = *(undefined4 *)(ar4 + 0x24);
  vec3_copy_8c023d8c(ar5 + 1,ar4 + 0x50,ar6,ar7);
  FUN_8c023e04(ar5 + 4,ar4 + 0x5c,ar6,ar7);
  ar5[7] = *(undefined4 *)(ar4 + 0x6c);
  uVar1 = *(uint *)(ar4 + 0x74) & 0xfffffffd;
  ar5[8] = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c0f4fa4\n.set _FUN_8c0f4fa4, _FUN_8c0f4fa4_def\n");
