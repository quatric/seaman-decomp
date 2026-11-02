#include "../decls.h"
undefined4 FUN_8c112fd8_def(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *extraout_r3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = ar4[0x44];
  iVar6 = *ar4;
  iVar1 = (**(code **)(iVar6 + 0x10))(iVar6,(iVar5 + 1) * 4,ar6,ar7);
  if (iVar1 != 0) {
    if (iVar5 != 0) {
      ar6 = iVar5 << 2;
      memmove(iVar1,ar4[0x43],ar6,ar7);
      (**(code **)(iVar6 + 0x18))(iVar6,ar4[0x43],ar6,ar7);
    }
    ar4[0x43] = iVar1;
    iVar1 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x79),0x18);
    iVar1 = (*extraout_r3)(iVar6,iVar1 * 0x18,ar6,ar7);
    if (iVar1 != 0) {
      if (ar5 != 0) {
        iVar6 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x79),0x18);
        *(int *)(ar5 + 4) = iVar1;
        uVar4 = 0;
        if (iVar6 != 1) {
          do {
            iVar3 = uVar4 + 1;
            iVar2 = uVar4 * 0x18;
            uVar4 = uVar4 + 1;
            *(int *)(iVar2 + iVar1 + 4) = iVar3 * 0x18 + iVar1;
          } while (uVar4 < iVar6 - 1U);
        }
        *(undefined4 *)(uVar4 * 0x18 + iVar1 + 4) = 0;
      }
      *(int *)(ar4[0x43] + iVar5 * 4) = iVar1;
      ar4[0x44] = iVar5 + 1;
      return iVar1;
    }
  }
  FUN_8c1204c4(ar4,2,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c112fd8\n.set _FUN_8c112fd8, _FUN_8c112fd8_def\n");
