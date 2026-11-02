#include "../decls.h"
undefined4 FUN_8c256670_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  puVar2 = (&FUN_8c2567f8);
  puVar1 = 0x8c4aa6ac;
  uVar4 = 1;
  for (uVar5 = 0; uVar5 < (uint)ar4[1]; uVar5 = uVar5 + 1) {
    iVar3 = (*(code *)puVar2)(*(undefined4 *)(uVar5 * 0xc + *ar4 + 8));
    if (iVar3 < 0) {
      uVar4 = 0xffffffff;
      *puVar1 = uVar5;
    }
  }
  return uVar4;
}

__asm__(".globl _FUN_8c256670\n.set _FUN_8c256670, _FUN_8c256670_def\n");
