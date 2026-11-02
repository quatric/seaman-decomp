#include "../decls.h"
undefined4 FUN_8c0c75f4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  uint a5;
  
  iVar1 = (*(code *)(&get_field_d0_0c51fc))
                    (*(undefined4 *)(0x7cc + ar5),ar5,ar6,ar7);
  a5 = (uint)*(byte *)(0xa0 + ar5);
  piVar2 = *(int **)(ar4 + iVar1 * 4 + 8);
  (**(code **)(*piVar2 + 0x78))(piVar2,a5,ar6,ar7);
  if ((*(int *)(0x2d15c + ar4) != 0) && (*(int *)(0x2d15c + ar4) != 1)) {
    iVar1 = (*(code *)(&get_field_d0_0c51fc))
                      (*(undefined4 *)(0x7cc + ar5),a5,ar6,ar7);
    piVar2 = *(int **)(ar4 + iVar1 * 4 + 8);
    (**(code **)(0x9c + *piVar2))(piVar2,(uint)*(byte *)(0xa0 + ar5),ar6,ar7);
  }
  pure_virtual_stub(ar4,ar5,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0c75f4\n.set _FUN_8c0c75f4, _FUN_8c0c75f4_def\n");
