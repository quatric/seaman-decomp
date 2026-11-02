#include "../decls.h"
int FUN_8c10afbe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_8c10af94(ar4,ar5,ar6,ar7);
  iVar2 = (int)0xa8;
  return (iVar1 + *(int *)(iVar2 + ar4) * 2 + 3U & 0xfffffffc) +
         (*(int *)(iVar2 + -0x1c + ar4) + 1) * 4 + (*(int *)(iVar2 + -0x14 + ar4) + 1) * 4;
}

__asm__(".globl _FUN_8c10afbe\n.set _FUN_8c10afbe, _FUN_8c10afbe_def\n");
