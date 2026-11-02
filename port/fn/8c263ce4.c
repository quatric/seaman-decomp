#include "../decls.h"
undefined4 FUN_8c263ce4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_r12;
  int *unaff_r13;
  int unaff_r14;
  
  if ((*(char *)(unaff_r14 + 1) == '\x03') || (*(char *)(unaff_r14 + 1) == '\x04')) {
    s_E1205_Illigal_parameter_MWRN_2699d4(*(undefined4 *)(unaff_r14 + 0xc),unaff_r13,unaff_r12,ar7);
  }
  else if (*(char *)(unaff_r14 + 1) == '\x05') {
    iVar1 = FUN_8c263186(*(undefined4 *)(unaff_r14 + 4),ar5,ar6,ar7);
    *unaff_r13 = iVar1;
    uVar2 = FUN_8c26314a(*(undefined4 *)(unaff_r14 + 4),ar5,ar6,ar7);
    *unaff_r12 = uVar2;
    uVar2 = FUN_8c263162(*(undefined4 *)(unaff_r14 + 4),ar5,ar6,ar7);
    iVar1 = libgcc_divide_helper_010468(0x10,uVar2);
    *unaff_r13 = *unaff_r13 * iVar1;
  }
  else {
    *unaff_r13 = 0;
    *unaff_r12 = 1;
  }
  *unaff_r13 = *unaff_r13 + *(int *)(unaff_r14 + 0x88);
  return 0x88;
}

__asm__(".globl _FUN_8c263ce4\n.set _FUN_8c263ce4, _FUN_8c263ce4_def\n");
