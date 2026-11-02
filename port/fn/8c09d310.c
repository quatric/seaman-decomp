#include "../decls.h"
undefined4 FUN_8c09d310_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  
  s_Failed_to_Load_CAnimal_LoadG_0284b8(ar4,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(0x524 + ar4 + iVar1 * 4) != 0) {
      a4 = *(int *)(0x524 + ar4 + iVar1 * 4);
      (**(code **)(0xe0 + *(int *)(a4 + 8)))(a4,ar5,0,ar7);
    }
  }
  return 8;
}

__asm__(".globl _FUN_8c09d310\n.set _FUN_8c09d310, _FUN_8c09d310_def\n");
