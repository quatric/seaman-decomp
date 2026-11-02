#include "../decls.h"
undefined4 FUN_8c26a1ca_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = 0x8c4beb48;
  piVar2 = 0x8c4beb48;
  while( true ) {
    if (0x8c4beb48 + 0x10 <= piVar1) {
      return 0;
    }
    if (*piVar1 == 0) break;
    piVar1 = piVar1 + 2;
    piVar2 = piVar2 + 2;
  }
  *piVar2 = 1;
  return piVar2;
}

__asm__(".globl _FUN_8c26a1ca\n.set _FUN_8c26a1ca, _FUN_8c26a1ca_def\n");
