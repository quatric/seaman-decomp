#include "../decls.h"
int FUN_8c03f430_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c03f460(ar4,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0xc) = *(undefined4 *)(ar5 + 0xc);
  }
  else {
    *(undefined8 *)(ar4 + 0xc) = *(undefined8 *)(ar5 + 0xc);
  }
  return ar4;
}

__asm__(".globl _FUN_8c03f430\n.set _FUN_8c03f430, _FUN_8c03f430_def\n");
