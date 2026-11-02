#include "../decls.h"
undefined4 FUN_8c11c7b8_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(uint)ar5[1];
  iVar2 = 0;
  if (0 < *ar5) {
    do {
      iVar3 = piVar5[5];
      iVar4 = 0;
      if (0 < *piVar5) {
        do {
          (**(code **)(*(int *)(0xfc + ar4) + 0x18))
                    (*(undefined4 *)(iVar3 + 0xc),0xf4 + ar4);
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0x10;
        } while (iVar4 < *piVar5);
      }
      (**(code **)(*(int *)(0xfc + ar4) + 0x18))(piVar5[5],0xf4 + ar4);
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 6;
    } while (iVar2 < *ar5);
  }
  if (iVar2 != 0) {
    (**(code **)(*(int *)(0xfc + ar4) + 0x18))(ar5[1],0xf4 + ar4);
  }
                    
                    
  uVar1 = (**(code **)(*(int *)(0xfc + ar4) + 0x18))(ar5,0xf4 + ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c11c7b8\n.set _FUN_8c11c7b8, _FUN_8c11c7b8_def\n");
