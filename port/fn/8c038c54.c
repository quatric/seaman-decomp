#include "../decls.h"
undefined4 FUN_8c038c54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  noop_038c8c(ar4,ar5,ar6,ar7,in_PR);
  uVar1 = 0;
  if (*(int *)(ar4 + 0x330) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x5c))
                      (*(int *)(ar4 + 0x330),ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c038c54\n.set _FUN_8c038c54, _FUN_8c038c54_def\n");
