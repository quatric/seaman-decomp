#include "../decls.h"
undefined4 FUN_8c060044_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(int *)(ar4 + 0x38) == 2) && (*(int *)(ar4 + 0x6c) != 0)) {
    iVar2 = *(int *)(*(int *)(ar4 + 0x6c) + 8);
    (**(code **)(iVar2 + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,iVar2);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  iVar2 = *(int *)(ar4 + 0x40);
  uVar1 = 0x10;
  if ((iVar2 < 0x11) && (uVar1 = 1, 0 < iVar2)) {
                    
                    
    uVar1 = (*(code *)((code **)&DATA_8c0600fc)[iVar2 + -1])();
    return uVar1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c060044\n.set _FUN_8c060044, _FUN_8c060044_def\n");
