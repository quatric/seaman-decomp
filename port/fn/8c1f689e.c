#include "../decls.h"
int FUN_8c1f689e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  *(int *)(0x20c + ar4) = *(int *)(0x20c + ar4) + -1;
  iVar1 = (int)0x118;
  *(undefined4 *)(ar5 + 0xc) = 0;
  if (*(int *)(iVar1 + ar5) != 0) {
                    
                    
    uVar2 = (**(code **)(iVar1 + ar5))();
    return uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f689e\n.set _FUN_8c1f689e, _FUN_8c1f689e_def\n");
