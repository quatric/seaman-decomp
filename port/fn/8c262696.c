#include "../decls.h"
undefined4
s_E9040831_adxf_is_NULL_ADXF_G_262696_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    FUN_8c25ece6(0,ar5,ar6,ar7,s_E9040831__adxf__is_NULL__ADXF_Ge_8c2725f0,in_PR);
    return 0xfffffffd;
  }
  return *(undefined4 *)(ar4 + 0x24);
}

__asm__(".globl _s_E9040831_adxf_is_NULL_ADXF_G_262696\n.set _s_E9040831_adxf_is_NULL_ADXF_G_262696, _s_E9040831_adxf_is_NULL_ADXF_G_262696_def\n");
