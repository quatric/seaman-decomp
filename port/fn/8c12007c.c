#include "../decls.h"
undefined4 FUN_8c12007c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort *unaff_r14;
  
  iVar3 = 0;
  if (*unaff_r14 != 0) {
    do {
      iVar4 = *(int *)(*(int *)(unaff_r14 + 2) + iVar3 * 4);
      if ((*(int *)(iVar4 + 0x14) != 0) &&
         (uVar2 = (**(code **)(iVar4 + 0x14))(iVar4,ar5,ar6,ar7), (uVar2 & 0xff) != 0)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*unaff_r14);
  }
  puVar1 = (&FUN_8c11194c);
  iVar3 = 0;
  if (unaff_r14[4] != 0) {
    do {
      iVar4 = (*(code *)puVar1)(*(undefined4 *)(*(int *)(unaff_r14 + 6) + iVar3 * 4),ar5,ar6,ar7);
      if (iVar4 == 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)unaff_r14[4]);
  }
  return 0;
}

__asm__(".globl _FUN_8c12007c\n.set _FUN_8c12007c, _FUN_8c12007c_def\n");
