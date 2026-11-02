#include "../decls.h"
undefined4 FUN_8c111e72_def(int ar4,int ar5,int ar6,uint ar7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int ar6_00;
  uint ar5_00;
  int iVar5;
  
  iVar4 = ar5 * 4;
  ar5_00 = *(uint *)(*(int *)(ar4 + 0x2c) + iVar4);
  if (*(int *)(*(int *)(ar4 + 0x40) + iVar4) == *(int *)(ar4 + 0x3c)) {
    if ((*(int *)(ar4 + 0x38) != 0) && (ar5_00 != 0)) {
      FUN_8c111208(ar4,ar5,0,ar7);
    }
  }
  else if (ar7 <= *(uint *)(ar4 + 8)) {
    iVar5 = ar7 * *(ushort *)(ar4 + 0xc);
    uVar1 = ar5_00;
    iVar2 = iVar5;
    uVar3 = ar7;
    if (ar5_00 < *(uint *)(ar4 + 0x24)) {
      if (iVar5 + ar5_00 <= *(uint *)(ar4 + 0x24)) {
        memmove(ar6,ar5_00,iVar5,ar7);
        *(int *)(*(int *)(ar4 + 0x2c) + iVar4) = *(int *)(*(int *)(ar4 + 0x2c) + iVar4) + iVar5;
LAB_8c111f76:
        *(uint *)(*(int *)(ar4 + 0x40) + iVar4) = *(int *)(*(int *)(ar4 + 0x40) + iVar4) + ar7;
        if (*(uint *)(ar4 + 0x28) == ar5_00) {
          FUN_8c111342(ar4,uVar1,iVar2,uVar3,ar5);
        }
        if (*(int *)(ar4 + 0x38) != 0) {
          FUN_8c111208(ar4,ar5,ar7,uVar3);
        }
        return 1;
      }
    }
    else if ((ar5_00 + iVar5) - *(int *)(ar4 + 0x10) <= *(uint *)(ar4 + 0x24)) {
      if (*(uint *)(ar4 + 0x20) < iVar5 + ar5_00) {
        ar6_00 = *(int *)(ar4 + 0x20) - ar5_00;
        memmove(ar6,ar5_00,ar6_00,ar7);
        iVar5 = iVar5 - ar6_00;
        uVar1 = *(uint *)(ar4 + 0x1c);
        iVar2 = iVar5;
        memmove(ar6 + ar6_00,uVar1,iVar5,uVar3);
        *(int *)(*(int *)(ar4 + 0x2c) + iVar4) = iVar5 + *(int *)(ar4 + 0x1c);
      }
      else {
        memmove(ar6,ar5_00,iVar5,ar7);
        *(int *)(*(int *)(ar4 + 0x2c) + iVar4) = *(int *)(*(int *)(ar4 + 0x2c) + iVar4) + iVar5;
        if (*(int *)(*(int *)(ar4 + 0x2c) + iVar4) == *(int *)(ar4 + 0x20)) {
          *(undefined4 *)(*(int *)(ar4 + 0x2c) + iVar4) = *(undefined4 *)(ar4 + 0x1c);
        }
      }
      goto LAB_8c111f76;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c111e72\n.set _FUN_8c111e72, _FUN_8c111e72_def\n");
