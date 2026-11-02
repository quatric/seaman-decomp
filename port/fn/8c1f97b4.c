#include "../decls.h"
undefined4 FUN_8c1f97b4_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int a4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *a5;
  undefined1 *puVar7;
  undefined4 a7;
  undefined1 auStack_50 [7];
  undefined1 auStack_49 [57];
  
  puVar5 = auStack_50;
  puVar7 = auStack_50;
  a5 = auStack_50;
  iVar3 = s_KATANA_FLASH_1f0d98(2,ar5,ar6,ar7);
  if (iVar3 == -8) {
    iVar3 = FUN_8c1f0e98(0,ar5,ar6,ar7);
  }
  if ((iVar3 == 0) &&
     (iVar3 = FUN_8c1f0f24(5,auStack_50,ar6,ar7), puVar2 = (&FUN_8c1f0fa0),
     iVar3 == 0)) {
    iVar3 = 0;
    do {
      iVar3 = (*(code *)puVar2)(iVar3,puVar5,ar6,ar7);
    } while (iVar3 == 2);
    if (iVar3 == 1) {
      iVar3 = syscall_1f3b44(1,puVar5,ar6,ar7);
      puVar5 = (undefined1 *)(iVar3 + 0x10);
      if (ar4 == 0) {
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          uVar1 = *puVar7;
          puVar7 = puVar7 + 1;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
        }
        return 0;
      }
      puVar7 = auStack_49;
      puVar5 = (undefined1 *)(iVar3 + 0x17);
      a7 = 1;
      for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
        if (((ar4 & 1) != 0) && (*puVar7 = *puVar5, iVar3 == 4)) {
          puVar6 = puVar5 + -2;
          puVar7[-1] = puVar5[-1];
          puVar5 = puVar5 + -3;
          puVar7[-2] = *puVar6;
          puVar7 = puVar7 + -3;
          *puVar7 = *puVar5;
        }
        puVar5 = puVar5 + -1;
        ar4 = (int)ar4 >> 1;
        puVar7 = puVar7 + -1;
      }
      iVar4 = FUN_8c1f0f60(5,auStack_50,iVar3,1);
      a4 = 0;
      if (iVar4 == 0) {
        do {
          a4 = (*(code *)puVar2)(a4,a5,iVar3,a7);
        } while (a4 == 2);
        if (a4 == 1) {
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f97b4\n.set _FUN_8c1f97b4, _FUN_8c1f97b4_def\n");
