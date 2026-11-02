#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_269fcc_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *a6;
  undefined1 *a7;
  undefined4 *a7_00;
  int *piVar3;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  int *piStack_20;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 auStack_10 [2];
  
  puStack_24 = (undefined4 *)ar5;
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar6);
  }
  else {
    (**(code **)(**(int **)(ar4 + 0x38) + 0x44))(*(int **)(ar4 + 0x38),4,ar5,0);
    uVar2 = 4;
    a7 = auStack_1c;
    piVar3 = ar6;
    uVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x48))(*(int **)(ar4 + 0x38),4,ar6,a7);
    if (0 < *piVar3) {
      uVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x30))(*(int **)(ar4 + 0x38),uVar2,ar6,a7);
      uStack_18 = (**(code **)(**(int **)(ar4 + 0x38) + 0x28))(*(int **)(ar4 + 0x38),uVar2,ar6,a7);
      uVar2 = (**(code **)(**(int **)(ar4 + 0x38) + 0x38))(*(int **)(ar4 + 0x38),uVar2,ar6,a7);
      puStack_24 = &uStack_14;
      piStack_20 = *(int **)(ar4 + 0x38);
      uStack_14 = (**(code **)(*piStack_20 + 0x40))(piStack_20,0,ar6,a7);
      piStack_20 = auStack_10;
      auStack_10[0] = (**(code **)(**(int **)(ar4 + 0x38) + 0x40))(*(int **)(ar4 + 0x38),1,ar6,a7);
      (**(code **)(**(int **)(ar4 + 0x38) + 0x48))(*(int **)(ar4 + 0x38),0,&uStack_2c,&uStack_28);
      a6 = &uStack_34;
      a7_00 = &uStack_30;
      (**(code **)(**(int **)(ar4 + 0x38) + 0x48))(*(int **)(ar4 + 0x38),3,a6,a7_00);
      s_E1205_Illigal_parameter_MWRN_269b92(ar4,uVar1,a6,a7_00);
      s_E1205_Illigal_parameter_MWRN_269c06(ar4,uStack_18,a6,a7_00);
      *(undefined4 *)(ar4 + 0x60) = uVar2;
      *(undefined4 *)(ar4 + 100) = *puStack_24;
      *(int *)(ar4 + 0x68) = *piStack_20;
      *(undefined4 *)(ar4 + 0x6c) = uStack_2c;
      *(undefined4 *)(ar4 + 0x70) = uStack_28;
      *(undefined4 *)(ar4 + 0x7c) = uStack_34;
      uVar1 = 0x80;
      *(undefined4 *)(ar4 + 0x80) = uStack_30;
    }
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269fcc\n.set _s_E1205_Illigal_parameter_MWRN_269fcc, _s_E1205_Illigal_parameter_MWRN_269fcc_def\n");
