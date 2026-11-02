#include "../decls.h"
int s_GRAPHICS_MOTHLINE_08a182_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  ar6_00 = 1;
  uVar1 = 10;
  ar7_00 = ar6;
  (*(code *)(&FUN_8c0254d0))
            (ar4,10,1,ar6,0,ar5,0x8c283b30,0x8c283fcc,*(undefined4 *)(&DATA_8c139e80));
  *(undefined **)(ar4 + 8) = (&DATA_8c12a5d0);
  FUN_8c098ca8(ar4 + 0x490,uVar1,ar6_00,ar7_00);
  FUN_8c08dad4(ar4 + 0x538,uVar1,ar6_00,ar7_00);
  FUN_8c015b94(ar4 + 0x850,uVar1,ar6_00,ar7_00);
  FUN_8c015bc8(ar4 + 0x854,uVar1,ar6_00,ar7_00);
  FUN_8c016fcc(ar4 + 0x858,uVar1,ar6_00,ar7_00);
  Vec3_ctor_zero(ar4 + 0x900,uVar1,ar6_00,ar7_00);
  Vec3_set_zero(ar4 + 0x910,uVar1,ar6_00,ar7_00);
  FUN_8c023dac(ar4 + 0x91c,uVar1,ar6_00,ar7_00);
  (*(code *)(&FUN_8c014334))
            (ar4 + 0xc,uVar1,ar6_00,ar7_00,(&DATA_8c139fcc) + 0x45d);
  *(int *)(0x308 + ar4) = ar4 + 0x490;
  uVar1 = FUN_8c034d38(ar4 + 0x2dc,ar6,ar6_00,ar7_00);
  FUN_8c028ec8(*(undefined4 *)(0x308 + ar4),uVar1,ar6_00,ar7_00);
  *(int *)(0x30c + ar4) = ar4 + 0x538;
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    *(undefined4 *)(0x8ec + ar4 + iVar2 * 4) = 0;
    *(undefined4 *)(0x8f4 + ar4 + iVar2 * 4) = 0;
  }
  iVar2 = ar4 + 0x858;
  uVar1 = *(undefined4 *)(0xb4 + *(int *)(0x328 + ar4));
  FUN_8c0f532c(ar4,uVar1,iVar2,ar7_00);
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  FUN_8c023d7c(ar4 + 0x338,uVar1,iVar2,ar7_00);
  *(undefined4 *)(0x8fc + ar4) = 0;
  *(undefined4 *)(0x840 + ar4) = 0;
  *(undefined4 *)(0x844 + ar4) = 0;
  *(undefined4 *)(0x848 + ar4) = 0;
  *(undefined4 *)(0x84c + ar4) = 0;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_MOTHLINE_08a182\n.set _s_GRAPHICS_MOTHLINE_08a182, _s_GRAPHICS_MOTHLINE_08a182_def\n");
