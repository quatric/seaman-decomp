#include "../decls.h"
undefined4 FUN_8c030568_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 ar7_00;
  undefined1 auStack_34 [36];
  
  puVar7 = auStack_34;
  puVar5 = &DAT_8c132974;
  iVar4 = 0x10;
  do {
    puVar6 = puVar5 + 1;
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar7[1] = *puVar6;
    puVar7 = puVar7 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar3 = CONCAT13(DAT_8c132997,CONCAT12(DAT_8c132996,CONCAT11(DAT_8c132995,DAT_8c132994)));
  if ((((*(int *)(ar4 + 0x2e8) == -1) &&
       (iVar4 = ar6, ar7_00 = ar7, iVar1 = FUN_8c030538(ar4,ar5,ar6,ar7), iVar1 == 0)) &&
      (*(int *)(ar4 + 0x770) == 0)) &&
     ((*(int *)(ar4 + 0x778) == 0 && (*(int *)(ar4 + 0x60) <= ar6)))) {
    uVar2 = s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,iVar4,ar7_00);
    *(undefined4 *)(ar4 + 0x2ec) = uVar2;
    *(undefined4 *)(ar4 + 0x72c) = ar5;
    *(undefined4 *)(ar4 + 0x770) = 2;
    *(int *)(ar4 + 0x60) = ar6;
    strcpy(auStack_34,ar4 + 0x2c8,iVar4,ar7_00,uVar3);
    uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),(char)uVar3 + *(char *)(ar4 + 0x728));
    FUN_8c01437c(auStack_34,&stack0xffffffb4,iVar4,ar7_00);
    strcpy(ar4,auStack_34,iVar4,ar7_00,uVar3);
    strcpy(ar4 + 0x20,ar7,iVar4,ar7_00,uVar3);
    strcpy(ar4 + 0x40,s0,iVar4,ar7_00,uVar3);
    uVar3 = s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,iVar4,ar7_00);
    *(undefined4 *)(ar4 + 0x2ec) = uVar3;
    *(undefined4 *)(*(int *)(ar4 + 0x72c) * 0x14 + ar4 + *(int *)(ar4 + 0x60) * 4 + 0x2f0) = 1;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c030568\n.set _FUN_8c030568, _FUN_8c030568_def\n");
