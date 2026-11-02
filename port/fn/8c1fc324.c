#include "../decls.h"
undefined4 FUN_8c1fc324_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_8c1fe8f2(ar4,(int)(short)ar5,(int)(char)ar6);
  return uVar2;
}

__asm__(".globl _FUN_8c1fc324\n.set _FUN_8c1fc324, _FUN_8c1fc324_def\n");
