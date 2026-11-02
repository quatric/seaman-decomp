#include "../decls.h"
undefined4 FUN_8c0f4f0c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c014334(ar5,ar5,ar6,ar7,(&DATA_8c1401e4) + 0x16);
  *(undefined4 *)(ar5 + 0x14) = *(undefined4 *)(ar4 + 0x20);
  *(undefined4 *)(ar5 + 0x18) = *(undefined4 *)(ar4 + 0x24);
  Vec3_assign(ar5 + 0x1c,ar4 + 0x30,ar6,ar7);
  vec3_copy_8c023d8c(ar5 + 0x2c,ar4 + 0x50,ar6,ar7);
  FUN_8c023e04(ar5 + 0x38,ar4 + 0x5c,ar6,ar7);
  *(undefined4 *)(ar5 + 0x44) = *(undefined4 *)(ar4 + 0x6c);
  *(uint *)(ar5 + 0x48) = *(uint *)(ar4 + 0x74) & 0xfffffffd;
  return 0x48;
}

__asm__(".globl _FUN_8c0f4f0c\n.set _FUN_8c0f4f0c, _FUN_8c0f4f0c_def\n");
