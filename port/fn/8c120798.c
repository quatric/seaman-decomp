#include "../decls.h"
undefined4 FUN_8c120798_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  
  uVar2 = FUN_8c1206ba(ar4,ar5,ar6,ar7);
  puVar1 = (&DATA_8c1206b6);
  if ((uVar2 & 0xff) != 0) {
    return 1;
  }
  if (*(undefined **)(ar4 + 0x18) != (&DATA_8c1206b6)) {
    *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(ar4 + 0x18);
    *(undefined **)(ar4 + 0x18) = puVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c120798\n.set _FUN_8c120798, _FUN_8c120798_def\n");
