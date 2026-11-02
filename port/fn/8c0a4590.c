#include "../decls.h"
int s_GRAPHICS_SPIDERLINE_0a4592_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar7_00 = 0x18;
  ar6_00 = 1;
  ar5_00 = 0xd;
  (*(code *)(&FUN_8c0254d0))
            (ar4,0xd,1,0x18,1,ar5,0x8c285370,0x8c2854a0,*(undefined4 *)(&DATA_8c13b08c));
  *(undefined **)(ar4 + 8) = (&DATA_8c12aeec);
  FUN_8c0ab760(ar4 + 0x490,ar5_00,ar6_00,ar7_00);
  FUN_8c0a6164(ar4 + 0x53c,ar5_00,ar6_00,ar7_00);
  FUN_8c016fcc(ar4 + 0x26fc,ar5_00,ar6_00,ar7_00);
  (*(code *)(&FUN_8c014334))
            (ar4 + 0xc,ar5_00,ar6_00,ar7_00,(&DATA_8c13b100) + 0xe1);
  *(int *)(0x308 + ar4) = ar4 + 0x490;
  *(int *)(0x30c + ar4) = ar4 + 0x53c;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  (*(code *)(&FUN_8c0f532c))
            (ar4,*(undefined4 *)(0xb4 + *(int *)(0x328 + ar4)),ar4 + 0x26fc,
             ar7_00);
  return ar4;
}

__asm__(".globl _s_GRAPHICS_SPIDERLINE_0a4592\n.set _s_GRAPHICS_SPIDERLINE_0a4592, _s_GRAPHICS_SPIDERLINE_0a4592_def\n");
