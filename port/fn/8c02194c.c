#include "../decls.h"
int FUN_8c02194c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*ar4 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_8c0225f4(ar4 + 1,ar5,0,ar7);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02194c\n.set _FUN_8c02194c, _FUN_8c02194c_def\n");
