#include "../decls.h"
undefined4 FUN_8c122230_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(ar4 + 0x124 + ar6 * 4);
  iVar4 = *(int *)(ar6 * 4 + ar4 + 0x118);
  uVar1 = FUN_8c11d432(ar4,0,ar6,ar7);
  if ((uVar1 & 0xff) != 0) {
    return 1;
  }
  libgcc_divide_helper_01051c(iVar3 - iVar4,(uint)*(ushort *)(*(int *)(ar4 + 0x6c) + 0xc));
  uVar2 = FUN_8c12215c(ar4,ar5,ar6,0);
  return uVar2;
}

__asm__(".globl _FUN_8c122230\n.set _FUN_8c122230, _FUN_8c122230_def\n");
