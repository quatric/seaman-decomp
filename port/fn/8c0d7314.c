#include "../decls.h"
undefined4 FUN_8c0d7314_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c02a1fc(ar4 + 0x24,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x168) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x15c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x15c) = (ulonglong)extraout_fr1;
  }
  *(undefined4 *)(ar4 + 0x160) = 2;
  return 0x160;
}

__asm__(".globl _FUN_8c0d7314\n.set _FUN_8c0d7314, _FUN_8c0d7314_def\n");
