#include "../decls.h"
undefined4 FUN_8c11318e_def(int *ar4,int *ar5,int ar6,undefined4 ar7)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  code *extraout_r3;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = *(ushort *)(ar4 + 0x47);
  iVar9 = *ar4;
  uVar8 = (uint)uVar1;
  iVar3 = (**(code **)(iVar9 + 0x10))(iVar9,(uVar8 + 1) * 4,0);
  if (iVar3 != 0) {
    if (uVar8 != 0) {
      ar6 = uVar8 << 2;
      memmove(iVar3,ar4[0x46],ar6,ar7);
      (**(code **)(iVar9 + 0x18))(iVar9,ar4[0x46]);
    }
    ar4[0x46] = iVar3;
    iVar3 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x79),0xc);
    piVar4 = (int *)(*extraout_r3)(iVar9,iVar3 * 0xc);
    if (piVar4 != (int *)0x0) {
      iVar3 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x79),0xc);
      uVar7 = iVar3 - 1;
      if (ar5 != (int *)0x0) {
        *ar5 = (int)piVar4;
        piVar4[1] = (int)ar5;
      }
      uVar10 = 0;
      piVar6 = piVar4;
      piVar2 = piVar4;
      if (uVar7 != 0) {
        do {
          uVar10 = uVar10 + 1;
          *piVar6 = (int)(piVar2 + 3);
          piVar2[4] = (int)piVar6;
          piVar6 = piVar6 + 3;
          piVar2 = piVar2 + 3;
        } while (uVar10 < uVar7);
      }
      piVar4[uVar7 * 3] = 0;
      *(int **)(ar4[0x46] + uVar8 * 4) = piVar4;
      *(ushort *)(ar4 + 0x47) = uVar1 + 1;
      if (ar4[0x49] == 0) {
        ar4[0x49] = (int)piVar4;
      }
      ar4[0x48] = (int)(piVar4 + uVar7 * 3);
      return 0x120;
    }
  }
  uVar5 = FUN_8c1204c4(ar4,2,ar6,ar7);
  return uVar5;
}

__asm__(".globl _FUN_8c11318e\n.set _FUN_8c11318e, _FUN_8c11318e_def\n");
