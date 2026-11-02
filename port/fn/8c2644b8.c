#include "../decls.h"
undefined4 s_E8101207_can_t_create_sj_ADX_2644ba_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 ain0;
  undefined4 uVar1;
  int iVar2;
  int ain0_00;
  
  iVar2 = ar4;
  uVar1 = ar6;
  ain0_00 = ar5;
  FUN_8c263c64(ar4,ar5,ar6,ar7);
  FUN_8c260ca0(iVar2,ar5,uVar1,ar7,ain0_00);
  iVar2 = ain0_00;
  ar5_00 = FUN_8c26b250(ain0_00,ar6,uVar1,ar7);
  if (ar5_00 == 0) {
    FUN_8c260cc8(ain0_00,0,uVar1,ar7,iVar2);
    ain0 = FUN_8c25ece6(ain0_00,ar5_00,uVar1,ar7,"E8101207: can\'t create sj (ADXT_StartMem)\n",
                        iVar2);
  }
  else {
    ain0_00 = ar4;
    FUN_8c263b34(ar4,ar5_00,uVar1,ar7);
    ain0 = 2;
    *(undefined1 *)(ar4 + 2) = 2;
  }
  uVar1 = FUN_8c260cc8(ain0_00,ar5_00,uVar1,ar7,ain0);
  return uVar1;
}

__asm__(".globl _s_E8101207_can_t_create_sj_ADX_2644ba\n.set _s_E8101207_can_t_create_sj_ADX_2644ba, _s_E8101207_can_t_create_sj_ADX_2644ba_def\n");
