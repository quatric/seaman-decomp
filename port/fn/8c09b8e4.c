#include "../decls.h"
int s_GRAPHICS_MUSHROOMERLINE_09b8e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *ar5_00;
  undefined4 uVar2;
  code *ar6_00;
  int iVar3;
  undefined4 ar7_00;
  uint in_fr1;
  ulonglong uVar4;
  char cVar5;
  
  cVar5 = '\0';
  ar7_00 = 0;
  uVar2 = 1;
  uVar1 = 0;
  FUN_8c0254d0(ar4,0,1,0,0,ar5,0x8c284a8c,0x8c284bbc,PTR_s_GRAPHICS_MUSHROOMERLINE_8c13aa6c);
  *(undefined **)(ar4 + 8) = &DAT_8c12a990;
  FUN_8c016fcc(ar4 + 0x490,uVar1,uVar2,ar7_00);
  FUN_8c010120(ar4 + 0x544,Vec3_ctor_zero,Vec3_dtor,0x10,8);
  FUN_8c010120(ar4 + 0x5c4,Vec3_ctor_zero,Vec3_dtor,0x10,8);
  uVar2 = 0x10;
  ar6_00 = Vec3_dtor;
  ar5_00 = Vec3_ctor_zero;
  FUN_8c010120(ar4 + 0x644,Vec3_ctor_zero,Vec3_dtor,0x10,8);
  FUN_8c02ff6c(ar4 + 0x6e4,ar5_00,ar6_00,uVar2);
  FUN_8c030fa0(ar4 + 0x780,ar5_00,ar6_00,uVar2);
  FUN_8c09b508(ar4 + 0x9a4,ar5_00,ar6_00,uVar2);
  FUN_8c014334(ar4 + 0xc,ar5_00,ar6_00,uVar2,s_MushroomerEgg_8c13aabd);
  *(undefined1 *)(ar4 + 0x6e0) = 0xff;
  iVar3 = ar4 + 0x490;
  uVar1 = *(undefined4 *)(*(int *)(ar4 + 0x328) + 0xb4);
  FUN_8c0f532c(ar4,uVar1,iVar3,uVar2);
  FUN_8c027224(ar4 + 0x780,uVar1,iVar3,uVar2,ar5);
  if (cVar5 != '\0') {
    in_fr1 = 0x40000000;
  }
  (**(code **)(*(int *)(ar4 + 0xa8) + 0x28))((int *)(ar4 + 0xa8),ar4 + 0x30,iVar3,uVar2);
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    *(undefined4 *)(ar4 + iVar3 * 4 + 0x524) = 0;
  }
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  *(int *)(ar4 + 0x308) = ar4 + 0x6e4;
  *(int *)(ar4 + 0x30c) = ar4 + 0x780;
  if (cVar5 == '\0') {
    *(undefined4 *)(ar4 + 0x6c4) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x6c4) = (ulonglong)in_fr1;
  }
  *(undefined1 *)(ar4 + 0x9a0) = 0;
  if (cVar5 == '\0') {
    *(undefined4 *)(ar4 + 0x6c8) = 0;
    *(undefined4 *)(ar4 + 0x6cc) = 0x3e4ccccd;
    uVar4 = CONCAT44(0x3dcccccd,in_fr1);
    *(undefined4 *)(ar4 + 0x6d0) = 0x3dcccccd;
  }
  else {
    *(ulonglong *)(ar4 + 0x6c8) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0x6cc) = 0x6d03e4ccccd;
    uVar4 = 0x6d43dcccccd;
    *(undefined8 *)(ar4 + 0x6d0) = 0x6d43dcccccd;
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(ar4 + 0x6d4) = 0;
    *(undefined4 *)(ar4 + 0x6d8) = 0x3e4ccccd;
    *(undefined4 *)(ar4 + 0x6dc) = 0x3dcccccd;
  }
  else {
    *(ulonglong *)(ar4 + 0x6d4) = uVar4 & 0xffffffff;
    *(undefined8 *)(ar4 + 0x6d8) = 0x6d03e4ccccd;
    *(undefined8 *)(ar4 + 0x6dc) = 0x6d43dcccccd;
  }
  *(undefined4 *)(ar4 + 0x9d4) = 0;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_MUSHROOMERLINE_09b8e8\n.set _s_GRAPHICS_MUSHROOMERLINE_09b8e8, _s_GRAPHICS_MUSHROOMERLINE_09b8e8_def\n");
