#include "../decls.h"
int FUN_8c265ac8_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  int *ar6_00;
  undefined4 ar7_00;
  int iVar2;
  int ar5_00;
  
  ar7_00 = 0;
  ar6_00 = &DAT_8c2784c0;
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    *(undefined4 *)(DAT_8c2784c0 + 0x17c) = ar4;
    iVar2 = 0;
    *(int *)(DAT_8c2784c0 + 0x180) = ar5;
    *(undefined4 *)(DAT_8c2784c0 + 0x184) = 0;
    *(undefined4 *)(DAT_8c2784c0 + 0x188) = 0;
    *(undefined4 *)(DAT_8c2784c0 + 0x18c) = 0;
    in_r0 = 400;
    *(undefined4 *)(DAT_8c2784c0 + 400) = 0;
    _DAT_8c4bd408 = DAT_8c2784c0 + 0x17c;
    iVar1 = 0;
    if (0 < ar5) {
      do {
        in_r0 = FUN_8c010794(0x20,*(int *)(*ar6_00 + 0x17c) + iVar1,&DAT_8c2784f8);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x20;
      } while (iVar2 < ar5);
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265ac8,ar5_00,ar6_00,ar7_00,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265ac8\n.set _FUN_8c265ac8, _FUN_8c265ac8_def\n");
