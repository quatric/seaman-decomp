#include "../decls.h"
undefined4 FUN_8c0306d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 ar7_00;
  undefined4 uVar7;
  undefined4 in_stack_00000000;
  undefined1 auStack_3c [36];
  
  puVar3 = auStack_3c;
  iVar6 = 0x10;
  puVar5 = (&DATA_8c132998);
  do {
    puVar4 = puVar5 + 1;
    *puVar3 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar3[1] = *puVar4;
    puVar3 = puVar3 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar7 = 0;
  if ((*(char *)(0x774 + ar4) == '\0') && (*(int *)(0x778 + ar4) == 0)) {
    uVar2 = ar6;
    ar7_00 = ar7;
    uVar1 = s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,ar6,ar7);
    *(undefined4 *)(0x2ec + ar4) = uVar1;
    if (*(int *)(0x2e8 + ar4) == -1) {
      if (*(int *)(0x2e8 + ar4) == -1) {
        FUN_8c030870(ar4,0,uVar2,ar7_00);
        FUN_8c030550(ar4,ar5,0,ar7_00);
        uVar7 = FUN_8c03087c(ar4,ar5,ar6,ar7,in_stack_00000000);
        *(undefined4 *)(0xb0 + ar4) = 0;
        *(undefined4 *)(ar4 + 0x60) = ar6;
        iVar6 = ar4;
        uVar2 = (*(code *)(&FUN_8c0f82a4))
                          (0x8c35468c,*(undefined4 *)(0x2ec + ar4),ar4,ar7);
        *(undefined4 *)(0x2e8 + ar4) = uVar2;
        FUN_8c030870(ar4,2,iVar6,ar7);
        if (*(int *)(0x2e8 + ar4) != -1) {
          *(undefined1 *)(0x774 + ar4) = 1;
        }
      }
    }
    else {
      *(undefined4 *)(0x2e8 + ar4) = 0xffffffff;
      uVar7 = 0;
      FUN_8c030550(ar4,ar5,0,ar7_00);
      FUN_8c030870(ar4,0,uVar7,ar7_00);
      uVar2 = ar6;
      uVar7 = FUN_8c03087c(ar4,ar5,ar6,ar7,in_stack_00000000);
      *(undefined4 *)(0xb0 + ar4) = 0;
      *(undefined4 *)(ar4 + 0x60) = ar6;
      FUN_8c030870(ar4,2,uVar2,ar7);
      uVar2 = FUN_8c0f82a4(0x8c35468c,*(undefined4 *)(0x2ec + ar4),ar4,ar7);
      *(undefined4 *)(0x2e8 + ar4) = uVar2;
      if (*(int *)(0x2e8 + ar4) != -1) {
        *(undefined1 *)(0x774 + ar4) = 1;
      }
    }
  }
  return uVar7;
}

__asm__(".globl _FUN_8c0306d4\n.set _FUN_8c0306d4, _FUN_8c0306d4_def\n");
