#include "../decls.h"
undefined4 FUN_8c204e6c_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_r0;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  uVar1 = 0xfffe;
  puVar2 = (ushort *)((int)0x8c47eba8 + 0x18000);
  puVar3 = 0x8c47eba8;
  puVar4 = 0x8c47eba8;
  do {
    if (puVar3 == ar4) {
      *puVar4 = *puVar4 & (ushort)uVar1;
    }
    puVar3 = puVar3 + 0xc;
    puVar4 = puVar4 + 0xc;
  } while (puVar3 < puVar2);
  return in_r0;
}

__asm__(".globl _FUN_8c204e6c\n.set _FUN_8c204e6c, _FUN_8c204e6c_def\n");
