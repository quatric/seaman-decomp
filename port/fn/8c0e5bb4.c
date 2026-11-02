#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0e5bba_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *ar6_00;
  int ar7_00;
  
  (*(code *)(&FUN_8c020a70))
            (ar5,(&DATA_8c13f7c0) + 0x7b7,
             (&DATA_8c13f7c0) + 0x10b,ar4);
  ar6_00 = (&DATA_8c13f7c0) + 0x10b;
  ar7_00 = ar4;
  FUN_8c020b68(ar5,(&DATA_8c13f7c0) + 0x7b7,ar6_00,ar4);
  uVar1 = s_GRAPHICS_ENV_0d60cc(ar4 + 0x15bc,ar5,ar6_00,ar7_00);
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0e5bba\n.set _s_GRAPHICS_ENV_0e5bba, _s_GRAPHICS_ENV_0e5bba_def\n");
