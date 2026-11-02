#include "../decls.h"
uint FUN_8c10b5f0_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = *(undefined4 *)(ar5[1] + 8);
  uStack_10 = 0;
  if (*ar5 != 0) {
    uStack_10 = *(undefined4 *)(*ar5 + 4);
  }
  uVar1 = (**(code **)(ar5[1] + 0x18))(ar4,&uStack_10,ar6,ar7);
  return uVar1 & 0xff;
}

__asm__(".globl _FUN_8c10b5f0\n.set _FUN_8c10b5f0, _FUN_8c10b5f0_def\n");
