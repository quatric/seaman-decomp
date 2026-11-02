#include "../decls.h"
undefined4 FUN_8c260030_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int ar7_00;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 8);
  ar7_00 = *(int *)(ar6 + 100) + *(int *)(ar6 + 0x70) * 2;
  (*(code *)(&FUN_8c264fa4))
            (uVar1,*(undefined4 *)(ar4 + 0x50),ar5 << 1,ar7_00,*(int *)(ar6 + 0x6c) * 2 + ar7_00);
  uVar1 = FUN_8c264fc2(uVar1);
  return uVar1;
}

__asm__(".globl _FUN_8c260030\n.set _FUN_8c260030, _FUN_8c260030_def\n");
