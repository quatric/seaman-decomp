#include "../decls.h"
undefined4 FUN_8c0fb7d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x68);
  if ((iVar1 < 5) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      uVar2 = 0x43;
      break;
    case 1:
      uVar2 = 0x55;
      break;
    default:
      goto switchD_8c0fb7f2_caseD_2;
    case 4:
      uVar2 = 0x53;
    }
  }
  else {
switchD_8c0fb7f2_caseD_2:
    uVar2 = 0x4e;
  }
  uVar2 = FUN_8c0fb83c(ar4,uVar2,4,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0fb7d0\n.set _FUN_8c0fb7d0, _FUN_8c0fb7d0_def\n");
