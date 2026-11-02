#include "../decls.h"
undefined4 FUN_8c260198_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 ar4_00;
  int ar5_00;
  int d;
  int iVar7;
  
  d = *(int *)(ar4 + 0x60);
  iVar4 = *(int *)(ar4 + 0x5c);
  ar5_00 = *(int *)(ar4 + 0x40);
  iVar5 = d + *(int *)(ar4 + 0x78) + -1;
  iVar7 = *(int *)(ar4 + 0x70);
  ar4_00 = *(undefined4 *)(ar4 + 100);
  uVar6 = *(undefined4 *)(ar4 + 0x44);
  iVar1 = libgcc_divide_helper_010468(iVar5,d);
  iVar2 = libgcc_divide_helper_010614(iVar5,d);
  iVar5 = get_field_10_264ff8(*(undefined4 *)(ar4 + 8),iVar5,ar6,ar7);
  iVar3 = libgcc_divide_helper_010468(d * iVar5,*(undefined4 *)(ar4 + 0x58));
  if (iVar1 <= iVar5) {
    iVar3 = iVar3 - ((d - iVar2) + -1);
  }
  iVar7 = iVar7 + iVar3;
  *(int *)(ar4 + 0xa0) = iVar3;
  *(int *)(ar4 + 0xa4) = iVar4 * iVar5;
  if (ar5_00 <= iVar7) {
    iVar7 = iVar7 - ar5_00;
    if (*(int *)(ar4 + 0x58) == 2) {
      uVar6 = FUN_8c26014c(ar4_00,ar5_00,uVar6,iVar7);
      return uVar6;
    }
    uVar6 = FUN_8c260180(ar4_00,ar5_00,uVar6,iVar7);
    return uVar6;
  }
  return 0xa4;
}

__asm__(".globl _FUN_8c260198\n.set _FUN_8c260198, _FUN_8c260198_def\n");
