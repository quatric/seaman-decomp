#include "../decls.h"
int FUN_8c02009c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar5_00;
  
  ar4[1] = 0;
  *ar4 = 0;
  iVar1 = 0;
  if (ar4[8] != 0) {
    for (ar5_00 = (int *)(uint)ar4[8]; ar5_00[1] != 0; ar5_00 = (int *)ar5_00[1]) {
    }
    iVar1 = FUN_8c020148(ar4,ar5_00 + 0xc,ar6,ar7);
    if (iVar1 == 0) {
      iVar1 = FUN_8c02049c(ar4,ar5_00,ar6,ar7);
    }
    else {
      iVar1 = *ar5_00;
      if (iVar1 == 0xb) {
        iVar1 = FUN_8c02041c(ar4,ar5_00,ar6,ar7);
      }
      else if (((iVar1 == 0xc) || (iVar1 == 0xd)) || (iVar1 == 0xe)) {
        iVar1 = 1;
      }
      else {
        iVar1 = FUN_8c0202c0(ar4,ar5_00,ar6,ar7);
      }
      if (iVar1 == 1) {
        ar4[1] = ar5_00;
      }
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02009c\n.set _FUN_8c02009c, _FUN_8c02009c_def\n");
