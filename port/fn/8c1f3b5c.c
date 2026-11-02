#include "../decls.h"
uint FUN_8c1f3b5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_8c1efd26((uint)(byte)(&DAT_8c26c69c)[ar4],ar5,ar6,ar7);
  iVar2 = FUN_8c1efd26(ar4,ar5,ar6,ar7);
  if ((((ar4 == 2) || (ar4 == 8)) || (ar4 == 0xe)) || (ar4 == 0x14)) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  return (uint)(byte)(&DAT_8c26c674)
                     [(uint)*(byte *)(iVar1 + 0x12 + iVar3) * 4 + (uint)*(byte *)(iVar2 + 0x12)];
}

__asm__(".globl _FUN_8c1f3b5c\n.set _FUN_8c1f3b5c, _FUN_8c1f3b5c_def\n");
