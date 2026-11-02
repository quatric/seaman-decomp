#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f06ae_def
          (undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  
  bVar1 = **(byte **)(&DATA_8c1f5a28);
  **(byte **)(&DATA_8c1f5a28) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,(&DATA_8c26bfb0),ar4)
    ;
    return 0xfffffffe;
  }
  a4 = ar4;
  a6 = FUN_8c1f574c(ar4,ar5,ar6,ar7,s0);
  if (0 < a6) {
    ar6 = a6;
    FUN_8c1f0420(a4,s4,a6,ar7);
    ar4 = a4;
    ar5 = s4;
  }
  piVar2 = 0x8c4727b4;
  **(undefined1 **)(&DATA_8c1f5a28) = 0;
  if (*(int *)((int)0x10e8 + *piVar2) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return a6;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f06ae\n.set _s_FATAL_ERROR_Cannot_get_semap_1f06ae, _s_FATAL_ERROR_Cannot_get_semap_1f06ae_def\n");
