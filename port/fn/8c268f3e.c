#include "../decls.h"
undefined4
s_E1213_mwlRnaAddWrPos_rna_sj__268f4c_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined1 *ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar2 = auStack_3c;
  FUN_8c26a100(auStack_3c,ar5,ar6,ar7);
  for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(ar4 + 3); iVar4 = iVar4 + 1) {
    if (*(int *)(iVar4 * 4 + ar4 + 0x10) == 0) {
      debug_printf(puVar2,ar5,ar6,ar7);
    }
  }
  for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(ar4 + 3); iVar4 = iVar4 + 1) {
    uStack_28 = *(undefined4 *)(ar4 + 0x18 + iVar4 * 8);
    uStack_24 = *(undefined4 *)(iVar4 * 8 + ar4 + 0x1c);
    puVar2 = auStack_30;
    ar7 = auStack_38;
    uVar1 = libgcc_divide_helper_010468(*(int *)(ar4 + 0x3c) * *(int *)(ar4 + 8),8);
    FUN_8c26be30(&uStack_28,uVar1,puVar2,ar7);
    piVar3 = *(int **)(ar4 + 0x10 + iVar4 * 4);
    (**(code **)(*piVar3 + 0x20))(piVar3,0,auStack_30,ar7);
    piVar3 = *(int **)(ar4 + 0x10 + iVar4 * 4);
    ar5 = 1;
    ar6 = auStack_38;
    (**(code **)(*piVar3 + 0x1c))(piVar3,1,ar6,ar7);
  }
  uVar1 = libgcc_divide_helper_010614
                    (*(int *)(ar4 + 0x2c) + *(int *)(ar4 + 0x3c),*(undefined4 *)(ar4 + 0x28));
  *(undefined4 *)(ar4 + 0x2c) = uVar1;
  *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + *(int *)(ar4 + 0x3c);
  *(int *)(ar4 + 0x4c) = *(int *)(ar4 + 0x4c) + *(int *)(ar4 + 0x3c);
  *(undefined4 *)(ar4 + 0x3c) = 0;
  uVar1 = FUN_8c26a118(auStack_3c,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _s_E1213_mwlRnaAddWrPos_rna_sj__268f4c\n.set _s_E1213_mwlRnaAddWrPos_rna_sj__268f4c, _s_E1213_mwlRnaAddWrPos_rna_sj__268f4c_def\n");
