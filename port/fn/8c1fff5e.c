#include "../decls.h"
undefined4 FUN_8c1fff5e_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *a4;
  
  piVar1 = 0x8c4783dc;
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  a4 = *(char **)(iVar3 + 0x28);
  iVar4 = 0;
  while( true ) {
    if (*(int *)(*(int *)(iVar3 + 0x1c) + 0x30) <= iVar4) {
      return 0;
    }
    if ((*a4 != '\0') &&
       (uVar2 = (**(code **)(*piVar1 + 0xc))(a4,2,ar6,ar7), (uVar2 & 0xffff) == ar5)) break;
    a4 = a4 + 0x20;
    iVar4 = iVar4 + 1;
  }
  return a4;
}

__asm__(".globl _FUN_8c1fff5e\n.set _FUN_8c1fff5e, _FUN_8c1fff5e_def\n");
