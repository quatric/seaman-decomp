#include "../decls.h"
undefined4 FUN_8c1f6192_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ushort uVar1;
  
  uVar1 = (ushort)*(byte *)(ar6 + 4);
  if (uVar1 == 0xfc) {
    return 0xff0000fc;
  }
  if ((((uVar1 != 0xff) && (uVar1 != 8)) && (uVar1 != 5)) && ((uVar1 != 6 && (uVar1 != 0))))
  {
    return 0xff000000;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f6192\n.set _FUN_8c1f6192, _FUN_8c1f6192_def\n");
