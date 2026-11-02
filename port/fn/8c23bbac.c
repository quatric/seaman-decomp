#include "../decls.h"
undefined4 FUN_8c23bbac_def(double *ar4,undefined4 ar5,float *ar6,int ar7)

{
  double *ar4_00;
  int ar7_00;
  float in_fr3;
  float fVar1;
  double dVar2;
  undefined8 in_xd2;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined4 ar4_01;
  double adStack_3c [4];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  _DAT_8c4ab278 = adStack_3c;
  ar7_00 = ar7;
  _DAT_8c4ab27c = ar5;
  _DAT_8c4ab280 = ar6;
  ar4_01 = ar5;
  uStack_10 = in_PR;
  FUN_8c23ba30(_DAT_8c4ab278,ar5,ar6,ar7);
  ar4_00 = _DAT_8c4ab278 + 2;
  FUN_8c23ba30(ar4_00,ar5,ar6,ar7_00);
  if (ar7 != 0) {
    if (in_FPSCR_SZ == '\0') {
      in_fr3 = *_DAT_8c4ab280;
    }
    else {
      in_xd2 = *(undefined8 *)_DAT_8c4ab280;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar1 = _DAT_8c4ab280[1];
      fStack_1c = -in_fr3;
    }
    else {
      fStack_1c = (float)in_xd2;
      in_xd2 = *(undefined8 *)(_DAT_8c4ab280 + 1);
      fVar1 = -in_fr3;
    }
    if (in_FPSCR_SZ == '\0') {
      fStack_14 = _DAT_8c4ab280[2];
      fStack_18 = -fVar1;
    }
    else {
      fStack_18 = (float)in_xd2;
      in_xd2 = *(undefined8 *)(_DAT_8c4ab280 + 2);
      fStack_14 = -fVar1;
    }
    _DAT_8c4ab280 = &fStack_1c;
    fStack_14 = -fStack_14;
    if (in_FPSCR_SZ != '\0') {
      fStack_14 = (float)in_xd2;
      uStack_10 = (undefined4)((ulonglong)in_xd2 >> 0x20);
    }
  }
  FUN_8c23ba42(ar4_00,ar5,ar6,ar7_00);
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)_DAT_8c4ab278,_DAT_8c4c11b0);
  }
  else {
    dVar2 = *_DAT_8c4ab278;
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) + SUB84(dVar2,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 + dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)_DAT_8c4ab278 = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    *_DAT_8c4ab278 = dVar2;
  }
  FUN_8c23ba9c(ar4_01,ar5,ar6,ar7_00,ar4_01);
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)ar4,*(undefined4 *)_DAT_8c4ab278);
  }
  else {
    dVar2 = *ar4;
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) * SUB84(dVar2,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)ar4 = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    *ar4 = dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),*(undefined4 *)((int)_DAT_8c4ab278 + 4));
  }
  else {
    dVar2 = *(double *)((int)ar4 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) * SUB84(dVar2,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)ar4 + 4) = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    *(double *)((int)ar4 + 4) = dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),*(undefined4 *)(_DAT_8c4ab278 + 1));
  }
  else {
    dVar2 = ar4[1];
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) * SUB84(dVar2,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 1) = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    ar4[1] = dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0xc),
                             *(undefined4 *)((int)_DAT_8c4ab278 + 0xc));
  }
  else {
    dVar2 = *(double *)((int)ar4 + 0xc);
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) * SUB84(dVar2,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)ar4 + 0xc) = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    *(double *)((int)ar4 + 0xc) = dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x14),
                             *(undefined4 *)((int)_DAT_8c4ab278 + 0x14));
  }
  else {
    dVar2 = *(double *)((int)ar4 + 0x14);
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) * SUB84(dVar2,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)ar4 + 0x14) = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    *(double *)((int)ar4 + 0x14) = dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 3),*(undefined4 *)(_DAT_8c4ab278 + 3));
  }
  else {
    dVar2 = ar4[3];
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) * SUB84(dVar2,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 3) = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    ar4[3] = dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x1c),
                             *(undefined4 *)((int)_DAT_8c4ab278 + 0x1c));
  }
  else {
    dVar2 = *(double *)((int)ar4 + 0x1c);
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) * SUB84(dVar2,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)ar4 + 0x1c) = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    *(double *)((int)ar4 + 0x1c) = dVar2;
  }
  return 0xc;
}

__asm__(".globl _FUN_8c23bbac\n.set _FUN_8c23bbac, _FUN_8c23bbac_def\n");
