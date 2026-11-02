#include "../decls.h"
undefined4 FUN_8c019384_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined4 in_fr11;
  float in_fr10;
  int iVar2;
  
  uVar1 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  *(undefined4 *)(ar4 + 0x60) = uVar1;
  *(undefined4 *)(ar4 + 0x44) = uVar1;
  *(int *)(ar4 + 100) = (int)in_dr4;
  *(int *)(ar4 + 0x48) = (int)in_dr4;
  *(undefined4 *)(ar4 + 0x68) = in_fr6;
  *(undefined4 *)(ar4 + 0x4c) = in_fr6;
  *(undefined4 *)(ar4 + 0x6c) = in_fr7;
  *(undefined4 *)(ar4 + 0x50) = in_fr7;
  *(undefined4 *)(ar4 + 0x70) = in_fr8;
  *(undefined4 *)(ar4 + 0x54) = in_fr8;
  *(undefined4 *)(ar4 + 0x74) = in_fr9;
  *(undefined4 *)(ar4 + 0x58) = in_fr9;
  iVar2 = (int)((in_fr10 * 65536.0) / 360.0);
  *(int *)(ar4 + 0x78) = iVar2;
  *(int *)(ar4 + 0x5c) = iVar2;
  *(undefined4 *)(ar4 + 0x7c) = in_fr11;
  uVar1 = FUN_8c0194c0(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c019384\n.set _FUN_8c019384, _FUN_8c019384_def\n");
