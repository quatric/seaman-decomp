#include "../decls.h"
undefined4 FUN_8c20a790_def(uint *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = pvr_20a876((int)0xc4,ar5,ar6,ar7);
  uVar2 = (uint)0x3ff;
  *ar4 = uVar1 & uVar2;
  *ar5 = uVar1 >> 0x10 & uVar2;
  return 0;
}

__asm__(".globl _FUN_8c20a790\n.set _FUN_8c20a790, _FUN_8c20a790_def\n");
