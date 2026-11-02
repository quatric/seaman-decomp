#include "../decls.h"
int FUN_8c268920_def(undefined4 ar4,uint ar5,undefined *ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  uint uVar2;
  int ar5_00;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    *(undefined4 *)(DAT_8c2784c0 + 0x164) = ar4;
    *(uint *)(DAT_8c2784c0 + 0x168) = ar5;
    *(undefined4 *)(DAT_8c2784c0 + 0x174) = 0;
    *(undefined4 *)(DAT_8c2784c0 + 0x170) = 0;
    _DAT_8c4bd578 = ar4;
    in_r0 = memset(ar4,0,ar5 * 0x1c,ar7);
    ar6 = &DAT_8c2785a8;
    uVar2 = 0;
    iVar1 = 0;
    if (ar5 != 0) {
      do {
        in_r0 = FUN_8c0107a0(0x1c,*(int *)(DAT_8c2784c0 + 0x164) + iVar1,ar6);
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x1c;
      } while (uVar2 < ar5);
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c268920,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c268920\n.set _FUN_8c268920, _FUN_8c268920_def\n");
