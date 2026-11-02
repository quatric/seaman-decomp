#include "../decls.h"
undefined4 FUN_8c11919e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  uStack_14 = FUN_8c11a634(ar4,&uStack_1c,ar6,ar7);
  uStack_18 = uStack_1c;
  uStack_10 = *(undefined4 *)(0x1ac + ar4);
  iStack_c = *(int *)(0x12c + ar4) + 1;
  uVar1 = FUN_8c120348(ar4,0xc,&uStack_18,3);
  if ((uVar1 & 0xff) != 0) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c11919e\n.set _FUN_8c11919e, _FUN_8c11919e_def\n");
