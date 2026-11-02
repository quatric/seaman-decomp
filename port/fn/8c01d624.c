#include "../decls.h"
undefined4 asr_register_strings_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c01d4c4(ar4,0,ar5,ar6);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl _asr_register_strings\n.set _asr_register_strings, _asr_register_strings_def\n");
