#include "../decls.h"
undefined4 FUN_8c03087c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 ar7_00;
  char cStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [36];
  
  puVar5 = auStack_2c;
  puVar3 = &DAT_8c1329bc;
  iVar2 = 0x10;
  do {
    puVar4 = puVar3 + 1;
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar5[1] = *puVar4;
    puVar5 = puVar5 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  cStack_40 = DAT_8c1329dc;
  uStack_3f = DAT_8c1329dd;
  uStack_3e = DAT_8c1329de;
  uStack_3d = DAT_8c1329df;
  if (((*(int *)(ar4 + 0x2e8) == -1) && (*(int *)(ar4 + 0x770) == 0)) &&
     (*(int *)(ar4 + 0x778) == 0)) {
    uVar1 = ar6;
    ar7_00 = ar7;
    uStack_30 = s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,ar6,ar7);
    *(undefined4 *)(ar4 + 0x2ec) = uStack_30;
    *(undefined4 *)(ar4 + 0x72c) = ar5;
    *(undefined4 *)(ar4 + 0x770) = 2;
    *(undefined4 *)(ar4 + 0x60) = ar6;
    strcpy(auStack_2c,ar4 + 0x2c8,uVar1,ar7_00,ar5);
    cStack_40 = cStack_40 + *(char *)(ar4 + 0x728);
    FUN_8c01437c(auStack_2c,&cStack_40,uVar1,ar7_00);
    strcpy(ar4,auStack_2c,uVar1,ar7_00,ar5);
    strcpy(ar4 + 0x20,ar7,uVar1,ar7_00,ar5);
    strcpy(ar4 + 0x40,s0,uVar1,ar7_00,ar5);
    iStack_38 = *(int *)(ar4 + 0x72c);
    iStack_3c = *(int *)(ar4 + 0x60);
    *(undefined4 *)(iStack_38 * 0x14 + ar4 + iStack_3c * 4 + 0x2f0) = 1;
    uVar1 = s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,uVar1,ar7_00);
    *(undefined4 *)(ar4 + 0x2ec) = uVar1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c03087c\n.set _FUN_8c03087c, _FUN_8c03087c_def\n");
