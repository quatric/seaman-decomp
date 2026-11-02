#include "../decls.h"
undefined4 FUN_8c104f44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x39) = *(char *)(ar4 + 0x39) + '\x01';
  return 0x39;
}

__asm__(".globl _FUN_8c104f44\n.set _FUN_8c104f44, _FUN_8c104f44_def\n");
