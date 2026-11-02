#include "../decls.h"
int FUN_8c265ba8_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  int *ar6_00;
  undefined4 ar7_00;
  int ar5_00;
  int iVar2;
  
  ar7_00 = 0;
  ar6_00 = &DAT_8c2784c0;
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    *(undefined4 *)(DAT_8c2784c0 + 0x194) = ar4;
    iVar2 = 0;
    *(int *)(DAT_8c2784c0 + 0x198) = ar5;
    *(undefined4 *)(DAT_8c2784c0 + 0x19c) = 0;
    *(undefined4 *)(DAT_8c2784c0 + 0x1a0) = 0;
    in_r0 = 0x1a4;
    *(undefined4 *)(DAT_8c2784c0 + 0x1a4) = 0;
    _DAT_8c4bd418 = DAT_8c2784c0 + 0x194;
    iVar1 = 0;
    _DAT_8c4bd410 = ar4;
    _DAT_8c4bd414 = ar5;
    if (0 < ar5) {
      do {
        in_r0 = FUN_8c010794(8,*(int *)(*ar6_00 + 0x194) + iVar1,&DAT_8c278518);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 8;
      } while (iVar2 < ar5);
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265ba8,ar5_00,ar6_00,ar7_00,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265ba8\n.set _FUN_8c265ba8, _FUN_8c265ba8_def\n");
