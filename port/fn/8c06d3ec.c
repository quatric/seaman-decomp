#include "../decls.h"
int s_GRAPHICS_HERBLINE_06d3ee_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 ar7_00;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(0x224 + ar4) + ar6 * 0x124;
  ar7_00 = get_field_4_0253e4(iVar2 + 0x78,ar5,ar6,ar7);
  iVar1 = (*(code *)(&FUN_8c020ef0))
                    (ar5,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(&DATA_8c136f4c),ar7_00);
  if (iVar1 == 0) {
    iVar1 = (*(code *)(&report_error_message))
                      (*(undefined4 *)(iVar2 + 0x14),(&DATA_8c1371e0) + 0x334,0
                       ,2);
  }
  return iVar1;
}

__asm__(".globl _s_GRAPHICS_HERBLINE_06d3ee\n.set _s_GRAPHICS_HERBLINE_06d3ee, _s_GRAPHICS_HERBLINE_06d3ee_def\n");
