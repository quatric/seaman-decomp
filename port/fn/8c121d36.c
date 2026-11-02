#include "../decls.h"
uint FUN_8c121d36_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)0x238;
  *(undefined4 *)(iVar1 + ar4) = ar6;
  *(undefined4 *)(iVar1 + 4 + ar4) = ar7;
  *(undefined4 *)(iVar1 + 8 + ar4) = ar5;
  uVar2 = FUN_8c121f72(ar4,ar5,ar6,ar7);
  if ((uVar2 & 0xff) == 0) {
    uVar2 = (**(code **)(0xe0 + ar4))(ar4,0,0,0,0);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c121d36\n.set _FUN_8c121d36, _FUN_8c121d36_def\n");
