#include "../decls.h"
uint FUN_8c2694a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(0x8c + ar4) == 1) {
    return 1;
  }
  iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7);
  puVar1 = (&DATA_8c2785d8);
  if ((iVar2 == 1) && (*(char *)(ar4 + 5) == '\x01')) {
    iVar2 = FUN_8c268e1a(ar4,ar5,ar6,ar7);
    if (iVar2 == 1) {
      s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(ar4,ar5,ar6,ar7);
      *(undefined1 *)(ar4 + 5) = 0;
      *(undefined4 *)puVar1 = 0;
    }
    else {
      *(int *)puVar1 = *(int *)puVar1 + 1;
    }
  }
  if ((*(char *)(ar4 + 6) == '\x01') && (*(char *)(ar4 + 5) == '\0')) {
    ar5 = 1;
    iVar2 = (**(code **)(**(int **)(ar4 + 0x10) + 0x24))(*(int **)(ar4 + 0x10),1,ar6,ar7);
    if (iVar2 < 0x20) {
      ar5 = 0;
      s_E1205_Illigal_parameter_MWRN_2690dc(ar4,0,ar6,ar7);
      *(undefined1 *)(ar4 + 6) = 0;
    }
  }
  iVar2 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7);
  if (iVar2 == 1) {
    FUN_8c268ea8(ar4,ar5,ar6,ar7);
  }
  iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7);
  if (iVar2 == 1) {
    if (*(char *)(ar4 + 5) != '\0') goto LAB_8c26958c;
    iVar2 = s_E1212_mwlRnaStartTrans_rna_s_269252(ar4,ar5,ar6,ar7);
  }
  else {
    iVar2 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7);
    if ((iVar2 != 1) || (*(int *)(ar4 + 0x28) <= *(int *)(ar4 + 0x54))) goto LAB_8c26958c;
    if ((*(char *)(ar4 + 5) == '\x01') && (iVar2 = FUN_8c268e1a(ar4,ar5,ar6,ar7), iVar2 == 1)) {
      FUN_8c269056(ar4,ar5,ar6,ar7);
      *(undefined1 *)(ar4 + 5) = 0;
    }
    if (*(char *)(ar4 + 5) != '\0') goto LAB_8c26958c;
    iVar2 = FUN_8c2693ce(ar4,ar5,ar6,ar7);
  }
  if (0 < iVar2) {
    *(undefined1 *)(ar4 + 5) = 1;
  }
LAB_8c26958c:
  if (((*(char *)(ar4 + 1) == '\x05') && (*(int *)(ar4 + 0x40) <= *(int *)(ar4 + 0x34))) &&
     (*(char *)(ar4 + 7) == '\0')) {
    s_E1205_Illigal_parameter_MWRN_2691ba(ar4,1,ar6,ar7);
    *(undefined4 *)(ar4 + 0x40) = 0x7fffffff;
  }
  if ((*(byte *)(ar4 + 1) == 6) && (*(int *)(ar4 + 0x34) == 0)) {
    uVar3 = 0;
    s_E1205_Illigal_parameter_MWRN_2691ba(ar4,0,ar6,ar7);
    uVar3 = noop_268d60(ar4,uVar3,ar6,ar7);
    return uVar3;
  }
  return (uint)*(byte *)(ar4 + 1);
}

__asm__(".globl _FUN_8c2694a4\n.set _FUN_8c2694a4, _FUN_8c2694a4_def\n");
