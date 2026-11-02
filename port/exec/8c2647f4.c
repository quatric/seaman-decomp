#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_E9081001_can_t_play_d_ch_dat_2647fe_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E9081001_can_t_play_d_ch_dat_2647fe";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 ar5_00;
  undefined4 ar5_01;
  undefined4 *extraout_r3 = 0;
  code *ar5_02;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(unsigned)(ar4 + 4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c262c38(uVar5,ar5,ar6,ar7));
  if (iVar1 == 2) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c263156(uVar5,ar5,ar6,ar7));
    if (*(char *)(unsigned)(ar4 + 3) < iVar1) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c273180)); unsigned long t1_ = (unsigned long)(iVar1); *(unsigned *)((((unsigned long)(fr0_ - 32)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 32)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 32)) - 8); FUN_8c25ece6(iVar1,ar5,ar6,ar7); });
      uVar5 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c263c64(ar4,ar5,ar6,ar7));
      return uVar5;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c26314a(uVar5,ar5,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c26319e(uVar5,ar5,ar6,ar7));
    if (iVar1 < 1) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), libgcc_divide_helper_010468(uVar2,*(undefined4 *)(unsigned)(ar4 + 0x38),vr6,vr7));
      iVar3 = (int)(iVar3 * 3 + (uint)(iVar3 * 3 < 0)) >> 1;
    }
    else {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), libgcc_divide_helper_010468(uVar2,*(undefined4 *)(unsigned)(ar4 + 0x38),vr6,vr7));
      iVar3 = iVar3 * 3;
    }
    *(int *)(unsigned)(ar4 + 0x48) = iVar3;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c26316e(uVar5,ar5,ar6,ar7));
    iVar3 = iVar3 * 2;
    iVar4 = (vsp = ((unsigned long)(fr0_ - 32)), libgcc_divide_helper_010468(*(int *)(unsigned)(ar4 + 0x48) + iVar3,iVar3,vr6,vr7));
    *(int *)(unsigned)(ar4 + 0x48) = iVar4 * iVar3;
    ar5_02 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x48));
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c262c4c(uVar5,ar5_02,ar6,ar7); });
    if (iVar1 < 1) {
      if (*(int *)(unsigned)(ar4 + 8) != 0) {
        ar5_02 = (code *)0x7fffffff;
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c26357a(*(undefined4 *)(unsigned)(ar4 + 8),0x7fffffff,ar6,ar7); });
      }
    }
    else {
      if (*(char *)(unsigned)(ar4 + 2) == '\x02') {
        *(undefined4 *)(unsigned)(ar4 + 0x50) = 0;
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2631da(uVar5,ar5_02,ar6,ar7));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), libgcc_divide_helper_010614(iVar1,0x800,vr6,vr7));
        *(int *)(unsigned)(ar4 + 0x50) = 0x800 - iVar3;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), libgcc_divide_helper_010614(*(undefined4 *)(unsigned)(ar4 + 0x50),0x800,vr6,vr7));
        *extraout_r3 = uVar2;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), libgcc_divide_helper_010468(iVar1 + 0x7ff,0x800,vr6,vr7));
        *(undefined4 *)(unsigned)(ar4 + 0x8c) = uVar2;
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c26357a(*(undefined4 *)(unsigned)(ar4 + 8),uVar2,ar6,ar7); });
        ar5_02 = ((void *)0x8c2646fe);
        ar6 = ar4;
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c263574(*(undefined4 *)(unsigned)(ar4 + 8),((void *)0x8c2646fe),ar4,ar7); });
      }
      uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2631ce(uVar5,ar5_02,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x90) = uVar2;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c26311e(uVar5,uVar2,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c263132(uVar5,0,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c263126(uVar5,0,ar6,ar7));
      ar5_02 = ((void *)0x8c264614);
      ar6 = ar4;
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c263114(uVar5,((void *)0x8c264614),ar4,ar7));
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c26314a(uVar5,ar5_02,ar6,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c263156(uVar5,ar5_02,ar6,ar7));
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c263186(uVar5,ar5_02,ar6,ar7));
    ar5_01 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c263162(uVar5,ar5_02,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 32)), s_E1205_Illigal_parameter_MWRN_269b92(*(undefined4 *)(unsigned)(ar4 + 0xc),ar5_01,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 32)), s_E1205_Illigal_parameter_MWRN_269c06(*(undefined4 *)(unsigned)(ar4 + 0xc),iVar3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 32)), s_E1205_Illigal_parameter_MWRN_269aec(*(undefined4 *)(unsigned)(ar4 + 0xc),uVar2,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)(ar5_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); noop_262a44(*(undefined4 *)(unsigned)(ar4 + 0xc),ar5_00,ar6,ar7); });
    iVar1 = (int)*(short *)(unsigned)(ar4 + 0x40);
    (vsp = ((unsigned long)(fr0_ - 32)), s_E1205_Illigal_parameter_MWRN_269c42(*(undefined4 *)(unsigned)(ar4 + 0xc),iVar1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c264784(ar4,iVar1,ar6,ar7));
    if (*(int *)(unsigned)(ar4 + 0x74) != 0) {
      ({ unsigned long ri0_ = (unsigned long)(ar5_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c261680(*(undefined4 *)(unsigned)(ar4 + 0x74),iVar3,ar6,ar7); });
      iVar1 = iVar3;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c26313e(uVar5,iVar1,ar6,ar7));
    if (iVar3 == 2) {
      uVar5 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2631f8(uVar5,iVar1,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c262a4c(*(undefined4 *)(unsigned)(ar4 + 0xc),uVar5,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 32)), s_E1205_Illigal_parameter_MWRN_2690dc(*(undefined4 *)(unsigned)(ar4 + 0xc),1,ar6,ar7));
    iVar1 = 2;
    *(undefined1 *)(unsigned)(ar4 + 1) = 2;
  }
  return iVar1;
}

__asm__(".globl _s_E9081001_can_t_play_d_ch_dat_2647fe\n.set _s_E9081001_can_t_play_d_ch_dat_2647fe, _s_E9081001_can_t_play_d_ch_dat_2647fe_def\n");
