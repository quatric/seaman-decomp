#include "../decls.h"
undefined4 FUN_8c20af76_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int ar5_00;
  undefined4 a5;
  int ar6_00;
  undefined4 ar7_00;
  undefined4 uVar6;
  
  puVar3 = (&FUN_8c212148);
  iVar1 = 0x8c4aa1a0;
  uVar6 = 0;
  if ((ar4 == 0) || (ar5 == 0)) {
    uVar6 = 0xe;
  }
  else {
    *(int *)(0x8c4aa1a0 + 0x3c) = ar4;
    *(int *)(iVar1 + 0x40) = ar5;
    *(undefined4 *)(iVar1 + 0x44) = ar7;
    piVar2 = 0x8c4a9be0;
    *(int *)(iVar1 + 0x18) = ar6;
    *piVar2 = ar6;
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar5 = (*(code *)puVar3)(ar4,ar5,ar6,ar7);
    if (iVar5 == 0x80000000) {
      if (*(int *)(ar4 + 0x18) == *(int *)(ar5 + 0x18)) {
        if (*(int *)(ar4 + 0x14) == *(int *)(ar5 + 0x14)) {
          *(undefined4 *)0x8c4a9ee0 = *(undefined4 *)(ar4 + 0x1c);
          puVar4 = 0x8c4a9ee8;
          *(undefined4 *)0x8c4a9ee8 = 0;
          *(undefined4 *)0x8c4a9ee4 = *(undefined4 *)(ar5 + 0x1c);
          *(undefined4 *)0x8c4a9eec = 0;
          puVar3 = (&pvr_20a844);
          pvr_20a844(0x50,puVar4[-0x1b],ar6_00,ar7_00);
          (*(code *)puVar3)(0x54,*(undefined4 *)0x8c4a9e7c,ar6_00,ar7_00);
          (*(code *)puVar3)(0x60,*(undefined4 *)0x8c4a9ee0,ar6_00,ar7_00);
          (*(code *)puVar3)(100,*(undefined4 *)0x8c4a9ee4,ar6_00,ar7_00);
          puVar4 = 0x8c4a9ee0;
          *(undefined4 *)0x8c4a9e7c = *(undefined4 *)0x8c4a9ee0;
          puVar4[-0x18] = *(undefined4 *)0x8c4a9ee4;
          if (ar6 == 1) {
            *(undefined4 *)0x8c4a9dc4 = 0;
            *(undefined4 *)0x8c4a9dc8 = 0;
            (*(code *)puVar3)(0x50,*(undefined4 *)0x8c4a9e7c,ar6_00,ar7_00);
            a5 = *(undefined4 *)0x8c4a9e80;
          }
          else {
            (*(code *)puVar3)(0x50,*(undefined4 *)0x8c4a9e7c,ar6_00,ar7_00);
            a5 = *(undefined4 *)0x8c4a9e7c;
          }
          (*(code *)puVar3)(0x54,a5,ar6_00,ar7_00);
          *(undefined4 *)0x8c4a9e54 = 1;
          *(undefined4 *)0x8c4a9d94 = ar7;
        }
        else {
          uVar6 = 0x10;
        }
      }
      else {
        uVar6 = 0xf;
      }
    }
    else {
      iVar5 = FUN_8c2120c0((int)0x800,ar5_00,ar6_00,ar7_00);
      if (iVar5 == 0xb00) {
        FUN_8c212140(0x80000000,ar5_00,ar6_00,ar7_00);
        uVar6 = FUN_8c211f40(*(undefined4 *)(iVar1 + 0x54),ar5_00,ar6_00,ar7_00);
      }
    }
  }
  return uVar6;
}

__asm__(".globl _FUN_8c20af76\n.set _FUN_8c20af76, _FUN_8c20af76_def\n");
