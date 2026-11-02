#include "../decls.h"
undefined4 s_CAnimBody_AdvanceFrame_033d90_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  double in_xd0;
  double dVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined4 uStack_1c;
  
  cVar8 = '\0';
  cVar7 = '\0';
  dVar4 = (double)CONCAT44(in_fr4,in_fr6);
  if (*(int *)(ar4 + 0x1c) < 0) {
    ar7 = 2;
    ar6 = 1;
    ar5 = s_CAnimBody__AdvanceFrame___8c132cfa;
    report_error_message(s_Motion_is_NO_SET__8c132ce8,s_CAnimBody__AdvanceFrame___8c132cfa,1,2);
    *(undefined4 *)(ar4 + 0x1c) = 0;
  }
  *(undefined4 *)(ar4 + 0x70) = 0;
  uVar1 = 0;
  if (cVar7 == '\0') {
    dVar3 = (double)CONCAT44((float)*(int *)(ar4 + 0x24),in_fr1);
  }
  else {
    dVar3 = (double)*(int *)(ar4 + 0x24);
  }
  dVar5 = dVar4;
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),(int)((ulonglong)dVar4 >> 0x20));
    dVar5 = in_xd0;
  }
  if (cVar7 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x20),fVar2);
  }
  else {
    dVar3 = *(double *)(ar4 + 0x20);
  }
  if (cVar7 == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x20) = fVar2;
  }
  else {
    *(double *)(ar4 + 0x20) = dVar5;
  }
  FUN_8c033d34(ar4,ar5,ar6,ar7);
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x20),fVar2);
  }
  else {
    dVar3 = *(double *)(ar4 + 0x20);
  }
  fVar2 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar7 == '\0') {
    bVar6 = fVar2 < SUB84(dVar4,0);
  }
  else {
    bVar6 = dVar3 < dVar4;
  }
  if (!bVar6) {
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44(fVar2,*(undefined4 *)(ar4 + 0x20));
    }
    else {
      dVar5 = *(double *)(ar4 + 0x20);
    }
    if (cVar7 == '\0') {
      fVar2 = SUB84(dVar3,0) - SUB84(dVar4,0);
    }
    else {
      fVar2 = SUB84(dVar3 - dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44(in_fr5,fVar2);
    }
    else {
      dVar3 = (double)CONCAT44(uStack_1c,in_fr5);
    }
    if (cVar7 == '\0') {
      fVar2 = (float)((ulonglong)dVar3 >> 0x20);
      dVar3 = (double)CONCAT44(fVar2,SUB84(dVar3,0) + fVar2);
    }
    else {
      dVar3 = dVar3 + dVar3;
    }
    if (cVar8 == '\0') {
      *(int *)(ar4 + 0x20) = SUB84(dVar3,0);
    }
    else {
      *(double *)(ar4 + 0x20) = dVar5;
    }
    uVar1 = 7;
  }
  if (*(char *)(ar4 + 0x54) != '\0') {
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),*(undefined4 *)(ar4 + 0x60));
    }
    else {
      dVar5 = *(double *)(ar4 + 0x60);
    }
    if (cVar7 == '\0') {
      fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x58),fVar2);
    }
    else {
      dVar4 = *(double *)(ar4 + 0x58);
    }
    if (cVar7 == '\0') {
      fVar2 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x58) = fVar2;
    }
    else {
      *(double *)(ar4 + 0x58) = dVar5;
    }
    uVar1 = 3;
    if (cVar8 == '\0') {
      fVar2 = *(float *)(ar4 + 0x58);
    }
    if (cVar7 != '\0' || 1.0 <= fVar2) {
      *(undefined1 *)(ar4 + 0x54) = 0;
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x58) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x58) = (ulonglong)(uint)fVar2;
      }
      uVar1 = 4;
    }
  }
  return uVar1;
}

__asm__(".globl _s_CAnimBody_AdvanceFrame_033d90\n.set _s_CAnimBody_AdvanceFrame_033d90, _s_CAnimBody_AdvanceFrame_033d90_def\n");
