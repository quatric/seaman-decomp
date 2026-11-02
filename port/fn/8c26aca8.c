#include "../decls.h"
undefined4 s_E1242_sdMemBlkSetPrm_return__26acaa_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int s4;
  int ar5_00;
  undefined4 uVar3;
  undefined4 ar7_00;
  
  ar7_00 = 0;
  uVar3 = 0x20;
  s4 = ar5 * 4;
  iVar1 = FUN_8c265ea0(*(undefined4 *)(s4 + ar4 + 0x28),ar7,0x20,0,0);
  if (iVar1 != 0) {
    uVar3 = debug_printf(iVar1,ar7,uVar3,ar7_00,s_E1242_sdMemBlkSetPrm_return_erro_8c2738b0,s4);
    return uVar3;
  }
  iVar1 = ar6 * *(int *)(ar4 + 0x10);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 7;
  }
  ar5_00 = *(int *)(ar4 + 0x38 + s4) + (iVar1 >> 3);
  iVar1 = FUN_8c265ff4(*(undefined4 *)(ar4 + 0x28 + s4),ar5_00,uVar3,ar7_00);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = debug_printf(iVar1,ar5_00,uVar3,ar7_00,s_E1243_sdMemBlkTransfer_return_er_8c2738e0,s4);
  }
  return uVar2;
}

__asm__(".globl _s_E1242_sdMemBlkSetPrm_return__26acaa\n.set _s_E1242_sdMemBlkSetPrm_return__26acaa, _s_E1242_sdMemBlkSetPrm_return__26acaa_def\n");
