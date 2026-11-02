#include "../decls.h"
int FUN_8c0dc61c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = ar5;
  if (*(int *)(0x9d4 + ar4) == 0) {
    iVar1 = FUN_8c0db3bc(ar4,ar5,ar6,ar7);
    if (iVar1 != 0) {
      uVar3 = 0;
      (**(code **)(0x84 + *(int *)(iVar1 + 8)))(iVar1,0,ar6,ar7);
    }
  }
  else {
    iVar1 = (*(code *)(&get_field_24_05c284))
                      (*(undefined4 *)(0x9d4 + ar4),ar5,ar6,ar7);
    if (((iVar1 == 3) || (iVar1 == 5)) || (iVar1 == 7)) {
      uVar3 = 0;
      (**(code **)(0x84 + *(int *)(*(int *)(0x9d4 + ar4) + 8)))
                (*(int *)(0x9d4 + ar4),0,ar6,ar7);
    }
  }
  iVar1 = FUN_8c100c80(ar5,uVar3,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = get_field_300_0bf154(ar4 + 0xa4,uVar3,ar6,ar7);
    iVar2 = FUN_8c0da588(ar4 + 0xa4,uVar3,ar6,ar7);
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = 1;
      (**(code **)(0x84 + *(int *)(iVar2 + 8)))(iVar2,1,ar6,ar7);
      iVar2 = list_node_next(iVar2,uVar3,ar6,ar7);
    }
  }
  iVar1 = FUN_8c100cb4(ar5,uVar3,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = get_field_300_0bf154(ar4 + 0xa4,uVar3,ar6,ar7);
    iVar2 = FUN_8c0da588(ar4 + 0xa4,uVar3,ar6,ar7);
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = 2;
      (**(code **)(0x84 + *(int *)(iVar2 + 8)))(iVar2,2,ar6,ar7);
      iVar2 = list_node_next(iVar2,uVar3,ar6,ar7);
    }
  }
  iVar1 = 0;
  if (*(int *)(0x9d4 + ar4) != 0) {
    iVar1 = FUN_8c0dc7c0(ar5,uVar3,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = FUN_8c0dc7b0(ar5,uVar3,ar6,ar7);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0dc61c\n.set _FUN_8c0dc61c, _FUN_8c0dc61c_def\n");
