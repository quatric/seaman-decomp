#include "../decls.h"
undefined4 FUN_8c034a70_def(undefined4 ar4,int *ar5,undefined4 *ar6,int ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int ar7_00;
  
  ar7_00 = ar7;
  uVar1 = FUN_8c0342ac(ar4,ar5,ar7,ar7);
  uVar2 = FUN_8c034548(ar4,ar5,ar7,ar7_00);
  uVar3 = FUN_8c034880(ar4,ar5,ar7,ar7_00);
  *ar6 = uVar1;
  ar6[1] = uVar2;
  ar6[2] = uVar3;
  ar6[3] = *(undefined4 *)(ar7 * 0x18 + *ar5 + 0xc);
  ar6[4] = *(undefined4 *)(ar7 * 0x18 + *ar5 + 0x10);
  ar6[5] = *(undefined4 *)(ar7 * 0x18 + *ar5 + 0x14);
  *(undefined4 *)(*ar5 + ar7 * 0x18) = 0;
  *(undefined4 *)(ar7 * 0x18 + *ar5 + 4) = 0;
  *(undefined4 *)(ar7 * 0x18 + *ar5 + 8) = 0;
  *(undefined4 *)(ar7 * 0x18 + *ar5 + 0xc) = 0;
  *(undefined4 *)(ar7 * 0x18 + *ar5 + 0x10) = 0;
  *(undefined4 *)(ar7 * 0x18 + *ar5 + 0x14) = 0;
  return 0;
}

__asm__(".globl _FUN_8c034a70\n.set _FUN_8c034a70, _FUN_8c034a70_def\n");
