#include "../decls.h"
undefined4 FUN_8c263cd8_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined4 *ar6_00;
  
  if ((*(char *)(ar4 + 1) == '\x03') || (*(char *)(ar4 + 1) == '\x04')) {
    s_E1205_Illigal_parameter_MWRN_2699d4(*(undefined4 *)(ar4 + 0xc),ar5,ar6,ar7);
  }
  else if (*(char *)(ar4 + 1) == '\x05') {
    ar5_00 = ar5;
    ar6_00 = ar6;
    iVar1 = FUN_8c263186(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
    *ar5 = iVar1;
    uVar2 = FUN_8c26314a(*(undefined4 *)(ar4 + 4),ar5_00,ar6_00,ar7);
    *ar6 = uVar2;
    uVar2 = FUN_8c263162(*(undefined4 *)(ar4 + 4),ar5_00,ar6_00,ar7);
    iVar1 = libgcc_divide_helper_010468(0x10,uVar2);
    *ar5 = *ar5 * iVar1;
  }
  else {
    *ar5 = 0;
    *ar6 = 1;
  }
  *ar5 = *ar5 + *(int *)(ar4 + 0x88);
  return 0x88;
}

__asm__(".globl _FUN_8c263cd8\n.set _FUN_8c263cd8, _FUN_8c263cd8_def\n");
