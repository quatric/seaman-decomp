#include "../decls.h"
undefined4
FUN_8c21af36_def(undefined4 ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7,undefined4 *ain0,
            undefined4 ain1)

{
  undefined4 *in_r2;
  undefined1 *a4;
  uint ar5_00;
  undefined4 uVar1;
  undefined1 *a7;
  uint *unaff_r13;
  float fVar2;
  double in_dr2;
  double dVar3;
  undefined4 in_fr5;
  float in_fr4;
  char in_T;
  bool bVar4;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  a7 = &DAT_8c4aad82;
  *in_r2 = FUN_8c21a854;
  *ain0 = ain1;
  if (in_T == '\x01') {
    _DAT_8c4aad80 = 0;
    _DAT_8c4ab0c0 = 0;
    _DAT_8c4aad82 = 0;
  }
  else {
    fVar2 = (float)(int)ar5[1];
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar2);
    if ((int)ar5[1] < 0) {
      if (in_FPSCR_PR == '\0') {
        in_dr2 = (double)CONCAT44(0x4f800000,fVar2 + 4.2949673e+09);
      }
      else {
        in_dr2 = (double)CONCAT44(0x4f800000,fVar2) + (double)CONCAT44(0x4f800000,fVar2);
      }
    }
    if (in_FPSCR_PR == '\0') {
      bVar4 = in_fr4 < SUB84(in_dr2,0);
    }
    else {
      bVar4 = (double)CONCAT44(in_fr4,in_fr5) < in_dr2;
    }
    if (!bVar4) {
      return ain0;
    }
    _DAT_8c4aad80 = *(ushort *)((int)ar5 + 10) & 0xff3f;
    _DAT_8c4ab0c0 = (ushort)((*(ushort *)((int)ar5 + 10) & 0xc0) != 0);
    _DAT_8c4aad82 = *(ushort *)(ar5 + 2);
    _DAT_8c4aad48 = *ar5;
    _DAT_8c4aad54 = (ulonglong)(uint)ar5[1] << 0x20;
  }
  if (in_FPSCR_SZ == '\0') {
    _DAT_8c4aad54 = CONCAT44(_DAT_8c4aad58,in_fr4);
  }
  else {
    _DAT_8c4aad54 = CONCAT44(in_fr4,in_fr5);
  }
  _DAT_8c4aad5c = 0;
  _DAT_8c4aad60 = 0;
  if (ar6 == (undefined4 *)0x0) {
    _DAT_8c4aad86 = 0;
    _DAT_8c4ab0c2 = 0;
    _DAT_8c4aad84 = 0;
  }
  else {
    fVar2 = (float)(int)ar6[1];
    dVar3 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar2);
    if ((int)ar6[1] < 0) {
      if (in_FPSCR_PR == '\0') {
        dVar3 = (double)CONCAT44(0x4f800000,fVar2 + 4.2949673e+09);
      }
      else {
        dVar3 = (double)CONCAT44(0x4f800000,fVar2) + (double)CONCAT44(0x4f800000,fVar2);
      }
    }
    if (in_FPSCR_PR == '\0') {
      bVar4 = in_fr4 < SUB84(dVar3,0);
    }
    else {
      bVar4 = (double)CONCAT44(in_fr4,in_fr5) < dVar3;
    }
    if (!bVar4) {
      _DAT_8c4aad60 = 0;
      _DAT_8c4aad5c = 0;
      return 0xc;
    }
    _DAT_8c4aad86 = *(undefined2 *)(ar6 + 2);
    _DAT_8c4aad84 = *(ushort *)((int)ar6 + 10) & 0xff3f;
    _DAT_8c4ab0c2 = (ushort)((*(ushort *)((int)ar6 + 10) & 0xc0) != 0);
    _DAT_8c4aad64 = *ar6;
    _DAT_8c4aad70 = (ulonglong)(uint)ar6[1] << 0x20;
    DAT_8c2759d8 = 0;
  }
  if (in_FPSCR_SZ == '\0') {
    _DAT_8c4aad70 = CONCAT44(_DAT_8c4aad74,in_fr4);
  }
  else {
    _DAT_8c4aad70 = CONCAT44(in_fr4,in_fr5);
  }
  _DAT_8c4aad78 = 0;
  _DAT_8c4aad7c = 0;
  _DAT_8c4aa36c = (&PTR_LAB_8c2759dc)[_DAT_8c4aad84];
  _DAT_8c4aa370 = FUN_8c21ee94;
  _DAT_8c4aa340 = (&PTR_LAB_8c2759a0)[_DAT_8c4aad80];
  uVar1 = 0x20;
  if ((_DAT_8c4aad82 & 1) == 0) {
    _DAT_8c4aa344 = (code *)&LAB_8c21d108;
  }
  else {
    _DAT_8c4aa344 = FUN_8c21ce02;
  }
  ar5_00 = (uint)_DAT_8c4aad82;
  if ((_DAT_8c4aad82 & 2) == 0) {
    if ((_DAT_8c4aad82 & 0x2000) == 0) {
      if ((*unaff_r13 & 0x20) == 0) {
        _DAT_8c4aa348 = (code *)&LAB_8c21d112;
      }
      else {
        _DAT_8c4aa348 = (code *)&LAB_8c21d11e;
      }
    }
    else {
      _DAT_8c4aa348 = FUN_8c21d06c;
    }
  }
  else if ((*unaff_r13 & 0x20) == 0) {
    _DAT_8c4aa348 = FUN_8c21cf22;
  }
  else {
    _DAT_8c4aa348 = FUN_8c21cfd8;
  }
  a4 = &DAT_8c4aa350;
  if ((_DAT_8c4aad82 & 4) == 0) {
    _DAT_8c4aa350 = (code *)&LAB_8c21d13c;
  }
  else {
    _DAT_8c4aa350 = FUN_8c21ce92;
  }
  _DAT_8c4ab0b4 = FUN_8c21c2ea;
  _DAT_8c4ab0b8 = FUN_8c21c398;
  FUN_8c236454(&DAT_8c4aa350,ar5_00,0x20,&DAT_8c4aad82);
  (*_DAT_8c4aa338)(a4,ar5_00,uVar1,a7);
  FUN_8c21a942(unaff_r13,ar5_00,uVar1,a7);
  uVar1 = FUN_8c2364b2(unaff_r13,ar5_00,uVar1,a7);
  return uVar1;
}

__asm__(".globl _FUN_8c21af36\n.set _FUN_8c21af36, _FUN_8c21af36_def\n");
