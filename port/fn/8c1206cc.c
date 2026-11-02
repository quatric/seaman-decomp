#include "../decls.h"
uint FUN_8c1206cc_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  uint in_r3;
  undefined4 *puVar3;
  uint unaff_r12;
  int unaff_r13;
  
  puVar1 = (&FUN_8c1113d0);
  if (in_r3 < *(byte *)(unaff_r13 + 8)) {
    do {
      puVar3 = (undefined4 *)(ar4 * 8 + *(int *)(unaff_r13 + 0xc));
      uVar2 = (*(code *)puVar1)(*puVar3,6,puVar3[1],0);
      unaff_r12 = unaff_r12 | (uVar2 & 0xff) == 0;
      ar4 = ar4 + 1;
    } while (ar4 < *(byte *)(unaff_r13 + 8));
  }
  return unaff_r12;
}

__asm__(".globl _FUN_8c1206cc\n.set _FUN_8c1206cc, _FUN_8c1206cc_def\n");
