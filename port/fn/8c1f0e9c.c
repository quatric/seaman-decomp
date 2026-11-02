#include "../decls.h"
int s_KATANA_FLASH_1f0ea0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int *unaff_r14;
  undefined4 in_PR;
  
  if (*unaff_r14 == 0) {
    iVar1 = -0xb;
  }
  else if ((ar4 == 0) || (ar4 == 1)) {
    iVar1 = syscall_1f98ec(*(undefined4 *)(*unaff_r14 + 4),ar5,ar6,ar7);
    if (iVar1 == 0) {
      iVar1 = *unaff_r14;
      func_0x8c1f0974("KATANA_FLASH____",iVar1 + 0x34,0x10,ar7);
      ar6_00 = 0x12;
      *(short *)(*unaff_r14 + 2) = (short)ar4;
      *(char *)(iVar1 + 0x45) = (char)ar4;
      *(undefined1 *)(iVar1 + 0x44) = *(undefined1 *)*unaff_r14;
      iVar1 = syscall_1f98d8(*(undefined4 *)(*unaff_r14 + 4),iVar1 + 0x34,0x12,ar7);
      if (iVar1 == 0x12) {
        ar5_00 = *(undefined4 *)(*unaff_r14 + 8);
        FUN_8c1f0988(*(undefined4 *)(*unaff_r14 + 0xc),ar5_00,ar6_00,ar7,in_PR);
        iVar1 = FUN_8c1f0a72(*unaff_r14,ar5_00,ar6_00,ar7);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = -2;
      }
    }
    else {
      iVar1 = -3;
    }
  }
  else {
    iVar1 = -6;
  }
  return iVar1;
}

__asm__(".globl _s_KATANA_FLASH_1f0ea0\n.set _s_KATANA_FLASH_1f0ea0, _s_KATANA_FLASH_1f0ea0_def\n");
