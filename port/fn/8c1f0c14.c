#include "../decls.h"
undefined4 FUN_8c1f0c14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *ar5_00;
  
  if (*(short *)(ar4 + 2) == 0) {
    ar5_00 = (undefined2 *)(ar4 + 0x34);
    *ar5_00 = (short)*(undefined4 *)(ar4 + 0x28);
    uVar2 = 0x3c;
    func_0x8c1f0974(*(undefined4 *)(ar4 + 0x30),ar4 + 0x36,0x3c,ar7);
    uVar2 = FUN_8c1f109c(0x3e,ar5_00,uVar2,ar7);
    *(short *)(ar4 + 0x72) = (short)uVar2;
    iVar1 = (*(int *)(ar4 + 0x28) + 1) * 0x40;
    FUN_8c1f0958(ar5_00,*(int *)(ar4 + 0xc) + iVar1,0x40,ar7,iVar1);
    if (*(int *)(ar4 + 0x10) < *(int *)(ar4 + 0x14)) {
      iVar1 = (*(int *)(ar4 + 0x14) + 1) * 0x40;
      FUN_8c1f09d4(*(int *)(ar4 + 0x10) + 1,*(int *)(ar4 + 0xc) + iVar1,*(undefined4 *)(ar4 + 0x18),
                   ar7);
      iVar1 = syscall_1f98d8(*(int *)(ar4 + 4) + iVar1,*(int *)(ar4 + 0xc) + iVar1,
                             *(int *)(ar4 + 0x18) << 6,ar7);
      if (iVar1 == *(int *)(ar4 + 0x18) << 6) {
        iVar1 = *(int *)(ar4 + 0x10);
        *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + 1;
        iVar1 = syscall_1f98d8(*(int *)(ar4 + 4) + (iVar1 + 1) * 0x40,ar5_00,0x40,ar7);
        if (iVar1 == 0x40) {
          return 0;
        }
      }
      uVar2 = 0xfffffffe;
    }
    else {
      uVar2 = 0xfffffff6;
    }
  }
  else {
    uVar2 = 0xfffffffa;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f0c14\n.set _FUN_8c1f0c14, _FUN_8c1f0c14_def\n");
