#include "../decls.h"
int FUN_8c211f40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 2;
  if (((ar4 != 1) ||
      (ar6 = _DAT_8c4aa1a8, ar7 = _DAT_8c4aa1ac,
      iVar1 = FUN_8c21092e(_DAT_8c4aa1a0,_DAT_8c4aa1a4,_DAT_8c4aa1a8,_DAT_8c4aa1ac,_DAT_8c4aa1b0),
      iVar1 == 0)) &&
     ((ar4 != 2 || (iVar1 = FUN_8c210e40(_DAT_8c4aa1a0,_DAT_8c4aa1f8,ar6,ar7), iVar1 == 0)))) {
    if (_DAT_8c4aa1bc == _DAT_8c4aa1cc) {
      uVar4 = 1;
    }
    uVar3 = 0;
    iVar1 = 0;
    if (uVar4 != 0) {
      do {
        iVar2 = FUN_8c202a80(*(undefined4 *)(&DAT_8c4aa1bc + iVar1),
                             *(undefined4 *)(&DAT_8c4aa1c0 + iVar1),
                             *(undefined4 *)(&DAT_8c4aa1c4 + iVar1),_DAT_8c4aa1b8,
                             *(undefined4 *)(&DAT_8c4aa1c8 + iVar1),ar4);
        if (iVar2 != 0) {
          return iVar2;
        }
        uVar3 = uVar3 + 1;
        iVar1 = iVar1 + 0x10;
      } while (uVar3 < uVar4);
    }
    ar6_00 = _DAT_8c4aa1b8;
    ar7_00 = _DAT_8c4aa1e4;
    iVar1 = FUN_8c20af76(_DAT_8c4aa1dc,_DAT_8c4aa1e0,_DAT_8c4aa1b8,_DAT_8c4aa1e4);
    if ((iVar1 == 0) && ((_DAT_8c4a9ef0 == 1 || (DAT_8c2758ec == 1)))) {
      _DAT_8c4a9f10 = _DAT_8c4a9f08;
      *(undefined4 *)(&DAT_8c4a9ef8 + _DAT_8c4a9f08 * 4) = 0;
      _DAT_8c4a9f20 = 1;
      uVar4 = _DAT_8c4a9f08 & 1;
      pvr_20a844(8,1,ar6_00,ar7_00);
      pvr_20a844(8,0,ar6_00,ar7_00);
      iVar2 = uVar4 * 0x20;
      pvr_20a844(0x124,*(undefined4 *)(iVar2 + -0x73b55fdc),ar6_00,ar7_00);
      pvr_20a844(300,*(undefined4 *)(iVar2 + -0x73b55fd8),ar6_00,ar7_00);
      pvr_20a844(0x128,*(undefined4 *)(iVar2 + -0x73b55fd0),ar6_00,ar7_00);
      pvr_20a844(0x130,*(undefined4 *)(iVar2 + -0x73b55fcc),ar6_00,ar7_00);
      pvr_20a844(0x164,*(undefined4 *)(iVar2 + -0x73b55fd4),ar6_00,ar7_00);
      ar5_00 = 0x80000000;
      pvr_20a844(0x144,0x80000000,ar6_00,ar7_00);
      pvr_20a876(0x144,ar5_00,ar6_00,ar7_00);
      _DAT_8c4a9f18 = 0;
      _DAT_8c4a9f14 = _DAT_8c4aa014;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c211f40\n.set _FUN_8c211f40, _FUN_8c211f40_def\n");
