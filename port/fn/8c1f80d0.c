#include "../decls.h"
undefined4 FUN_8c1f80d0_def(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = 0;
  bVar3 = 0;
  do {
    iVar1 = iVar2 + 2;
    iVar2 = iVar2 + 1;
    bVar3 = bVar3 + ar4[iVar1];
  } while (iVar2 < 6);
  if ((bVar3 == ar4[1]) && ((byte)~bVar3 == *ar4)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f80d0\n.set _FUN_8c1f80d0, _FUN_8c1f80d0_def\n");
