#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_CAnimBody_AdvanceFrame_033d90_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CAnimBody_AdvanceFrame_033d90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_fr1 = 0;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr6 = 0;
  double in_xd0 = 0;
  double dVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  dVar4 = CONCAT44D(in_fr4,in_fr6);
  if (*(int *)(unsigned)(ar4 + 0x1c) < 0) {
    ar7 = 2;
    ar6 = 1;
    ar5 = ((undefined1 *)(unsigned)0x8c132cfa);
    (vsp = ((unsigned long)(fr0_ - 28)), report_error_message(((undefined1 *)(unsigned)0x8c132ce8),((undefined1 *)(unsigned)0x8c132cfa),1,2));
    *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
  uVar1 = 0;
  if (cVar7 == '\0') {
    dVar3 = CONCAT44D((float)*(int *)(unsigned)(ar4 + 0x24),in_fr1);
  }
  else {
    dVar3 = (double)*(int *)(unsigned)(ar4 + 0x24);
  }
  dVar5 = dVar4;
  if (cVar8 == '\0') {
    dVar3 = CONCAT44D((int)(D2U(dVar3) >> 0x20),(int)(D2U(dVar4) >> 0x20));
    dVar5 = in_xd0;
  }
  if (cVar7 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar8 == '\0') {
    dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x20),fVar2);
  }
  else {
    dVar3 = *(double *)(unsigned)(ar4 + 0x20);
  }
  if (cVar7 == '\0') {
    fVar2 = F32LO(dVar3) + F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar8 == '\0') {
    *(float *)(unsigned)(ar4 + 0x20) = fVar2;
  }
  else {
    *(double *)(unsigned)(ar4 + 0x20) = dVar5;
  }
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c033d34(ar4,ar5,ar6,ar7));
  if (cVar8 == '\0') {
    dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x20),fVar2);
  }
  else {
    dVar3 = *(double *)(unsigned)(ar4 + 0x20);
  }
  fVar2 = F32HI(dVar3);
  if (cVar7 == '\0') {
    bVar6 = fVar2 < SUB84(dVar4,0);
  }
  else {
    bVar6 = dVar3 < dVar4;
  }
  if (!bVar6) {
    if (cVar8 == '\0') {
      dVar3 = CONCAT44D(fVar2,*(undefined4 *)(unsigned)(ar4 + 0x20));
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 0x20);
    }
    if (cVar7 == '\0') {
      fVar2 = F32LO(dVar3) - F32LO(dVar4);
    }
    else {
      fVar2 = SUB84(dVar3 - dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar3 = CONCAT44D(in_fr5,fVar2);
    }
    else {
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),in_fr5);
    }
    if (cVar7 == '\0') {
      fVar2 = F32HI(dVar3);
      dVar3 = CONCAT44D(fVar2,F32LO(dVar3) + fVar2);
    }
    else {
      dVar3 = dVar3 + dVar3;
    }
    if (cVar8 == '\0') {
      *(int *)(unsigned)(ar4 + 0x20) = SUB84(dVar3,0);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x20) = dVar5;
    }
    uVar1 = 7;
  }
  if (*(char *)(unsigned)(ar4 + 0x54) != '\0') {
    if (cVar8 == '\0') {
      dVar3 = CONCAT44D((int)(D2U(dVar3) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x60));
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 0x60);
    }
    if (cVar7 == '\0') {
      fVar2 = F32LO(dVar3) * F32HI(dVar4);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x58),fVar2);
    }
    else {
      dVar4 = *(double *)(unsigned)(ar4 + 0x58);
    }
    if (cVar7 == '\0') {
      fVar2 = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      fVar2 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar8 == '\0') {
      *(float *)(unsigned)(ar4 + 0x58) = fVar2;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x58) = dVar5;
    }
    uVar1 = 3;
    if (cVar8 == '\0') {
      fVar2 = *(float *)(unsigned)(ar4 + 0x58);
    }
    if (cVar7 != '\0' || 1.0 <= fVar2) {
      *(undefined1 *)(unsigned)(ar4 + 0x54) = 0;
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x58) = (ulonglong)(uint)fVar2;
      }
      uVar1 = 4;
    }
  }
  return uVar1;
}

__asm__(".globl _s_CAnimBody_AdvanceFrame_033d90\n.set _s_CAnimBody_AdvanceFrame_033d90, _s_CAnimBody_AdvanceFrame_033d90_def\n");
