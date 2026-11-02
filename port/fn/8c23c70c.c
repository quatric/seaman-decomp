#include "../decls.h"
undefined4 FUN_8c23c70c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar7_00;
  int ar4_00;
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  int ar6_00;
  
  ar4_00 = 0x8c4c1280;
  ar7_00 = 0x8c4c11e0;
  ar6_00 = *(int *)(0x80 + 0x8c4c11e0);
  if (0 < ar6_00) {
    ar5_00 = 0;
    if (0 < ar6_00) {
      do {
        if (*(int *)(*(int *)(ar5_00 * 4 + ar7_00) + 0x58) == 1) {
          iVar1 = (int)0x80;
          *(int *)(*(int *)(iVar1 + ar4_00) * 4 + ar4_00) = ar5_00;
          *(int *)(iVar1 + ar4_00) = *(int *)(iVar1 + ar4_00) + 1;
        }
        ar5_00 = ar5_00 + 1;
      } while (ar5_00 < ar6_00);
    }
    uVar2 = FUN_8c23bfee(ar4_00,ar5_00,ar6_00,ar7_00);
    return uVar2;
  }
  return (int)0x80;
}

__asm__(".globl _FUN_8c23c70c\n.set _FUN_8c23c70c, _FUN_8c23c70c_def\n");
