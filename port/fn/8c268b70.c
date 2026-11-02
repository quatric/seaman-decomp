#include "../decls.h"
undefined4 s_E1201_mwRnaCreate_Illigal_pa_268b7a_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined1 *a4;
  undefined4 uVar2;
  int *a4_00;
  undefined1 *a4_01;
  int iVar3;
  uint ar5_00;
  undefined1 auStack_20 [4];
  int *piStack_1c;
  
  puVar1 = (&debug_printf);
  a4_01 = auStack_20;
  if (((int)ar5 < 1) || (2 < (int)ar5)) {
    debug_printf(ar4,ar5,ar6,ar7);
  }
  else {
    a4_00 = ar4;
    ar5_00 = ar5;
    if (ar4 != (int *)0x0) {
      ar5_00 = 0;
      if (0 < (int)ar5) {
        do {
          if (*a4_00 == 0) goto LAB_8c268bae;
          ar5_00 = ar5_00 + 1;
          a4_00 = a4_00 + 1;
        } while ((int)ar5_00 < (int)ar5);
      }
      FUN_8c26a100(auStack_20,ar5_00,ar6,ar7);
      a4 = (undefined1 *)FUN_8c268b48(a4_01,ar5_00,ar6,ar7);
      if (a4 == (undefined1 *)0x0) {
        (*(code *)puVar1)(a4_01,ar5_00,ar6,ar7);
      }
      else {
        ar5_00 = 0;
        a4[3] = (char)ar5;
        a4[2] = (char)ar5;
        iVar3 = 0;
        if (0 < (int)ar5) {
          do {
            ar5_00 = ar5_00 + 1;
            *(undefined4 *)(a4 + iVar3 + 0x10) = *(undefined4 *)(iVar3 + (int)ar4);
            iVar3 = iVar3 + 4;
          } while ((int)ar5_00 < (int)ar5);
        }
        iVar3 = (**(code **)(*(int *)(&DATA_8c2785cc) + 0x14))(ar5,ar5_00,ar6,ar7);
        *(int *)(a4 + 0x38) = iVar3;
        if (iVar3 == 0) {
          (*(code *)puVar1)(ar5,ar5_00,ar6,ar7);
          a4 = (undefined1 *)0x0;
        }
        else {
          FUN_8c268afc(a4,ar5_00,ar6,ar7);
          s_E1205_Illigal_parameter_MWRN_269b92(a4,0x10,ar6,ar7);
          s_E1205_Illigal_parameter_MWRN_269c06(a4,0xac44,ar6,ar7);
          ar5_00 = (uint)(byte)a4[3];
          s_E1205_Illigal_parameter_MWRN_269aec(a4,ar5_00,ar6,ar7);
          piStack_1c = *(int **)(a4 + 0x38);
          uVar2 = (**(code **)(*piStack_1c + 0x18))(piStack_1c,ar5_00,ar6,ar7);
          *(undefined4 *)(a4 + 0x28) = uVar2;
          *a4 = 1;
        }
      }
      FUN_8c26a118(auStack_20,ar5_00,ar6,ar7);
      return a4;
    }
LAB_8c268bae:
    debug_printf(a4_00,ar5_00,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _s_E1201_mwRnaCreate_Illigal_pa_268b7a\n.set _s_E1201_mwRnaCreate_Illigal_pa_268b7a, _s_E1201_mwRnaCreate_Illigal_pa_268b7a_def\n");
