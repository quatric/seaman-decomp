#include "../decls.h"
uint FUN_8c2566c8_def(undefined4 ar4,int ar5,uint ar6,undefined4 ar7,uint ain0)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *a4;
  uint uStack_30;
  uint uStack_28;
  int iStack_24;
  
  iStack_24 = 0;
  for (uStack_28 = 0; uStack_28 < DAT_8c277b0c; uStack_28 = uStack_28 + 1) {
    a4 = (uint *)(iStack_24 + DAT_8c277b08);
    if ((a4[4] & 2) != 0) {
      iVar1 = FUN_8c25a1ee(a4[6] >> 0x10 & 0xff00,ar5,ar6,ar7);
      FUN_8c20cf88(a4 + 6,ar5,ar6,ar7);
      if (iVar1 == 1) {
        uVar2 = *a4;
        if ((a4[4] & 1) == 0) {
          iVar1 = 0;
          iVar3 = 0;
          for (uStack_30 = 0; uStack_30 < DAT_8c277b0c; uStack_30 = uStack_30 + 1) {
            if (*(uint *)(DAT_8c277b08 + iVar3) == uVar2) {
              FUN_8c25a49e(DAT_8c277b08 + iVar1,ar5,ar6,ar7);
            }
            iVar3 = iVar3 + 0x44;
            iVar1 = iVar1 + 0x44;
          }
        }
        else {
          iVar1 = 0;
          ar6 = 0;
          ar5 = 0;
          while (ar6 < DAT_8c277b0c) {
            ar6 = ar6 + 1;
            if (*(uint *)(DAT_8c277b08 + ar5) == uVar2) {
              *(undefined2 *)(DAT_8c277b08 + iVar1 + 0x40) = 0;
              *(uint *)(DAT_8c277b08 + iVar1 + 0x10) =
                   *(uint *)(DAT_8c277b08 + iVar1 + 0x10) & 0xfffffff5;
            }
            ar5 = ar5 + 0x44;
            iVar1 = iVar1 + 0x44;
          }
        }
      }
      else {
        uVar2 = a4[4];
        a4[4] = uVar2 & 0xfffffffd;
        if ((uVar2 & 0xfffffffd) == 0) {
          FUN_8c25a49e(a4,ar5,ar6,ar7);
        }
        else {
          *(undefined2 *)(a4 + 0x10) = 0;
        }
      }
    }
    ain0 = *a4;
    if ((ain0 != 0xffffffff) && (ain0 = a4[4], (ain0 & 3) == 0)) {
      ain0 = FUN_8c25a49e(a4,ar5,ar6,ar7);
    }
    iStack_24 = iStack_24 + 0x44;
  }
  DAT_8c277b10 = 0xffffffff;
  return ain0;
}

__asm__(".globl _FUN_8c2566c8\n.set _FUN_8c2566c8, _FUN_8c2566c8_def\n");
