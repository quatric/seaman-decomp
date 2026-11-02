#include "../decls.h"
undefined4 FUN_8c08ab58_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a4;
  undefined4 a6;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    if (*(undefined4 *)0x8c431a54 == 0) {
      *(undefined4 *)0x8c431a54 = 1;
      a6 = 0x19;
      uVar1 = s_Shell_0fef9c(0x8c3eb324,0xc,0x19,ar7);
      *(undefined4 *)(0x8ec + ar4 + iVar2 * 4) = uVar1;
    }
    else {
      a6 = 0x17;
      uVar1 = s_Shell_0fef9c(0x8c3eb324,0xb,0x17,ar7);
      *(undefined4 *)(0x8ec + ar4 + iVar2 * 4) = uVar1;
    }
    a4 = *(int *)(0x8ec + ar4 + iVar2 * 4);
    (**(code **)(*(int *)(a4 + 8) + 0x54))(a4,0x8c3eb324,a6,ar7);
    uVar1 = (*(code *)(&s_CItemGLoader_RegistToLoad_0fed74))
                      (*(undefined4 *)(0x7d0 + ar6),
                       *(undefined4 *)(0x8ec + ar4 + iVar2 * 4),0,ar7);
    *(undefined4 *)(0x8f4 + ar4 + iVar2 * 4) = uVar1;
  }
  return 2;
}

__asm__(".globl _FUN_8c08ab58\n.set _FUN_8c08ab58, _FUN_8c08ab58_def\n");
