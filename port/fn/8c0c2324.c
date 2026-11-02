#include "../decls.h"
undefined4 s_SEAMANDC_USR_0c2326_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  
  ar4_00 = FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7);
  FUN_8c01bb00(ar4_00,(&DATA_8c13bfe4) + 0x69,ar6,ar7);
  FUN_8c01bb00(ar4_00,(&DATA_8c13bfe4) + 0x76,ar6,ar7);
  return 4;
}

__asm__(".globl _s_SEAMANDC_USR_0c2326\n.set _s_SEAMANDC_USR_0c2326, _s_SEAMANDC_USR_0c2326_def\n");
