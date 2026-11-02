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
undefined4 FUN_8c0d1754_def(float *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1754";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float in_PR = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  (*(float *)(fr0_ - 0x10)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c256294(0,ar5,&(*(float *)(fr0_ - 0x20)),ar7));
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c256294(0,ar5,&(*(float *)(fr0_ - 0x18)),ar7));
  for (iVar2 = 1; iVar2 < 8; iVar2 = iVar2 + 1) {
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c256294(0,iVar2 * 0xc + ar5,&(*(float *)(fr0_ - 0x28)),ar7));
    fVar3 = (*(float *)(fr0_ - 0x20));
    fVar4 = (*(float *)(fr0_ - 0x1c));
    if (cVar6 == '\0') {
      fVar3 = (*(float *)(fr0_ - 0x28));
      fVar4 = (*(float *)(fr0_ - 0x20));
    }
    if (cVar5 != '\0' || fVar4 <= fVar3) {
      fVar3 = (*(float *)(fr0_ - 0x18));
      fVar4 = (*(float *)(fr0_ - 0x14));
      if (cVar6 == '\0') {
        fVar3 = (*(float *)(fr0_ - 0x28));
        fVar4 = (*(float *)(fr0_ - 0x18));
      }
      if (cVar5 == '\0' && fVar4 < fVar3) {
        if (cVar6 == '\0') {
          (*(float *)(fr0_ - 0x18)) = (*(float *)(fr0_ - 0x28));
        }
        else {
          (*(float *)(fr0_ - 0x18)) = (*(float *)(fr0_ - 0x28));
          (*(float *)(fr0_ - 0x14)) = (*(float *)(fr0_ - 0x24));
        }
      }
    }
    else {
      if (cVar6 != '\0') {
        (*(float *)(fr0_ - 0x1c)) = (*(float *)(fr0_ - 0x24));
      }
      (*(float *)(fr0_ - 0x20)) = (*(float *)(fr0_ - 0x28));
    }
    fVar3 = (*(float *)(fr0_ - 0x1c));
    fVar4 = (*(float *)(fr0_ - 0x18));
    if (cVar6 == '\0') {
      fVar3 = (*(float *)(fr0_ - 0x24));
      fVar4 = (*(float *)(fr0_ - 0x1c));
    }
    if (cVar5 != '\0' || fVar4 <= fVar3) {
      fVar3 = (*(float *)(fr0_ - 0x14));
      fVar4 = (*(float *)(fr0_ - 0x10));
      if (cVar6 == '\0') {
        fVar3 = (*(float *)(fr0_ - 0x24));
        fVar4 = (*(float *)(fr0_ - 0x14));
      }
      if (cVar5 == '\0' && fVar4 < fVar3) {
        if (cVar6 == '\0') {
          (*(float *)(fr0_ - 0x14)) = (*(float *)(fr0_ - 0x24));
        }
        else {
          (*(float *)(fr0_ - 0x14)) = (*(float *)(fr0_ - 0x24));
          (*(float *)(fr0_ - 0x10)) = (*(float *)(fr0_ - 0x20));
        }
      }
    }
    else {
      if (cVar6 != '\0') {
        (*(float *)(fr0_ - 0x18)) = (*(float *)(fr0_ - 0x20));
      }
      (*(float *)(fr0_ - 0x1c)) = (*(float *)(fr0_ - 0x24));
    }
  }
  fVar3 = (*(float *)(fr0_ - 0x20));
  fVar4 = (*(float *)(fr0_ - 0x1c));
  if (cVar6 == '\0') {
    fVar3 = *ar4;
    fVar4 = (*(float *)(fr0_ - 0x20));
  }
  if (cVar5 != '\0' || fVar4 <= fVar3) {
    fVar3 = (*(float *)(fr0_ - 0x18));
    fVar4 = (*(float *)(fr0_ - 0x14));
    if (cVar6 == '\0') {
      fVar3 = *ar4;
      fVar4 = (*(float *)(fr0_ - 0x18));
    }
    if (cVar5 != '\0' || fVar3 <= fVar4) {
      fVar3 = (*(float *)(fr0_ - 0x1c));
      if (cVar6 == '\0') {
        fVar3 = ar4[1];
        (*(float *)(fr0_ - 0x18)) = (*(float *)(fr0_ - 0x1c));
      }
      if (cVar5 != '\0' || (*(float *)(fr0_ - 0x18)) <= fVar3) {
        fVar3 = (*(float *)(fr0_ - 0x14));
        if (cVar6 == '\0') {
          fVar3 = ar4[1];
          (*(float *)(fr0_ - 0x10)) = (*(float *)(fr0_ - 0x14));
        }
        if (cVar5 != '\0' || fVar3 <= (*(float *)(fr0_ - 0x10))) {
          uVar1 = 1;
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0d1754\n.set _FUN_8c0d1754, _FUN_8c0d1754_def\n");
