#include "../decls.h"
int FUN_8c020f90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uStack_1c;
  int iStack_18;
  
  uStack_1c = ar7;
  iVar1 = (*(code *)(&FUN_8c02077c))
                    (ar4,0xe,*(undefined4 *)(ar4 + 0x2c),ar5,ar6,&uStack_1c,ar4 + 8,0,0,1);
  if (iVar1 == 1) {
    iStack_18 = iVar1;
    FUN_8c0208ec(ar4,0xe,ar4 + 0x2c,ar5,ar6,1);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c020f90\n.set _FUN_8c020f90, _FUN_8c020f90_def\n");
