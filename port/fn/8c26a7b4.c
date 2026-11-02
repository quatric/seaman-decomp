#include "../decls.h"
int s_E1236_sdPstmGetCurAdr_return_26a7b6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 *ar6_00;
  uint s4;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  s4 = 1;
  uStack_c = ar5;
  FUN_8c266f38(*(undefined4 *)(ar4 + 0x30),0,&stack0xffffffec,ar7);
  if ((s4 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    ar6_00 = &uStack_10;
    ar5_00 = uStack_c;
    iVar1 = thunk_FUN_8c266d28(*(undefined4 *)(ar4 + 0x30),uStack_c,ar6_00,ar7);
    if (iVar1 != 0) {
      debug_printf(iVar1,ar5_00,ar6_00,ar7,s_E1236_sdPstmGetCurAdr_return_err_8c273744,s4);
    }
    iVar1 = libgcc_divide_helper_010468(uStack_10,*(undefined4 *)(ar4 + 0x10));
    iVar1 = iVar1 << 3;
  }
  return iVar1;
}

__asm__(".globl _s_E1236_sdPstmGetCurAdr_return_26a7b6\n.set _s_E1236_sdPstmGetCurAdr_return_26a7b6, _s_E1236_sdPstmGetCurAdr_return_26a7b6_def\n");
