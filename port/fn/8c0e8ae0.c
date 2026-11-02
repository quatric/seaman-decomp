#include "../decls.h"
undefined4 FUN_8c0e8ae0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 ar6_00;
  int iVar1;
  int iVar2;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  int iStack_18;
  int iStack_14;
  
  ar6_00 = 0xffffffff;
  FUN_8c10273c(&uStack_1c,0xffffffff,0xffffffff,ar7);
  iVar1 = 0;
  do {
    if (2 < iVar1) {
LAB_8c0e8b40:
      FUN_8c0e84c8(s0,&uStack_1c,ar6_00,ar7);
      free_if_nonnull_wrap_016660(&uStack_1c,0xffffffff,ar6_00,ar7);
      return 0;
    }
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      iStack_18 = iVar2;
      iStack_14 = iVar1;
      if (*(int *)(0xa4 + ar4 + iVar1 * 0x80 + iVar2 * 0x20) == 0) {
        uStack_1c = (undefined2)iVar2;
        uStack_1a = (undefined2)iVar1;
        goto LAB_8c0e8b40;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c0e8ae0\n.set _FUN_8c0e8ae0, _FUN_8c0e8ae0_def\n");
