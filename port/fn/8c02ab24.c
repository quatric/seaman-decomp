#include "../decls.h"
uint FUN_8c02ab24_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  
  for (uVar1 = 2; uVar1 < _DAT_8c27c1e8 - 1U; uVar1 = uVar1 + 1) {
    *(float *)(ar5 + uVar1 * 4) =
         *(float *)(*(int *)(ar4 + 0x3dc) + uVar1 * 4) +
         ((*(float *)(*(int *)(ar4 + 0x3d8) + uVar1 * 4) -
          *(float *)(*(int *)(ar4 + 0x3dc) + uVar1 * 4)) * (float)ar6) /
         (float)(int)*(short *)(ar4 + 0x3f8);
  }
  return _DAT_8c27c1e8 - 1U;
}

__asm__(".globl _FUN_8c02ab24\n.set _FUN_8c02ab24, _FUN_8c02ab24_def\n");
