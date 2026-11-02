#include "../decls.h"
undefined4 s_KAMUI_207a0e_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *ar4_00;
  char *ar5_00;
  uint ar6_00;
  
  s_r_nCOPYRIGHT_C_NEC_Corporati_205e72(ar4,ar5,ar6,ar7);
  if (((int)ar4 < 3) && (-1 < (int)ar4)) {
    ar4_00 = s_KAMUI_8c26d3a8;
    ar5_00 = s_VideoMode_8c26d3b0;
    ar6_00 = ar4 & 3;
    _DAT_8c4a9bc8 = s_HARDWARE_205e00(s_KAMUI_8c26d3a8,s_VideoMode_8c26d3b0,ar6_00,ar7);
    FUN_8c206162(ar4_00,ar5_00,ar6_00,ar7);
    return 0;
  }
  return 2;
}

__asm__(".globl _s_KAMUI_207a0e\n.set _s_KAMUI_207a0e, _s_KAMUI_207a0e_def\n");
