#include "../decls.h"
undefined4 * FUN_8c0f78d8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *ar5_00;
  undefined *ar6_00;
  undefined4 ar7_00;
  
  FUN_8c0db304(ar4 + 2,ar5,ar6,ar7);
  (*(code *)(&FUN_8c010120))
            (ar4 + 0x13,(&FUN_8c0f78b0),(&free_if_nonnull_wrap_0f3ffc),8,3);
  ar7_00 = 8;
  ar5_00 = (&FUN_8c0f78b0);
  ar6_00 = (&free_if_nonnull_wrap_0f3ffc);
  (*(code *)(&FUN_8c010120))
            (ar4 + 0x1b,(&FUN_8c0f78b0),(&free_if_nonnull_wrap_0f3ffc),8,3);
  Vec3_ctor_zero((int)ar4 + 0x8c,ar5_00,ar6_00,ar7_00);
  Vec3_ctor_zero((int)ar4 + 0xa0,ar5_00,ar6_00,ar7_00);
  Vec3_ctor_zero((int)ar4 + 0xb0,ar5_00,ar6_00,ar7_00);
  ar4[1] = 0;
  *ar4 = 0;
  ar4[0x19] = 0;
  ar4[0x1a] = 0;
  vec3_clear((int)ar4 + 0x8c,ar5_00,ar6_00,ar7_00);
  *(undefined4 *)(0x9c + (int)ar4) = 0xffffffff;
  vec3_clear((int)ar4 + 0xa0,ar5_00,ar6_00,ar7_00);
  *(undefined4 *)(0x84 + (int)ar4) = 0;
  *(undefined4 *)(0x88 + (int)ar4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0f78d8\n.set _FUN_8c0f78d8, _FUN_8c0f78d8_def\n");
