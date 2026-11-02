#include "../decls.h"
undefined4 FUN_8c02f2c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined1 *)(0x91 + ar4) = 0;
  uVar1 = FUN_8c02f3ac(ar4,ar5,ar6,ar7);
  if (*(int *)(ar4 + 4) == 8) {
    *(undefined4 *)(ar4 + 4) = 8;
  }
  if ((*(int *)(ar4 + 0x38) == 2) || (*(int *)(ar4 + 0x38) == 0)) {
    *(undefined1 *)(0x91 + ar4) = 1;
    uVar2 = libgcc_divide_helper_0101e4(uVar1,100,ar6,ar7);
    *(undefined4 *)(ar4 + 4) = uVar2;
    uVar1 = libgcc_divide_helper_01031c(uVar1,100,ar6,ar7);
    *(undefined4 *)(ar4 + 8) = uVar1;
    *(undefined4 *)(ar4 + 0x38) = 2;
  }
  else if (*(int *)(ar4 + 0x38) == 3) {
    iVar3 = libgcc_divide_helper_01031c(uVar1,100,ar6,ar7);
    if (*(int *)(ar4 + 8) < iVar3) {
      uVar2 = libgcc_divide_helper_01031c(uVar1,100,ar6,ar7);
      *(undefined4 *)(ar4 + 8) = uVar2;
      iVar3 = libgcc_divide_helper_0101e4(uVar1,100,ar6,ar7);
      if (*(int *)(ar4 + 4) != iVar3) {
        *(undefined1 *)(0x91 + ar4) = 1;
        uVar1 = libgcc_divide_helper_0101e4(uVar1,100,ar6,ar7);
        *(undefined4 *)(ar4 + 4) = uVar1;
        *(undefined4 *)(ar4 + 0x38) = 2;
      }
    }
  }
  if (*(int *)(ar4 + 4) == 8) {
    *(undefined4 *)(ar4 + 4) = 8;
  }
  return *(undefined4 *)(ar4 + 4);
}

__asm__(".globl _FUN_8c02f2c8\n.set _FUN_8c02f2c8, _FUN_8c02f2c8_def\n");
