#include "../decls.h"
undefined4 FUN_8c0d20bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c08a9b8(ar4 + 0x10,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x1c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x1c) = CONCAT44(0x3f800000,extraout_fr1);
  }
  *(undefined2 *)(ar4 + 0x24) = 0;
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined4 *)(ar4 + 0x40) = 0;
  return 0x40;
}

__asm__(".globl _FUN_8c0d20bc\n.set _FUN_8c0d20bc, _FUN_8c0d20bc_def\n");
