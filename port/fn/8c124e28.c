#include "../decls.h"
uint FUN_8c124e28_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int a4;
  
  if (*(char *)(*(int *)(ar4 + 0x2c) + 0x30) == '\0') {
    uVar3 = (*(undefined4 **)(ar4 + 0x28))[1];
    iVar1 = FUN_8c111fbe(**(undefined4 **)(ar4 + 0x28),uVar3,ar6,ar7);
    if (iVar1 != 0) {
      puVar2 = (undefined1 *)FUN_8c111dfe(*(undefined4 *)(ar4 + 0x2c),uVar3,ar6,ar7);
      a4 = *(int *)(ar4 + 0x30);
      iVar4 = 0;
      if (*(short *)(ar4 + 0x34) != 0) {
        do {
          uVar3 = FUN_8c124d10(a4,(uint)*(ushort *)(a4 + 4) * 4 + iVar1,ar6,ar7);
          *puVar2 = (char)uVar3;
          iVar4 = iVar4 + 1;
          a4 = a4 + 0x14;
          puVar2 = puVar2 + 1;
        } while (iVar4 < (int)(uint)*(ushort *)(ar4 + 0x34));
      }
    }
  }
  iVar1 = **(int **)(ar4 + 0x28);
  return *(int *)((*(int **)(ar4 + 0x28))[1] * 4 + *(int *)(iVar1 + 0x40)) == *(int *)(iVar1 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c124e28\n.set _FUN_8c124e28, _FUN_8c124e28_def\n");
