#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_269816_def(int ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *s0;
  undefined1 *a5;
  int *piVar5;
  undefined1 *ar5_00;
  undefined1 auStack_4c [4];
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [4];
  undefined1 *puStack_2c;
  undefined1 auStack_28 [4];
  undefined1 *puStack_24;
  
  iVar2 = ar4;
  iVar3 = ar5;
  if (ar4 == 0) {
    s0 = s_E1205_Illigal_parameter__MWRNA_N_8c2732a0;
  }
  else {
    iVar1 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7);
    if (iVar1 != 1) {
      if (iVar3 < 1) {
        return 0;
      }
      *(undefined4 *)(ar4 + 0x8c) = 1;
      if (*(char *)(ar4 + 5) == '\x01') {
        s_E1209_mwRnaPause_Time_out_of_26908e(ar4,ar5,ar6,ar7,iVar3);
        iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7);
        if (iVar2 == 1) {
          s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(ar4,ar5,ar6,ar7);
        }
        else {
          FUN_8c269056(ar4,ar5,ar6,ar7);
        }
        *(undefined1 *)(ar4 + 5) = 0;
      }
      FUN_8c26a100(auStack_4c,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x8c) = 0;
      iVar2 = libgcc_divide_helper_010468(0x20,*(undefined4 *)(ar4 + 8));
      iVar2 = iVar2 << 3;
      iVar3 = libgcc_divide_helper_010468(iVar3,iVar2);
      iVar3 = iVar3 * iVar2;
      if (*(int *)(ar4 + 0x34) < iVar3) {
        iVar2 = (iVar3 - *(int *)(ar4 + 0x34)) * *(int *)(ar4 + 8);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 7;
        }
        ar6 = (undefined1 *)(iVar2 >> 3);
        (**(code **)(**(int **)(ar4 + 0x10) + 0x18))(*(int **)(ar4 + 0x10),1,ar6,auStack_30);
        a5 = (undefined1 *)0x1;
        ar7 = auStack_28;
        (**(code **)(**(int **)(ar4 + 0x14) + 0x18))(*(int **)(ar4 + 0x14),1,ar6,ar7);
        ar5_00 = puStack_2c;
        if ((*(char *)(ar4 + 3) != '\x01') &&
           (puStack_48 = auStack_28, a5 = puStack_24, ar6 = puStack_2c, ar5_00 = puStack_24,
           puStack_44 = auStack_30, (int)puStack_2c < (int)puStack_24)) {
          ar5_00 = puStack_2c;
        }
        for (iVar2 = 0; iVar2 < (int)(uint)*(byte *)(ar4 + 3); iVar2 = iVar2 + 1) {
          ar7 = auStack_40;
          FUN_8c26be30(auStack_30 + iVar2 * 8,ar5_00,auStack_38,ar7);
          piVar5 = *(int **)(ar4 + 0x10 + iVar2 * 4);
          (**(code **)(*piVar5 + 0x20))(piVar5,0,auStack_38,ar7);
          piVar5 = *(int **)(ar4 + 0x10 + iVar2 * 4);
          a5 = (undefined1 *)0x1;
          ar6 = auStack_40;
          (**(code **)(*piVar5 + 0x1c))(piVar5,1,ar6,ar7);
        }
        *(undefined4 *)(ar4 + 0x2c) = 0;
        *(undefined4 *)(ar4 + 0x34) = 0;
        iVar2 = libgcc_divide_helper_010468(ar5_00,*(undefined4 *)(ar4 + 8));
        iVar2 = iVar2 * 8 + *(int *)(ar4 + 0x28);
      }
      else {
        a5 = (undefined1 *)
             libgcc_divide_helper_010614(*(int *)(ar4 + 0x30) + iVar3,*(undefined4 *)(ar4 + 0x28));
        iVar2 = (**(code **)(**(int **)(ar4 + 0x38) + 0x58))(*(int **)(ar4 + 0x38),a5,ar6,ar7);
        iVar3 = *(int *)(ar4 + 0x34) - iVar2;
        *(int *)(ar4 + 0x34) = iVar3;
        uVar4 = libgcc_divide_helper_010614(iVar3,*(undefined4 *)(ar4 + 0x28));
        *(undefined4 *)(ar4 + 0x2c) = uVar4;
      }
      *(undefined4 *)(ar4 + 0x30) = 0;
      FUN_8c26a118(auStack_4c,a5,ar6,ar7);
      return iVar2;
    }
    s0 = s_E1210_mwRnaDiscardData_Play_Swit_8c273344;
  }
  debug_printf(iVar2,ar5,ar6,ar7,s0,iVar3);
  return 0;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269816\n.set _s_E1205_Illigal_parameter_MWRN_269816, _s_E1205_Illigal_parameter_MWRN_269816_def\n");
