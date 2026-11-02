#include "../decls.h"
int FUN_8c02ee48_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int ar5_00;
  
  iVar4 = ar6;
  iVar1 = FUN_8c02ef60(ar4,ar5,ar6,ar7);
  uVar2 = rand(ar4,ar5,iVar4,ar7);
  ar5_00 = 0x65 - *(int *)((&DATA_8c1327b4) + iVar1 * 0x18 + 0xc);
  iVar3 = libgcc_divide_helper_01031c(uVar2,ar5_00,iVar4,ar7);
  if (ar6 - *(int *)((&DATA_8c1327b4) + iVar1 * 0x18 + 0xc) < iVar3) {
    iVar4 = 0;
  }
  else {
    uVar2 = rand(uVar2,ar5_00,iVar4,ar7);
    iVar3 = (*(code *)(&libgcc_divide_helper_0101e4))
                      ((ar6 - *(int *)((&DATA_8c1327b4) + iVar1 * 0x18 + 0xc)) *
                       *(int *)((&DATA_8c1327b4) + iVar1 * 0x18 + 8),
                       *(undefined4 *)((&DATA_8c1327b4) + iVar1 * 0x18 + 4),iVar4,ar7);
    iVar4 = (*(code *)(&libgcc_divide_helper_01031c))
                      (uVar2,*(undefined4 *)((&DATA_8c1327b4) + iVar1 * 0x18 + 0x14),iVar4,ar7);
    iVar4 = *(int *)((&DATA_8c1327b4) + iVar1 * 0x18 + 0x10) + iVar3 + iVar4;
  }
  return iVar4;
}

__asm__(".globl _FUN_8c02ee48\n.set _FUN_8c02ee48, _FUN_8c02ee48_def\n");
