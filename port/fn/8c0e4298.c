#include "../decls.h"
undefined4 FUN_8c0e4298_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar5;
  iVar1 = (*(code *)(&get_field_24_05c284))
                    (*(undefined4 *)(0x9d4 + (int)ar4),ar5,ar6,ar7);
  if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 5)) || (iVar1 == 1)) {
    uVar2 = (**(code **)(*ar4 + 0x58))(ar4,uVar2,ar6,ar7);
    FUN_8c0e433c(ar5,uVar2,ar6,ar7);
    uVar2 = 0;
    FUN_8c0e4330(ar5,0,ar6,ar7);
    uVar2 = FUN_8c1006bc(ar5,uVar2,ar6,ar7);
  }
  else {
    uVar2 = FUN_8c021720(0x8c2b59d0,2,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0e4298\n.set _FUN_8c0e4298, _FUN_8c0e4298_def\n");
