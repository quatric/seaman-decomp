#include "../decls.h"
int s_GRAPHICS_FROGMANLINE_0384fa_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  int ar6_01;
  undefined4 ar7_00;
  
  ar7_00 = 5;
  ar6_00 = 1;
  uVar1 = 6;
  FUN_8c0254d0(ar4,6,1,5,0,ar5,0x8c280050,0x8c280180,PTR_s_GRAPHICS_FROGMANLINE_8c1340e0);
  *(undefined **)(ar4 + 8) = &DAT_8c129d04;
  FUN_8c016fcc(ar4 + 0x490,uVar1,ar6_00,ar7_00);
  FUN_8c02ff6c(ar4 + 0x528,uVar1,ar6_00,ar7_00);
  FUN_8c030fa0(ar4 + 0x5c4,uVar1,ar6_00,ar7_00);
  FUN_8c014334(ar4 + 0xc,uVar1,ar6_00,ar7_00,s_FrogManEgg_8c135e5e);
  *(undefined1 *)(ar4 + 0x524) = 0xff;
  ar6_01 = ar4 + 0x490;
  uVar1 = *(undefined4 *)(*(int *)(ar4 + 0x328) + 0xb4);
  FUN_8c0f532c(ar4,uVar1,ar6_01,ar7_00);
  FUN_8c027224(ar4 + 0x5c4,uVar1,ar6_01,ar7_00,ar5);
  (**(code **)(*(int *)(ar4 + 0xa8) + 0x28))((int *)(ar4 + 0xa8),ar4 + 0x30,ar6_01,ar7_00);
  *(undefined4 *)(ar4 + 0x330) = 0;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x10;
  *(int *)(ar4 + 0x308) = ar4 + 0x528;
  *(int *)(ar4 + 0x30c) = ar4 + 0x5c4;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_FROGMANLINE_0384fa\n.set _s_GRAPHICS_FROGMANLINE_0384fa, _s_GRAPHICS_FROGMANLINE_0384fa_def\n");
