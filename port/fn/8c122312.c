#include "../decls.h"
undefined4 FUN_8c122312_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = FUN_8c122358(ar4,ar5,ar6,ar7);
  if (((uVar1 & 0xff) == 0) && (uVar1 = FUN_8c122060(ar4,ar5,ar6,ar7), (uVar1 & 0xff) == 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c122312\n.set _FUN_8c122312, _FUN_8c122312_def\n");
