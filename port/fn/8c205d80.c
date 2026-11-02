#include "../decls.h"
undefined4 FUN_8c205d80_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int a4;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (&pvr_20a844);
  pvr_20a844((int)0xb8,0xff07,ar6,ar7);
  (*(code *)puVar1)((int)0xb4,0x7f7f7f,ar6,ar7);
  (*(code *)puVar1)((int)0xb0,0x7f7f7f,ar6,ar7);
  uVar4 = (uint)0xff;
  uVar3 = (uint)0xfe;
  a4 = (int)0x200;
  do {
    uVar2 = (*(code *)puVar1)(a4,(uVar4 & 0xff) << 8 | uVar3 & 0xff,ar6,ar7);
    uVar4 = uVar4 - 1;
    a4 = a4 + 4;
    uVar3 = uVar3 - 1;
  } while (0x7f < (int)uVar4);
  return uVar2;
}

__asm__(".globl _FUN_8c205d80\n.set _FUN_8c205d80, _FUN_8c205d80_def\n");
