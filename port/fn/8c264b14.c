#include "../decls.h"
int FUN_8c264b14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = FUN_8c262c38(*(undefined4 *)(ar4 + 4),&DAT_8c278064);
  if (iVar1 == 3) {
    iVar2 = FUN_8c263156(*(undefined4 *)(ar4 + 4));
    iVar4 = 0;
    iVar1 = iVar2;
    if (0 < iVar2) {
      do {
        piVar3 = *(int **)(iVar4 * 4 + ar4 + 0x18);
        iVar1 = (**(code **)(*piVar3 + 0x24))(piVar3,1);
        if (0x1f < iVar1) break;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    if (iVar4 == iVar2) {
      s_E1205_Illigal_parameter_MWRN_2690dc(*(undefined4 *)(ar4 + 0xc),0);
      iVar1 = 4;
      *(undefined1 *)(ar4 + 1) = 4;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c264b14\n.set _FUN_8c264b14, _FUN_8c264b14_def\n");
