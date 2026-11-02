#include "../decls.h"
undefined4 FUN_8c26346e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(int *)(ar4 + 0x14) == 0) {
    *(undefined4 *)(ar4 + 0x34) = 0;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined1 *)(ar4 + 1) = 3;
  }
  else {
    *(undefined1 *)(ar4 + 1) = 2;
    *(undefined4 *)(ar4 + 0x34) = 0;
    uVar1 = FUN_8c2634dc(ar4,0,ar6,ar7);
    *(undefined4 *)(ar4 + 0xc) = uVar1;
  }
  return 1;
}

__asm__(".globl _FUN_8c26346e\n.set _FUN_8c26346e, _FUN_8c26346e_def\n");
