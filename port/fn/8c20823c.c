#include "../decls.h"
int FUN_8c20823c_def(uint ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x8c4a9c50;
  if ((0x2000000 & ar4) != 0) {
    iVar2 = ar5;
    if ((ar4 & 0x400000) == 0) {
      *(uint *)(0x8c4a9c50 + ar5 * 4) = 0xffff0000 & ar6;
      ar6 = ar6 << 0x10;
      iVar2 = ar5 + 1;
    }
    ar5 = iVar2 + 1;
    *(uint *)(iVar1 + iVar2 * 4) = ar6;
  }
  return ar5;
}

__asm__(".globl _FUN_8c20823c\n.set _FUN_8c20823c, _FUN_8c20823c_def\n");
