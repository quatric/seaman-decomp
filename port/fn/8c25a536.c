#include "../decls.h"
uint FUN_8c25a536_def(int ar4,uint ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  
  if ((ar4 != 0) && (uVar1 = 0, ar5 != 0)) {
    do {
      if (*(int *)(uVar1 * 0x44 + ar4) == ar6) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < ar5);
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c25a536\n.set _FUN_8c25a536, _FUN_8c25a536_def\n");
