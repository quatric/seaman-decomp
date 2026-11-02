#include "../decls.h"
undefined4 s_E1238_sdPstmSetPan_return_er_26a914_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  int ar4_00;
  undefined4 uVar1;
  undefined4 ar7_00;
  undefined4 s4;
  
  ar6_00 = libgcc_divide_helper_010468(ar6 * 0x7f,0xf);
  ar7_00 = 0;
  s4 = ar5;
  ar4_00 = thunk_FUN_8c267b30(*(undefined4 *)(ar4 + 0x30),ar5,ar6_00,0);
  uVar1 = 0;
  if (ar4_00 != 0) {
    uVar1 = debug_printf(ar4_00,ar5,ar6_00,ar7_00,s_E1238_sdPstmSetPan_return_error_i_8c2737ac,s4);
  }
  return uVar1;
}

__asm__(".globl _s_E1238_sdPstmSetPan_return_er_26a914\n.set _s_E1238_sdPstmSetPan_return_er_26a914, _s_E1238_sdPstmSetPan_return_er_26a914_def\n");
