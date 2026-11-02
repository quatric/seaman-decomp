#include "../decls.h"
uint FUN_8c21849c_def(short *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint ar5_00;
  uint unaff_r12;
  int iVar13;
  
  iVar4 = 0x8c4ab158;
  piVar3 = 0x8c4c0fa0;
  ar5_00 = ar5;
  while( true ) {
    puVar5 = 0x8c4c0fa4;
    uVar12 = (uint)*ar4;
    if (uVar12 == (int)0xff) break;
    uVar1 = ar4[1];
    sVar2 = ar4[2];
    iVar13 = (int)ar4[3];
    if ((0x8000 & uVar12) == 0) {
      *piVar3 = 0;
      *puVar5 = 0;
    }
    uVar6 = 0xe0000000;
    uVar10 = 0xffff7fff;
    *(int *)(iVar4 + 0x14) = iVar13;
    puVar7 = 0xff00003c;
    unaff_r12 = uVar12 & uVar10;
    *(short **)(iVar4 + 0x18) = ar4 + 4;
    uVar12 = 0x3ffffff;
    uVar10 = sVar2 * 0x10 + ar5;
    *(uint *)(iVar4 + 0x1c) = uVar10;
    puVar8 = 0xff000038;
    *(uint *)(iVar4 + 0x20) = uVar12 & uVar10 | uVar6;
    piVar9 = 0x8c4aa518;
    uVar12 = uVar10 >> 0x18 & 0x1c;
    *puVar7 = uVar12;
    *puVar8 = uVar12;
    *piVar9 = *piVar9 + iVar13;
    switch(unaff_r12 & 0xff) {
    case 0x20:
      iVar11 = FUN_8c217618(0x8c4ab158,ar5_00,ar6,ar7);
      break;
    case 0x21:
      iVar11 = FUN_8c21768c(0x8c4ab158,ar5_00,ar6,ar7);
      break;
    case 0x22:
      iVar11 = FUN_8c217744(0x8c4ab158,ar5_00,ar6,ar7);
      break;
    case 0x23:
      iVar11 = FUN_8c21782c(0x8c4ab158,ar5_00,ar6,ar7);
      break;
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
      iVar11 = FUN_8c2177b8(0x8c4ab158,ar5_00,ar6,ar7);
      break;
    case 0x28:
      iVar11 = FUN_8c2178a0(0x8c4ab158,ar5_00,ar6,ar7);
      break;
    case 0x29:
      iVar11 = FUN_8c217924(0x8c4ab158,ar5_00,ar6,ar7);
      break;
    case 0x2a:
      iVar11 = FUN_8c217aa4(0x8c4ab158,ar5_00,ar6,ar7);
      unaff_r12 = 0x23;
      break;
    case 0x2b:
    case 0x2d:
    case 0x2e:
    case 0x2f:
      iVar11 = FUN_8c2179e4(0x8c4ab158,ar5_00,ar6,ar7);
      break;
    case 0x2c:
      ar5_00 = unaff_r12;
      iVar11 = FUN_8c217b18(0x8c4ab158,unaff_r12,ar6,ar7);
      break;
    case 0x30:
      iVar11 = FUN_8c217c20(0x8c4ab158,ar5_00,ar6,ar7);
      break;
    case 0x31:
    case 0x32:
      iVar11 = FUN_8c217d1c(0x8c4ab158,ar5_00,ar6,ar7);
      break;
    default:
      iVar11 = 0;
    }
    uVar12 = 0xff00;
    *piVar3 = *piVar3 + iVar11;
    if (((uVar12 & unaff_r12) == (int)0x200) || ((unaff_r12 & 0xff) != 0x2c)) {
      *(undefined4 *)0x8c4c0fa4 = *(undefined4 *)0x8c4c0fa4 + iVar13;
    }
    ar4 = ar4 + 4 + (uint)uVar1 * 2 + -2;
  }
  return unaff_r12;
}

__asm__(".globl _FUN_8c21849c\n.set _FUN_8c21849c, _FUN_8c21849c_def\n");
