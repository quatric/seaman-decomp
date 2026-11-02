#include "../decls.h"
undefined4 * FUN_8c0a6164_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *ar5_00;
  undefined *ar6_00;
  undefined4 ar7_00;
  
  FUN_8c030fa0(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c12b088);
  ar7_00 = 0x10;
  ar5_00 = (&Vec3_ctor_zero);
  ar6_00 = (&Vec3_dtor);
  (*(code *)(&FUN_8c010120))
            ((int)ar4 + 0x234,(&Vec3_ctor_zero),(&Vec3_dtor),0x10,
             0x1f4);
  Vec3_ctor_zero((int)ar4 + 0x2174,ar5_00,ar6_00,ar7_00);
  Vec3_ctor_zero((int)ar4 + 0x2184,ar5_00,ar6_00,ar7_00);
  Vec3_set_zero((int)ar4 + 0x21a8,ar5_00,ar6_00,ar7_00);
  FUN_8c0a61f8(ar4,0,ar6_00,ar7_00);
  return ar4;
}

__asm__(".globl _FUN_8c0a6164\n.set _FUN_8c0a6164, _FUN_8c0a6164_def\n");
