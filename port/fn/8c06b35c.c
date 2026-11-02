#include "../decls.h"
int FUN_8c06b35c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint ar5_00;
  
  ar5_00 = 1;
  iVar1 = -1;
  do {
    iVar1 = iVar1 + 1;
    uVar2 = (*(uint *)(0x214 + ar4) | 0x1ab) & ar5_00;
    if ((uVar2 != 0) || (*(char *)(0x248 + ar4 + iVar1) == '\x02')) {
      ar5 = ar5 + -1;
      ar5_00 = ar5_00 << 1;
    }
  } while (((uVar2 != 0) || (*(char *)(0x248 + ar4 + iVar1) == '\x02')) && (0 < ar5));
  if (ar5 < 1) {
    iVar1 = -1;
  }
  else {
    FUN_8c06b25c(ar4,ar5_00,ar6,ar7);
    iVar1 = 0;
    for (; ar5_00 != 0; ar5_00 = (int)ar5_00 >> 1) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c06b35c\n.set _FUN_8c06b35c, _FUN_8c06b35c_def\n");
