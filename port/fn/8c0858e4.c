#include "../decls.h"
undefined4 FUN_8c0858e4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 a6;
  int iVar3;
  
  iVar2 = ar5;
  for (iVar3 = 0; iVar3 < 6; iVar3 = iVar3 + 1) {
    uVar1 = get_field_a0_035724(ar5,iVar2,ar6,ar7);
    if ((char)uVar1 == '\x02') {
      a6 = 5;
      uVar1 = s_Shell_0fef9c(0x8c3eb324,6,5,ar7);
      *(undefined4 *)(0x10a8 + ar4 + iVar3 * 4) = uVar1;
    }
    else {
      a6 = 0x15;
      uVar1 = s_Shell_0fef9c(0x8c3eb324,4,0x15,ar7);
      *(undefined4 *)(0x10a8 + ar4 + iVar3 * 4) = uVar1;
    }
    iVar2 = *(int *)(0x10a8 + ar4 + iVar3 * 4);
    (**(code **)(*(int *)(iVar2 + 8) + 0x54))(iVar2,0x8c3eb324,a6,ar7);
    ar6 = 0;
    iVar2 = *(int *)(0x10a8 + ar4 + iVar3 * 4);
    uVar1 = (*(code *)(&s_CItemGLoader_RegistToLoad_0fed74))
                      (*(undefined4 *)(0x7d0 + ar5),iVar2,0,ar7);
    *(undefined4 *)(0x10c0 + ar4 + iVar3 * 4) = uVar1;
  }
  return 6;
}

__asm__(".globl _FUN_8c0858e4\n.set _FUN_8c0858e4, _FUN_8c0858e4_def\n");
