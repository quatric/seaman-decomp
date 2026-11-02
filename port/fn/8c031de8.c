#include "../decls.h"
undefined4 FUN_8c031de8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(0x138 + ar4) == 0) {
    iVar1 = FUN_8c034148(ar4 + 0xb0,ar5,ar6,ar7);
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        if (iVar1 != 2) {
          return 1;
        }
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
      }
      *(int *)(0x138 + ar4) = *(int *)(0x138 + ar4) + 1;
    }
  }
  else if ((*(int *)(0x138 + ar4) == 1) &&
          (iVar1 = (*(code *)(&CAnimBody_AdvanceFrame_wrapper))
                             (ar4 + 0xb0,ar5,ar6,ar7), iVar1 == 1)) {
    *(undefined4 *)(0x138 + ar4) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c031de8\n.set _FUN_8c031de8, _FUN_8c031de8_def\n");
