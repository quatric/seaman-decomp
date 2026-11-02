#include "../decls.h"
undefined4 FUN_8c20200c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)*(byte *)(*(int *)(ar5 + 8) + 0xb);
  uVar2 = 0;
  if (((*(char *)(ar5 + 4) == '\b') && (uVar1 == 0)) && (*(int *)(ar4 + 0x34) == 0)) {
    uVar2 = 0xffffffff;
  }
  *(uint *)(ar4 + 0x34) = uVar1;
  return uVar2;
}

__asm__(".globl _FUN_8c20200c\n.set _FUN_8c20200c, _FUN_8c20200c_def\n");
