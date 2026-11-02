#include "../decls.h"
undefined4 FUN_8c236278_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  
  uVar1 = 0xa5;
  uVar4 = ar4 + 0x3fU & 0xffffffe0;
  iVar2 = *(undefined4 *)0x8c4ab218;
  while( true ) {
    if (iVar2 == 0x8c4ab210) {
      return 0;
    }
    if ((*(short *)(iVar2 + 2) == 0) && ((int)uVar4 <= *(int *)(iVar2 + 4))) break;
    iVar2 = *(int *)(iVar2 + 8);
  }
  if (0x40 < (int)(*(int *)(iVar2 + 4) - uVar4)) {
    puVar3 = (undefined2 *)(uVar4 + iVar2);
    *(uint *)(puVar3 + 2) = *(int *)(iVar2 + 4) - uVar4;
    *puVar3 = uVar1;
    puVar3[1] = 0;
    *(undefined2 **)(*(int *)(iVar2 + 8) + 0xc) = puVar3;
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(iVar2 + 8);
    *(undefined2 **)(iVar2 + 8) = puVar3;
    *(int *)(puVar3 + 6) = iVar2;
    *(uint *)(iVar2 + 4) = uVar4;
  }
  *(undefined2 *)(iVar2 + 2) = 1;
  return iVar2 + 0x20;
}

__asm__(".globl _FUN_8c236278\n.set _FUN_8c236278, _FUN_8c236278_def\n");
