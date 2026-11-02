#include "../decls.h"
undefined4 FUN_8c2567f8_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((ar4[4] & 2U) == 0) {
    if (((ar4[4] & 1U) != 0) || (*ar4 == -1)) {
      _DAT_8c4aa6b4 = 1;
      return 0xffffffff;
    }
  }
  else {
    iVar1 = FUN_8c25a1ee((uint)ar4[6] >> 0x10 & 0xff00,ar5,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = *ar4;
      if (1 < *(ushort *)(ar4 + 0x10)) {
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
      FUN_8c20cf88(ar4 + 6,ar5,ar6,ar7);
      if ((ar4[4] & 1U) != 0) {
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
    if ((short)ar4[0x10] != 0) {
      *(short *)(ar4 + 0x10) = (short)ar4[0x10] + -1;
    }
    if ((short)ar4[0x10] != 0) {
      return 1;
    }
    FUN_8c20cf88(ar4 + 6,ar5,ar6,ar7);
    ar4[4] = ar4[4] & 0xfffffffd;
    if (DAT_8c277b10 == *ar4) {
      DAT_8c277b10 = -1;
    }
    if ((ar4[4] & 1U) != 0) {
      return 1;
    }
  }
  FUN_8c25a49e(ar4,ar5,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c2567f8\n.set _FUN_8c2567f8, _FUN_8c2567f8_def\n");
