#include "../decls.h"
undefined4 CAnimal_m3_08891c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x10))(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _CAnimal_m3_08891c\n.set _CAnimal_m3_08891c, _CAnimal_m3_08891c_def\n");
