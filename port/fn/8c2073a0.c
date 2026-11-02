#include "../decls.h"
undefined4 FUN_8c2073a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 in_r0;
  
  puVar1 = 0x8c4a9e58;
  *(undefined4 *)0x8c4a9e58 = 0;
  puVar2 = 0x8c4a9ddc;
  *(undefined4 *)0x8c4a9ddc = (&DATA_8c2078f2);
  puVar2[1] = 0;
  puVar1[-0x1d] = (&DATA_8c2078f6);
  puVar1[-0x1c] = 0;
  puVar2[4] = (&DATA_8c2078fa);
  puVar2[5] = 0;
  puVar1[-0x19] = (&DATA_8c207920);
  puVar1[-0x18] = 0;
  puVar2[8] = (&DATA_8c207924);
  puVar2[9] = 0;
  puVar1[-0x15] = (&DATA_8c207928);
  puVar1[-0x14] = 0;
  puVar2[0xc] = (&DATA_8c20792c);
  puVar2[0xd] = 0;
  puVar1[-0x11] = (&DATA_8c207930);
  puVar1[-0x10] = 0;
  puVar2[0x10] = (&DATA_8c207934);
  puVar2[0x11] = 0;
  puVar1[-0xd] = (&DATA_8c207972);
  puVar1[-0xc] = 0;
  return in_r0;
}

__asm__(".globl _FUN_8c2073a0\n.set _FUN_8c2073a0, _FUN_8c2073a0_def\n");
