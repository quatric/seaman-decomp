#include "../decls.h"
undefined4 FUN_8c2567fe_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *unaff_r13;
  
  if ((unaff_r13[4] & 2U) == 0) {
    if (((unaff_r13[4] & 1U) != 0) || (*unaff_r13 == -1)) {
      _DAT_8c4aa6b4 = 1;
      return 0xffffffff;
    }
  }
  else {
    iVar1 = FUN_8c25a1ee((uint)unaff_r13[6] >> 0x10 & 0xff00,ar5,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = *unaff_r13;
      if (1 < *(ushort *)(unaff_r13 + 0x10)) {
        iVar2 = 0;
        uVar4 = 0;
        iVar3 = 0;
        while (uVar4 < DAT_8c277b0c) {
          uVar4 = uVar4 + 1;
          if (*(int *)(DAT_8c277b08 + iVar3) == iVar1) {
            *(short *)(DAT_8c277b08 + iVar2 + 0x40) = *(short *)(DAT_8c277b08 + iVar2 + 0x40) + -1;
          }
          iVar3 = iVar3 + 0x44;
          iVar2 = iVar2 + 0x44;
        }
        return 1;
      }
      FUN_8c20cf88(unaff_r13 + 6,ar5,ar6,ar7);
      if ((unaff_r13[4] & 1U) != 0) {
        iVar3 = 0;
        iVar2 = 0;
        uVar4 = 0;
        while (uVar4 < DAT_8c277b0c) {
          uVar4 = uVar4 + 1;
          if (*(int *)(DAT_8c277b08 + iVar3) == iVar1) {
            *(undefined2 *)(DAT_8c277b08 + iVar2 + 0x40) = 0;
            *(uint *)(DAT_8c277b08 + iVar2 + 0x10) =
                 *(uint *)(DAT_8c277b08 + iVar2 + 0x10) & 0xfffffff5;
          }
          iVar3 = iVar3 + 0x44;
          iVar2 = iVar2 + 0x44;
        }
        return 1;
      }
      iVar3 = 0;
      iVar2 = 0;
      for (uVar4 = 0; uVar4 < DAT_8c277b0c; uVar4 = uVar4 + 1) {
        if (*(int *)(iVar2 + DAT_8c277b08) == iVar1) {
          FUN_8c25a49e(iVar3 + DAT_8c277b08,ar5,ar6,ar7);
        }
        iVar2 = iVar2 + 0x44;
        iVar3 = iVar3 + 0x44;
      }
      return 1;
    }
    if ((short)unaff_r13[0x10] != 0) {
      *(short *)(unaff_r13 + 0x10) = (short)unaff_r13[0x10] + -1;
    }
    if ((short)unaff_r13[0x10] != 0) {
      return 1;
    }
    FUN_8c20cf88(unaff_r13 + 6,ar5,ar6,ar7);
    unaff_r13[4] = unaff_r13[4] & 0xfffffffd;
    if (DAT_8c277b10 == *unaff_r13) {
      DAT_8c277b10 = -1;
    }
    if ((unaff_r13[4] & 1U) != 0) {
      return 1;
    }
  }
  FUN_8c25a49e(unaff_r13,ar5,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c2567fe\n.set _FUN_8c2567fe, _FUN_8c2567fe_def\n");
