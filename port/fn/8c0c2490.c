#include "../decls.h"
int s_Mess_ICON00_pvr_0c2496_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 a7;
  int iVar7;
  uint in_fr1;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  double dVar11;
  ulonglong uVar12;
  char cVar13;
  char cVar14;
  undefined4 in_stack_ffffffb0;
  
  cVar14 = '\0';
  cVar13 = '\0';
  FUN_8c015224(ar4 + 4,ar5,ar6,ar7);
  FUN_8c0162f8(ar4 + 0xc,ar5,ar6,ar7);
  FUN_8c0162f8(ar4 + 0x20,ar5,ar6,ar7);
  uVar5 = 0x194;
  FUN_8c015224(ar4 + 0x194,0x194,ar6,ar7);
  FUN_8c015224(ar4 + 0x19c,uVar5,ar6,ar7);
  FUN_8c015224(ar4 + 0x1a4,uVar5,ar6,ar7);
  FUN_8c0162f8(ar4 + 0x1ac,uVar5,ar6,ar7);
  FUN_8c015224(ar4 + 700,uVar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x164) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x168) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x16c) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x170) = 0xffffffff;
  *(undefined2 *)(ar4 + 0x174) = 0;
  *(undefined2 *)(ar4 + 0x176) = 0xff;
  *(undefined2 *)(ar4 + 0x178) = 0;
  *(undefined2 *)(ar4 + 0x17a) = 0;
  *(undefined2 *)(ar4 + 0x17c) = 0xff;
  *(undefined2 *)(ar4 + 0x17e) = 0;
  *(undefined2 *)(ar4 + 0x180) = 0xff;
  *(undefined2 *)(ar4 + 0x182) = 0xff;
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x34) = 0;
    *(undefined4 *)(ar4 + 0x38) = 0x438b8000;
  }
  else {
    *(ulonglong *)(ar4 + 0x34) = (ulonglong)in_fr1;
    in_fr1 = 0x438b8000;
    *(undefined8 *)(ar4 + 0x38) = 0x43a98000438b8000;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x3c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x3c) = (ulonglong)in_fr1;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 0x44) = 0x43a98000;
  }
  else {
    *(ulonglong *)(ar4 + 0x40) = (ulonglong)in_fr1;
    in_fr1 = 0x43a98000;
    *(undefined8 *)(ar4 + 0x44) = 0x8c01631843a98000;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x48) = 0;
    *(undefined4 *)(ar4 + 0x4c) = 0x43a98000;
    *(undefined4 *)(ar4 + 0x50) = 0x438b8000;
  }
  else {
    *(ulonglong *)(ar4 + 0x48) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0x4c) = 0x8c01631843a98000;
    in_fr1 = 0x438b8000;
    *(undefined8 *)(ar4 + 0x50) = 0x43a98000438b8000;
  }
  uVar5 = 4;
  iVar6 = ar4 + 0x164;
  FUN_8c016318(ar4 + 0xc,0,iVar6,4,in_stack_ffffffb0);
  FUN_8c016324(ar4 + 0xc,ar4 + 0x174,iVar6,uVar5);
  FUN_8c015198(ar4 + 0xc,0x80000060,iVar6,uVar5,in_stack_ffffffb0);
  for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
    *(undefined4 *)(ar4 + iVar6 * 4 + 0x370) = 0xffffffff;
    *(undefined4 *)(ar4 + iVar6 * 4 + 0x29c) = 0xffffffff;
  }
  *(undefined2 *)(ar4 + 0x2ac) = 0;
  *(undefined2 *)(ar4 + 0x2ae) = 0xff;
  *(undefined2 *)(ar4 + 0x2b0) = 0;
  *(undefined2 *)(ar4 + 0x2b2) = 0;
  *(undefined2 *)(ar4 + 0x2b4) = 0xff;
  *(undefined2 *)(ar4 + 0x2b6) = 0;
  *(undefined2 *)(ar4 + 0x2b8) = 0xff;
  *(undefined2 *)(ar4 + 0x2ba) = 0xff;
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x27c) = 0;
    *(undefined4 *)(ar4 + 0x280) = 0x42800000;
  }
  else {
    *(ulonglong *)(ar4 + 0x27c) = (ulonglong)in_fr1;
    in_fr1 = 0x42800000;
    *(undefined8 *)(ar4 + 0x280) = 0x28442800000;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x284) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x284) = (ulonglong)in_fr1;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x288) = 0;
    *(undefined4 *)(ar4 + 0x28c) = 0x42800000;
  }
  else {
    *(ulonglong *)(ar4 + 0x288) = (ulonglong)in_fr1;
    in_fr1 = 0x42800000;
    *(undefined8 *)(ar4 + 0x28c) = 0x28442800000;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x290) = 0;
    *(undefined4 *)(ar4 + 0x294) = 0x42800000;
    uVar10 = CONCAT44(0x42800000,in_fr1);
    *(undefined4 *)(ar4 + 0x298) = 0x42800000;
  }
  else {
    *(ulonglong *)(ar4 + 0x290) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0x294) = 0x28442800000;
    uVar10 = 0x28442800000;
    *(undefined8 *)(ar4 + 0x298) = 0x28442800000;
  }
  uVar5 = 4;
  iVar6 = ar4 + 0x29c;
  FUN_8c016318(ar4 + 0x1ac,ar4 + 0x27c,iVar6,4,in_stack_ffffffb0);
  FUN_8c016324(ar4 + 0x1ac,ar4 + 0x2ac,iVar6,uVar5);
  FUN_8c015198(ar4 + 0x1ac,0x80000060,iVar6,uVar5,in_stack_ffffffb0);
  FUN_8c257196(ar4 + 0x240,s_Mess_ICON00_pvr_8c13caa6,0,0,in_stack_ffffffb0);
  *(int *)(ar4 + 0x24c) = ar4 + 0x240;
  *(undefined4 *)(ar4 + 0x250) = 1;
  FUN_8c257196(ar4 + 0x254,s_Mess_ICON01_pvr_8c13cab6,0,0,in_stack_ffffffb0);
  *(int *)(ar4 + 0x260) = ar4 + 0x254;
  *(undefined4 *)(ar4 + 0x264) = 1;
  a7 = 0;
  uVar5 = 0;
  FUN_8c257196(ar4 + 0x268,s_Mess_ICON02_pvr_8c13cac6,0,0,in_stack_ffffffb0);
  *(int *)(ar4 + 0x274) = ar4 + 0x268;
  *(undefined4 *)(ar4 + 0x278) = 1;
  (**(code **)(*(int *)(ar4 + 0x194) + 8))((int *)(ar4 + 0x194),ar4 + 0x24c,uVar5,a7);
  (**(code **)(*(int *)(ar4 + 0x19c) + 8))((int *)(ar4 + 0x19c),ar4 + 0x260,uVar5,a7);
  (**(code **)(*(int *)(ar4 + 0x1a4) + 8))((int *)(ar4 + 0x1a4),ar4 + 0x274,uVar5,a7);
  for (iVar6 = 0; uVar9 = (uint)uVar10, iVar6 < 8; iVar6 = iVar6 + 1) {
    if (iVar6 < 4) {
      if (iVar6 < 2) {
        iVar7 = 0;
      }
      else {
        iVar7 = 0x39;
      }
    }
    else {
      iVar7 = 100;
    }
    pdVar4 = (double *)(ar4 + iVar6 * 0x20 + 0x54);
    iVar2 = iVar6 * 0x11 + iVar7;
    if (cVar13 == '\0') {
      dVar11 = (double)CONCAT44((float)iVar2,uVar9);
    }
    else {
      dVar11 = (double)iVar2;
    }
    if (cVar14 == '\0') {
      *(int *)pdVar4 = (int)((ulonglong)dVar11 >> 0x20);
    }
    else {
      *pdVar4 = dVar11;
    }
    puVar3 = (undefined8 *)(ar4 + iVar6 * 0x20 + 0x58);
    if (cVar14 == '\0') {
      uVar8 = SUB84(dVar11,0);
      *(undefined4 *)puVar3 = 0x41a00000;
    }
    else {
      uVar8 = 0x41a00000;
      *puVar3 = 0x8000006041a00000;
    }
    pdVar4 = (double *)(ar4 + iVar6 * 0x20 + 0x5c);
    iVar2 = iVar6 * 0x11 + iVar7;
    if (cVar13 == '\0') {
      dVar11 = (double)CONCAT44((float)iVar2,uVar8);
    }
    else {
      dVar11 = (double)iVar2;
    }
    if (cVar14 == '\0') {
      *(int *)pdVar4 = (int)((ulonglong)dVar11 >> 0x20);
    }
    else {
      *pdVar4 = dVar11;
    }
    puVar1 = (ulonglong *)(ar4 + iVar6 * 0x20 + 0x60);
    if (cVar14 == '\0') {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      *puVar1 = (ulonglong)dVar11 & 0xffffffff;
    }
    pdVar4 = (double *)(ar4 + iVar6 * 0x20 + 100);
    iVar2 = iVar6 * 0x11 + 0x10 + iVar7;
    if (cVar13 == '\0') {
      dVar11 = (double)CONCAT44((float)iVar2,SUB84(dVar11,0));
    }
    else {
      dVar11 = (double)iVar2;
    }
    if (cVar14 == '\0') {
      *(int *)pdVar4 = (int)((ulonglong)dVar11 >> 0x20);
    }
    else {
      *pdVar4 = dVar11;
    }
    puVar1 = (ulonglong *)(ar4 + iVar6 * 0x20 + 0x68);
    if (cVar14 == '\0') {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      *puVar1 = (ulonglong)dVar11 & 0xffffffff;
    }
    pdVar4 = (double *)(ar4 + iVar6 * 0x20 + 0x6c);
    iVar7 = iVar6 * 0x11 + 0x10 + iVar7;
    if (cVar13 == '\0') {
      dVar11 = (double)CONCAT44((float)iVar7,SUB84(dVar11,0));
    }
    else {
      dVar11 = (double)iVar7;
    }
    if (cVar14 == '\0') {
      *(int *)pdVar4 = (int)((ulonglong)dVar11 >> 0x20);
    }
    else {
      *pdVar4 = dVar11;
    }
    puVar3 = (undefined8 *)(ar4 + iVar6 * 0x20 + 0x70);
    if (cVar14 == '\0') {
      uVar10 = CONCAT44(0x41a00000,SUB84(dVar11,0));
      *(undefined4 *)puVar3 = 0x41a00000;
    }
    else {
      uVar10 = 0x8000006041a00000;
      *puVar3 = 0x8000006041a00000;
    }
  }
  FUN_8c015198(ar4 + 0x20,0x80000060,uVar5,a7,in_stack_ffffffb0);
  for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
    *(undefined4 *)(ar4 + iVar6 * 4 + 0x154) = 0xffffffff;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x2c4) = 0;
    *(undefined4 *)(ar4 + 0x2c8) = 0x43f00000;
  }
  else {
    *(ulonglong *)(ar4 + 0x2c4) = (ulonglong)uVar9;
    uVar9 = 0x43f00000;
    *(undefined8 *)(ar4 + 0x2c8) = 0x2cc43f00000;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x2cc) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x2cc) = (ulonglong)uVar9;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x2d0) = 0;
    *(undefined4 *)(ar4 + 0x2d4) = 0x44200000;
  }
  else {
    *(ulonglong *)(ar4 + 0x2d0) = (ulonglong)uVar9;
    uVar9 = 0x44200000;
    *(undefined8 *)(ar4 + 0x2d4) = 0x2d844200000;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x2d8) = 0;
    *(undefined4 *)(ar4 + 0x2dc) = 0x44200000;
    *(undefined4 *)(ar4 + 0x2e0) = 0x43f00000;
    *(undefined4 *)(ar4 + 0x2e4) = 0x43200000;
    *(undefined4 *)(ar4 + 0x2e8) = 0x43d90000;
    *(undefined4 *)(ar4 + 0x2ec) = 0x43200000;
    *(undefined4 *)(ar4 + 0x2f0) = 0x439d8000;
    *(undefined4 *)(ar4 + 0x2f4) = 0x43f00000;
    *(undefined4 *)(ar4 + 0x2f8) = 0x439d8000;
    *(undefined4 *)(ar4 + 0x2fc) = 0x43f00000;
    *(undefined4 *)(ar4 + 0x300) = 0x43d90000;
    *(undefined4 *)(ar4 + 0x330) = 0x43c80000;
    *(undefined4 *)(ar4 + 0x334) = 0x43de8000;
    *(undefined4 *)(ar4 + 0x338) = 0x43c80000;
    *(undefined4 *)(ar4 + 0x33c) = 0x43c58000;
    *(undefined4 *)(ar4 + 0x340) = 0x441a0000;
    *(undefined4 *)(ar4 + 0x344) = 0x43c58000;
    *(undefined4 *)(ar4 + 0x348) = 0x441a0000;
    *(undefined4 *)(ar4 + 0x34c) = 0x43de8000;
  }
  else {
    *(ulonglong *)(ar4 + 0x2d8) = (ulonglong)uVar9;
    *(undefined8 *)(ar4 + 0x2dc) = 0x2d844200000;
    *(undefined8 *)(ar4 + 0x2e0) = 0x2cc43f00000;
    *(undefined8 *)(ar4 + 0x2e4) = 0x2e843200000;
    *(undefined8 *)(ar4 + 0x2e8) = 0x2ec43d90000;
    *(undefined8 *)(ar4 + 0x2ec) = 0x2e843200000;
    *(undefined8 *)(ar4 + 0x2f0) = 0x2f4439d8000;
    *(undefined8 *)(ar4 + 0x2f4) = 0x2cc43f00000;
    *(undefined8 *)(ar4 + 0x2f8) = 0x2f4439d8000;
    *(undefined8 *)(ar4 + 0x2fc) = 0x2cc43f00000;
    *(undefined8 *)(ar4 + 0x300) = 0x2ec43d90000;
    *(undefined8 *)(ar4 + 0x330) = 0x33443c80000;
    *(undefined8 *)(ar4 + 0x334) = 0x33843de8000;
    *(undefined8 *)(ar4 + 0x338) = 0x33443c80000;
    *(undefined8 *)(ar4 + 0x33c) = 0x34043c58000;
    *(undefined8 *)(ar4 + 0x340) = 0x344441a0000;
    *(undefined8 *)(ar4 + 0x344) = 0x34043c58000;
    *(undefined8 *)(ar4 + 0x348) = 0x344441a0000;
    uVar9 = 0x43de8000;
    *(undefined8 *)(ar4 + 0x34c) = 0x33843de8000;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x350) = 0;
    *(undefined4 *)(ar4 + 0x354) = 0x43000000;
  }
  else {
    *(ulonglong *)(ar4 + 0x350) = (ulonglong)uVar9;
    uVar9 = 0x43000000;
    *(undefined8 *)(ar4 + 0x354) = 0x35843000000;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x358) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x358) = (ulonglong)uVar9;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x35c) = 0;
    uVar12 = CONCAT44(0x437f0000,uVar9);
    *(undefined4 *)(ar4 + 0x360) = 0x437f0000;
  }
  else {
    *(ulonglong *)(ar4 + 0x35c) = (ulonglong)uVar9;
    uVar12 = 0x364437f0000;
    *(undefined8 *)(ar4 + 0x360) = 0x364437f0000;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x364) = 0;
    *(undefined4 *)(ar4 + 0x368) = 0x437f0000;
    *(undefined4 *)(ar4 + 0x36c) = 0x43000000;
  }
  else {
    *(ulonglong *)(ar4 + 0x364) = uVar12 & 0xffffffff;
    *(undefined8 *)(ar4 + 0x368) = 0x364437f0000;
    *(undefined8 *)(ar4 + 0x36c) = 0x35843000000;
  }
  *(undefined2 *)(ar4 + 0x380) = 0;
  FUN_8c0c2c54(ar4,0x34c,0x33c,0x338);
  return ar4;
}

__asm__(".globl _s_Mess_ICON00_pvr_0c2496\n.set _s_Mess_ICON00_pvr_0c2496, _s_Mess_ICON00_pvr_0c2496_def\n");
