#include "../decls.h"
undefined4 FUN_8c1f7134_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  undefined4 in_r0;
  
  uVar1 = *ar4;
  if ((ushort)ar5 != 0) {
    if ((uint)uVar1 < (uint)uVar1 + (uint)(ushort)ar5) {
      *ar4 = (ushort)ar5 + uVar1;
    }
    else {
      *ar4 = (ushort)0xfffe;
    }
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f7134\n.set _FUN_8c1f7134, _FUN_8c1f7134_def\n");
