#include "../decls.h"
int s_GRAPHICS_MUSHROOMERLINE_09d9c2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar7_00 = 1;
  ar6_00 = 1;
  ar5_00 = 1;
  (*(code *)(&FUN_8c0254d0))
            (ar4,1,1,1,0,ar5,0x8c284d90,0x8c284ec0,*(undefined4 *)(&DATA_8c13aafc));
  *(undefined **)(ar4 + 8) = (&DATA_8c12ab2c);
  FUN_8c09f3b4(ar4 + 0x490,ar5_00,ar6_00,ar7_00);
  FUN_8c0a0818(ar4 + 0xcc4,ar5_00,ar6_00,ar7_00);
  FUN_8c016fcc(ar4 + 0xf3c,ar5_00,ar6_00,ar7_00);
  (*(code *)(&FUN_8c014334))
            (ar4 + 0xc,ar5_00,ar6_00,ar7_00,(&DATA_8c13ab90) + 0x256);
  *(int *)(0x308 + ar4) = ar4 + 0x490;
  *(int *)(0x30c + ar4) = ar4 + 0xcc4;
  (*(code *)(&FUN_8c0f532c))
            (ar4,*(undefined4 *)(0xb4 + *(int *)(0x328 + ar4)),ar4 + 0xf3c,
             ar7_00);
  *(undefined4 *)(0xfd0 + ar4) = 0;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_MUSHROOMERLINE_09d9c2\n.set _s_GRAPHICS_MUSHROOMERLINE_09d9c2, _s_GRAPHICS_MUSHROOMERLINE_09d9c2_def\n");
