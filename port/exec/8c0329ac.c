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
undefined4 FUN_8c0329ac_def(undefined4 ar4,float *ar5,float *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c0329ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  double dVar2;
  undefined8 uVar3;
  float in_fr4 = 0;
  undefined4 in_fr14 = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  if ((((in_fr4 + *((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) < *ar5) && (*ar5 < (*ar6 + *((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))) - in_fr4)) &&
      (in_fr4 + ((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))[2] < ar5[2])) &&
     (fVar1 = (ar6[2] + ((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))[2]) - in_fr4, dVar2 = CONCAT44D(ar5[2],fVar1),
     ar5[2] < fVar1)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x128))))(ar7,ar5,ar6,ar7));
    if (cVar5 == '\0') {
      dVar2 = CONCAT44D((int)(D2U(dVar2) >> 0x20),in_fr4);
    }
    if (cVar4 == '\0') {
      fVar1 = F32LO(dVar2) + F32HI(dVar2);
    }
    else {
      fVar1 = SUB84(dVar2 + dVar2,0);
    }
    if (cVar5 == '\0') {
      dVar2 = CONCAT44D(ar5[1],fVar1);
    }
    else {
      dVar2 = *(double *)(unsigned)(ar5 + 1);
    }
    fVar1 = F32HI(dVar2);
    if (cVar4 == '\0' && SUB84(dVar2,0) < fVar1) {
      if (cVar5 == '\0') {
        dVar2 = CONCAT44D(fVar1,ar6[1]);
      }
      if (cVar4 == '\0') {
        fVar1 = F32LO(dVar2) - in_fr4;
      }
      else {
        fVar1 = SUB84(dVar2 - CONCAT44D(in_fr14,in_fr4),0);
      }
      if (cVar5 == '\0') {
        uVar3 = CONCAT44(ar5[1],fVar1);
      }
      else {
        uVar3 = *(undefined8 *)(unsigned)(ar5 + 1);
      }
      if (cVar4 == '\0' && F32HI(uVar3) < (float)uVar3) {
        return 1;
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0329ac\n.set _FUN_8c0329ac, _FUN_8c0329ac_def\n");
