#include "../decls.h"
undefined4 FUN_8c0d5040_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&pack_find_by_name_buffered))
                    (0x8c2b59d0,(&DATA_8c13f7c0) + 0x368,ar6,ar7);
  *(undefined4 *)(0x5e4 + ar4) = uVar1;
  FUN_8c0220d4(0x8c2b59d0,*(undefined4 *)(0x5e4 + ar4),ar6,ar7);
  uVar1 = FUN_8c022128(0x8c2b59d0,0x1f4,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0d5040\n.set _FUN_8c0d5040, _FUN_8c0d5040_def\n");
