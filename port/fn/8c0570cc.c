#include "../decls.h"
uint FUN_8c0570cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(int *)(0x2a0 + ar4) == 0) {
    *(int *)(0x2a0 + ar4) = *(int *)(0x2a0 + ar4) + 1;
    ar7 = 0;
    ar6 = 0xffffffff;
    (*(code *)(&s_CAnimBody_SetAnimation_033a94))
              (ar4 + 0xb0,ar5,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7);
  }
  else if (*(int *)(0x2a0 + ar4) != 1) {
    return 1;
  }
  iVar1 = (*(code *)(&s_CAnimBody_AdvanceFrame_033ba0))
                    (ar4 + 0xb0,ar5,ar6,ar7);
  if (iVar1 == 1) {
    *(undefined4 *)(0x2a0 + ar4) = 0;
  }
  return (uint)(iVar1 != 1);
}

__asm__(".globl _FUN_8c0570cc\n.set _FUN_8c0570cc, _FUN_8c0570cc_def\n");
