#include "../decls.h"
undefined4 FUN_8c1f61c6_def(undefined4 ar4,uint *ar5,int ar6,undefined4 ar7,undefined4 ain0)

{
  int ar6_00;
  uint *ar5_00;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int ar4_00;
  int ar4_01;
  int iVar4;
  
  if (DAT_8c26c7c0 == 0) {
    return ain0;
  }
  ar4_00 = 0;
  do {
    ar6_00 = FUN_8c1efd14(ar4_00,ar5,ar6,ar7);
    ar5_00 = (uint *)FUN_8c1efd26(ar4_00,ar5,ar6,ar7);
    iVar4 = ar4_00 * 0x34;
    ar4_01 = iVar4 + -0x73b8d83c;
    *(uint **)(iVar4 + -0x73b8d80c) = ar5_00;
    *(undefined4 *)(iVar4 + -0x73b8d810) = *(undefined4 *)(iVar4 + -0x73b8d834);
    ar5 = ar5_00;
    ar6 = ar6_00;
    uVar1 = FUN_8c1f6192(ar4_01,ar5_00,ar6_00,ar7);
    *(undefined4 *)(&DAT_8c472ca4 + ar4_00 * 4) = uVar1;
    iVar2 = libgcc_divide_helper_010614(ar4_00,6);
    if (iVar2 == 0) {
      if ((((*ar5_00 & 0x21) == 0) || (*(char *)(ar6_00 + 2) != '\0')) ||
         (*(char *)(ar6_00 + 4) != '\b')) {
        iVar2 = s_no_device_1f5f4e(ar4_01,ar5,ar6,ar7);
      }
      else {
        FUN_8c1f6142(ar4_01,ar5_00,ar6,ar7);
        ar6 = ar4_00;
        iVar2 = FUN_8c1f5f8c(ar4_01,ar6_00,ar4_00,ar7);
      }
      *(uint *)(iVar4 + -0x73b8d830) = ~*(uint *)(iVar4 + -0x73b8d834);
      if (_DAT_8c472d04 == 0) {
        uVar3 = *(uint *)(iVar4 + -0x73b8d810) ^ *(uint *)(iVar4 + -0x73b8d834);
        ar5 = (uint *)(*(uint *)(iVar4 + -0x73b8d834) & uVar3);
        *(uint **)(iVar4 + -0x73b8d82c) = ar5;
        uVar3 = uVar3 & *(uint *)(iVar4 + -0x73b8d830);
      }
      else {
        uVar3 = *(uint *)(iVar4 + -0x73b8d810) ^ *(uint *)(iVar4 + -0x73b8d834) ^ 0xffffffff;
        ar5 = (uint *)(*(uint *)(iVar4 + -0x73b8d834) | uVar3);
        *(uint **)(iVar4 + -0x73b8d82c) = ar5;
        uVar3 = uVar3 | *(uint *)(iVar4 + -0x73b8d830);
      }
      *(uint *)(iVar4 + -0x73b8d828) = uVar3;
    }
    else {
      *(uint **)(iVar4 + -0x73b8d818) = ar5_00 + 5;
    }
    ar4_00 = ar4_00 + 1;
  } while (ar4_00 < 0x18);
  return iVar2;
}

__asm__(".globl _FUN_8c1f61c6\n.set _FUN_8c1f61c6, _FUN_8c1f61c6_def\n");
