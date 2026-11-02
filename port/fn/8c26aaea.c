#include "../decls.h"
undefined4 s_E1247_sdPstmSetDrctLev_retur_26aaf2_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 in_r0;
  int a4;
  int a5;
  int a6;
  int a6_00;
  int a5_00;
  char in_T;
  
  puVar2 = (&FUN_8c267a10);
  puVar1 = (&debug_printf);
  if (in_T == '\x01') {
    if (ar5 < 0) {
      a6_00 = ar5 * 3;
    }
    else {
      a6_00 = 0x7f;
    }
  }
  else {
    a6_00 = -0x7f;
  }
  for (a5_00 = 0; a5_00 < *(int *)(ar4 + 0xc); a5_00 = a5_00 + 1) {
    a5 = a5_00;
    a6 = a6_00;
    a4 = (*(code *)puVar2)(*(undefined4 *)(ar4 + 0x30),a5_00,a6_00,ar7);
    in_r0 = 0;
    if (a4 != 0) {
      in_r0 = (*(code *)puVar1)(a4,a5,a6,ar7);
    }
  }
  return in_r0;
}

__asm__(".globl _s_E1247_sdPstmSetDrctLev_retur_26aaf2\n.set _s_E1247_sdPstmSetDrctLev_retur_26aaf2, _s_E1247_sdPstmSetDrctLev_retur_26aaf2_def\n");
