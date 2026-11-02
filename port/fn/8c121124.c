#include "../decls.h"
undefined4 FUN_8c121124_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(0xfc + ar4);
  puVar1 = *(undefined4 **)(0x284 + ar4);
  while (puVar1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)puVar1[4];
    (**(code **)(iVar4 + 0x18))(*puVar1,0xf4 + ar4);
    (**(code **)(iVar4 + 0x18))(puVar1[2],0xf4 + ar4);
    (**(code **)(iVar4 + 0x18))(puVar1,0xf4 + ar4);
    puVar1 = puVar3;
  }
  (**(code **)(iVar4 + 0x18))(*(undefined4 *)(0x2a8 + ar4),0xf4 + ar4);
                    
                    
  uVar2 = (**(code **)(iVar4 + 0x18))(*(undefined4 *)(0x29c + ar4),0xf4 + ar4);
  return uVar2;
}

__asm__(".globl _FUN_8c121124\n.set _FUN_8c121124, _FUN_8c121124_def\n");
