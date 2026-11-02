#include "../decls.h"
int FUN_8c01d9e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(undefined4 *)0x8c279248 == 2) {
    iVar1 = *(undefined4 *)0x8c27924c;
    if (iVar1 == 1) {
      *(undefined4 *)0x8c2791bc = 0;
      ((undefined1 *)1)[0x8c2791bc] = 0;
      *(undefined1 *)(0x8c2791bc + 3) = 0;
      iVar1 = FUN_8c10c322(*(undefined4 *)0x8c27925c,ar5,ar6,ar7);
    }
  }
  else if (*(undefined4 *)0x8c279284 == 0) {
    *(undefined4 *)0x8c279278 = 0;
    iVar1 = 0;
    *(undefined4 *)0x8c27927c = 0;
  }
  else {
    iVar1 = FUN_8c1225fc(*(undefined4 *)0x8c27925c,1,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01d9e0\n.set _FUN_8c01d9e0, _FUN_8c01d9e0_def\n");
