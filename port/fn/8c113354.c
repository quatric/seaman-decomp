#include "../decls.h"
uint * FUN_8c113354_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = 0;
  uVar4 = 0;
  iVar1 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x1e4),0x18);
  uVar8 = uVar4;
  if (uVar4 < *(uint *)(ar4 + 0x110)) {
    do {
      iVar7 = *(int *)(*(int *)(ar4 + 0x10c) + uVar8 * 4);
      if (uVar4 != 0) {
        *(int *)(uVar4 + 4) = iVar7;
      }
      uVar4 = uVar6;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(iVar2 + iVar7 + 4) = iVar3 * 0x18 + iVar7;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar8 = uVar8 + 1;
      uVar4 = uVar4 * 0x18 + iVar7;
    } while (uVar8 < *(uint *)(ar4 + 0x110));
  }
  if (uVar4 != 0) {
    *(uint *)(uVar4 + 4) = uVar6;
  }
  puVar5 = (uint *)**(undefined4 **)(ar4 + 0x10c);
  puVar5[3] = uVar6;
  puVar5[5] = uVar6;
  *puVar5 = uVar6;
  puVar5[2] = uVar6;
  puVar5[4] = uVar6;
  *(uint *)(ar4 + 0x114) = puVar5[1];
  return puVar5;
}

__asm__(".globl _FUN_8c113354\n.set _FUN_8c113354, _FUN_8c113354_def\n");
