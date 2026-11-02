#include "../decls.h"
uint FUN_8c10b660_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = *(undefined4 *)(ar4[1] + 8);
  uStack_10 = 0;
  if (*ar4 != 0) {
    uStack_10 = *(undefined4 *)(*ar4 + 4);
  }
  uVar1 = (**(code **)(ar4[1] + 0x20))(&uStack_10,ar5,ar6,ar7);
  return uVar1 & 0xff;
}

__asm__(".globl _FUN_8c10b660\n.set _FUN_8c10b660, _FUN_8c10b660_def\n");
