#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_2690dc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int a5;
  undefined4 in_stack_ffffffec;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,"E1205:Illigal parameter (MWRNA=NULL)",in_stack_ffffffec);
  }
  else {
    *(undefined4 *)(ar4 + 0x8c) = 1;
    a5 = ar5;
    if (*(char *)(ar4 + 5) == '\x01') {
      s_E1209_mwRnaPause_Time_out_of_26908e(ar4,ar5,ar6,ar7,in_stack_ffffffec);
      iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,a5,ar6,ar7);
      if (iVar2 == 1) {
        s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(ar4,a5,ar6,ar7);
      }
      else {
        FUN_8c269056(ar4,a5,ar6,ar7);
      }
      *(undefined1 *)(ar4 + 5) = 0;
    }
    FUN_8c26a100(&stack0xffffffec,a5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x8c) = 0;
    if (ar5 == 0) {
      iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,a5,ar6,ar7);
      if (iVar2 != 0) {
        *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(ar4 + 0x2c);
        *(undefined4 *)(ar4 + 0x54) = 0;
        *(undefined4 *)(ar4 + 0x58) = 0;
        *(byte *)(ar4 + 1) = *(byte *)(ar4 + 1) & 6;
      }
    }
    else if ((ar5 == 1) &&
            (iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,a5,ar6,ar7), iVar2 != 1)) {
      *(undefined4 *)(ar4 + 0x2c) = 0;
      *(undefined4 *)(ar4 + 0x30) = 0;
      *(undefined4 *)(ar4 + 0x34) = 0;
      *(undefined1 *)(ar4 + 6) = 0;
      *(undefined4 *)(ar4 + 0x5c) = 0;
      *(undefined4 *)(ar4 + 0x48) = 0;
      *(undefined4 *)(ar4 + 0x4c) = 0;
      *(undefined4 *)(ar4 + 0x3c) = 0;
      *(undefined1 *)(ar4 + 4) = 0;
      *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(ar4 + 0x2c);
      *(undefined4 *)(ar4 + 0x54) = 0;
      *(byte *)(ar4 + 1) = *(byte *)(ar4 + 1) | 1;
    }
    uVar1 = FUN_8c26a118(&stack0xffffffec,a5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_2690dc\n.set _s_E1205_Illigal_parameter_MWRN_2690dc, _s_E1205_Illigal_parameter_MWRN_2690dc_def\n");
