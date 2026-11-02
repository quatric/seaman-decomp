#include "../decls.h"
undefined4 FUN_8c1f5ac6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_18 [8];
  
  piVar2 = (int *)FUN_8c1f5a5e(auStack_18,ar5,ar6,ar7);
  puVar1 = (&FUN_8c013ec0);
  iVar4 = 0;
  while( true ) {
    if (*piVar2 <= iVar4) {
      return 0xfffffffe;
    }
    iVar3 = (*(code *)puVar1)(ar4,piVar2[iVar4 * 2 + 2] + 0x10,0x10,ar7);
    if (iVar3 == 0) break;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}

__asm__(".globl _FUN_8c1f5ac6\n.set _FUN_8c1f5ac6, _FUN_8c1f5ac6_def\n");
