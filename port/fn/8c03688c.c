#include "../decls.h"
undefined4 s_CSquidLine_036894_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 a6;
  int iVar2;
  
  a6 = ar6;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    if (*(int *)(0x111c + ar4 + iVar2 * 4) == 0) {
      ar7 = 2;
      a6 = 1;
      (*(code *)(&report_error_message))
                ((&DATA_8c1340f4) + 0x1d1d,
                 (&DATA_8c1340f4) + 0x1d28,1,2);
    }
    else {
      iVar1 = *(int *)(0x111c + ar4 + iVar2 * 4);
      ar5_00 = ar6;
      (**(code **)(0x10c + *(int *)(iVar1 + 8)))(iVar1,ar6,a6,ar7);
      FUN_8c036988(*(undefined4 *)(0x111c + ar4 + iVar2 * 4),ar5_00,a6,ar7);
      iVar1 = *(int *)(0x111c + ar4 + iVar2 * 4);
      (**(code **)(*(int *)(iVar1 + 8) + 0x5c))(iVar1,ar5_00,a6,ar7);
      (**(code **)(*ar5 + 0x4c))(ar5,*(undefined4 *)(0x111c + ar4 + iVar2 * 4),a6,ar7);
    }
  }
  return 6;
}

__asm__(".globl _s_CSquidLine_036894\n.set _s_CSquidLine_036894, _s_CSquidLine_036894_def\n");
