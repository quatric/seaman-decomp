#include "../decls.h"
undefined4 s_E1244_sdMemBlkGetStat_return_26ada4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined1 *ar5_00;
  undefined4 in_stack_ffffffec;
  
  ar5_00 = &stack0xffffffec;
  FUN_8c265e08(ar4,ar5,ar6,ar7);
  ar4_00 = FUN_8c265a2c(*(undefined4 *)(ar5 * 4 + ar4 + 0x20),&stack0xffffffec,ar6,ar7);
  if (ar4_00 != 0) {
    debug_printf(ar4_00,ar5_00,ar6,ar7,s_E1244_sdMemBlkGetStat_return_err_8c273914,in_stack_ffffffec
                );
  }
  return in_stack_ffffffec;
}

__asm__(".globl _s_E1244_sdMemBlkGetStat_return_26ada4\n.set _s_E1244_sdMemBlkGetStat_return_26ada4, _s_E1244_sdMemBlkGetStat_return_26ada4_def\n");
