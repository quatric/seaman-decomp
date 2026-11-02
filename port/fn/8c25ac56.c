#include "../decls.h"
undefined4 FUN_8c25ac56_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)(&FUN_8c233e10))
                    (ar4 + 0x18,(uint)*(ushort *)(ar5 + 1),(uint)*(ushort *)((int)ar5 + 6),*ar5);
  if (iVar1 != 0) {
    *(undefined4 *)0x8c4aa6b4 = 6;
    return 0xffffffff;
  }
  return 1;
}

__asm__(".globl _FUN_8c25ac56\n.set _FUN_8c25ac56, _FUN_8c25ac56_def\n");
