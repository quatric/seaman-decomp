#include "../decls.h"
undefined4 FUN_8c0366f0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a4;
  undefined4 a6;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    a6 = 5;
    uVar1 = s_Shell_0fef9c(0x8c3eb324,6,5,ar7);
    *(undefined4 *)(0x111c + ar4 + iVar2 * 4) = uVar1;
    a4 = *(int *)(0x111c + ar4 + iVar2 * 4);
    (**(code **)(*(int *)(a4 + 8) + 0x54))(a4,0x8c3eb324,a6,ar7);
    uVar1 = (*(code *)(&s_CItemGLoader_RegistToLoad_0fed74))
                      (*(undefined4 *)(0x7d0 + ar5),
                       *(undefined4 *)(0x111c + ar4 + iVar2 * 4),0,ar7);
    *(undefined4 *)(0x1134 + ar4 + iVar2 * 4) = uVar1;
  }
  return 6;
}

__asm__(".globl _FUN_8c0366f0\n.set _FUN_8c0366f0, _FUN_8c0366f0_def\n");
