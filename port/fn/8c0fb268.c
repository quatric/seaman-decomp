#include "../decls.h"
undefined4 FUN_8c0fb268_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar4_00;
  int iVar3;
  
  iVar3 = ar4[0x22];
  ar4[0x2d] = 0xffffffff;
  *(undefined4 *)(*(int *)(ar4[4] + 0x40) + 0x78) = 1;
  if (*(char *)(iVar3 + 0x48) == '#') {
    ar4[0x23] = 0;
  }
  else if (*(char *)(iVar3 + 0x48) == '@') {
    uVar1 = rand(ar4,ar5,ar6,ar7);
    uVar1 = libgcc_divide_helper_01031c(uVar1,*(undefined4 *)(iVar3 + 0x4c),ar6,ar7);
    ar4[0x23] = uVar1;
  }
  else {
    uVar1 = FUN_8c0fcd2c(ar4,iVar3 + 0x48,ar6,ar7);
    ar4[0x23] = uVar1;
    if ((int)ar4[0x23] < 0) {
      ar4[0x23] = 0;
    }
    if (*(int *)(iVar3 + 0x4c) <= (int)ar4[0x23]) {
      ar4[0x23] = *(int *)(iVar3 + 0x4c) + -1;
    }
  }
  iVar2 = FUN_8c0faf30(ar4[0x23] * 0x24 + iVar3 + 0x54,s__NONE_8c141dec,ar6,ar7);
  if (iVar2 == 0) {
    uVar1 = s_ERROR_0fb0de(ar4,iVar3 + 0x28,ar6,ar7);
    return uVar1;
  }
  iVar3 = ar4[0x23] * 0x24 + iVar3 + 0x54;
  ar4_00 = 0x8c2b59d0;
  uVar1 = pack_acquire_entry_handle(0x8c2b59d0,iVar3,ar6,ar7);
  ar4[0x2d] = uVar1;
  if (-1 < (int)ar4[0x2d]) goto LAB_8c0fb436;
  uVar1 = rand(ar4_00,iVar3,ar6,ar7);
  iVar3 = libgcc_divide_helper_01031c(uVar1,5,ar6,ar7);
  if ((iVar3 < 5) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      uVar1 = pack_acquire_entry_handle(0x8c2b59d0,s_GU_02_8c141df2,ar6,ar7);
      ar4[0x2d] = uVar1;
      break;
    case 1:
      uVar1 = pack_acquire_entry_handle(0x8c2b59d0,s_GU_04_8c141df8,ar6,ar7);
      ar4[0x2d] = uVar1;
      break;
    case 2:
      uVar1 = pack_acquire_entry_handle(0x8c2b59d0,s_GU_06_8c141dfe,ar6,ar7);
      ar4[0x2d] = uVar1;
      break;
    case 3:
      uVar1 = pack_acquire_entry_handle(0x8c2b59d0,s_GU_07_8c141e04,ar6,ar7);
      ar4[0x2d] = uVar1;
      break;
    case 4:
      goto switchD_8c0fb390_caseD_4;
    }
  }
  else {
switchD_8c0fb390_caseD_4:
    uVar1 = pack_acquire_entry_handle(0x8c2b59d0,s_GU_09_8c141e0a,ar6,ar7);
    ar4[0x2d] = uVar1;
  }
  if ((int)ar4[0x2d] < 0) {
    uVar1 = s_ERROR_0fb0de(ar4,ar4[0x22] + 0x28,ar6,ar7);
    return uVar1;
  }
LAB_8c0fb436:
  FUN_8c021d90(0x8c2b59d0,ar4[0x2d],*(undefined4 *)(*(int *)(ar4[4] + 0x40) + 0xc0),0);
  *ar4 = 7;
  return 7;
}

__asm__(".globl _FUN_8c0fb268\n.set _FUN_8c0fb268, _FUN_8c0fb268_def\n");
