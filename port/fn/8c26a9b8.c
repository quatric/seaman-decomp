#include "../decls.h"
undefined4 s_E1245_sdPstmSetFxCh_return_e_26a9bc_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int unaff_r10;
  int a6;
  int iVar7;
  char in_T;
  
  puVar2 = (&FUN_8c267a98);
  puVar1 = (&debug_printf);
  if (in_T == '\x01') {
    if (ar6 < 0) {
      a6 = ar6 * 2 + ((int)(ar6 + (uint)(ar6 < 0)) >> 1);
    }
    else {
      a6 = 0x7f;
    }
  }
  else {
    a6 = -0x7f;
  }
  if (*(int *)(ar4 + 0x48) != unaff_r10) {
    for (iVar7 = 0; iVar7 < *(int *)(ar4 + 0xc); iVar7 = iVar7 + 1) {
      ar7 = 0x7f;
      iVar5 = iVar7;
      iVar6 = unaff_r10;
      iVar3 = (*(code *)puVar2)(*(undefined4 *)(ar4 + 0x30),iVar7,unaff_r10,0x7f);
      if (iVar3 != 0) {
        (*(code *)puVar1)(iVar3,iVar5,iVar6,ar7);
      }
    }
    *(int *)(ar4 + 0x48) = unaff_r10;
  }
  puVar2 = (&FUN_8c267b20);
  uVar4 = 0x48;
  for (iVar7 = 0; iVar7 < *(int *)(ar4 + 0xc); iVar7 = iVar7 + 1) {
    iVar5 = iVar7;
    iVar6 = a6;
    iVar3 = (*(code *)puVar2)(*(undefined4 *)(ar4 + 0x30),iVar7,a6,ar7);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = (*(code *)puVar1)(iVar3,iVar5,iVar6,ar7);
    }
  }
  return uVar4;
}

__asm__(".globl _s_E1245_sdPstmSetFxCh_return_e_26a9bc\n.set _s_E1245_sdPstmSetFxCh_return_e_26a9bc, _s_E1245_sdPstmSetFxCh_return_e_26a9bc_def\n");
