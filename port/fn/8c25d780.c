#include "../decls.h"
uint * FUN_8c25d780_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 ar4_00;
  undefined4 ar5_00;
  
  pvr_20a844(8,1,ar6,ar7);
  ar5_00 = 0;
  ar4_00 = 8;
  pvr_20a844(8,0,ar6,ar7);
  sh4_dmac_202e20(ar4_00,ar5_00,ar6,ar7);
  puVar1 = 0x8c4a9ff4;
  *(undefined4 *)0x8c4a9ff4 = 0x800000;
  puVar2 = 0x8c4a9ffc;
  *(undefined4 *)0x8c4a9ffc = 0x600000;
  puVar1[3] = *puVar2;
  puVar2[7] = *(undefined4 *)0x8c4a9ff4 >> 1;
  puVar2[0xf] = 0;
  *(undefined4 *)0x8c4aa058 = 1;
  return puVar2 + 7;
}

__asm__(".globl _FUN_8c25d780\n.set _FUN_8c25d780, _FUN_8c25d780_def\n");
