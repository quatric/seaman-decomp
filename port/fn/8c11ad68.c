#include "../decls.h"
undefined4 FUN_8c11ad68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_8c112f40(ar4,ar5,ar6,ar7);
  if ((uVar1 & 0xff) == 0) {
    uVar3 = 0;
    *(undefined4 *)(0x13c + -4 + ar4) = *(undefined4 *)(0x13c + ar4);
    FUN_8c11a88c(ar4,0,ar6,ar7);
    *(undefined4 *)(0x140 + -8 + ar4) = *(undefined4 *)(0x140 + ar4);
    uVar1 = FUN_8c114774(ar4,uVar3,ar6,ar7);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = (int)0x1a4;
      *(undefined **)(iVar2 + ar4) = (&FUN_8c11adde);
      *(undefined1 *)(iVar2 + 0x34 + ar4) = 0;
      uVar3 = FUN_8c120348(ar4,0xe,*(undefined4 *)(0x80 + ar4),0);
      return uVar3;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11ad68\n.set _FUN_8c11ad68, _FUN_8c11ad68_def\n");
