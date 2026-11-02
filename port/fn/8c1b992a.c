#include "../decls.h"
undefined4 mac_wOp_wrap_1b992a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint extraout_r1;
  int iVar2;
  int unaff_r10;
  int in_GBR;
  char extraout_S;
  undefined4 extraout_MACH;
  undefined4 extraout_MACL;
  
  iVar2 = (int)FUN_8c1b9996;
  uVar1 = halt_baddata_wrap_1b939a(ar4,ar5,ar6,ar7);
  *(int *)(unaff_r10 + 0x38) = iVar2;
  *(short *)(in_GBR + 0x1ce) = (short)uVar1;
  iVar2 = (int)*(short *)(extraout_r1 >> 1 | (uint)((extraout_r1 & 1) != 0) << 0x1f);
  if (extraout_S != '\0') {
    mac_wOp(CONCAT44(extraout_MACH,extraout_MACL),iVar2 * iVar2);
  }
                    
  halt_baddata();
}

__asm__(".globl _mac_wOp_wrap_1b992a\n.set _mac_wOp_wrap_1b992a, _mac_wOp_wrap_1b992a_def\n");
