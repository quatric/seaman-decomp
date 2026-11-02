#include "../decls.h"
undefined4 FUN_8c035e94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_8c035e8c(*(undefined4 *)(ar4 + 0x14),ar5,ar6,ar7);
  if ((char)uVar1 == '\0') {
    iVar2 = get_field_40_03598c(*(undefined4 *)(ar4 + 0x14),ar5,ar6,ar7);
    if (iVar2 == 0) {
      ar5 = 1;
      FUN_8c035e84(*(undefined4 *)(ar4 + 0x14),1,ar6,ar7);
    }
  }
  iVar2 = FUN_8c035f04(*(undefined4 *)(ar4 + 0x10),ar5,ar6,ar7);
  if (iVar2 < 4) {
    FUN_8c028ec8(*(undefined4 *)(ar4 + 0x10),4,ar6,ar7);
  }
  return 4;
}

__asm__(".globl _FUN_8c035e94\n.set _FUN_8c035e94, _FUN_8c035e94_def\n");
