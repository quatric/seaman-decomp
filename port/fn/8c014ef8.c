#include "../decls.h"
undefined4 FUN_8c014ef8_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined4 uStack_c;
  
  fVar3 = 1.0;
  if (*(int *)(ar4 + 0x68) == 1) {
    for (iVar2 = 0; uVar1 = 5, iVar2 < 5; iVar2 = iVar2 + 1) {
      fVar3 = fVar3 - 0.2;
      uStack_c = CONCAT13((char)(int)((float)(ar5 >> 0x18) * fVar3),(int3)ar5);
      *(undefined4 *)(ar4 + iVar2 * 4 + 0x40) = uStack_c;
    }
  }
  else {
    uVar1 = 0x40;
    *(uint *)(ar4 + 0x40) = ar5;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c014ef8\n.set _FUN_8c014ef8, _FUN_8c014ef8_def\n");
