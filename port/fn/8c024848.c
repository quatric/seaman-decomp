#include "../decls.h"
undefined4 * FUN_8c024848_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_ctor_zero(ar4 + 8,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0xc,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0x10,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x13,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x17,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0x1b,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x84,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0xb8,ar5,ar6,ar7);
  ar4[6] = 0;
  ar4[7] = 0;
  ar4[4] = 0;
  ar4[5] = 0;
  ar4[3] = 0;
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  *(undefined4 *)(0x98 + (int)ar4) = 0;
  *(undefined4 *)(0x94 + (int)ar4) = 0;
  *(undefined4 *)(0x9c + (int)ar4) = 0;
  *(undefined4 *)(0xa4 + (int)ar4) = 0;
  *(undefined4 *)(0xa0 + (int)ar4) = 0;
  *(undefined4 *)(0xa8 + (int)ar4) = 0;
  *(undefined2 *)(0xac + (int)ar4) = 0;
  *(undefined4 *)(0xb0 + (int)ar4) = 0;
  *(undefined2 *)(0xb4 + (int)ar4) = 0;
  *(undefined2 *)(0xb6 + (int)ar4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c024848\n.set _FUN_8c024848, _FUN_8c024848_def\n");
