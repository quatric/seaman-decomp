#include "../decls.h"
undefined4 FUN_8c105094_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  if ((*(int *)(ar4 + 0x38) == 2) && (*(int *)(ar4 + 0x6c) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  iVar2 = *(int *)(ar4 + 0x40);
  uVar1 = 0x20;
  if ((iVar2 < 0x21) && (uVar1 = 1, 0 < iVar2)) {
                    
                    
    uVar3 = (*(code *)((code **)&DATA_8c10519c)[iVar2 + -1])(uVar3);
    return uVar3;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c105094\n.set _FUN_8c105094, _FUN_8c105094_def\n");
