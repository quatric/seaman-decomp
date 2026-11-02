#include "../decls.h"
int FUN_8c01256c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double dVar1;
  char cVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 auStack_8 [2];
  
  FUN_8c0125b6(auStack_8,ar5,ar6,ar7);
  cVar2 = '\0';
  FUN_8c012734(&uStack_10,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    dVar1 = (double)CONCAT44(uStack_c,uStack_10);
  }
  else {
    dVar1 = (double)CONCAT44(auStack_8[0],uStack_c);
  }
  return (int)dVar1;
}

__asm__(".globl _FUN_8c01256c\n.set _FUN_8c01256c, _FUN_8c01256c_def\n");
