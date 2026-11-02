#include "../decls.h"
uint FUN_8c2346ce_def(undefined4 ar4,uint ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  undefined1 *a7;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  short sVar7;
  int a4;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  double dVar6;
  
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
    dVar6 = (double)CONCAT44(_DAT_8c4aa394,(float)(int)(short)((uint)ar4 >> 0x10));
  }
  else {
    dVar6 = (double)CONCAT44((*(uint *)0x8c4aa398),_DAT_8c4aa394);
  }
  iVar2 = ar6 + -1;
  iVar3 = iVar2 * 4;
  if (in_FPSCR_PR == '\0') {
    fVar5 = (float)((ulonglong)dVar6 >> 0x20);
    fVar4 = SUB84(dVar6,0) * fVar5;
    dVar6 = (double)CONCAT44(fVar5,fVar4);
    a4 = (int)fVar4;
  }
  else {
    dVar6 = dVar6 * dVar6;
    a4 = (int)dVar6;
  }
  fVar4 = (float)((ulonglong)dVar6 >> 0x20);
  dVar6 = (double)CONCAT44(fVar4,(float)(int)(short)ar4);
  if (in_FPSCR_PR == '\0') {
    fVar5 = (float)(int)(short)ar4 * fVar4;
    dVar6 = (double)CONCAT44(fVar4,fVar5);
    sVar7 = (short)(int)fVar5;
  }
  else {
    dVar6 = dVar6 * dVar6;
    sVar7 = (short)(int)dVar6;
  }
  while (-1 < iVar2) {
    fVar4 = SUB84(dVar6,0);
    uVar1 = -iVar3;
    if ((int)uVar1 < 0) {
      uVar1 = ar5 >> (~uVar1 & 0x1f) + 1;
    }
    else {
      uVar1 = ar5 << (uVar1 & 0x1f);
    }
    FUN_8c2340a0(a4,(int)sVar7,(int)(char)(&DAT_8c277a90)[uVar1 & 0xf],a7);
    if (in_FPSCR_SZ == '\0') {
      fVar4 = _DAT_8c4aa394;
    }
    iVar2 = iVar2 + -1;
    if (in_FPSCR_PR == '\0') {
      fVar5 = (float)(int)(short)a4 + fVar4;
      dVar6 = (double)CONCAT44(fVar5,fVar4);
      a4 = (int)fVar5;
    }
    else {
      dVar6 = (double)(int)(short)a4;
      dVar6 = dVar6 + dVar6;
      a4 = (int)dVar6;
    }
    iVar3 = iVar3 + -4;
  }
  uVar1 = (uint)_DAT_8c4aa3d0 & 0x3ffffff | _DAT_8c4aa3dc;
  *(uint *)(_DAT_8c4aabdc + 8) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c2346ce\n.set _FUN_8c2346ce, _FUN_8c2346ce_def\n");
