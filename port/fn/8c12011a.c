#include "../decls.h"
undefined4 FUN_8c12011a_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (ar5 & 0xff) - (uint)*(ushort *)(ar4 + 10);
  if ((-1 < iVar1) && (iVar1 < (int)(uint)*(ushort *)(ar4 + 8))) {
    return *(undefined4 *)(iVar1 * 4 + *(int *)(ar4 + 0xc));
  }
  return 0;
}

__asm__(".globl _FUN_8c12011a\n.set _FUN_8c12011a, _FUN_8c12011a_def\n");
