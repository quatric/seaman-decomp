#include "../decls.h"
undefined4 FUN_8c11319e_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7,int ain0)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  code *extraout_r3;
  int *piVar6;
  uint uVar7;
  int *unaff_r10;
  uint uVar8;
  int a4;
  uint uVar9;
  int *unaff_r14;
  
  uVar1 = *(ushort *)(ain0 + (int)unaff_r14);
  a4 = *unaff_r14;
  uVar8 = (uint)uVar1;
  iVar3 = (**(code **)(a4 + 0x10))(a4,(uVar8 + 1) * 4,ar6,ar7);
  if (iVar3 != 0) {
    if (uVar8 != 0) {
      ar6 = uVar8 << 2;
      memmove(iVar3,unaff_r14[0x46],ar6,ar7);
      (**(code **)(a4 + 0x18))(a4,unaff_r14[0x46],ar6,ar7);
    }
    unaff_r14[0x46] = iVar3;
    iVar3 = libgcc_divide_helper_01051c((uint)*(ushort *)(unaff_r14 + 0x79),0xc);
    piVar4 = (int *)(*extraout_r3)(a4,iVar3 * 0xc,ar6,ar7);
    if (piVar4 != (int *)0x0) {
      iVar3 = libgcc_divide_helper_01051c((uint)*(ushort *)(unaff_r14 + 0x79),0xc);
      uVar7 = iVar3 - 1;
      if (unaff_r10 != (int *)0x0) {
        *unaff_r10 = (int)piVar4;
        piVar4[1] = (int)unaff_r10;
      }
      uVar9 = 0;
      piVar6 = piVar4;
      piVar2 = piVar4;
      if (uVar7 != 0) {
        do {
          uVar9 = uVar9 + 1;
          *piVar6 = (int)(piVar2 + 3);
          piVar2[4] = (int)piVar6;
          piVar6 = piVar6 + 3;
          piVar2 = piVar2 + 3;
        } while (uVar9 < uVar7);
      }
      piVar4[uVar7 * 3] = 0;
      *(int **)(unaff_r14[0x46] + uVar8 * 4) = piVar4;
      *(ushort *)(unaff_r14 + 0x47) = uVar1 + 1;
      if (unaff_r14[0x49] == 0) {
        unaff_r14[0x49] = (int)piVar4;
      }
      unaff_r14[0x48] = (int)(piVar4 + uVar7 * 3);
      return 0x120;
    }
  }
  uVar5 = FUN_8c1204c4(unaff_r14,2,ar6,ar7);
  return uVar5;
}

__asm__(".globl _FUN_8c11319e\n.set _FUN_8c11319e, _FUN_8c11319e_def\n");
