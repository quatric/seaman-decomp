#include "../decls.h"
uint FUN_8c23729c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int *ain1)

{
  int iVar1;
  undefined4 *in_r3;
  int unaff_r11;
  int unaff_r14;
  
  if (unaff_r11 == *ain1) {
    iVar1 = FUN_8c25a536(DAT_8c277b08,*in_r3,unaff_r11,ar7);
    if (DAT_8c277b14 != *(int *)(iVar1 * 0x44 + DAT_8c277b08 + 4)) {
      unaff_r14 = 1;
    }
  }
  else {
    unaff_r14 = 1;
    FUN_8c25a536(DAT_8c277b08,*in_r3,unaff_r11,ar7);
  }
  if (unaff_r14 != 0) {
    iVar1 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,unaff_r11,ar7);
    iVar1 = iVar1 * 0x44 + DAT_8c277b08;
    DAT_8c277b14 = *(int *)(iVar1 + 4);
    _DAT_8c4ab240 = _DAT_8c4ab240 & 0xffffffc0 | *(uint *)(iVar1 + 8) & 0x3f;
    _DAT_8c4ab244 = *(undefined4 *)(iVar1 + 0xc);
    DAT_8c277b1c = *(uint *)(iVar1 + 0x18) >> 0x10;
    DAT_8c277b10 = unaff_r11;
  }
  return DAT_8c277b1c;
}

__asm__(".globl _FUN_8c23729c\n.set _FUN_8c23729c, _FUN_8c23729c_def\n");
