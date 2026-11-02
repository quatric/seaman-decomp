#include "../decls.h"
int Class_12a990_m0_09bb44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12a990;
    FUN_8c09b88c(ar4 + 0x9a4,0xffffffff,ar6,ar7);
    Class_129cbc_m0_0312f4(ar4 + 0x780,0xffffffff,ar6,ar7);
    Class_129c24_m0_02ff90(ar4 + 0x6e4,0xffffffff,ar6,ar7);
    vec_delete_array(ar4 + 0x644,Vec3_dtor,0x10,8,ain0);
    vec_delete_array(ar4 + 0x5c4,Vec3_dtor,0x10,8,ain0);
    ar7_00 = 8;
    ar6_00 = 0x10;
    vec_delete_array(ar4 + 0x544,Vec3_dtor,0x10,8,ain0);
    Class_129938_m0_017084(ar4 + 0x490,0xffffffff,ar6_00,ar7_00);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12a990_m0_09bb44\n.set _Class_12a990_m0_09bb44, _Class_12a990_m0_09bb44_def\n");
