#include "../decls.h"
undefined4 FUN_8c1f2d3e_def(int ar4,int ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  ushort *ar5_00;
  int iVar2;
  uint a6;
  uint a6_00;
  uint uVar3;
  ushort *a5;
  byte *ar5_01;
  byte *ar4_00;
  byte *ain0;
  ushort auStack_34 [2];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  
  ar4_00 = (byte *)(ar4 + 0x800);
  a6_00 = 0;
  a5 = (ushort *)(ar7 + 1);
  uStack_24 = 1;
  uVar3 = 1;
  iStack_2c = 0;
  ain0 = ar4_00;
  iStack_30 = ar5;
  iStack_28 = ar6;
  do {
    if ((ain0 <= ar4_00) || (ar5_01 = ar4_00, ain0 <= ar4_00 + (uint)*ar4_00 + (*ar4_00 & 1) + 8)) {
      iVar2 = (ar4 - (int)ar4_00) + 0x800;
      ar5_01 = (byte *)(ar4 - iVar2);
      FUN_8c1f2a5c(ar4_00,ar5_01,iVar2,ar7,ain0);
      iVar2 = FUN_8c1f19ec(iStack_30,1,ar4,ar7);
      if (iVar2 != 0) {
        return 0;
      }
      iStack_30 = iStack_30 + 1;
    }
    ar5_00 = auStack_34;
    a6 = 2;
    FUN_8c1f2a5c(ar5_01 + 6,ar5_00,2,ar7,ain0);
    if ((auStack_34[0] == uStack_24) &&
       ((uVar3 == 1 ||
        ((*ar5_01 == a6_00 &&
         (ar5_00 = a5, a6 = a6_00, iVar2 = FUN_8c1f2a74(ar5_01 + 8,a5,a6_00,ar7), iVar2 != 0)))))) {
      a5 = (ushort *)((int)a5 + a6_00);
      uStack_24 = uVar3;
      if ((char)*a5 == '\0') {
        uVar1 = FUN_8c1f1714(ar5_01 + 2,ar5_00,a6,ar7);
        return uVar1;
      }
      if (uVar3 != 1) {
        a5 = (ushort *)((int)a5 + 1);
      }
      a6_00 = FUN_8c1f2b1c(a5,&DAT_8c26c560,a6,ar7);
    }
    uVar3 = uVar3 + 1;
    iVar2 = (*ar5_01 & 1) + (uint)*ar5_01 + 8;
    iStack_2c = iStack_2c + iVar2;
    ar4_00 = ar5_01 + iVar2;
  } while (iStack_2c < iStack_28);
  return 0;
}

__asm__(".globl _FUN_8c1f2d3e\n.set _FUN_8c1f2d3e, _FUN_8c1f2d3e_def\n");
