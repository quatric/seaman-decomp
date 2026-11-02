#include "../decls.h"
uint FUN_8c25a5c0_def(int ar4,uint ar5,int ar6,int ar7)

{
  uint uVar1;
  
  if ((ar4 != 0) && (uVar1 = 0, ar5 != 0)) {
    do {
      if ((*(int *)(uVar1 * 0x44 + ar4) == ar6) && (*(int *)(uVar1 * 0x44 + ar4 + 4) == ar7)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < ar5);
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c25a5c0\n.set _FUN_8c25a5c0, _FUN_8c25a5c0_def\n");
