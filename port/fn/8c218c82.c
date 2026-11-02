#include "../decls.h"
undefined4 FUN_8c218c82_def(short *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint *ar6_00;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *ar5_00;
  int iVar10;
  uint uVar11;
  
  do {
    piVar4 = 0x8c4c0fa4;
    piVar3 = 0x8c4c0fa0;
    uVar11 = (uint)*ar4;
    if (uVar11 == (int)0xff) {
      return 0;
    }
    uVar1 = ar4[1];
    sVar2 = ar4[2];
    iVar10 = (int)ar4[3];
    if ((uVar11 & 0x8000) == 0) {
      *(undefined4 *)0x8c4c0fa0 = 0;
      *piVar4 = 0;
    }
    uVar9 = 0xe0000000;
    uVar8 = 0x3ffffff;
    piVar5 = 0x8c4aa2b0;
    uVar11 = uVar11 & 0xffff7fff;
    *(undefined4 *)0x8c4aa2b0 = iVar10;
    piVar5[1] = (int)(ar4 + 4);
    ar6_00 = 0xff000038;
    uVar7 = sVar2 * 0x20 + ar5;
    piVar5[2] = uVar7;
    piVar5[3] = uVar7 & uVar8 | uVar9;
    uVar8 = uVar7 >> 0x18 & 0x1c;
    ar5_00 = ar6_00 + 1;
    *ar5_00 = uVar8;
    *ar6_00 = uVar8;
    *(undefined4 *)0x8c4aa518 = *(undefined4 *)0x8c4aa518 + iVar10;
    uVar8 = uVar11 & 0xff;
    if (*(undefined4 *)0x8c4aa554 == 0) {
      if (uVar8 == 0x29) {
        iVar6 = FUN_8c215250(0x8c4aa2b0,ar5_00,ar6_00,0x1c);
      }
      else if (uVar8 == 0x2c) {
        iVar6 = FUN_8c2157c8(0x8c4aa2b0,uVar11,ar6_00,0x1c);
      }
      else {
        if (uVar8 != 0x2a) {
          return 0xffffffff;
        }
        iVar6 = FUN_8c215374(0x8c4aa2b0,ar5_00,ar6_00,0x1c);
      }
    }
    else if (uVar8 == 0x29) {
      iVar6 = FUN_8c215674(0x8c4aa2b0,ar5_00,ar6_00,0x1c);
    }
    else if (uVar8 == 0x2c) {
      iVar6 = FUN_8c215988(0x8c4aa2b0,uVar11,ar6_00,0x1c);
    }
    else {
      if (uVar8 != 0x2a) {
        return 0xffffffff;
      }
      iVar6 = FUN_8c2154dc(0x8c4aa2b0,ar5_00,ar6_00,0x1c);
    }
    uVar9 = (uint)0x200;
    uVar11 = uVar11 & 0xff00;
    *piVar3 = *piVar3 + iVar6;
    if ((uVar11 == uVar9) || (uVar8 != 0x2c)) {
      *piVar4 = *piVar4 + iVar10;
    }
    ar4 = ar4 + 4 + (uint)uVar1 * 2 + -2;
  } while( true );
}

__asm__(".globl _FUN_8c218c82\n.set _FUN_8c218c82, _FUN_8c218c82_def\n");
