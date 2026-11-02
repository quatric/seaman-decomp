#include "../decls.h"
uint FUN_8c2345c8_def(undefined4 ar4,uint ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  undefined1 *a7;
  float fVar2;
  float fVar3;
  int a4;
  int a5;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  double dVar4;
  
  a7 = &DAT_8c4aa3d4;
  DAT_8c277b10 = 0xfffffffe;
  _DAT_8c4aa3d4 = *(uint *)(_DAT_8c4aabdc + 8);
  _DAT_8c4aa3dc = _DAT_8c4aa3d4 & 0xfc000000;
  _DAT_8c4aa3d8 = _DAT_8c4aa3d4 >> 0x18 & 0x1c;
  _DAT_8c4aa3d0 = (undefined4 *)((_DAT_8c4aa3d4 & 0x3ffffff | 0xe0000000) + 0x10);
  _DAT_ff000038 = _DAT_8c4aa3d8;
  _DAT_ff00003c = _DAT_8c4aa3d8;
  *_DAT_8c4aa3d0 = _DAT_8c4aa390;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = _DAT_8c4aa3c0;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = _DAT_8c4aa3c4;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = _DAT_8c4aa3cc;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = _DAT_8c4aa3c8;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + 8;
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(_DAT_8c4aa394,(float)(int)(short)((uint)ar4 >> 0x10));
  }
  else {
    dVar4 = (double)CONCAT44((*(uint *)0x8c4aa398),_DAT_8c4aa394);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = (float)((ulonglong)dVar4 >> 0x20);
    fVar2 = SUB84(dVar4,0) * fVar3;
    dVar4 = (double)CONCAT44(fVar3,fVar2);
    a4 = (int)fVar2;
  }
  else {
    dVar4 = dVar4 * dVar4;
    a4 = (int)dVar4;
  }
  fVar2 = (float)((ulonglong)dVar4 >> 0x20);
  dVar4 = (double)CONCAT44(fVar2,(float)(int)(short)ar4);
  if (in_FPSCR_PR == '\0') {
    fVar3 = (float)(int)(short)ar4 * fVar2;
    dVar4 = (double)CONCAT44(fVar2,fVar3);
    a5 = (int)fVar3;
  }
  else {
    dVar4 = dVar4 * dVar4;
    a5 = (int)dVar4;
  }
  while (ar6 = ar6 + -1, -1 < ar6) {
    fVar2 = SUB84(dVar4,0);
    uVar1 = -ar6;
    if ((int)uVar1 < 0) {
      uVar1 = ar5 >> (~uVar1 & 0x1f) + 1;
    }
    else {
      uVar1 = ar5 << (uVar1 & 0x1f);
    }
    FUN_8c2340a0(a4,a5,(uVar1 & 1) + 0x30,a7);
    if (in_FPSCR_SZ == '\0') {
      fVar2 = _DAT_8c4aa394;
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = (float)(int)(short)a4 + fVar2;
      dVar4 = (double)CONCAT44(fVar3,fVar2);
      a4 = (int)fVar3;
    }
    else {
      dVar4 = (double)(int)(short)a4;
      dVar4 = dVar4 + dVar4;
      a4 = (int)dVar4;
    }
  }
  uVar1 = (uint)_DAT_8c4aa3d0 & 0x3ffffff | _DAT_8c4aa3dc;
  *(uint *)(_DAT_8c4aabdc + 8) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c2345c8\n.set _FUN_8c2345c8, _FUN_8c2345c8_def\n");
