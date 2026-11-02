#include "../decls.h"
int FUN_8c10bad4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar2 = 0;
  uStack_14 = *(undefined4 *)(ar4[2] + 4);
  uStack_10 = 0;
  iVar1 = FUN_8c11e82c(*ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    iVar2 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[2],0,ar6,ar7);
  }
  if (iVar2 == 0) {
    (**(code **)(ar4[2] + 0xc))(ar4,&uStack_14,ar6,ar7);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c10bad4\n.set _FUN_8c10bad4, _FUN_8c10bad4_def\n");
