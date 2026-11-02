#include "../decls.h"
uint * FUN_8c11335c_def(int ar4,uint ar5,uint ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = libgcc_divide_helper_01051c((uint)*(ushort *)(in_r0 + ar4),0x18);
  uVar7 = ar5;
  if (ar5 < *(uint *)(ar4 + 0x110)) {
    do {
      iVar6 = *(int *)(*(int *)(ar4 + 0x10c) + uVar7 * 4);
      if (ar5 != 0) {
        *(int *)(ar5 + 4) = iVar6;
      }
      uVar4 = ar6;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(iVar2 + iVar6 + 4) = iVar3 * 0x18 + iVar6;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar7 = uVar7 + 1;
      ar5 = uVar4 * 0x18 + iVar6;
    } while (uVar7 < *(uint *)(ar4 + 0x110));
  }
  if (ar5 != 0) {
    *(uint *)(ar5 + 4) = ar6;
  }
  puVar5 = (uint *)**(undefined4 **)(ar4 + 0x10c);
  puVar5[3] = ar6;
  puVar5[5] = ar6;
  *puVar5 = ar6;
  puVar5[2] = ar6;
  puVar5[4] = ar6;
  *(uint *)(ar4 + 0x114) = puVar5[1];
  return puVar5;
}

__asm__(".globl _FUN_8c11335c\n.set _FUN_8c11335c, _FUN_8c11335c_def\n");
