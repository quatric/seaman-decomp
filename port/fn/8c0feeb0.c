#include "../decls.h"
undefined4 FUN_8c0feeb0_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int aiStack_14 [2];
  
  aiStack_14[0] = *ar5;
  uVar1 = *(undefined4 *)(aiStack_14[0] + 8);
  *ar5 = 0;
  s_CItemGLoadRequestList_TakeOu_0fe960(ar4,aiStack_14[0],ar6,ar7);
  FUN_8c0fed08(ar4 + 0x4c,aiStack_14,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0feeb0\n.set _FUN_8c0feeb0, _FUN_8c0feeb0_def\n");
