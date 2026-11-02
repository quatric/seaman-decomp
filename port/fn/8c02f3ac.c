#include "../decls.h"
int FUN_8c02f3ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x2710;
  for (iVar2 = 0; iVar2 < *(int *)(ar4 + 0x10); iVar2 = iVar2 + 1) {
    if ((*(int *)(ar4 + iVar2 * 4 + 0x14) < iVar1) && (*(int *)(ar4 + iVar2 * 4 + 0x14) != 0)) {
      iVar1 = *(int *)(ar4 + iVar2 * 4 + 0x14);
    }
  }
  if (iVar1 == 0x2710) {
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02f3ac\n.set _FUN_8c02f3ac, _FUN_8c02f3ac_def\n");
