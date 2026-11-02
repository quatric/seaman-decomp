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
int FUN_8c085c3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c085c3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 148; for (int i_ = 0; i_ < 148; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined1 *puVar2;
  undefined4 *ar6_00;
  float *ar6_01;
  float fVar3;
  double dVar4;
  float fVar5;
  undefined8 in_dr6 = 0;
  float in_fr8 = 0;
  float in_xf0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  fVar5 = (float)in_dr6;
  ar5_00 = 1;
  (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c036d3c(*(undefined4 *)(unsigned)(ar4 + 0x308),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c085e8c(ar4 + 0xd20,ar5_00,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), get_field_2a4_085e80(ar4 + 0xd20,ar5_00,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = ar4 + 0x50;
    (vsp = ((unsigned long)(fr0_ - 148)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x40)),iVar1,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x144))))(ar4,iVar1,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 148)) - 8); FUN_8c023484(iVar1 + 0xd8,((undefined1 *)(fr0_ - 0x40)),ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 148)) - 8); Vec3_add(ar4 + 0x30,((undefined1 *)(fr0_ - 0x50)),ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_ctor_copy(&(*(undefined4 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x60)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), object_dtor_delete(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
    if (cVar7 != '\0') {
      (*(undefined4 *)(fr0_ - 0x18)) = (*(undefined4 *)(fr0_ - 0xc));
    }
    ar6_00 = &(*(undefined4 *)(fr0_ - 0x90));
    puVar2 = ((undefined1 *)(fr0_ - 0x24));
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c256294(0,puVar2,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x34)),puVar2,ar6_00,ar7));
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x90)),fVar5);
      (*(float *)(fr0_ - 0x30)) = in_xf0;
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x8c)),(*(undefined4 *)(fr0_ - 0x90)));
      (*(float *)(fr0_ - 0x30)) = fVar5;
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) - F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),fVar3);
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
    }
    if (cVar6 == '\0') {
      (*(float *)(fr0_ - 0x34)) = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      (*(float *)(fr0_ - 0x34)) = SUB84(dVar4 + dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x8c)),in_fr8);
    }
    else {
      dVar4 = CONCAT44D(((undefined4 *)(fr0_ - 0x88))[0],(*(undefined4 *)(fr0_ - 0x8c)));
      (*(float *)(fr0_ - 0x34)) = (*(float *)(fr0_ - 0x30));
      (*(float *)(fr0_ - 0x30)) = in_fr8;
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) - F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D(0xbf800000,fVar3);
    }
    else {
      dVar4 = 1.65674406927311e-311;
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),fVar3);
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar7 == '\0') {
      (*(float *)(fr0_ - 0x30)) = fVar3;
      fVar5 = (*(float *)(fr0_ - 0x28));
    }
    (*(float *)(fr0_ - 0x28)) = fVar5;
    (*(undefined4 *)(fr0_ - 0x2c)) = (int)((ulonglong)in_dr6 >> 0x20);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 148)) - 8); FUN_8c02ace4(*(undefined4 *)(unsigned)(ar4 + 0x30c),puVar2,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x7c)),puVar2,ar6_00,ar7));
    puVar2 = ((undefined1 *)(fr0_ - 0x70));
    ar6_01 = &(*(float *)(fr0_ - 0x34));
    ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x88))); unsigned long t1_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 148)) - 8); FUN_8c0332b4(*(undefined4 *)(unsigned)(ar4 + 0x30c),&(*(undefined4 *)(fr0_ - 0x18)),ar6_01,puVar2); });
    (vsp = ((unsigned long)(fr0_ - 148)), vec3_copy_8c023d8c(ar4 + 0x3fc,((undefined4 *)(fr0_ - 0x88)),ar6_01,puVar2));
    (vsp = ((unsigned long)(fr0_ - 148)), object_dtor_delete(((undefined4 *)(fr0_ - 0x88)),0xffffffff,ar6_01,puVar2));
    (vsp = ((unsigned long)(fr0_ - 148)), object_dtor_delete(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6_01,puVar2));
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_01,puVar2));
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(&(*(float *)(fr0_ - 0x34)),0xffffffff,ar6_01,puVar2));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x18)),0xffffffff,ar6_01,puVar2));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c085c3c\n.set _FUN_8c085c3c, _FUN_8c085c3c_def\n");
