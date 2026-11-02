#include "../decls.h"
int FUN_8c01af14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  uint ar5_00;
  int iVar2;
  undefined4 uVar3;
  undefined1 *ar5_01;
  undefined4 uVar4;
  undefined4 ar7_00;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined1 auStack_80 [18];
  undefined1 auStack_6e [50];
  int iStack_3c;
  int iStack_38;
  undefined2 uStack_34;
  ushort uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  uVar3 = 2;
  ar7_00 = ar7;
  uVar4 = ar5;
  iVar1 = FUN_8c01ab78(ar4,2,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    ar4_00 = malloc_thunk(0x5380,uVar3,ar5,ar7_00);
    if (ar4_00 == 0) {
      iVar1 = -1;
    }
    else {
      memset(ar4_00,0,0x5380,ar7_00);
      memmove(ar4_00,ar6,ar7,ar7_00);
      uVar3 = 0x60;
      memset(auStack_80,0,0x60,ar7_00);
      strcpy(auStack_80,in_stack_00000000,uVar3,ar7_00,uVar4);
      strcpy(auStack_6e,in_stack_00000004,uVar3,ar7_00,uVar4);
      iStack_3c = *(int *)(ar4 + 0x10) + 0xa0;
      iStack_38 = *(int *)(ar4 + 0x10) + 0xc0;
      uStack_34 = 1;
      uStack_24 = 0x5380;
      uVar4 = 0x5380;
      ar5_00 = (uint)uStack_2c;
      iStack_28 = ar4_00;
      iVar2 = FUN_8c2017a8(1,ar5_00,0x5380,ar7_00);
      iVar2 = malloc_thunk(iVar2 << 9,ar5_00,uVar4,ar7_00);
      if (iVar2 == 0) {
        iVar1 = -1;
      }
      else {
        ar5_01 = auStack_80;
        uVar3 = FUN_8c2015b0(iVar2,ar5_01,uVar4,ar7_00);
        FUN_8c1fb57c(ar4_00,ar5_01,uVar4,ar7_00);
        *(undefined4 *)(iVar1 * 0x28 + ar4 + 0x246c) = uVar3;
        *(int *)(iVar1 * 0x28 + ar4 + 0x2470) = iVar2;
      }
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01af14\n.set _FUN_8c01af14, _FUN_8c01af14_def\n");
