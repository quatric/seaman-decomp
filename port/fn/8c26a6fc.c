#include "../decls.h"
undefined4
s_E1233_sdPstmPlay_return_erro_26a6fe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar7_00;
  undefined4 s4;
  
  iVar2 = *(int *)(ar4 + 0x10);
  uVar1 = *(undefined4 *)(ar4 + 0x14);
  if (iVar2 == 0x10) {
    ar5 = 1;
  }
  else if (iVar2 == 8) {
    ar5 = 0;
  }
  else if (iVar2 == 4) {
    ar5 = 2;
  }
  ar7_00 = 0;
  *(int *)(ar4 + 0x10) = iVar2;
  s4 = uVar1;
  iVar2 = FUN_8c26784c(*(undefined4 *)(ar4 + 0x30),ar5,uVar1,0);
  if (iVar2 != 0) {
    debug_printf(iVar2,ar5,uVar1,ar7_00,s_E1233_sdPstmPlay_return_error_in_8c2736b4,s4);
  }
  uVar1 = s_E1241_sdSysFlushHostCmd_retu_26a6d8(ar4,1,uVar1,ar7_00);
  return uVar1;
}

__asm__(".globl _s_E1233_sdPstmPlay_return_erro_26a6fe\n.set _s_E1233_sdPstmPlay_return_erro_26a6fe, _s_E1233_sdPstmPlay_return_erro_26a6fe_def\n");
