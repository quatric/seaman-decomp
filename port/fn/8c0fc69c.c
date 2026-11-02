#include "../decls.h"
undefined4 FUN_8c0fc69c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_r14;
  
  iVar4 = *(int *)(ar4 + 0x88);
  for (iVar5 = 0; iVar5 < *(int *)(iVar4 + 0x68); iVar5 = iVar5 + 1) {
    unaff_r14 = 0;
    iVar6 = iVar4 + iVar5 * 0x2c;
    iVar3 = iVar6 + 0x70;
    iVar1 = FUN_8c0fcd2c(ar4,iVar3,ar6,ar7);
    if (*(char *)(iVar6 + 0x74) < '\x01') {
      iVar3 = FUN_8c013bdc(iVar6 + 0x78,iVar3,ar6,ar7);
    }
    else {
      iVar3 = FUN_8c0fcd2c(ar4,iVar6 + 0x74,ar6,ar7);
    }
    iVar6 = *(int *)(iVar6 + 0x6c);
    if ((iVar6 < 6) && (-1 < iVar6)) {
                    
      switch(iVar6) {
      case 0:
        if (iVar1 == iVar3) {
          unaff_r14 = 1;
        }
        break;
      case 1:
        if (iVar1 != iVar3) {
          unaff_r14 = 1;
        }
        break;
      case 2:
        if (iVar1 < iVar3) {
          unaff_r14 = 1;
        }
        break;
      case 3:
        if (iVar1 <= iVar3) {
          unaff_r14 = 1;
        }
        break;
      case 4:
        if (iVar3 < iVar1) {
          unaff_r14 = 1;
        }
        break;
      case 5:
        if (iVar3 <= iVar1) {
          unaff_r14 = 1;
        }
      }
    }
    if (unaff_r14 == 0) break;
  }
  if (unaff_r14 == 1) {
    uVar2 = s_ERROR_0fb0de(ar4,iVar4 + 0x28,ar6,ar7);
  }
  else {
    uVar2 = s_ERROR_0fb0de(ar4,iVar4 + 0x48,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0fc69c\n.set _FUN_8c0fc69c, _FUN_8c0fc69c_def\n");
