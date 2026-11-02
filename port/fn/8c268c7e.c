#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_268c80_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 in_stack_fffffff0;
  
  if (ar4 == (undefined1 *)0x0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_fffffff0
                        );
    return uVar1;
  }
  FUN_8c26a100(&stack0xfffffff0,ar5,ar6,ar7);
  if (ar4[1] != '\0') {
    s_E1205_Illigal_parameter_MWRN_268d66(ar4,ar5,ar6,ar7);
  }
  *ar4 = 0;
  for (iVar2 = 0; iVar2 < (int)(uint)(byte)ar4[2]; iVar2 = iVar2 + 1) {
    *(undefined4 *)(ar4 + iVar2 * 4 + 0x10) = 0;
  }
  (**(code **)(**(int **)(ar4 + 0x38) + 0xc))(*(int **)(ar4 + 0x38),0,ar6,ar7);
  uVar1 = 0;
  ar6_00 = 0x90;
  memset(ar4,0,0x90,ar7);
  uVar1 = FUN_8c26a118(&stack0xfffffff0,uVar1,ar6_00,ar7);
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_268c80\n.set _s_E1205_Illigal_parameter_MWRN_268c80, _s_E1205_Illigal_parameter_MWRN_268c80_def\n");
