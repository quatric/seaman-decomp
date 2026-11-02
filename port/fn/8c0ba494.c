#include "../decls.h"
undefined4 FUN_8c0ba494_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_1c = *(undefined4 *)(&DATA_8c13bd0c);
  uStack_18 = *(undefined4 *)((&DATA_8c13bd0c) + 4);
  uStack_14 = *(undefined4 *)((&DATA_8c13bd0c) + 8);
  uStack_10 = *(undefined4 *)((&DATA_8c13bd0c) + 0xc);
  uStack_2c = *(undefined4 *)(&DATA_8c13bd1c);
  uStack_28 = *(undefined4 *)((&DATA_8c13bd1c) + 4);
  uStack_24 = *(undefined4 *)((&DATA_8c13bd1c) + 8);
  uStack_20 = *(undefined4 *)((&DATA_8c13bd1c) + 0xc);
  FUN_8c2595aa(2,&uStack_1c,ar6,ar7);
  if (*(int *)(ar4 + 0x10) == 0) {
    if (*(int *)(ar4 + 0x14) == 1) {
      FUN_8c0ba5e0(ar4,ar5,ar6,ar7);
      FUN_8c0ba6bc(ar4,ar5,ar6,ar7);
    }
    else {
      FUN_8c0ba6bc(ar4,ar5,ar6,ar7);
      FUN_8c0ba5e0(ar4,ar5,ar6,ar7);
    }
  }
  else if (*(int *)(ar4 + 0x14) == 1) {
    FUN_8c0ba5e0(ar4,ar5,ar6,ar7);
  }
  else {
    FUN_8c0ba6bc(ar4,ar5,ar6,ar7);
  }
  uVar1 = FUN_8c2595aa(0,&uStack_2c,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0ba494\n.set _FUN_8c0ba494, _FUN_8c0ba494_def\n");
