#include "../decls.h"
undefined4 FUN_8c25a174_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *ar4_00;
  undefined4 ar5_00;
  undefined4 ain0;
  undefined4 in_stack_ffffffe8;
  
  ar5_00 = ar5;
  ain0 = ar6;
  uVar1 = log_message(ar5,ar5,ar6,ar7);
  FUN_8c010998(uVar1,ar5_00,ar6,ar7,ain0,in_stack_ffffffe8);
  ar4_00 = &stack0xffffffe8;
  FUN_8c2033c0(ar4_00,ar5_00,ar6,ar7,ain0);
  uVar1 = ain0;
  if ((char)in_stack_ffffffe8 == '.') {
    ar4_00 = &stack0xffffffe8;
    iVar2 = FUN_8c0109e8(ar4_00,ain0,ar6,ar7);
    ar5_00 = ain0;
    if (iVar2 == 0) {
      FUN_8c010998(ar4_00,ain0,ar6,ar7,uVar1,in_stack_ffffffe8);
      FUN_8c01437c(ar4,ar5,ar6,ar7);
      return 1;
    }
  }
  FUN_8c010998(ar4_00,ar5_00,ar6,ar7,uVar1,in_stack_ffffffe8);
  FUN_8c01437c(ar4,ar5,ar6,ar7);
  FUN_8c01437c(ar4,uVar1,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c25a174\n.set _FUN_8c25a174, _FUN_8c25a174_def\n");
