#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269630_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_stack_fffffff0;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,"E1205:Illigal parameter (MWRNA=NULL)",in_stack_fffffff0);
  }
  else {
    FUN_8c26a100(&stack0xfffffff0,ar5,ar6,ar7);
    if (*(char *)(ar4 + 7) == '\0') {
      iVar2 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7);
      uVar3 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7);
      *(uint *)(ar4 + 0x88) = iVar2 << 1 | uVar3;
      FUN_8c268ea8(ar4,ar5,ar6,ar7);
      ar5 = 0;
      s_E1205_Illigal_parameter_MWRN_2691ba(ar4,0,ar6,ar7);
      *(undefined1 *)(ar4 + 7) = 1;
      if (*(char *)(ar4 + 5) == '\x01') {
        *(undefined4 *)(ar4 + 0x8c) = 1;
        FUN_8c26a118(&stack0xfffffff0,ar5,ar6,ar7);
        s_E1209_mwRnaPause_Time_out_of_26908e(ar4,ar5,ar6,ar7,in_stack_fffffff0);
        FUN_8c26a100(&stack0xfffffff0,ar5,ar6,ar7);
        *(undefined4 *)(ar4 + 0x8c) = 0;
      }
      s_E1205_Illigal_parameter_MWRN_26973a(ar4,ar5,ar6,ar7);
    }
    uVar1 = FUN_8c26a118(&stack0xfffffff0,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269630\n.set _s_E1205_Illigal_parameter_MWRN_269630, _s_E1205_Illigal_parameter_MWRN_269630_def\n");
