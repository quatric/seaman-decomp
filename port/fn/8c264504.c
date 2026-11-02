#include "../decls.h"
undefined4 s_E8101207_can_t_create_sj_ADX_26450a_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int ar6_00;
  int ain0;
  
  iVar3 = ar5;
  ar6_00 = ar6;
  ain0 = ar5;
  FUN_8c263c64(ar4,ar5,ar6,ar7);
  uVar2 = *(uint *)(ar5 + 4);
  if ((ar6 < (int)(uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18
                  )) && (-1 < ar6)) {
    FUN_8c260ca0(uVar2,iVar3,ar6_00,ar7,ain0);
    uVar2 = *(uint *)((ar6 + 1) * 8 + ar5);
    iVar3 = (uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) +
            ain0;
    ar5_00 = FUN_8c26b250(iVar3,0x40000000,ar6_00,ar7);
    if (ar5_00 == 0) {
      FUN_8c260cc8(iVar3,0,ar6_00,ar7,ain0);
      uVar1 = FUN_8c25ece6(iVar3,ar5_00,ar6_00,ar7,"E8101207: can\'t create sj (ADXT_StartMemIdx)",
                           ain0);
    }
    else {
      iVar3 = ar4;
      FUN_8c263b34(ar4,ar5_00,ar6_00,ar7);
      uVar1 = 2;
      *(undefined1 *)(ar4 + 2) = 2;
    }
    uVar1 = FUN_8c260cc8(iVar3,ar5_00,ar6_00,ar7,uVar1);
    return uVar1;
  }
  return 0xff00;
}

__asm__(".globl _s_E8101207_can_t_create_sj_ADX_26450a\n.set _s_E8101207_can_t_create_sj_ADX_26450a, _s_E8101207_can_t_create_sj_ADX_26450a_def\n");
