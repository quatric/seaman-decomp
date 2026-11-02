#include "../decls.h"
uint FUN_8c0225f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0; (uVar2 < 7 && (*(int *)(uVar2 * 0x10 + ar4) != 0)); uVar2 = uVar2 + 1) {
  }
  if (uVar2 == 7) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_8c2680ec(ar4 + uVar2 * 0x10 + 0xc,ar5,ar6,ar7);
    if (iVar1 == 0) {
      *(undefined4 *)(uVar2 * 0x10 + ar4) = 1;
      *(undefined4 *)(ar4 + uVar2 * 0x10 + 4) = ar5;
      *(undefined4 *)(ar4 + uVar2 * 0x10 + 8) = ar6;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0225f4\n.set _FUN_8c0225f4, _FUN_8c0225f4_def\n");
