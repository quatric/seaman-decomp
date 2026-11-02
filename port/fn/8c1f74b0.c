#include "../decls.h"
undefined4 FUN_8c1f74b0_def(code *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)0x8c4748bc;
  iVar3 = ar5;
  iVar2 = FUN_8c1f6fc8(uVar4,ar5,ar6,ar7);
  puVar1 = 0x8c4748a8;
  if (iVar2 < 0) {
    *(undefined4 *)0x8c4748a8 = 9;
  }
  else if ((ar5 <= *(undefined4 *)0x8c4748c0) || (iVar3 = FUN_8c1f716c(uVar4,iVar3,ar6,ar7), iVar3 != 0)) {
    iVar3 = iVar2 * 4 + 0x18;
    FUN_8c1f6e0c(iVar3,0x8c4748c4,ar6,ar7);
    if ((((undefined1 *)3)[0x8c474a28] == '\0') || (*(undefined4 *)0x8c474a28 == '\0')) {
      *puVar1 = 3;
    }
    else {
      if (*(undefined4 *)0x8c4748c5 != '\0') {
                    
                    
        uVar4 = (*ar4)(iVar3);
        return uVar4;
      }
      *puVar1 = 4;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c1f74b0\n.set _FUN_8c1f74b0, _FUN_8c1f74b0_def\n");
