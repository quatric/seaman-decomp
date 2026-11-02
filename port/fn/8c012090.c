#include "../decls.h"
undefined4 * FUN_8c012090_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  longlong in_dr4;
  float fVar4;
  
  fVar4 = (float)((ulonglong)in_dr4 >> 0x20);
  uVar2 = 0;
  if (in_dr4 < 0) {
    uVar2 = 8;
  }
  if (fVar4 == 0.0) {
    uVar2 = uVar2 | 4;
  }
  else if (ABS(fVar4) == INFINITY) {
    uVar2 = uVar2 | 2;
  }
  if ((uVar2 & 4) == 0) {
    if ((uVar2 & 8) != 0) {
      return (undefined4 *)uVar2;
    }
    if ((uVar2 & 2) == 0) {
      if (fVar4 != 1.0) {
        iVar3 = 7;
        do {
          iVar3 = iVar3 + -1;
        } while (0 < iVar3);
        return (undefined4 *)fVar4;
      }
      return (undefined4 *)8;
    }
    puVar1 = (undefined4 *)&DAT_8c125800;
  }
  else {
    puVar1 = &DAT_8c125830;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c012090\n.set _FUN_8c012090, _FUN_8c012090_def\n");
