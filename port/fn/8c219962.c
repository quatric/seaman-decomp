#include "../decls.h"
undefined4 FUN_8c219962_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint *ain0)

{
  int iVar1;
  uint in_r2;
  undefined4 *in_r3;
  int *unaff_r12;
  undefined4 ar5_00;
  int ar4_00;
  longlong lVar2;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  ar5_00 = *in_r3;
  ar4_00 = *unaff_r12;
  if ((*ain0 & in_r2) != 0) {
    if (in_FPSCR_SZ == '\0') {
      lVar2 = (ulonglong)(uint)unaff_r12[5] << 0x20;
    }
    else {
      lVar2 = *(longlong *)(unaff_r12 + 5);
    }
    if ((in_FPSCR_PR == '\0' && (float)lVar2 < (float)((ulonglong)lVar2 >> 0x20)) &&
       (iVar1 = FUN_8c217e18(unaff_r12,ar5,ar6,ar7), iVar1 != 0)) {
      return 0xffffffff;
    }
  }
  if (ar4_00 != 0) {
    FUN_8c21982e(ar4_00,ar5_00,ar6,ar7,in_PR);
  }
  if (unaff_r12[1] != 0) {
    FUN_8c21908e(unaff_r12[1],_DAT_8c4c0fa0,ar5_00,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c219962\n.set _FUN_8c219962, _FUN_8c219962_def\n");
