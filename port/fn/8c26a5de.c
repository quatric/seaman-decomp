#include "../decls.h"
undefined4
s_E1230_sdMemBlkDestroy_return_26a5e8_def
          (undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int iVar1;
  int iVar2;
  int unaff_r14;
  char in_T;
  undefined4 in_PR;
  
  if (in_T != '\x01') {
    for (iVar2 = 0; iVar2 < *(int *)(unaff_r14 + 8); iVar2 = iVar2 + 1) {
      FUN_8c26a1f2(*(undefined4 *)(unaff_r14 + 0x18 + iVar2 * 4),ar5,ar6,ar7,in_PR);
      iVar1 = FUN_8c265784(*(undefined4 *)(unaff_r14 + 0x20 + iVar2 * 4),ar5,ar6,ar7);
      if (iVar1 != 0) {
        debug_printf(iVar1,ar5,ar6,ar7);
      }
    }
    for (iVar2 = 0; iVar2 < *(int *)(unaff_r14 + 8); iVar2 = iVar2 + 1) {
      iVar1 = FUN_8c265784(*(undefined4 *)(iVar2 * 4 + unaff_r14 + 0x28),ar5,ar6,ar7);
      if (iVar1 != 0) {
        debug_printf(iVar1,ar5,ar6,ar7);
      }
    }
    for (iVar2 = 0; iVar2 < *(int *)(unaff_r14 + 8); iVar2 = iVar2 + 1) {
      ar5 = iVar2;
      iVar1 = thunk_FUN_8c2678a4(*(undefined4 *)(unaff_r14 + 0x30),iVar2,ar6,ar7);
      if (iVar1 != 0) {
        debug_printf(iVar1,ar5,ar6,ar7);
      }
    }
    iVar2 = thunk_FUN_8c266ccc(*(undefined4 *)(unaff_r14 + 0x30),ar5,ar6,ar7);
    if (iVar2 != 0) {
      debug_printf(iVar2,ar5,ar6,ar7);
    }
    *(undefined4 *)(unaff_r14 + 8) = 0;
    *(undefined4 *)(unaff_r14 + 0xc) = 0;
    ain0 = memset(unaff_r14,0,0x54,ar7);
    *(undefined4 *)(unaff_r14 + 4) = 0;
  }
  return ain0;
}

__asm__(".globl _s_E1230_sdMemBlkDestroy_return_26a5e8\n.set _s_E1230_sdMemBlkDestroy_return_26a5e8, _s_E1230_sdMemBlkDestroy_return_26a5e8_def\n");
