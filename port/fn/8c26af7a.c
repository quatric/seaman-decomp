#include "../decls.h"
int FUN_8c26af7a_def(int ar4,undefined4 ar5,uint ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_2c = 0x100;
  iVar1 = libgcc_divide_helper_010468(0x100,*(undefined4 *)(ar4 + 0x10));
  uStack_30 = -0x73b411d8;
  uStack_2c = uStack_2c + -0x73b411d8;
  uStack_40 = 0;
  iVar2 = libgcc_divide_helper_010468(0x40,ar7);
  iVar3 = iVar2;
  uStack_38 = ar6;
  for (; uStack_40 < ar7; uStack_40 = uStack_40 + 1) {
    if ((int)uStack_38 < 0) {
      uStack_28 = ~(~uStack_38 + 1 & 0x3f) + 1;
    }
    else {
      uStack_28 = uStack_38 & 0x3f;
    }
    iVar3 = s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,uStack_30,uStack_28 * iVar1 * 8);
    uStack_48 = 0;
    if (0 < iVar2) {
      do {
        iVar5 = uStack_30;
        uStack_28 = (uStack_28 - ar6) + 0x40;
        if ((int)uStack_28 < 0) {
          uStack_28 = ~(~uStack_28 + 1 & 0x3f) + 1;
        }
        else {
          uStack_28 = uStack_28 & 0x3f;
        }
        iVar3 = uStack_28 * iVar1 * 8;
        s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,uStack_2c,iVar3);
        iVar3 = s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,iVar3,uStack_30);
        iVar4 = uStack_2c;
        uStack_30 = uStack_2c;
        uStack_2c = iVar5;
        uStack_48 = uStack_48 + 1;
      } while (uStack_48 < iVar2);
    }
    uStack_38 = uStack_38 + 1;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c26af7a\n.set _FUN_8c26af7a, _FUN_8c26af7a_def\n");
