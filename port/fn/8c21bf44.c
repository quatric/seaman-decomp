#include "../decls.h"
undefined4
FUN_8c21bf44_def(undefined4 ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7,undefined4 ain0)

{
  uint uVar1;
  uint ar5_00;
  undefined4 uVar2;
  undefined1 *a7;
  uint *unaff_r12;
  float fVar3;
  float in_fr4;
  char in_T;
  
  a7 = &DAT_8c4aad82;
  if (in_T == '\x01') {
    _DAT_8c4aad80 = 0;
    _DAT_8c4ab0c0 = 0;
    _DAT_8c4aad82 = 0;
  }
  else {
    fVar3 = (float)(int)ar5[1];
    if ((int)ar5[1] < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    if (fVar3 <= in_fr4) {
      return ain0;
    }
    _DAT_8c4aad80 = *(ushort *)((int)ar5 + 10) & 0xff3f;
    _DAT_8c4ab0c0 = (ushort)((*(ushort *)((int)ar5 + 10) & 0xc0) != 0);
    _DAT_8c4aad82 = *(ushort *)(ar5 + 2);
    _DAT_8c4aad48 = *ar5;
    _DAT_8c4aad58 = ar5[1];
  }
  _DAT_8c4aad5c = 0;
  _DAT_8c4aad60 = 0;
  if (ar6 == (undefined4 *)0x0) {
    _DAT_8c4aad86 = 0;
    _DAT_8c4ab0c2 = 0;
    _DAT_8c4aad84 = 0;
  }
  else {
    fVar3 = (float)(int)ar6[1];
    if ((int)ar6[1] < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    if (fVar3 <= in_fr4) {
      _DAT_8c4aad60 = 0;
      _DAT_8c4aad5c = 0;
      _DAT_8c4aad54 = in_fr4;
      return 0xc;
    }
    _DAT_8c4aad86 = *(undefined2 *)(ar6 + 2);
    _DAT_8c4aad84 = *(ushort *)((int)ar6 + 10) & 0xff3f;
    _DAT_8c4ab0c2 = (ushort)((*(ushort *)((int)ar6 + 10) & 0xc0) != 0);
    _DAT_8c4aad64 = *ar6;
    _DAT_8c4aad74 = ar6[1];
    DAT_8c2759d8 = 0;
  }
  _DAT_8c4aad78 = 0;
  _DAT_8c4aad7c = 0;
  _DAT_8c4aa36c = (&PTR_LAB_8c2759dc)[_DAT_8c4aad84];
  _DAT_8c4aa370 = (&PTR_FUN_8c2759d0)[_DAT_8c4ab0c2];
  _DAT_8c4aa340 = (&PTR_LAB_8c2759a0)[_DAT_8c4aad80];
  uVar2 = 0x20;
  if ((_DAT_8c4aad82 & 1) == 0) {
    _DAT_8c4aa344 = FUN_8c21d108;
  }
  else {
    _DAT_8c4aa344 = FUN_8c21ce02;
  }
  ar5_00 = (uint)_DAT_8c4aad82;
  if ((_DAT_8c4aad82 & 2) == 0) {
    if ((_DAT_8c4aad82 & 0x2000) == 0) {
      if ((*unaff_r12 & 0x20) == 0) {
        _DAT_8c4aa348 = FUN_8c21d112;
      }
      else {
        _DAT_8c4aa348 = FUN_8c21d11e;
      }
    }
    else {
      _DAT_8c4aa348 = FUN_8c21d06c;
    }
  }
  else if ((*unaff_r12 & 0x20) == 0) {
    _DAT_8c4aa348 = FUN_8c21cf22;
  }
  else {
    _DAT_8c4aa348 = FUN_8c21cfd8;
  }
  if ((_DAT_8c4aad82 & 4) == 0) {
    _DAT_8c4aa350 = FUN_8c21d13c;
  }
  else {
    _DAT_8c4aa350 = FUN_8c21ce92;
  }
  uVar1 = (uint)_DAT_8c4ab0c0;
  _DAT_8c4ab0b4 = (&PTR_FUN_8c2759b4)[uVar1];
  _DAT_8c4ab0b8 = (&PTR_FUN_8c2759c4)[uVar1];
  _DAT_8c4aa368 = FUN_8c219954;
  _DAT_8c4aad54 = in_fr4;
  _DAT_8c4aad70 = in_fr4;
  FUN_8c236454(uVar1 * 4,ar5_00,0x20,&DAT_8c4aad82);
  FUN_8c21b998(unaff_r12,ar5_00,uVar2,a7);
  uVar2 = FUN_8c2364b2(unaff_r12,ar5_00,uVar2,a7);
  return uVar2;
}

__asm__(".globl _FUN_8c21bf44\n.set _FUN_8c21bf44, _FUN_8c21bf44_def\n");
