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
undefined4 FUN_8c034574_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c034574";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  float fVar1;
  uint in_fr1 = 0;
  float fVar2;
  double dVar3;
  float in_fr4 = 0;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  bool bVar4;
  undefined4 in_PR = 0;
  int iVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  (*(undefined4 *)(fr0_ - 0x10)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_set_xyz(&(*(float *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  if (ar5 == (int *)(unsigned)0x0) {
    (vsp = ((unsigned long)(fr0_ - 32)), vec3_copy_8c02b5fc((*(undefined4 *)(fr0_ + 0x00000000)),&(*(float *)(fr0_ - 0x1c)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 32)), object_dtor_delete(&(*(float *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  }
  else {
    if (cVar6 == '\0') {
      bVar4 = in_fr4 < 0.0;
    }
    else {
      bVar4 = CONCAT44D(in_fr14,in_fr4) < (double)(ulonglong)in_fr1;
    }
    if (bVar4) {
      in_fr4 = 0.0;
    }
    while( true ) {
      if (cVar6 == '\0') {
        iVar5 = (int)in_fr4;
      }
      else {
        iVar5 = (int)CONCAT44D(in_fr14,in_fr4);
      }
      if (iVar5 <= *ar5) break;
      ar5 = ar5 + 4;
    }
    if (cVar6 == '\0') {
      iVar5 = (int)in_fr4;
    }
    else {
      iVar5 = (int)CONCAT44D(in_fr14,in_fr4);
    }
    if (*ar5 != iVar5) {
      ar5 = ar5 + -4;
    }
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x43b40000,(float)ar5[1]);
    }
    else {
      dVar3 = 2.6584566620691055e+36;
    }
    if (cVar6 == '\0') {
      fVar2 = F32LO(dVar3) * F32HI(dVar3);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar3,0);
    }
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x47800000,fVar2);
    }
    else {
      dVar3 = 6.207226708901173e-78;
    }
    if (cVar6 == '\0') {
      fVar2 = F32LO(dVar3) / F32HI(dVar3);
    }
    else {
      fVar2 = SUB84(dVar3 / dVar3,0);
    }
    (*(float *)(fr0_ - 0x1c)) = (float)in_xd0;
    fVar1 = (*(float *)(fr0_ - 0x1c));
    if (cVar7 == '\0') {
      (*(float *)(fr0_ - 0x1c)) = fVar2;
    }
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x43b40000,(float)ar5[2]);
    }
    else {
      dVar3 = 2.6584566620691055e+36;
    }
    if (cVar6 == '\0') {
      fVar2 = F32LO(dVar3) * F32HI(dVar3);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar3,0);
    }
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x47800000,fVar2);
    }
    else {
      dVar3 = 6.207226708901173e-78;
    }
    if (cVar6 == '\0') {
      fVar2 = F32LO(dVar3) / F32HI(dVar3);
    }
    else {
      fVar2 = SUB84(dVar3 / dVar3,0);
    }
    (*(float *)(fr0_ - 0x18)) = fVar1;
    if (cVar7 == '\0') {
      (*(float *)(fr0_ - 0x18)) = fVar2;
    }
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x43b40000,(float)ar5[3]);
    }
    else {
      dVar3 = 2.6584566620691055e+36;
    }
    if (cVar6 == '\0') {
      fVar2 = F32LO(dVar3) * F32HI(dVar3);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar3,0);
    }
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x47800000,fVar2);
    }
    else {
      dVar3 = 6.207226708901173e-78;
    }
    if (cVar6 == '\0') {
      (*(float *)(fr0_ - 0x14)) = F32LO(dVar3) / F32HI(dVar3);
    }
    else {
      (*(float *)(fr0_ - 0x14)) = SUB84(dVar3 / dVar3,0);
    }
    if (cVar7 != '\0') {
      (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
      (*(float *)(fr0_ - 0x14)) = fVar1;
    }
    (vsp = ((unsigned long)(fr0_ - 32)), vec3_copy_8c02b5fc((*(undefined4 *)(fr0_ + 0x00000000)),&(*(float *)(fr0_ - 0x1c)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 32)), object_dtor_delete(&(*(float *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c034574\n.set _FUN_8c034574, _FUN_8c034574_def\n");
