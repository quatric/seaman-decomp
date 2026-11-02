#include "../decls.h"
undefined4 FUN_8c2110e8_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_c [2];
  
  puVar2 = (&FUN_8c207300);
  piVar1 = 0x8c4aa220;
  puVar3 = (undefined4 *)(ar4 * 4 + *(undefined4 *)0x8c4aa21c);
  *(undefined4 *)0x8c4aa220 = (int)puVar3;
  auStack_c[0] = ar5;
  (*(code *)puVar2)(*puVar3,auStack_c,4,ar7);
  *(int *)*piVar1 = *(int *)*piVar1 + ar6 * 4;
  return 0;
}

__asm__(".globl _FUN_8c2110e8\n.set _FUN_8c2110e8, _FUN_8c2110e8_def\n");
