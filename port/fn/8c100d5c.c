#include "../decls.h"
undefined4 FUN_8c100d5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(int *)(0x590 + ar4) == 0) {
    iVar1 = FUN_8c101510(ar4,5,ar6,ar7);
    if (((iVar1 == 1) || (iVar1 = FUN_8c101510(ar4,10,ar6,ar7), iVar1 == 1)) ||
       (iVar1 = FUN_8c101510(ar4,0xf,ar6,ar7), iVar1 == 1)) {
      *(undefined4 *)(0x590 + ar4) = 1;
    }
  }
  else {
    if ((((*(char *)(0x190 + ar4 + (uint)*(byte *)(0x598 + ar4) * 4) != '\0') ||
         (*(char *)(0x190 + ar4 + (*(byte *)(0x598 + ar4) - 1) * 4) != '\0')) ||
        (*(char *)(0x191 + ar4 + (uint)*(byte *)(0x598 + ar4) * 4) != '\0')) ||
       (*(char *)(0x191 + ar4 + (*(byte *)(0x598 + ar4) - 1) * 4) != '\0')) {
      return 1;
    }
    *(undefined4 *)(0x590 + ar4) = 0;
  }
  return 0;
}

__asm__(".globl _FUN_8c100d5c\n.set _FUN_8c100d5c, _FUN_8c100d5c_def\n");
