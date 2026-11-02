#include "../decls.h"
int * s_E1212_mwlRnaStartTrans_rna_s_269252_def
                (undefined1 *ar4,undefined4 ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  int iVar2;
  undefined1 *a7;
  int *piVar3;
  undefined1 *puVar4;
  int *a5;
  undefined1 *a6;
  int *piVar5;
  int iVar6;
  
  iVar1 = libgcc_divide_helper_010468(0x20,*(undefined4 *)(ar4 + 8));
  iVar1 = iVar1 * 8;
  piVar3 = (int *)(*(int *)(ar4 + 0x28) - *(int *)(ar4 + 0x34));
  iVar2 = libgcc_divide_helper_010468(piVar3,iVar1);
  piVar5 = (int *)(iVar2 * iVar1);
  for (iVar2 = 0; iVar2 < (int)(uint)(byte)ar4[3]; iVar2 = iVar2 + 1) {
    if (*(int *)(ar4 + iVar2 * 4 + 0x10) == 0) {
      debug_printf(piVar3,ar5,ar6,ar7);
    }
    piVar3 = *(int **)(ar4 + iVar2 * 4 + 0x10);
    iVar6 = (int)piVar5 * *(int *)(ar4 + 8);
    ar7 = ar4 + iVar2 * 8 + 0x18;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 7;
    }
    ar5 = 1;
    ar6 = (undefined1 *)(iVar6 >> 3);
    (**(code **)(*piVar3 + 0x18))(piVar3,1,ar6,ar7);
  }
  if (ar4[3] == '\x01') {
    puVar4 = *(undefined1 **)(ar4 + 0x1c);
  }
  else {
    ar6 = *(undefined1 **)(ar4 + 0x1c);
    ar7 = *(undefined1 **)(ar4 + 0x24);
    puVar4 = ar7;
    if ((int)ar6 < (int)ar7) {
      puVar4 = ar6;
    }
  }
  iVar2 = libgcc_divide_helper_010468(puVar4,*(undefined4 *)(ar4 + 8));
  piVar3 = (int *)(iVar2 << 3);
  if ((int)piVar5 <= iVar2 << 3) {
    piVar3 = piVar5;
  }
  a5 = (int *)(*(int *)(ar4 + 0x28) - *(int *)(ar4 + 0x2c));
  if ((int)a5 <= (int)piVar3) {
    piVar3 = a5;
  }
  iVar2 = libgcc_divide_helper_010468(piVar3,iVar1);
  if (iVar2 * iVar1 < 1) {
    for (iVar1 = 0; iVar1 < (int)(uint)(byte)ar4[3]; iVar1 = iVar1 + 1) {
      if (*(int *)(ar4 + iVar1 * 4 + 0x10) == 0) {
        debug_printf(piVar3,a5,ar6,ar7);
      }
      piVar3 = *(int **)(ar4 + iVar1 * 4 + 0x10);
      a5 = (int *)0x1;
      ar6 = ar4 + iVar1 * 8 + 0x18;
      (**(code **)(*piVar3 + 0x1c))(piVar3,1,ar6,ar7);
    }
    piVar5 = (int *)0x0;
  }
  else {
    puVar4 = &DAT_8c4bea40;
    for (piVar3 = (int *)0x0; (int)piVar3 < (int)(uint)(byte)ar4[3];
        piVar3 = (int *)((int)piVar3 + 1)) {
      a7 = *(undefined1 **)(ar4 + (int)piVar3 * 8 + 0x18);
      a6 = *(undefined1 **)(ar4 + 0x2c);
      _DAT_8c4bea40 = sh4_tmu_1f88e6(puVar4,a5,ar6,ar7);
      puVar4 = ar4;
      a5 = piVar3;
      piVar5 = (int *)FUN_8c268ddc(ar4,piVar3,a6,a7);
      _DAT_8c4bea44 = sh4_tmu_1f88e6(puVar4,a5,a6,a7);
      ar6 = a6;
      ar7 = a7;
    }
    *(int **)(ar4 + 0x3c) = piVar5;
  }
  return piVar5;
}

__asm__(".globl _s_E1212_mwlRnaStartTrans_rna_s_269252\n.set _s_E1212_mwlRnaStartTrans_rna_s_269252, _s_E1212_mwlRnaStartTrans_rna_s_269252_def\n");
