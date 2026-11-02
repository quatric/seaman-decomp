#include "../decls.h"
undefined4 FUN_8c2362de_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  short *psVar1;
  
  psVar1 = (short *)(ar4 + -0x20);
  if (*psVar1 == 0xa5) {
    if (*(short *)(*(int *)(ar4 + -0x14) + 2) == 0) {
      *(undefined4 *)(*(int *)(ar4 + -0x18) + 0xc) = *(undefined4 *)(ar4 + -0x14);
      *(undefined4 *)(*(int *)(ar4 + -0x14) + 8) = *(undefined4 *)(ar4 + -0x18);
      *(int *)(*(int *)(ar4 + -0x14) + 4) =
           *(int *)(*(int *)(ar4 + -0x14) + 4) + *(int *)(ar4 + -0x1c);
      psVar1 = *(short **)(ar4 + -0x14);
    }
    if (*(short *)(*(int *)(psVar1 + 4) + 2) == 0) {
      *(short **)(*(int *)(*(int *)(psVar1 + 4) + 8) + 0xc) = psVar1;
      *(int *)(psVar1 + 2) = *(int *)(psVar1 + 2) + *(int *)(*(int *)(psVar1 + 4) + 4);
      *(undefined4 *)(psVar1 + 4) = *(undefined4 *)(*(int *)(psVar1 + 4) + 8);
    }
    in_r0 = 0;
    psVar1[1] = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c2362de\n.set _FUN_8c2362de, _FUN_8c2362de_def\n");
