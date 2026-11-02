#include "../decls.h"
undefined4 FUN_8c20c8e0_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)0x3e0;
  uVar1 = pvr_20a876((int)0xe4,ar5,ar6,ar7);
  (*(code *)(&pvr_20a844))
            ((int)0xe4,(int)(ar4 & uVar2) >> 5 | uVar1 & 0xffffffe0,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c20c8e0\n.set _FUN_8c20c8e0, _FUN_8c20c8e0_def\n");
