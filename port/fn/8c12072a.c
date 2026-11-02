#include "../decls.h"
uint FUN_8c12072a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 a5;
  undefined4 unaff_r10;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  char in_T;
  
  puVar1 = (&FUN_8c1113d0);
  if (in_T == '\x01') {
    a5 = 5;
  }
  else {
    a5 = 7;
  }
  uVar4 = 0;
  uVar5 = 0;
  if (*(char *)(ar4 + 8) != '\0') {
    do {
      puVar3 = (undefined4 *)(uVar5 * 8 + *(int *)(ar4 + 0xc));
      uVar2 = (*(code *)puVar1)(*puVar3,a5,puVar3[1],unaff_r10);
      uVar4 = uVar4 | (uVar2 & 0xff) == 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(byte *)(ar4 + 8));
  }
  return uVar4;
}

__asm__(".globl _FUN_8c12072a\n.set _FUN_8c12072a, _FUN_8c12072a_def\n");
