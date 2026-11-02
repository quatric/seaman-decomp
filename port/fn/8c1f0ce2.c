#include "../decls.h"
undefined4 FUN_8c1f0ce2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int unaff_r13;
  ushort *ar5_00;
  
  if (*(short *)(unaff_r13 + 2) == 0) {
    uVar2 = 0x3c;
    ar5_00 = (ushort *)((*(int *)(unaff_r13 + 0x28) + 1) * 0x40 + *(int *)(unaff_r13 + 0xc));
    func_0x8c1f0974(ar5_00 + 1,*(undefined4 *)(unaff_r13 + 0x30),0x3c,ar7);
    if ((*ar5_00 == 0xffff) ||
       (uVar1 = FUN_8c1f109c(0x3e,ar5_00,uVar2,ar7),
       (uint)ar5_00[0x1f] == (uVar1 & 0xffff))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffc;
    }
  }
  else {
    uVar2 = 0xfffffffa;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f0ce2\n.set _FUN_8c1f0ce2, _FUN_8c1f0ce2_def\n");
