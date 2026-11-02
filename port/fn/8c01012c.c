#include "../decls.h"
uint FUN_8c01012c_def(int ar4,code *ar5,code *ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
                 undefined4 s8,undefined4 s12,undefined4 s16,uint s20)

{
  code *a6;
  int unaff_r11;
  int iVar1;
  undefined4 uStack_8;
  
  a6 = ar6;
  iVar1 = ar4;
  for (uStack_8 = 0; uStack_8 < s20; uStack_8 = uStack_8 + 1) {
    (*ar5)(iVar1,1,a6,ar7);
    iVar1 = iVar1 + unaff_r11;
  }
  if ((uStack_8 < s20) && (s20 = 0, ar6 != (code *)0x0)) {
    iVar1 = unaff_r11 * uStack_8 + ar4;
    for (; s20 = 0, uStack_8 != 0; uStack_8 = uStack_8 - 1) {
      iVar1 = iVar1 - unaff_r11;
      (*ar6)(iVar1,0xffffffff,a6,ar7);
    }
  }
  return s20;
}

__asm__(".globl _FUN_8c01012c\n.set _FUN_8c01012c, _FUN_8c01012c_def\n");
