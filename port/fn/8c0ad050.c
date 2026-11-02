#include "../decls.h"
undefined4 FUN_8c0ad050_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    uVar1 = s_Shell_0fef9c(0x8c3eb324,3,2,ar7);
    *(undefined4 *)(0x928 + ar4 + iVar2 * 4) = uVar1;
    uVar1 = (*(code *)(&s_CItemGLoader_RegistToLoad_0fed74))
                      (*(undefined4 *)(0x7d0 + ar5),
                       *(undefined4 *)(0x928 + ar4 + iVar2 * 4),0,ar7);
    *(undefined4 *)(0x948 + ar4 + iVar2 * 4) = uVar1;
  }
  return 8;
}

__asm__(".globl _FUN_8c0ad050\n.set _FUN_8c0ad050, _FUN_8c0ad050_def\n");
