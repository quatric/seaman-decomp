#include "../decls.h"
undefined4 FUN_8c121dc8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(0xfc + ar4);
  iVar1 = (int)0x244;
  iVar3 = (uint)*(ushort *)(0x244 + ar4) * 4;
  iVar4 = (int)0xf4;
  *(undefined4 *)(0x124 + ar4 + iVar3) = *(undefined4 *)(0x118 + ar4 + iVar3);
  (**(code **)(iVar2 + 0x18))
            (*(undefined4 *)((uint)*(ushort *)(iVar1 + ar4) * 8 + 0x268 + ar4 + 4),
             iVar4 + ar4,ar6,ar7);
  iVar1 = (int)0x148;
  *(undefined4 *)((uint)*(ushort *)(0x244 + ar4) * 8 + 0x268 + ar4 + 4) = 0;
  *(undefined4 *)(iVar1 + ar4) = 0;
  return 0;
}

__asm__(".globl _FUN_8c121dc8\n.set _FUN_8c121dc8, _FUN_8c121dc8_def\n");
