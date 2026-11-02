#include "../decls.h"
undefined4
s_E9040829_adxf_is_NULL_ADXF_G_262646_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    FUN_8c25ece6(0,ar5,ar6,ar7,s_E9040829__adxf__is_NULL__ADXF_Ge_8c272590,in_PR);
    return 0xfffffffd;
  }
  return *(undefined4 *)(ar4 + 0x14);
}

__asm__(".globl _s_E9040829_adxf_is_NULL_ADXF_G_262646\n.set _s_E9040829_adxf_is_NULL_ADXF_G_262646, _s_E9040829_adxf_is_NULL_ADXF_G_262646_def\n");
