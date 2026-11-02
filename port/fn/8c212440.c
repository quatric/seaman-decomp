#include "../decls.h"
undefined4 FUN_8c212440_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int ar4_00;
  int iVar1;
  int iVar2;
  undefined1 *ar5_00;
  undefined1 *in_stack_fffffff0;
  undefined1 *ain0;
  
  ar5_00 = &stack0xfffffff0;
  ar4_00 = FUN_8c1f397e(ar4,0,ar6,ar7);
  if (ar4_00 != 0) {
    iVar1 = FUN_8c1f30ee(ar4_00,&stack0xfffffff0,ar6,ar7);
    ain0 = in_stack_fffffff0;
    if ((iVar1 == 1) &&
       (iVar1 = malloc_thunk((int)in_stack_fffffff0 * 0x800 + 8,ar5_00,ar6,ar7),
       ain0 = in_stack_fffffff0, iVar1 != 0)) {
      ar6 = iVar1;
      iVar2 = FUN_8c1f31c6(ar4_00,in_stack_fffffff0,iVar1,ar7);
      if (iVar2 == 0) {
        FUN_8c1f309c(ar4_00,in_stack_fffffff0,ar6,ar7,ain0);
        return iVar1;
      }
      FUN_8c1fb57c(iVar1,in_stack_fffffff0,ar6,ar7);
      ar5_00 = in_stack_fffffff0;
    }
    FUN_8c1f309c(ar4_00,ar5_00,ar6,ar7,ain0);
  }
  return 0;
}

__asm__(".globl _FUN_8c212440\n.set _FUN_8c212440, _FUN_8c212440_def\n");
