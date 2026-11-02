#include "../decls.h"
int s_E9081001_can_t_play_d_ch_dat_2647fe_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 ar5_00;
  undefined4 ar5_01;
  undefined4 *extraout_r3;
  code *ar5_02;
  undefined4 uVar5;
  undefined4 in_stack_ffffffe0;
  
  uVar5 = *(undefined4 *)(ar4 + 4);
  iVar1 = FUN_8c262c38(uVar5,ar5,ar6,ar7);
  if (iVar1 == 2) {
    iVar1 = FUN_8c263156(uVar5,ar5,ar6,ar7);
    if (*(char *)(ar4 + 3) < iVar1) {
      FUN_8c25ece6(iVar1,ar5,ar6,ar7,s_E9081001__can_t_play__d_ch_data___8c273180,iVar1);
      uVar5 = FUN_8c263c64(ar4,ar5,ar6,ar7);
      return uVar5;
    }
    uVar2 = FUN_8c26314a(uVar5,ar5,ar6,ar7);
    iVar1 = FUN_8c26319e(uVar5,ar5,ar6,ar7);
    if (iVar1 < 1) {
      iVar3 = libgcc_divide_helper_010468(uVar2,*(undefined4 *)(ar4 + 0x38));
      iVar3 = (int)(iVar3 * 3 + (uint)(iVar3 * 3 < 0)) >> 1;
    }
    else {
      iVar3 = libgcc_divide_helper_010468(uVar2,*(undefined4 *)(ar4 + 0x38));
      iVar3 = iVar3 * 3;
    }
    *(int *)(ar4 + 0x48) = iVar3;
    iVar3 = FUN_8c26316e(uVar5,ar5,ar6,ar7);
    iVar3 = iVar3 * 2;
    iVar4 = libgcc_divide_helper_010468(*(int *)(ar4 + 0x48) + iVar3,iVar3);
    *(int *)(ar4 + 0x48) = iVar4 * iVar3;
    ar5_02 = *(code **)(ar4 + 0x48);
    FUN_8c262c4c(uVar5,ar5_02,ar6,ar7,in_stack_ffffffe0);
    if (iVar1 < 1) {
      if (*(int *)(ar4 + 8) != 0) {
        ar5_02 = (code *)0x7fffffff;
        FUN_8c26357a(*(undefined4 *)(ar4 + 8),0x7fffffff,ar6,ar7,in_stack_ffffffe0);
      }
    }
    else {
      if (*(char *)(ar4 + 2) == '\x02') {
        *(undefined4 *)(ar4 + 0x50) = 0;
      }
      else {
        iVar1 = FUN_8c2631da(uVar5,ar5_02,ar6,ar7);
        iVar3 = libgcc_divide_helper_010614(iVar1,0x800);
        *(int *)(ar4 + 0x50) = 0x800 - iVar3;
        uVar2 = libgcc_divide_helper_010614(*(undefined4 *)(ar4 + 0x50),0x800);
        *extraout_r3 = uVar2;
        uVar2 = libgcc_divide_helper_010468(iVar1 + 0x7ff,0x800);
        *(undefined4 *)(ar4 + 0x8c) = uVar2;
        FUN_8c26357a(*(undefined4 *)(ar4 + 8),uVar2,ar6,ar7,in_stack_ffffffe0);
        ar5_02 = FUN_8c2646fe;
        ar6 = ar4;
        FUN_8c263574(*(undefined4 *)(ar4 + 8),FUN_8c2646fe,ar4,ar7,in_stack_ffffffe0);
      }
      uVar2 = FUN_8c2631ce(uVar5,ar5_02,ar6,ar7);
      *(undefined4 *)(ar4 + 0x90) = uVar2;
      FUN_8c26311e(uVar5,uVar2,ar6,ar7,in_stack_ffffffe0);
      FUN_8c263132(uVar5,0,ar6,ar7);
      FUN_8c263126(uVar5,0,ar6,ar7);
      ar5_02 = s_E8101201_not_enough_data_adx_26461e;
      ar6 = ar4;
      FUN_8c263114(uVar5,s_E8101201_not_enough_data_adx_26461e,ar4,ar7);
    }
    iVar3 = FUN_8c26314a(uVar5,ar5_02,ar6,ar7);
    uVar2 = FUN_8c263156(uVar5,ar5_02,ar6,ar7);
    ar5_00 = FUN_8c263186(uVar5,ar5_02,ar6,ar7);
    ar5_01 = FUN_8c263162(uVar5,ar5_02,ar6,ar7);
    s_E1205_Illigal_parameter_MWRN_269b92(*(undefined4 *)(ar4 + 0xc),ar5_01,ar6,ar7);
    s_E1205_Illigal_parameter_MWRN_269c06(*(undefined4 *)(ar4 + 0xc),iVar3,ar6,ar7);
    s_E1205_Illigal_parameter_MWRN_269aec(*(undefined4 *)(ar4 + 0xc),uVar2,ar6,ar7);
    noop_262a44(*(undefined4 *)(ar4 + 0xc),ar5_00,ar6,ar7,ar5_00);
    iVar1 = (int)*(short *)(ar4 + 0x40);
    s_E1205_Illigal_parameter_MWRN_269c42(*(undefined4 *)(ar4 + 0xc),iVar1,ar6,ar7);
    FUN_8c264784(ar4,iVar1,ar6,ar7);
    if (*(int *)(ar4 + 0x74) != 0) {
      FUN_8c261680(*(undefined4 *)(ar4 + 0x74),iVar3,ar6,ar7,ar5_00);
      iVar1 = iVar3;
    }
    iVar3 = FUN_8c26313e(uVar5,iVar1,ar6,ar7);
    if (iVar3 == 2) {
      uVar5 = FUN_8c2631f8(uVar5,iVar1,ar6,ar7);
      FUN_8c262a4c(*(undefined4 *)(ar4 + 0xc),uVar5,ar6,ar7);
    }
    s_E1205_Illigal_parameter_MWRN_2690dc(*(undefined4 *)(ar4 + 0xc),1,ar6,ar7);
    iVar1 = 2;
    *(undefined1 *)(ar4 + 1) = 2;
  }
  return iVar1;
}

__asm__(".globl _s_E9081001_can_t_play_d_ch_dat_2647fe\n.set _s_E9081001_can_t_play_d_ch_dat_2647fe, _s_E9081001_can_t_play_d_ch_dat_2647fe_def\n");
