#include "../decls.h"
int s_CSquidLine_085b18_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 a6;
  
  a6 = ar6;
  iVar1 = get_field_290_085544(ar4 + 0xd20,ar5,ar6,ar7);
  if (*(int *)(0x10a8 + ar4 + iVar1 * 4) == 0) {
    iVar2 = (*(code *)(&report_error_message))
                      ((&DATA_8c138590) + 0x1835,
                       (&DATA_8c138590) + 0x1840,1,2);
  }
  else {
    iVar2 = *(int *)(0x10a8 + ar4 + iVar1 * 4);
    (**(code **)(0x10c + *(int *)(iVar2 + 8)))(iVar2,ar6,a6,ar7);
    FUN_8c036988(*(undefined4 *)(0x10a8 + ar4 + iVar1 * 4),ar6,a6,ar7);
    iVar2 = *(int *)(0x10a8 + ar4 + iVar1 * 4);
    (**(code **)(*(int *)(iVar2 + 8) + 0x5c))(iVar2,ar6,a6,ar7);
    (**(code **)(*ar5 + 0x4c))(ar5,*(undefined4 *)(0x10a8 + ar4 + iVar1 * 4),a6,ar7);
    iVar2 = 0x10a8;
    *(undefined4 *)(0x10a8 + ar4 + iVar1 * 4) = 0;
  }
  return iVar2;
}

__asm__(".globl _s_CSquidLine_085b18\n.set _s_CSquidLine_085b18, _s_CSquidLine_085b18_def\n");
