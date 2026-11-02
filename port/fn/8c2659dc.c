#include "../decls.h"
int FUN_8c2659dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0x7000103;
  if ((ar4 != 0) && (iVar2 = iVar1, *(int *)(ar4 + 0x10) != 0)) {
    if (*(int *)(ar4 + 0x10) == -1) {
      *(undefined4 *)(ar4 + 0x18) = 1;
    }
    else {
      (**(code **)(ar4 + 0x10))(*(undefined4 *)(ar4 + 0x14));
    }
  }
  if (iVar2 != 0) {
    FUN_8c2688a0((&FUN_8c2659dc),iVar2);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c2659dc\n.set _FUN_8c2659dc, _FUN_8c2659dc_def\n");
