#include "../decls.h"
undefined4 FUN_8c1200f4_def(ushort *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (ar5 & 0xff) - (uint)ar4[1];
  if ((-1 < iVar1) && (iVar1 < (int)(uint)*ar4)) {
    return *(undefined4 *)(iVar1 * 4 + *(int *)(ar4 + 2));
  }
  return 0;
}

__asm__(".globl _FUN_8c1200f4\n.set _FUN_8c1200f4, _FUN_8c1200f4_def\n");
