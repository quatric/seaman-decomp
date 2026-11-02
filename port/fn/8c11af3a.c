#include "../decls.h"
undefined4 FUN_8c11af3a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = (&FUN_8c111fbe);
  iVar2 = (*(code *)(&FUN_8c111fbe))
                    (**(undefined4 **)(ar4 + 0xc),(*(undefined4 **)(ar4 + 0xc))[1],ar6,ar7);
  while (iVar2 != 0) {
    iVar2 = (*(code *)puVar1)(**(undefined4 **)(ar4 + 0xc),(*(undefined4 **)(ar4 + 0xc))[1],ar6,ar7)
    ;
  }
  return 0;
}

__asm__(".globl _FUN_8c11af3a\n.set _FUN_8c11af3a, _FUN_8c11af3a_def\n");
