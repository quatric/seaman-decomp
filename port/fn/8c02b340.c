#include "../decls.h"
int FUN_8c02b340_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 ar5_00;
  
  uVar2 = rand(ar4,ar5,ar6,ar7);
  ar5_00 = 2;
  uVar2 = libgcc_divide_helper_01031c(uVar2,2,ar6,ar7);
  bVar1 = (byte)uVar2 & 1;
  *(byte *)(ar4 + 0x14) = *(byte *)(ar4 + 0x14) & 0xfe | bVar1;
  *(byte *)(ar4 + 0x14) = *(byte *)(ar4 + 0x14) & 0xfd | bVar1 << 1;
  uVar2 = rand(ar4,ar5_00,ar6,ar7);
  iVar3 = libgcc_divide_helper_01031c(uVar2,0x96,ar6,ar7);
  return iVar3 + 0x1e;
}

__asm__(".globl _FUN_8c02b340\n.set _FUN_8c02b340, _FUN_8c02b340_def\n");
