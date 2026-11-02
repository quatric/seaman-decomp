#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0e0bee_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar6_00;
  undefined4 uVar1;
  int ar7_00;
  
  (*(code *)(&FUN_8c020a70))
            (ar5,(&DATA_8c13f7c0) + 0x5ff,
             (&DATA_8c13f7c0) + 0x10b,ar4);
  (*(code *)(&FUN_8c020b68))
            (ar5,(&DATA_8c13f7c0) + 0x5ff,
             (&DATA_8c13f7c0) + 0x10b,ar4);
  (*(code *)(&FUN_8c020a70))
            (ar5,(&DATA_8c13f7c0) + 0x609,
             (&DATA_8c13f7c0) + 0x10b,ar4);
  (*(code *)(&FUN_8c020b68))
            (ar5,(&DATA_8c13f7c0) + 0x609,
             (&DATA_8c13f7c0) + 0x10b,ar4);
  (*(code *)(&FUN_8c020a70))
            (ar5,(&DATA_8c13f7c0) + 0x625,
             (&DATA_8c13f7c0) + 0x10b,ar4);
  (*(code *)(&FUN_8c020b68))
            (ar5,(&DATA_8c13f7c0) + 0x625,
             (&DATA_8c13f7c0) + 0x10b,ar4);
  (*(code *)(&FUN_8c020a70))
            (ar5,(&DATA_8c13f7c0) + 0x641,
             (&DATA_8c13f7c0) + 0x10b,ar4);
  (*(code *)(&FUN_8c020b68))
            (ar5,(&DATA_8c13f7c0) + 0x641,
             (&DATA_8c13f7c0) + 0x10b,ar4);
  (*(code *)(&FUN_8c020a70))
            (ar5,(&DATA_8c13f7c0) + 0x65d,
             (&DATA_8c13f7c0) + 0x10b,ar4);
  (*(code *)(&FUN_8c020b68))
            (ar5,(&DATA_8c13f7c0) + 0x65d,
             (&DATA_8c13f7c0) + 0x10b,ar4);
  ar7_00 = ar4;
  (*(code *)(&FUN_8c020a70))
            (ar5,(&DATA_8c13f7c0) + 0x671,
             (&DATA_8c13f7c0) + 0x10b,ar4);
  ar6_00 = (uint)(byte)ar6;
  s_GRAPHICS_ENV_0d57ee(ar4 + 0x10ac,ar5,ar6_00,ar7_00);
  s_GRAPHICS_ENV_0d076c(ar4 + 0x13b24,ar5,ar6_00,ar7_00);
  uVar1 = s_GRAPHICS_ENV_0d9912(ar4 + 0x22704,ar5,ar6_00,ar7_00);
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0e0bee\n.set _s_GRAPHICS_ENV_0e0bee, _s_GRAPHICS_ENV_0e0bee_def\n");
