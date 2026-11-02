#include "../decls.h"
undefined4
s_E9040830_adxf_is_NULL_ADXF_G_262664_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    FUN_8c25ece6(0,ar5,ar6,ar7,s_E9040830__adxf__is_NULL__ADXF_Ge_8c2725c0,ar5);
    *ar5 = 0;
    return 0xfffffffd;
  }
  *ar5 = *(undefined4 *)(ar4 + 0x1c);
  return *(undefined4 *)(ar4 + 0x20);
}

__asm__(".globl _s_E9040830_adxf_is_NULL_ADXF_G_262664\n.set _s_E9040830_adxf_is_NULL_ADXF_G_262664, _s_E9040830_adxf_is_NULL_ADXF_G_262664_def\n");
