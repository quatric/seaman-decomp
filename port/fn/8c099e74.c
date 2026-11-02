#include "../decls.h"
int s_GRAPHICS_MOTHLINE_099e76_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  int ar6_01;
  undefined4 ar7_00;
  uint in_fr1;
  char cVar2;
  
  cVar2 = '\0';
  ar7_00 = 0x17;
  ar6_00 = 1;
  uVar1 = 0xb;
  FUN_8c0254d0(ar4,0xb,1,0x17,1,ar5,0x8c28476c,0x8c28489c,PTR_s_GRAPHICS_MOTHLINE_8c13a9bc);
  *(undefined **)(ar4 + 8) = &DAT_8c12a7f4;
  FUN_8c016fcc(ar4 + 0x490,uVar1,ar6_00,ar7_00);
  FUN_8c02ff6c(ar4 + 0x530,uVar1,ar6_00,ar7_00);
  FUN_8c030fa0(ar4 + 0x5cc,uVar1,ar6_00,ar7_00);
  FUN_8c014334(ar4 + 0xc,uVar1,ar6_00,ar7_00,s_MothEgg_8c13aa31);
  *(int *)(ar4 + 0x308) = ar4 + 0x530;
  *(int *)(ar4 + 0x30c) = ar4 + 0x5cc;
  *(undefined1 *)(ar4 + 0x524) = 0xff;
  ar6_01 = ar4 + 0x490;
  uVar1 = *(undefined4 *)(*(int *)(ar4 + 0x328) + 0xb4);
  FUN_8c0f532c(ar4,uVar1,ar6_01,ar7_00);
  FUN_8c027224(ar4 + 0x5cc,uVar1,ar6_01,ar7_00,ar5);
  if (cVar2 != '\0') {
    in_fr1 = 0x40000000;
  }
  (**(code **)(*(int *)(ar4 + 0xa8) + 0x28))((int *)(ar4 + 0xa8),ar4 + 0x30,ar6_01,ar7_00);
  *(undefined4 *)(ar4 + 0x330) = 0;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x528) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x528) = (ulonglong)in_fr1;
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x52c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x52c) = (ulonglong)in_fr1;
  }
  return ar4;
}

__asm__(".globl _s_GRAPHICS_MOTHLINE_099e76\n.set _s_GRAPHICS_MOTHLINE_099e76, _s_GRAPHICS_MOTHLINE_099e76_def\n");
