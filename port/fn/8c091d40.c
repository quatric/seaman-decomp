#include "../decls.h"
uint FUN_8c091d40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(0x12c + ar4);
  if (iVar1 == 0) {
    FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7);
    uVar4 = 0;
    uVar3 = 0xffffffff;
    uVar2 = 5;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0)
    ;
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,uVar4);
    *(int *)(0x12c + ar4) = *(int *)(0x12c + ar4) + 1;
  }
  else if (iVar1 != 1) {
    uVar2 = ar5;
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      return 0;
    }
    goto LAB_8c091dca;
  }
  *(int *)(0x12c + ar4) = *(int *)(0x12c + ar4) + 1;
  uVar2 = 0x21;
  ar7 = ar6;
  FUN_8c033474(ar4,0x21,ar5,ar6);
  ar6 = ar5;
LAB_8c091dca:
  iVar1 = (*(code *)(&CAnimBody_AdvanceFrame_wrapper))
                    (ar4 + 0xb0,uVar2,ar6,ar7);
  if (iVar1 == 1) {
    FUN_8c030eb8(ar4 + 0x1fc,uVar2,ar6,ar7);
    uVar4 = 0;
    uVar3 = 0xffffffff;
    uVar2 = 0;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0)
    ;
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,uVar4);
    *(int *)(0x12c + ar4) = *(int *)(0x12c + ar4) + 1;
  }
  return (uint)(iVar1 != 1);
}

__asm__(".globl _FUN_8c091d40\n.set _FUN_8c091d40, _FUN_8c091d40_def\n");
