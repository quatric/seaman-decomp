#include "../decls.h"
undefined4 FUN_8c10f69c_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  *ar5 = *(undefined4 *)(ar4 + 0x28);
  ar5[1] = (uint)*(ushort *)(ar4 + 0x30);
  puVar2 = ar5 + 2;
  if (*(int *)(ar4 + 0x78) != 0) {
    do {
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      *puVar2 = *(undefined4 *)(*(int *)(ar4 + 0x44) + iVar1);
      puVar2 = puVar2 + 1;
    } while (uVar3 < *(uint *)(ar4 + 0x78));
  }
  *puVar2 = *(undefined4 *)(ar4 + 0x48);
  puVar2[1] = *(undefined4 *)(ar4 + 0x4c);
  puVar2[2] = *(undefined4 *)(ar4 + 0x50);
  puVar2[3] = *(undefined4 *)(ar4 + 0x54);
  return 0x54;
}

__asm__(".globl _FUN_8c10f69c\n.set _FUN_8c10f69c, _FUN_8c10f69c_def\n");
