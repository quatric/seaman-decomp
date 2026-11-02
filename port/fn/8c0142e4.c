#include "../decls.h"
undefined4 FUN_8c0142e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  uint uStack_8;
  
  cVar2 = '\0';
  uVar1 = FUN_8c012328(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & 0x7f800000) == 0x7f800000) {
    if ((uStack_8 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0142e4\n.set _FUN_8c0142e4, _FUN_8c0142e4_def\n");
