#include "../decls.h"
undefined4 FUN_8c112b6e_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int ar6_00;
  uint uVar5;
  int iVar6;
  int a4;
  
  iVar6 = ar4[0x17];
  a4 = *ar4;
  iVar2 = (**(code **)(a4 + 0x10))(a4,(iVar6 + 1) * 4,ar6,ar7);
  if (iVar2 != 0) {
    if (iVar6 != 0) {
      ar6_00 = iVar6 << 2;
      memmove(iVar2,ar4[0x16],ar6_00,ar7);
      (**(code **)(a4 + 0x18))(a4,ar4[0x16],ar6_00,ar7);
    }
    ar4[0x16] = iVar2;
    ar6 = 0x20;
    iVar2 = (**(code **)(a4 + 0x14))
                      (a4,(uint)(*(ushort *)((int)0x1e4 + (int)ar4) >> 5),0x20,ar7);
    if (iVar2 != 0) {
      if (ar5 != 0) {
        uVar1 = *(ushort *)((int)0x1e4 + (int)ar4);
        *(int *)(ar5 + 0x18) = iVar2;
        uVar5 = (uint)(uVar1 >> 5);
        uVar3 = 0;
        uVar4 = uVar3;
        if (uVar5 != 1) {
          do {
            uVar3 = uVar4 + 1;
            *(uint *)(uVar4 * 0x20 + iVar2 + 0x18) = (uVar4 + 1) * 0x20 + iVar2;
            uVar4 = uVar3;
          } while (uVar3 < uVar5 - 1);
        }
        *(undefined4 *)(uVar3 * 0x20 + iVar2 + 0x18) = 0;
      }
      *(int *)(ar4[0x16] + iVar6 * 4) = iVar2;
      ar4[0x17] = iVar6 + 1;
      return iVar2;
    }
  }
  FUN_8c1204c4(ar4,2,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c112b6e\n.set _FUN_8c112b6e, _FUN_8c112b6e_def\n");
