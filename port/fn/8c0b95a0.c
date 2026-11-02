#include "../decls.h"
uint FUN_8c0b95a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *ar5_00;
  undefined4 uVar5;
  undefined4 ar7_00;
  undefined1 *ain0;
  undefined1 *puStack_120;
  int iStack_11c;
  undefined1 auStack_118 [2];
  byte bStack_116;
  undefined1 auStack_10c [2];
  undefined1 auStack_10a [106];
  int iStack_a0;
  undefined1 auStack_1c [20];
  
  uVar5 = ar5;
  iStack_11c = FUN_8c10287c(0x10000,ar5,ar6,ar7);
  if (iStack_11c == 0) {
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined1 *)FUN_8c10287c(0x3c,uVar5,ar6,ar7);
    puStack_120 = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      FUN_8c10289c(&iStack_11c,uVar5,ar6,ar7);
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      ar7_00 = 0;
      uVar5 = 0;
      iVar4 = iStack_11c;
      ain0 = puVar2;
      iVar3 = FUN_8c1f6f20(iStack_11c,puVar2,0,0);
      if (iVar3 != 0) {
        memset(auStack_10c,0,0xf0,ar7_00);
        uVar5 = 10;
        memmove(auStack_1c,ar5,10,ar7_00);
        FUN_8c1f7b64(auStack_1c,auStack_10c,uVar5,ar7_00);
        uVar5 = 10;
        ar5_00 = auStack_10a;
        puVar2 = auStack_1c;
        iVar4 = FUN_8c013ec0(puVar2,ar5_00,10,ar7_00);
        if (iVar4 != 0) {
          FUN_8c1f710c(puVar2,ar5_00,uVar5,ar7_00,ain0);
          FUN_8c10289c(&iStack_11c,ar5_00,uVar5,ar7_00);
          FUN_8c10289c(&puStack_120,ar5_00,uVar5,ar7_00);
          return 0;
        }
        puVar2 = auStack_118;
        FUN_8c1f8300(iStack_a0,puVar2,uVar5,ar7_00);
        uVar1 = (uint)bStack_116;
        iVar4 = iStack_a0;
      }
      FUN_8c1f710c(iVar4,puVar2,uVar5,ar7_00,ain0);
      FUN_8c10289c(&iStack_11c,puVar2,uVar5,ar7_00);
      FUN_8c10289c(&puStack_120,puVar2,uVar5,ar7_00);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0b95a0\n.set _FUN_8c0b95a0, _FUN_8c0b95a0_def\n");
