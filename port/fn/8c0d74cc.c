#include "../decls.h"
undefined4 FUN_8c0d74cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  undefined4 in_PR;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c0d7288(ar4,1,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = in_fr4;
  }
  else {
    *(undefined8 *)(ar4 + 0x2c) = CONCAT44(in_PR,in_fr4);
  }
  *(undefined4 *)(ar4 + 0x168) = 0x1e;
  return 0x168;
}

__asm__(".globl _FUN_8c0d74cc\n.set _FUN_8c0d74cc, _FUN_8c0d74cc_def\n");
