#include "../decls.h"
undefined4
s_E9040827_adxf_is_NULL_ADXF_T_2625ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    FUN_8c25ece6(0,ar5,ar6,ar7,s_E9040827__adxf__is_NULL__ADXF_Te_8c27253c,in_PR);
    return 0xfffffffd;
  }
  return *(undefined4 *)(ar4 + 0x18);
}

__asm__(".globl _s_E9040827_adxf_is_NULL_ADXF_T_2625ec\n.set _s_E9040827_adxf_is_NULL_ADXF_T_2625ec, _s_E9040827_adxf_is_NULL_ADXF_T_2625ec_def\n");
