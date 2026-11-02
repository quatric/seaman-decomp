#include "../decls.h"
undefined4 FUN_8c2057c0_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_r0;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  uVar1 = 0xfffe;
  puVar2 = (ushort *)((int)0x8c496ba8 + 0x13000);
  puVar3 = 0x8c496ba8;
  puVar4 = 0x8c496ba8;
  do {
    if (puVar3 == ar4) {
      *puVar4 = *puVar4 & (ushort)uVar1;
    }
    puVar3 = puVar3 + 0x26;
    puVar4 = puVar4 + 0x26;
  } while (puVar3 < puVar2);
  return in_r0;
}

__asm__(".globl _FUN_8c2057c0\n.set _FUN_8c2057c0, _FUN_8c2057c0_def\n");
