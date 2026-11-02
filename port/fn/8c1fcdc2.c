#include "../decls.h"
undefined4 FUN_8c1fcdc2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = ar4 * 0x80 + 0x8c475fc0;
  if (*(int *)(iVar2 + 0x78) != 0) {
                    
                    
    uVar1 = (**(code **)(iVar2 + 0x78))();
    return uVar1;
  }
  return 0x78;
}

__asm__(".globl _FUN_8c1fcdc2\n.set _FUN_8c1fcdc2, _FUN_8c1fcdc2_def\n");
