#include "../decls.h"
undefined4 FUN_8c2022ac_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
  iVar1 = *(int *)(ar4 + 0x28);
  if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
    *ar5 = 2;
    uVar2 = FUN_8c202302(ar4,ar5,ar6,ar7);
    ar5[1] = (char)uVar2;
    ar5[2] = 0;
    ar5[3] = 0;
  }
  else {
    if (iVar1 == 3) {
      uVar3 = 1;
    }
    else {
      if (iVar1 != 4) {
        return iVar1;
      }
      uVar3 = 3;
    }
    *ar5 = uVar3;
    uVar2 = FUN_8c202330(ar4,ar5,ar6,ar7);
    ar5[1] = (char)uVar2;
    ar5[2] = 0;
    ar5[3] = 0;
  }
  return 0;
}

__asm__(".globl _FUN_8c2022ac\n.set _FUN_8c2022ac, _FUN_8c2022ac_def\n");
