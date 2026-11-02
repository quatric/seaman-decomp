#include "../decls.h"
undefined4 FUN_8c014fd0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar5_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  ar5_00 = (uint)*(byte *)(ar4 + 0x78);
  iVar1 = (*(code *)(&libgcc_divide_helper_01031c))
                    ((uint)*(ushort *)(ar4 + 0x6c),ar5_00,ar6,ar7);
  if (iVar1 == 0) {
    for (iVar1 = 4; 0 < iVar1; iVar1 = iVar1 + -1) {
      iVar4 = iVar1 * 0xc + ar4;
      iVar3 = (iVar1 + -1) * 0xc + ar4;
      uVar2 = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar3 + 4);
      *(undefined4 *)(iVar4 + 8) = uVar2;
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
    }
  }
  uVar2 = FUN_8c014f74(ar4,ar5_00,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c014fd0\n.set _FUN_8c014fd0, _FUN_8c014fd0_def\n");
