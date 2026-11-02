#include "../decls.h"
undefined4 FUN_8c0e51ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c0db8d4(ar4,ar5,ar6,ar7);
  FUN_8c0e96b8(ar4 + 0xf4c,ar5,ar6,ar7);
  FUN_8c0d6920(ar4 + 0xa68,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 0x9e8) + 0x10))((int *)(ar4 + 0x9e8),ar5,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x106c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x106c) = (ulonglong)extraout_fr1;
  }
  return 1;
}

__asm__(".globl _FUN_8c0e51ac\n.set _FUN_8c0e51ac, _FUN_8c0e51ac_def\n");
