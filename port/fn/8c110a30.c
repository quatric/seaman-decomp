#include "../decls.h"
undefined4 FUN_8c110a30_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined2 *)(*(int *)(uint)ar4[4] + 0xc) = 4;
  iVar1 = (**(code **)(*ar4 + 0x10))(*ar4,(uint)*(byte *)(ar4 + 2) << 2,ar6,ar7);
  ar4[10] = iVar1;
  return 0;
}

__asm__(".globl _FUN_8c110a30\n.set _FUN_8c110a30, _FUN_8c110a30_def\n");
