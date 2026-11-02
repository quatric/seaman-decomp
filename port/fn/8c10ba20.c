#include "../decls.h"
undefined4 FUN_8c10ba20_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar3 = ar4[1];
  uVar2 = 0;
  uStack_1c = *(undefined4 *)(iVar3 + 4);
  uStack_18 = ar4[2];
  iVar1 = FUN_8c11d200(*ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    uVar2 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],*ar4,ar6,ar7);
  }
  (**(code **)(iVar3 + 0xc))(ar4,&uStack_1c,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c10ba20\n.set _FUN_8c10ba20, _FUN_8c10ba20_def\n");
