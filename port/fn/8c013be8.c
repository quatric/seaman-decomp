#include "../decls.h"
undefined4 FUN_8c013be8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  undefined4 in_stack_fffffff8;
  uint uVar3;
  
  cVar2 = '\0';
  uVar1 = FUN_8c011b9c(ar4,ar5,ar6,ar7,in_stack_fffffff8);
  if (cVar2 == '\0') {
    uVar3 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar3 = (uint)in_dr0;
  }
  if ((uVar3 & 0x7f800000) == 0x7f800000) {
    if ((uVar3 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c013be8\n.set _FUN_8c013be8, _FUN_8c013be8_def\n");
