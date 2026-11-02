#include "../decls.h"
int FUN_8c2654fc_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  undefined4 ar5_00;
  int unaff_r12;
  int *piVar2;
  int ar5_01;
  undefined4 in_PR;
  
  ar5_01 = 0;
  if (unaff_r12 == 0) {
    ar5_01 = 0x7000103;
  }
  else {
    piVar2 = *(int **)(unaff_r12 + 8);
    if (*piVar2 == 0x56524453) {
      if (((char)piVar2[1] == '\x01') && (*(char *)((int)piVar2 + 5) < '\x02')) {
        aica_reg_265278(ar4,ar5,ar6,ar7);
        aica_ram_2684b8(ar4,ar5,ar6,ar7);
        FUN_8c265704(&DAT_8c2784b8,ar5,ar6,ar7);
        ar7 = 0xffffffff;
        ar6 = piVar2[2];
        FUN_8c265ea0(0,piVar2 + 8,ar6,0xffffffff,0);
        ar5_00 = 0;
        ar4_00 = 0;
        FUN_8c265ff4(0,0,ar6,ar7);
        aica_reg_2652f4(ar4_00,ar5_00,ar6,ar7);
        for (iVar1 = 0x200000; iVar1 != 0; iVar1 = iVar1 + -1) {
        }
        DAT_8c2784c4 = 1;
        FUN_8c2653e0(0,ar5_00,ar6,ar7);
        FUN_8c2659dc(unaff_r12,ar5_00,ar6,ar7);
      }
      else {
        ar5_01 = 0xb000002;
      }
    }
    else {
      ar5_01 = 0x9000001;
    }
  }
  if (ar5_01 != 0) {
    FUN_8c2688a0(FUN_8c2654f4,ar5_01,ar6,ar7,in_PR);
  }
  return ar5_01;
}

__asm__(".globl _FUN_8c2654fc\n.set _FUN_8c2654fc, _FUN_8c2654fc_def\n");
