#include "../decls.h"
undefined4 Class_129808_m10_0162bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c25b3ec(ar4 + 0x8c,ar5,ar6,ar7);
  uVar1 = (*(code *)(&FUN_8c235bfc))
                    (ar4 + 4,*(undefined4 *)(ar4 + 0x10),*(undefined4 *)(0xcc + ar4),ar7);
  return uVar1;
}

__asm__(".globl _Class_129808_m10_0162bc\n.set _Class_129808_m10_0162bc, _Class_129808_m10_0162bc_def\n");
