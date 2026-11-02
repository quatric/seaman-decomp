#include "../decls.h"
int FUN_8c014028_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = (&FUN_8c1fb4b8);
  puVar1 = (&DATA_8c12c4f0);
  while ((iVar3 = (*(code *)puVar2)(ar4,ar5,ar6,ar7), iVar3 == 0 && (*(int *)(&DATA_8c12c4f0) != 0))
        ) {
    (**(code **)puVar1)(0,ar5,ar6,ar7);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c014028\n.set _FUN_8c014028, _FUN_8c014028_def\n");
