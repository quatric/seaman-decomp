#include "../decls.h"
undefined4
s_E1234_sdPstmStop_return_erro_26a750_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 uVar1;
  int unaff_r14;
  undefined4 in_PR;
  
  ar4_00 = thunk_FUN_8c267f2c(*(undefined4 *)(unaff_r14 + 0x30),ar5,ar6,ar7);
  if (ar4_00 != 0) {
    debug_printf(ar4_00,ar5,ar6,ar7,s_E1234_sdPstmStop_return_error_in_8c2736e0,in_PR);
  }
  uVar1 = s_E1241_sdSysFlushHostCmd_retu_26a6d8(unaff_r14,0,ar6,ar7);
  return uVar1;
}

__asm__(".globl _s_E1234_sdPstmStop_return_erro_26a750\n.set _s_E1234_sdPstmStop_return_erro_26a750, _s_E1234_sdPstmStop_return_erro_26a750_def\n");
