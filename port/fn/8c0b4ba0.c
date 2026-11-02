#include "../decls.h"
undefined4 FUN_8c0b4ba0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 uVar3;
  undefined4 in_fr1;
  ulonglong uVar4;
  char cVar5;
  
  cVar5 = '\0';
  uVar3 = 1;
  if (*(int *)(ar4 + 300) == 0) {
    uVar2 = 0x17;
    iVar1 = FUN_8c034148(ar4 + 0xb0,0x17,ar6,ar7);
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 1;
      }
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7);
    }
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (*(int *)(ar4 + 300) == 1) {
    uVar4 = CONCAT44(0x3f000000,in_fr1);
    *(undefined4 *)(ar4 + 0x28) = 0x3f000000;
    iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
    if (iVar1 == 1) {
      if (cVar5 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = uVar4 & 0xffffffff;
      }
      ar7_00 = 0;
      uVar2 = 0xffffffff;
      uVar3 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar2,ar7_00);
      uVar3 = 0;
      *(undefined4 *)(ar4 + 300) = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c0b4ba0\n.set _FUN_8c0b4ba0, _FUN_8c0b4ba0_def\n");
