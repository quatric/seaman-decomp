#include "../decls.h"
undefined4 FUN_8c1f7f9c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int aiStack_c [2];
  
  if (ar4 != (int *)0x0) {
    *ar4 = 0;
    if ((DAT_8c273a18 != 0) && (iVar1 = FUN_8c1f97b4(0,DAT_8c273a18,ar6,ar7), iVar1 != -1)) {
      iVar1 = (int)DAT_8c00007d;
      if (DAT_8c00007d == -1) {
        FUN_8c1f7ffa(aiStack_c,iVar1,ar6,ar7);
        if (aiStack_c[0] == -1) {
          *ar4 = 1;
        }
        else {
          iVar1 = FUN_8c1f7f96(aiStack_c[0],iVar1,ar6,ar7);
          *ar4 = iVar1;
        }
      }
      else {
        *ar4 = (int)DAT_8c00007d;
      }
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f7f9c\n.set _FUN_8c1f7f9c, _FUN_8c1f7f9c_def\n");
