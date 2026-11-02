#include "../decls.h"
int FUN_8c200472_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*ar4 == '\0') {
      return iVar1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 1;
    ar4 = ar4 + 1;
  } while (iVar2 < 0xc);
  return iVar1;
}

__asm__(".globl _FUN_8c200472\n.set _FUN_8c200472, _FUN_8c200472_def\n");
