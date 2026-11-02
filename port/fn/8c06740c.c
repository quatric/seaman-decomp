#include "../decls.h"
int FUN_8c06740c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar7_00 = 0;
  ar6_00 = 0;
  ar5_00 = 0xe;
  FUN_8c0f4040(ar4,0xe,0,0,ar5);
  *(undefined **)(ar4 + 8) = (&DATA_8c12a0c4);
  FUN_8c016fcc(ar4 + 0x170,ar5_00,ar6_00,ar7_00);
  FUN_8c015ab8(ar4 + 0x204,ar5_00,ar6_00,ar7_00);
  FUN_8c015224(ar4 + 0x208,ar5_00,ar6_00,ar7_00);
  Vec3_ctor_zero(ar4 + 0x268,ar5_00,ar6_00,ar7_00);
  Vec3_set_zero(ar4 + 0x278,ar5_00,ar6_00,ar7_00);
  FUN_8c023dac(ar4 + 0x284,ar5_00,ar6_00,ar7_00);
  s_herb3_pvm_067598(ar4,ar5_00,ar6_00,ar7_00);
  return ar4;
}

__asm__(".globl _FUN_8c06740c\n.set _FUN_8c06740c, _FUN_8c06740c_def\n");
