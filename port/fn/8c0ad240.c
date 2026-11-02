#include "../decls.h"
int s_CSquidLine_0ad244_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 a6;
  
  a6 = ar6;
  iVar1 = get_field_328_0acd68(ar4 + 0x53c,ar5,ar6,ar7);
  if (*(int *)(0x928 + ar4 + iVar1 * 4) == 0) {
    iVar1 = (*(code *)(&report_error_message))
                      ((&DATA_8c13b5ec) + 0x379,
                       (&DATA_8c13b5ec) + 0x384,1,2);
  }
  else {
    iVar2 = *(int *)(0x928 + ar4 + iVar1 * 4);
    (**(code **)(0x10c + *(int *)(iVar2 + 8)))(iVar2,ar6,a6,ar7);
    FUN_8c036988(*(undefined4 *)(0x928 + ar4 + iVar1 * 4),ar6,a6,ar7);
    iVar2 = *(int *)(0x928 + ar4 + iVar1 * 4);
    (**(code **)(*(int *)(iVar2 + 8) + 0x5c))(iVar2,ar6,a6,ar7);
    (**(code **)(*ar5 + 0x4c))(ar5,*(undefined4 *)(0x928 + ar4 + iVar1 * 4),a6,ar7);
    *(undefined4 *)(0x928 + ar4 + iVar1 * 4) = 0;
    iVar1 = 0x170c;
    *(undefined4 *)(0x170c + ar4) = 1;
  }
  return iVar1;
}

__asm__(".globl _s_CSquidLine_0ad244\n.set _s_CSquidLine_0ad244, _s_CSquidLine_0ad244_def\n");
