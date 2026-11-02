#include "../decls.h"
undefined4 * FUN_8c11584e_def(int *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (ar5 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*ar4 + 0x10))(*ar4,0x14,ar6,ar7);
    iVar4 = (int)0x134;
    *puVar3 = *(undefined4 *)(iVar4 + (int)ar4);
    puVar1 = (&FUN_8c119320);
    puVar3[1] = *(undefined4 *)(iVar4 + 0x70 + (int)ar4);
    puVar2 = (&DATA_8c11920c);
    *(undefined **)(iVar4 + (int)ar4) = puVar1;
    puVar1 = (&DATA_8c113680);
    *(undefined **)(iVar4 + 0x70 + (int)ar4) = puVar2;
    *(undefined **)(iVar4 + 0x74 + (int)ar4) = puVar1;
    return puVar3;
  }
  iVar4 = (int)0x134;
  *(undefined4 *)(iVar4 + (int)ar4) = *ar5;
  puVar1 = (&FUN_8c11346c);
  *(undefined4 *)(iVar4 + 0x70 + (int)ar4) = ar5[1];
  puVar2 = (&FUN_8c11af3a);
  *(undefined **)(iVar4 + 0x74 + (int)ar4) = puVar1;
  ar4[6] = (int)puVar2;
  (**(code **)(*ar4 + 0x18))(*ar4,ar5,ar6,ar7);
  return (undefined4 *)0;
}

__asm__(".globl _FUN_8c11584e\n.set _FUN_8c11584e, _FUN_8c11584e_def\n");
