#include "../decls.h"
undefined4 FUN_8c0fb20c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_PR;
  
  if (ar4[0x2c] == 1) {
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    iVar2 = ar4[0x22];
    strcpy(*(int *)(ar4[4] + 0x40) + 0x20,iVar2 + 0x28,ar6,ar7,in_PR);
    strcpy(*(int *)(ar4[4] + 0x40) + 0x40,iVar2 + 0x48,ar6,ar7,in_PR);
    uVar1 = 4;
    *ar4 = 4;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0fb20c\n.set _FUN_8c0fb20c, _FUN_8c0fb20c_def\n");
