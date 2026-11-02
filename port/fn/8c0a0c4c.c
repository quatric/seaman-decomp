#include "../decls.h"
undefined4 FUN_8c0a0c4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c032160(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x24c) = 0;
  *(undefined4 *)(ar4 + 0x214) = 1;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x234) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x234) = (ulonglong)extraout_fr1;
  }
  return 0x234;
}

__asm__(".globl _FUN_8c0a0c4c\n.set _FUN_8c0a0c4c, _FUN_8c0a0c4c_def\n");
