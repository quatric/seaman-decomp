#include "../decls.h"
undefined4 FUN_8c20135c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 ar4_00;
  uint uVar2;
  
  uVar2 = 0;
  ar4_00 = *(undefined4 *)(ar4 + 0x28);
  *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)(ar4 + 0x38);
  if (ar5 != 0) {
    do {
      if (*(int *)(ar4 + 0x40) == 0xfffa) {
        if (*(int *)(ar4 + 0x34) != 0) {
          return 0xffff0000;
        }
        return 0;
      }
      if (*(int *)(ar4 + 0x34) == 0) {
        return 0xffff0000;
      }
      uVar1 = FUN_8c2009d0(ar4_00,*(undefined4 *)(ar4 + 0x40),ar6,ar7);
      uVar2 = uVar2 + 1;
      *(uint *)(ar4 + 0x40) = uVar1 & 0xffff;
      *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + -1;
    } while (uVar2 < ar5);
  }
  return *(undefined4 *)(ar4 + 0x34);
}

__asm__(".globl _FUN_8c20135c\n.set _FUN_8c20135c, _FUN_8c20135c_def\n");
