#include "../decls.h"
undefined4 FUN_8c11d904_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_r14;
  
  puVar1 = (&FUN_8c120348);
  *(undefined4 *)(unaff_r14 + 0x78) = 0;
  uVar2 = (*(code *)puVar1)(unaff_r14 + 0x48,0x46,ar6 + 0x7c,0);
  if (((((uVar2 & 0xff) == 0) &&
       (uVar2 = (*(code *)puVar1)(unaff_r14 + 0x48,0x47,0x88 + unaff_r14,0),
       (uVar2 & 0xff) == 0)) &&
      (uVar2 = (*(code *)puVar1)(unaff_r14 + 0x48,0x48,0x9c + unaff_r14,0),
      (uVar2 & 0xff) == 0)) &&
     (uVar2 = (*(code *)puVar1)(unaff_r14 + 0x48,0x49,0xa0 + unaff_r14,0),
     (uVar2 & 0xff) == 0)) {
    uVar3 = (*(code *)puVar1)(unaff_r14 + 0x48,0x4a,0xa4 + unaff_r14,0);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11d904\n.set _FUN_8c11d904, _FUN_8c11d904_def\n");
