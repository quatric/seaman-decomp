#include "../decls.h"
int FUN_8c06af5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = ar5;
  uVar1 = FUN_8c028ee4(ar5,ar5,ar6,ar7);
  *(short *)(0x264 + ar4) = (short)uVar1;
  uVar2 = FUN_8c02602c(ar5,uVar2,ar6,ar7);
  iVar3 = 0x266;
  *(short *)(0x266 + ar4) = (short)uVar2;
  return iVar3;
}

__asm__(".globl _FUN_8c06af5c\n.set _FUN_8c06af5c, _FUN_8c06af5c_def\n");
