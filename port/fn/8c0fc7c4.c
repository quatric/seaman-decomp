#include "../decls.h"
undefined4 FUN_8c0fc7c4_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int ar5_00;
  int ar5_01;
  undefined4 in_stack_ffffffc8;
  
  iVar3 = *(int *)(ar4 + 0x88);
  for (iVar4 = 0; iVar4 < *(int *)(iVar3 + 0x48); iVar4 = iVar4 + 1) {
    iVar5 = iVar3 + iVar4 * 0x2c;
    ar5_00 = iVar5 + 0x4c;
    if (*(char *)(iVar5 + 0x74) == '\0') {
      strcpy(&stack0xffffffc8,iVar5 + 0x54,ar6,ar7,in_stack_ffffffc8);
    }
    else {
      ar6 = &stack0xffffffc8;
      FUN_8c0fd764(ar4,iVar5 + 0x74,&stack0xffffffc8,ar7);
    }
    if (*(int *)(iVar5 + 0x50) == 0) {
      ar6 = &stack0xffffffc8;
      FUN_8c0fc94c(ar4,ar5_00,&stack0xffffffc8,ar7);
    }
    else {
      ar5_01 = ar5_00;
      uVar1 = FUN_8c0fcd2c(ar4,ar5_00,ar6,ar7);
      iVar2 = FUN_8c013bdc(&stack0xffffffc8,ar5_01,ar6,ar7);
      iVar5 = *(int *)(iVar5 + 0x50);
      if ((iVar5 < 6) && (0 < iVar5)) {
                    
        switch(iVar5) {
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
          ar5_01 = iVar2;
          if (iVar2 < 0) {
            ar5_01 = 1;
          }
          libgcc_divide_helper_0101e4(uVar1,ar5_01,ar6,ar7);
          break;
        case 5:
          ar5_01 = iVar2;
          if (iVar2 < 0) {
            ar5_01 = 1;
          }
          libgcc_divide_helper_01031c(uVar1,ar5_01,ar6,ar7);
        }
      }
      FUN_8c014334(&stack0xffffffc8,ar5_01,ar6,ar7,&DAT_8c141e10);
      ar6 = &stack0xffffffc8;
      FUN_8c0fc94c(ar4,ar5_00,&stack0xffffffc8,ar7);
    }
  }
  uVar1 = s_ERROR_0fb0de(ar4,iVar3 + 0x28,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fc7c4\n.set _FUN_8c0fc7c4, _FUN_8c0fc7c4_def\n");
