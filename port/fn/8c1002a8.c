#include "../decls.h"
undefined4 FUN_8c1002a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = input_is_mask_set_400_01ef20(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = input_is_mask_set_10000_01ec68(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c015cd4(ar4 + 0x15c,u____8c1421cc,ar6,ar7,0);
      FUN_8c0c51a0(ar4,2,ar6,ar7);
      uVar2 = 1;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1002a8\n.set _FUN_8c1002a8, _FUN_8c1002a8_def\n");
