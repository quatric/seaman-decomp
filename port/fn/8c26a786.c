#include "../decls.h"
undefined4
s_E1240_sdPstmSetUseCh_return__26a788_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 uVar1;
  undefined4 s4;
  
  *(undefined4 *)(ar4 + 0xc) = ar5;
  s4 = ar5;
  ar4_00 = thunk_FUN_8c267d88(*(undefined4 *)(ar4 + 0x30),ar5,ar6,ar7);
  uVar1 = 0;
  if (ar4_00 != 0) {
    uVar1 = debug_printf(ar4_00,ar5,ar6,ar7,s_E1240_sdPstmSetUseCh_return_erro_8c27370c,s4);
  }
  return uVar1;
}

__asm__(".globl _s_E1240_sdPstmSetUseCh_return__26a788\n.set _s_E1240_sdPstmSetUseCh_return__26a788, _s_E1240_sdPstmSetUseCh_return__26a788_def\n");
