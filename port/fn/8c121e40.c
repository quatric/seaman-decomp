#include "../decls.h"
undefined4 FUN_8c121e40_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7,int s0)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *a7;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(0xfc + ar4);
  iVar4 = *ar7;
  if (s0 == 1) {
    iVar3 = (int)0x268;
    iVar5 = (uint)*(ushort *)(0x244 + ar4) * 8;
    *(int *)(0x268 + ar4 + iVar5) = iVar4;
    a7 = ar7;
    if (*(int *)(iVar3 + ar4 + iVar5 + 4) != 0) {
      (**(code **)(iVar6 + 0x18))
                (*(undefined4 *)(0x268 + ar4 + iVar5 + 4),0xf4 + ar4,ar6,ar7);
    }
    iVar3 = (int)0x268;
    iVar4 = iVar4 << 1;
    uVar2 = (**(code **)(iVar6 + 0x14))(iVar4,0xf4 + ar4,ar6,a7);
    puVar1 = (&memmove);
    iVar6 = (int)0x268;
    *(undefined4 *)(iVar3 + ar4 + iVar5 + 4) = uVar2;
    (*(code *)puVar1)(*(undefined4 *)(iVar6 + ar4 + iVar5 + 4),ar7 + 1,iVar4,a7);
    *(undefined4 *)(0x148 + ar4) = 1;
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c121e40\n.set _FUN_8c121e40, _FUN_8c121e40_def\n");
