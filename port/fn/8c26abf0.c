#include "../decls.h"
undefined4 s_E1242_sdMemBlkSetPrm_return__26abf6_def(int ar4,int ar5,int ar6,undefined4 ar7,int s0)

{
  int iVar1;
  int ar5_00;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = s0 * *(int *)(ar4 + 0x10);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 7;
  }
  iVar4 = iVar4 >> 3;
  _DAT_8c4bf028 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  uVar3 = 0;
  iVar2 = ar5 * 4;
  iVar5 = iVar4;
  iVar1 = FUN_8c265ea0(*(undefined4 *)(iVar2 + ar4 + 0x20),ar7,iVar4,0,0);
  if (iVar1 == 0) {
    iVar5 = ar6 * *(int *)(ar4 + 0x10);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 7;
    }
    ar5_00 = (iVar5 >> 3) + *(int *)(ar4 + 0x38 + iVar2);
    _DAT_8c4bf02c = sh4_tmu_1f88e6(0,ar7,iVar4,uVar3);
    iVar5 = ar5_00;
    iVar1 = FUN_8c265ff4(*(undefined4 *)(ar4 + 0x20 + iVar2),ar5_00,iVar4,uVar3);
    if (iVar1 != 0) {
      debug_printf(iVar1,ar5_00,iVar4,uVar3,s_E1243_sdMemBlkTransfer_return_er_8c2738e0,iVar5);
    }
    uVar3 = sh4_tmu_1f88e6(iVar1,ar5_00,iVar4,uVar3);
    _DAT_8c4bf030 = uVar3;
  }
  else {
    uVar3 = debug_printf(iVar1,ar7,iVar4,uVar3,s_E1242_sdMemBlkSetPrm_return_erro_8c2738b0,iVar5);
  }
  return uVar3;
}

__asm__(".globl _s_E1242_sdMemBlkSetPrm_return__26abf6\n.set _s_E1242_sdMemBlkSetPrm_return__26abf6, _s_E1242_sdMemBlkSetPrm_return__26abf6_def\n");
