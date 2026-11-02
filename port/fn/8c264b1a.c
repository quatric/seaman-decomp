#include "../decls.h"
int FUN_8c264b1a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *a4;
  int unaff_r13;
  int iVar3;
  
  iVar1 = FUN_8c262c38(*(undefined4 *)(unaff_r13 + 4),ar5,ar6,ar7);
  if (iVar1 == 3) {
    iVar2 = FUN_8c263156(*(undefined4 *)(unaff_r13 + 4),ar5,ar6,ar7);
    iVar3 = 0;
    iVar1 = iVar2;
    if (0 < iVar2) {
      do {
        a4 = *(int **)(iVar3 * 4 + unaff_r13 + 0x18);
        iVar1 = (**(code **)(*a4 + 0x24))(a4,1,ar6,ar7);
        if (0x1f < iVar1) break;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (iVar3 == iVar2) {
      (*(code *)(&s_E1205_Illigal_parameter_MWRN_2690dc))
                (*(undefined4 *)(unaff_r13 + 0xc),0,ar6,ar7);
      iVar1 = 4;
      *(undefined1 *)(unaff_r13 + 1) = 4;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c264b1a\n.set _FUN_8c264b1a, _FUN_8c264b1a_def\n");
