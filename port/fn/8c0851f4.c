#include "../decls.h"
int s_GRAPHICS_HIGYOLINE_0851fa_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  ar6_00 = 1;
  uVar1 = 3;
  ar7_00 = ar6;
  (*(code *)(&FUN_8c0254d0))
            (ar4,3,1,ar6,0,ar5,0x8c280fb4,0x8c2818e0,*(undefined4 *)(&DATA_8c137b2c));
  *(undefined **)(ar4 + 8) = (&DATA_8c12a434);
  s_HIGYOLINE_102eee(ar4 + 0x490,uVar1,ar6_00,ar7_00);
  FUN_8c06e4ec(ar4 + 0xd20,uVar1,ar6_00,ar7_00);
  FUN_8c016fcc(ar4 + 0x1014,uVar1,ar6_00,ar7_00);
  (*(code *)(&FUN_8c014334))
            (ar4 + 0xc,uVar1,ar6_00,ar7_00,(&DATA_8c138590) + 0x182b);
  *(int *)(0x308 + ar4) = ar4 + 0x490;
  uVar1 = FUN_8c034d38(ar4 + 0x2dc,ar6,ar6_00,ar7_00);
  FUN_8c028ec8(*(undefined4 *)(0x308 + ar4),uVar1,ar6_00,ar7_00);
  *(int *)(0x30c + ar4) = ar4 + 0xd20;
  *(undefined1 *)(0x10d8 + ar4) = 0;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    *(undefined4 *)(0x10a8 + ar4 + iVar2 * 4) = 0;
    *(undefined4 *)(0x10c0 + ar4 + iVar2 * 4) = 0;
  }
  (*(code *)(&FUN_8c0f532c))
            (ar4,*(undefined4 *)(0xb4 + *(int *)(0x328 + ar4)),ar4 + 0x1014,
             ar7_00);
  *(undefined4 *)(0x3d8 + ar4) = *(undefined4 *)(**(int **)(0x328 + ar4) + 0x40);
  *(undefined4 *)(0x3dc + ar4) = *(undefined4 *)(**(int **)(0x328 + ar4) + 0x40);
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x10;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_HIGYOLINE_0851fa\n.set _s_GRAPHICS_HIGYOLINE_0851fa, _s_GRAPHICS_HIGYOLINE_0851fa_def\n");
