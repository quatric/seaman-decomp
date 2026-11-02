#include "../decls.h"
undefined4 FUN_8c0e8090_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 *puVar1;
  undefined2 uStack_10;
  undefined2 uStack_e;
  
  FUN_8c0e8ae0(ar4,ar5,ar6,ar7,&uStack_10);
  puVar1 = (undefined2 *)(ar4 + 0x224);
  *puVar1 = uStack_10;
  puVar1[1] = uStack_e;
  free_if_nonnull_wrap_016660(&uStack_10,0xffffffff,ar6,ar7);
  if ((*(short *)(0x224 + ar4) != -1) && (*(short *)(0x226 + ar4) != -1)) {
    FUN_8c0e810c(ar4,ar5,ar4 + 0x224,ar7);
    ar5 = 0;
  }
  return ar5;
}

__asm__(".globl _FUN_8c0e8090\n.set _FUN_8c0e8090, _FUN_8c0e8090_def\n");
