#include "../decls.h"
int FUN_8c10ec78_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,3,ar7,(&DATA_8c10dda0),(&FUN_8c10df48),(&FUN_8c10ea62),
                     (int)0x138);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x70) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x88) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10ec78\n.set _FUN_8c10ec78, _FUN_8c10ec78_def\n");
