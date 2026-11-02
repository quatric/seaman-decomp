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
undefined4 * CAnimal_m7_088210_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m7_088210";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  double in_dr0 = 0;
  double dVar2;
  undefined4 in_fr3 = 0;
  double dVar4;
  double in_dr14 = 0;
  double in_xd14 = 0;
  bool bVar5;
  char cVar6;
  char cVar7;
  float fVar3;
  
  cVar7 = '\0';
  cVar6 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x184))))(ar5,ar5,ar6,ar7));
  if (cVar7 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    in_dr0 = in_xd14;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), CAnimal_m7_0f49b8(ar4,ar5,ar6,ar7));
  puVar1 = (undefined4 *)(unsigned)(*(uint *)(unsigned)(ar4 + 0x74) & 0x40);
  if (puVar1 != (undefined4 *)(unsigned)0x40) {
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),in_fr3);
    }
    else {
      dVar4 = *(double *)(unsigned)(ar4 + 0x34);
    }
    puVar1 = ((undefined4 *)(unsigned)0x8c08827c);
    dVar2 = in_dr0;
    if (cVar7 == '\0') {
      dVar2 = CONCAT44D(SUB84(in_dr14,0),0x41200000);
    }
    if (cVar6 == '\0') {
      fVar3 = F32HI(dVar2) - F32LO(dVar2);
      dVar2 = CONCAT44D(fVar3,SUB84(dVar2,0));
      bVar5 = fVar3 < F32HI(dVar4);
    }
    else {
      dVar2 = dVar2 - dVar2;
      bVar5 = dVar2 < dVar4;
    }
    if (bVar5) {
      puVar1 = ((undefined4 *)(unsigned)0x8c08827c);
      if (cVar7 == '\0') {
        dVar4 = CONCAT44D(0x41200000,SUB84(dVar2,0));
      }
      else {
        dVar4 = 1.251627927188126e-308;
      }
      if (cVar6 == '\0') {
        fVar3 = F32LO(in_dr14) - F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(in_dr14 - dVar4,0);
      }
      if (cVar7 == '\0') {
        *(float *)(unsigned)(ar4 + 0x34) = fVar3;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x34) = in_dr0;
      }
    }
  }
  return puVar1;
}

__asm__(".globl _CAnimal_m7_088210\n.set _CAnimal_m7_088210, _CAnimal_m7_088210_def\n");
