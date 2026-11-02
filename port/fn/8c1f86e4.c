#include "../decls.h"
uint FUN_8c1f86e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = 0x8c474a20;
  uVar2 = *(undefined4 *)0x8c474a14;
  if ((uVar2 & 8) != 0) {
    if ((undefined4 *)*(undefined4 *)0x8c474a20 < (undefined4 *)*(undefined4 *)0x8c474a24) {
      *(undefined4 *)*(undefined4 *)0x8c474a20 = ar4;
      *piVar1 = *piVar1 + 4;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f86e4\n.set _FUN_8c1f86e4, _FUN_8c1f86e4_def\n");
