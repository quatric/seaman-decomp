#include "../decls.h"
undefined4 FUN_8c0cb5c8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  
  ar5_00 = 2;
  FUN_8c0c51b8(*(undefined4 *)(0x7cc + ar5),2,ar6,ar7);
  FUN_8c0c51c4(*(undefined4 *)(0x7cc + ar5),ar5_00,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0x10) + 0x18))(*(int **)(ar4 + 0x10),0x8c3eb334,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0xc) + 0x18))(*(int **)(ar4 + 0xc),0x8c3eb334,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0x14) + 0x18))(*(int **)(ar4 + 0x14),0x8c3eb334,ar6,ar7);
  (**(code **)(0x98 + **(int **)(ar4 + 0x10)))
            (*(int **)(ar4 + 0x10),(uint)*(byte *)(0xa0 + ar5),ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0x10) + 0x70))(*(int **)(ar4 + 0x10),3,ar6,ar7);
  s_GRAPHICS_MESSAGE_0cef1c(0x8c436a28,0x8c3eb334,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0cb5c8\n.set _FUN_8c0cb5c8, _FUN_8c0cb5c8_def\n");
