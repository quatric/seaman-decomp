#include "../decls.h"
int FUN_8c26ae54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a7;
  int iVar2;
  int a6;
  int iVar3;
  int iStack_34;
  
  iVar1 = libgcc_divide_helper_010468(0x100,*(undefined4 *)(ar4 + 0x10));
  iVar1 = iVar1 * 8;
  a7 = libgcc_divide_helper_010614(ar6,iVar1);
  if (0 < a7) {
    a6 = 0;
    s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,0x8c4bee28,0);
    iStack_34 = 0;
    iVar2 = iVar1 - a7;
    do {
      iVar3 = iVar1;
      if (iStack_34 == 0x3f) {
        iVar3 = iVar2;
      }
      s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,iVar1 + -0x73b411d8,a7);
      s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,a6,iVar1 + -0x73b411d8);
      a6 = a6 + iVar3;
      iStack_34 = iStack_34 + 1;
      a7 = a7 + iVar3;
    } while (iStack_34 < 0x40);
    a7 = s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,a6,0x8c4bee28);
  }
  return a7;
}

__asm__(".globl _FUN_8c26ae54\n.set _FUN_8c26ae54, _FUN_8c26ae54_def\n");
