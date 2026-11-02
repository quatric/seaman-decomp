#include "../decls.h"
int FUN_8c10fd82_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  fVar3 = 3.4028235e+38;
  uVar2 = 0;
  uVar1 = 0;
  if (*(int *)(ar4 + 0x78) != 0) {
    do {
      if ((*(char *)(*(int *)(ar4 + 0x6c) + uVar1 + 1) != '\0') &&
         (*(float *)(*(int *)(ar4 + 0x44) + uVar1 * 4) < fVar3)) {
        fVar3 = *(float *)(uVar1 * 4 + *(int *)(ar4 + 0x44));
        uVar2 = uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(ar4 + 0x78));
  }
  *(undefined4 *)(ar4 + 0x54) = 0;
  return uVar2 + 1;
}

__asm__(".globl _FUN_8c10fd82\n.set _FUN_8c10fd82, _FUN_8c10fd82_def\n");
