#include "../decls.h"
undefined4 FUN_8c0c80bc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined2 *)(0x2d1ac + ar4) = 0;
  (**(code **)(**(int **)(ar4 + 8) + 0x1c))(*(int **)(ar4 + 8),0x8c3eb334,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0x14) + 0x18))(*(int **)(ar4 + 0x14),0x8c3eb334,ar6,ar7);
  (**(code **)(0x98 + **(int **)(ar4 + 8)))
            (*(int **)(ar4 + 8),(uint)*(byte *)(0xa0 + ar5),ar6,ar7);
  (**(code **)(**(int **)(ar4 + 8) + 0x70))(*(int **)(ar4 + 8),0,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0c80bc\n.set _FUN_8c0c80bc, _FUN_8c0c80bc_def\n");
