#include "../decls.h"
undefined4 FUN_8c1f1a2a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(ar4 + 0x1c);
  uVar2 = 0;
  uVar1 = 0;
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x2c) != 0)) {
    uVar2 = *(undefined4 *)(iVar3 + 0x30);
    uVar1 = *(undefined4 *)(iVar3 + 0x2c);
  }
                    
                    
  uVar1 = (*_DAT_8c0000bc)(uVar1,uVar2,0,5);
  return uVar1;
}

__asm__(".globl _FUN_8c1f1a2a\n.set _FUN_8c1f1a2a, _FUN_8c1f1a2a_def\n");
