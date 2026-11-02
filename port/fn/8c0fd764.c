#include "../decls.h"
undefined4 FUN_8c0fd764_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)*ar5;
  if ((iVar2 < 0x74) && (0x40 < iVar2)) {
                    
    switch(iVar2) {
    default:
      uVar1 = ar6;
      FUN_8c0fcd2c(ar4,ar5,ar6,ar7);
      uVar1 = FUN_8c014334(ar6,ar5,uVar1,ar7,&DAT_8c141e10);
      return uVar1;
    case 0x49:
      break;
    }
  }
  uVar1 = ar6;
  iVar2 = FUN_8c013bdc(ar5,ar5,ar6,ar7);
  uVar1 = strcpy(ar6,*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + iVar2 * 4 + 0x10,uVar1,ar7,iVar2);
  return uVar1;
}

__asm__(".globl _FUN_8c0fd764\n.set _FUN_8c0fd764, _FUN_8c0fd764_def\n");
