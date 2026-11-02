#include "../decls.h"
uint FUN_8c012d5c_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = 0;
  iVar3 = 0;
  pbVar1 = ar4;
  if (0 < ar5) {
    do {
      bVar4 = uVar2 != 0;
      uVar2 = *ar4 & 1;
      *ar4 = *ar4 >> 1;
      if (bVar4) {
        *pbVar1 = *pbVar1 | 0x80;
      }
      iVar3 = iVar3 + 1;
      pbVar1 = pbVar1 + 1;
      ar4 = ar4 + 1;
    } while (iVar3 < ar5);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c012d5c\n.set _FUN_8c012d5c, _FUN_8c012d5c_def\n");
