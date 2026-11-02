#include "../decls.h"
undefined4 FUN_8c23bae2_def(double *ar4,int ar5,float *ar6,int ar7)

{
  double *pdVar1;
  undefined4 uVar2;
  double *ar4_00;
  undefined4 extraout_fr0;
  float fVar3;
  double dVar4;
  float fVar5;
  undefined4 in_fr5;
  double dVar6;
  double dVar7;
  float fVar8;
  double in_xd2;
  double in_xd14;
  bool bVar9;
  char cVar10;
  char cVar11;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  cVar11 = '\0';
  cVar10 = '\0';
  fVar8 = 0.0;
  _DAT_8c4ab278 = ar4;
  _DAT_8c4ab27c = ar5;
  _DAT_8c4ab280 = ar6;
  *(float *)((int)ar4 + 0xc) = 0.0;
  *(float *)(ar4 + 1) = 0.0;
  *(float *)((int)ar4 + 4) = 0.0;
  *(float *)ar4 = 0.0;
  pdVar1 = _DAT_8c4ab278;
  ar4_00 = _DAT_8c4ab278 + 2;
  *(float *)((int)_DAT_8c4ab278 + 0x1c) = 0.0;
  *(float *)(pdVar1 + 3) = 0.0;
  *(float *)((int)pdVar1 + 0x14) = 0.0;
  if (ar7 != 0) {
    fStack_20 = -*_DAT_8c4ab280;
    fStack_1c = -_DAT_8c4ab280[1];
    fStack_18 = -_DAT_8c4ab280[2];
    _DAT_8c4ab280 = &fStack_20;
  }
  uVar2 = FUN_8c23ba42(ar4_00,ar5,ar6,ar7);
  if (cVar11 == '\0') {
    dVar4 = (double)CONCAT44(*(float *)_DAT_8c4ab278,_DAT_8c4c11b0);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
    dVar4 = *_DAT_8c4ab278;
  }
  if (cVar10 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + SUB84(dVar4,0),SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + dVar4;
  }
  fVar3 = (float)((ulonglong)dVar4 >> 0x20);
  if (cVar11 == '\0') {
    *(float *)_DAT_8c4ab278 = fVar3;
  }
  else {
    *_DAT_8c4ab278 = dVar4;
  }
  if (_DAT_8c4aa554 != 0) {
    uVar2 = 8;
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(_DAT_8c4aa544,in_fr5);
      dVar4 = (double)CONCAT44(fVar3,*(undefined4 *)(_DAT_8c4ab27c + 8));
    }
    else {
      dVar6 = (double)CONCAT44(_DAT_8c4aa548,_DAT_8c4aa544);
      in_xd2 = *(double *)(_DAT_8c4ab27c + 8);
    }
    fVar3 = (float)((ulonglong)dVar6 >> 0x20);
    if (cVar10 == '\0') {
      bVar9 = fVar3 < SUB84(dVar4,0);
    }
    else {
      bVar9 = dVar6 < dVar4;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar4 = (double)CONCAT44(*(undefined4 *)(_DAT_8c4ab27c + 8),_DAT_8c4aa548);
      }
      else {
        dVar4 = *(double *)(_DAT_8c4ab27c + 8);
        in_xd2 = (double)CONCAT44(_DAT_8c4aa54c,_DAT_8c4aa548);
      }
      fVar5 = (float)((ulonglong)dVar4 >> 0x20);
      if (cVar10 != '\0' || SUB84(dVar4,0) <= fVar5) {
        if (cVar11 == '\0') {
          *(float *)_DAT_8c4ab278 = fVar8;
        }
        else {
          *_DAT_8c4ab278 = in_xd14;
        }
      }
      else {
        if (cVar11 == '\0') {
          dVar4 = (double)CONCAT44(fVar5,*(undefined4 *)(_DAT_8c4ab27c + 8));
        }
        else {
          in_xd2 = *(double *)(_DAT_8c4ab27c + 8);
        }
        if (cVar10 == '\0') {
          fVar3 = SUB84(dVar4,0) - fVar3;
        }
        else {
          fVar3 = SUB84(dVar4 - dVar6,0);
        }
        if (cVar11 == '\0') {
          dVar4 = (double)CONCAT44(_DAT_8c4aa54c,fVar3);
        }
        else {
          dVar4 = (double)CONCAT44(_DAT_8c4aa550,_DAT_8c4aa54c);
        }
        if (cVar10 == '\0') {
          fVar8 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar8,SUB84(dVar4,0) * fVar8);
        }
        else {
          dVar4 = dVar4 * dVar4;
        }
        fVar8 = -SUB84(dVar4,0);
        dVar7 = in_xd2;
        if (cVar11 == '\0') {
          dVar7 = (double)CONCAT44(fVar8,SUB84(dVar6,0));
        }
        if (cVar10 == '\0') {
          dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + 1.0,SUB84(dVar7,0));
        }
        else {
          dVar7 = dVar7 + (double)CONCAT44(extraout_fr0,0x3f800000);
        }
        if (cVar11 == '\0') {
          fVar8 = *(float *)_DAT_8c4ab278;
        }
        else {
          in_xd2 = *_DAT_8c4ab278;
        }
        if (cVar10 == '\0') {
          fVar8 = fVar8 * (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar8 = SUB84((double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),fVar8) * dVar7,0);
        }
        if (cVar11 == '\0') {
          *(float *)_DAT_8c4ab278 = fVar8;
        }
        else {
          *_DAT_8c4ab278 = in_xd2;
        }
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c23bae2\n.set _FUN_8c23bae2, _FUN_8c23bae2_def\n");
