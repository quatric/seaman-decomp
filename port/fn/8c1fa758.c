#include "../decls.h"
undefined4 FUN_8c1fa758_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int *piVar1;
  
  _DAT_ffd00000 = 0;
  _DAT_ffd00004 = 0;
  _DAT_ffd00008 = 0;
  _DAT_ffd0000c = 0;
  for (piVar1 = &DAT_8c26cb34; *piVar1 != 0; piVar1 = piVar1 + 2) {
    *(int *)*piVar1 = piVar1[1];
  }
  return ain0;
}

__asm__(".globl _FUN_8c1fa758\n.set _FUN_8c1fa758, _FUN_8c1fa758_def\n");
