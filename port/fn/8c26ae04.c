#include "../decls.h"
undefined4 s_E1227_sdMoveSndMemToWrkMem_r_26ae04_def(int ar4,int ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  undefined4 ar6_00;
  int iVar2;
  undefined4 uVar3;
  int in_stack_00000000;
  undefined4 s4;
  
  uVar3 = 8;
  iVar2 = *(int *)(ar4 + 0x10);
  iVar1 = libgcc_divide_helper_010468(ar7 * iVar2,8);
  iVar1 = *(int *)(ar5 * 4 + ar4 + 0x38) + iVar1;
  ar6_00 = libgcc_divide_helper_010468(in_stack_00000000 * iVar2,uVar3);
  s4 = ar6;
  iVar1 = aica_ram_2668fc(iVar1,ar6,ar6_00,ar7);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = debug_printf(iVar1,ar6,ar6_00,ar7,s_E1227_sdMoveSndMemToWrkMem_retur_8c27394c,s4);
  }
  return uVar3;
}

__asm__(".globl _s_E1227_sdMoveSndMemToWrkMem_r_26ae04\n.set _s_E1227_sdMoveSndMemToWrkMem_r_26ae04, _s_E1227_sdMoveSndMemToWrkMem_r_26ae04_def\n");
