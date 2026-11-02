#include "../decls.h"
int FUN_8c031b08_def(int *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(int *)(0x178 + (int)ar4);
  if (iVar1 == 0) {
    if (ar6 == 1) {
      ar5_00 = ar5;
      (**(code **)(*ar4 + 0x2c))(ar4,ar5,1,ar7);
      FUN_8c031b58((int)ar4 + 0xb0,ar5_00,ar6,ar7);
    }
    iVar1 = 0x124;
    *(undefined4 *)(0x124 + (int)ar4) = ar5;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c031b08\n.set _FUN_8c031b08, _FUN_8c031b08_def\n");
