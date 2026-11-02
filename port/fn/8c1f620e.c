#include "../decls.h"
int FUN_8c1f620e_def(undefined4 ar4,uint *ar5,int ar6,undefined4 ar7)

{
  int a6;
  uint *a5;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r8;
  undefined4 unaff_r9;
  int unaff_r10;
  int unaff_r13;
  int a4;
  int iVar4;
  
  do {
    a6 = FUN_8c1efd14(unaff_r13,ar5,ar6,ar7);
    a5 = (uint *)FUN_8c1efd26(unaff_r13,ar5,ar6,ar7);
    iVar4 = unaff_r13 * 0x34;
    a4 = iVar4 + -0x73b8d83c;
    *(uint **)(iVar4 + -0x73b8d80c) = a5;
    *(undefined4 *)(iVar4 + -0x73b8d810) = *(undefined4 *)(iVar4 + -0x73b8d834);
    ar5 = a5;
    ar6 = a6;
    uVar1 = FUN_8c1f6192(a4,a5,a6,ar7);
    *(undefined4 *)(&DAT_8c472ca4 + unaff_r13 * 4) = uVar1;
    iVar2 = libgcc_divide_helper_010614(unaff_r13,unaff_r9);
    if (iVar2 == 0) {
      if ((((*a5 & 0x21) == 0) || (*(char *)(a6 + 2) != '\0')) || (*(char *)(a6 + 4) != '\b')) {
        iVar2 = s_no_device_1f5f4e(a4,ar5,ar6,ar7);
      }
      else {
        FUN_8c1f6142(a4,a5,ar6,ar7);
        ar6 = unaff_r13;
        iVar2 = FUN_8c1f5f8c(a4,a6,unaff_r13,ar7);
      }
      *(uint *)(iVar4 + -0x73b8d830) = ~*(uint *)(iVar4 + -0x73b8d834);
      if (_DAT_8c472d04 == 0) {
        uVar3 = *(uint *)(iVar4 + -0x73b8d810) ^ *(uint *)(iVar4 + -0x73b8d834);
        ar5 = (uint *)(*(uint *)(iVar4 + -0x73b8d834) & uVar3);
        *(uint **)(iVar4 + -0x73b8d82c) = ar5;
        uVar3 = uVar3 & *(uint *)(iVar4 + -0x73b8d830);
      }
      else {
        uVar3 = *(uint *)(iVar4 + -0x73b8d810) ^ *(uint *)(iVar4 + -0x73b8d834) ^ unaff_r8;
        ar5 = (uint *)(*(uint *)(iVar4 + -0x73b8d834) | uVar3);
        *(uint **)(iVar4 + -0x73b8d82c) = ar5;
        uVar3 = uVar3 | *(uint *)(iVar4 + -0x73b8d830);
      }
      *(uint *)(iVar4 + -0x73b8d828) = uVar3;
    }
    else {
      *(uint **)(iVar4 + -0x73b8d818) = a5 + 5;
    }
    unaff_r13 = unaff_r13 + 1;
  } while (unaff_r13 < unaff_r10);
  return iVar2;
}

__asm__(".globl _FUN_8c1f620e\n.set _FUN_8c1f620e, _FUN_8c1f620e_def\n");
