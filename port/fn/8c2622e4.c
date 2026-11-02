#include "../decls.h"
undefined4 FUN_8c2622e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ain0;
  int ar4_00;
  
  FUN_8c260ca0(ar4,ar5,ar6,ar7,ar6);
  ar4_00 = ar4;
  ain0 = s_E9040811_adxf_is_NULL_adxf_r_26220e(ar4,ar5,ar6,ar7);
  *(undefined1 *)(ar4 + 2) = 1;
  FUN_8c260cc8(ar4_00,ar5,ar6,ar7,ain0);
  return ain0;
}

__asm__(".globl _FUN_8c2622e4\n.set _FUN_8c2622e4, _FUN_8c2622e4_def\n");
