#include "../decls.h"
undefined4 FUN_8c26bad4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  char in_T;
  
  if ((in_T != '\0') && (ar5 < 4)) {
    iVar2 = 0;
    piVar1 = (int *)(ar5 * 4 + ar4 + 0x18);
    while (piVar1 = (int *)*piVar1, piVar1 != (int *)0x0) {
      iVar2 = iVar2 + piVar1[3];
    }
    return iVar2;
  }
  if (*(int *)(ar4 + 0x28) != 0) {
    (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c26bad4\n.set _FUN_8c26bad4, _FUN_8c26bad4_def\n");
