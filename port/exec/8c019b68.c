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
undefined4 Class_129a24_m1_019b68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_129a24_m1_019b68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 216; for (int i_ = 0; i_ < 216; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  double dVar5;
  undefined8 in_xd0 = 0;
  int iVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  (*(undefined4 *)(fr0_ - 0x94)) = *(undefined4 *)(unsigned)(ar4 + 0x90);
  (*(undefined4 *)(fr0_ - 0x90)) = *(undefined4 *)(unsigned)(ar4 + 0x94);
  (*(undefined4 *)(fr0_ - 0x8c)) = *(undefined4 *)(unsigned)(ar4 + 0x98);
  (*(undefined4 *)(fr0_ - 0xa0)) = *(undefined4 *)(unsigned)(ar4 + 0xa0);
  (*(undefined4 *)(fr0_ - 0x9c)) = *(undefined4 *)(unsigned)(ar4 + 0xa4);
  (*(undefined4 *)(fr0_ - 0x98)) = *(undefined4 *)(unsigned)(ar4 + 0xa8);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 216)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0x48)),ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 216)); FUN_8c25cddc(((undefined4 *)(fr0_ - 0x88)),ar5,ar6,ar7); });
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0xb4));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0xb4);
    dVar5 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) * F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(0x43b40000,fVar4);
  }
  else {
    dVar5 = -3.740593052227333e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(F32LO(dVar5) / F32HI(dVar5));
  }
  else {
    iVar6 = (int)(dVar5 / dVar5);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 216)); FUN_8c256ce0(((undefined4 *)(fr0_ - 0x88)),iVar6,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 216)); FUN_8c255d6c(((undefined1 *)(fr0_ - 0x48)),((undefined4 *)(fr0_ - 0x88)),ar6,ar7); });
  puVar3 = &(*(undefined4 *)(fr0_ - 0xac));
  puVar2 = &(*(undefined4 *)(fr0_ - 0x94));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 216)); FUN_8c21279c(((undefined1 *)(fr0_ - 0x48)),puVar2,puVar3,ar7); });
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0xac)),*(undefined4 *)(unsigned)(ar4 + 0x80));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x80);
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0xa8)),(*(undefined4 *)(fr0_ - 0xac)));
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) * F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x44),fVar4);
  }
  else {
    dVar5 = *(double *)(unsigned)(ar4 + 0x44);
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) + F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(unsigned)(ar4 + 0x44) = fVar4;
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0xa4)),*(undefined4 *)(unsigned)(ar4 + 0x80));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x44) = in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x80);
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0xa0)),(*(undefined4 *)(fr0_ - 0xa4)));
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) * F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x4c),fVar4);
  }
  else {
    dVar5 = *(double *)(unsigned)(ar4 + 0x4c);
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) + F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(unsigned)(ar4 + 0x4c) = fVar4;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x4c) = in_xd0;
  }
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c235f44(ar4 + 4,puVar2,puVar3,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 216)); FUN_8c25cddc(((undefined4 *)(fr0_ - 0x88)),puVar2,puVar3,ar7); });
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0xb0));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0xb0);
    dVar5 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) * F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(0x43b40000,fVar4);
  }
  else {
    dVar5 = -3.740593052227333e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(F32LO(dVar5) / F32HI(dVar5));
  }
  else {
    iVar6 = (int)(dVar5 / dVar5);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 216)); FUN_8c256a78(((undefined4 *)(fr0_ - 0x88)),iVar6,puVar3,ar7); });
  puVar2 = ((undefined4 *)(fr0_ - 0x88));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 216)); FUN_8c255d6c(((undefined1 *)(fr0_ - 0x48)),puVar2,puVar3,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 216)); FUN_8c25cddc(((undefined4 *)(fr0_ - 0x88)),puVar2,puVar3,ar7); });
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0xb8));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0xb8);
    dVar5 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) * F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(0x43b40000,fVar4);
  }
  else {
    dVar5 = -3.740593052227333e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(F32LO(dVar5) / F32HI(dVar5));
  }
  else {
    iVar6 = (int)(dVar5 / dVar5);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 216)); FUN_8c256d7c(((undefined4 *)(fr0_ - 0x88)),iVar6,puVar3,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 216)); FUN_8c255d6c(((undefined1 *)(fr0_ - 0x48)),((undefined4 *)(fr0_ - 0x88)),puVar3,ar7); });
  if (cVar8 == '\0') {
    (*(undefined4 *)(fr0_ - 0x94)) = *(undefined4 *)(unsigned)(ar4 + 0x6c);
    (*(undefined4 *)(fr0_ - 0x90)) = *(undefined4 *)(unsigned)(ar4 + 0x70);
    (*(undefined4 *)(fr0_ - 0x8c)) = *(undefined4 *)(unsigned)(ar4 + 0x74);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x94)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x6c);
    (*(undefined4 *)(fr0_ - 0x90)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x70);
    (*(undefined4 *)(fr0_ - 0x8c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x74);
    ((undefined4 *)(fr0_ - 0x88))[0] = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x74) >> 0x20);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 216)); FUN_8c21279c(((undefined1 *)(fr0_ - 0x48)),&(*(undefined4 *)(fr0_ - 0x94)),&(*(undefined4 *)(fr0_ - 0xc4)),ar7); });
  if (cVar8 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x50) = (*(undefined4 *)(fr0_ - 0xc4));
    *(undefined4 *)(unsigned)(ar4 + 0x54) = (*(undefined4 *)(fr0_ - 0xc0));
    *(undefined4 *)(unsigned)(ar4 + 0x58) = (*(undefined4 *)(fr0_ - 0xbc));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x50) = CONCAT44((*(undefined4 *)(fr0_ - 0xc0)),(*(undefined4 *)(fr0_ - 0xc4)));
    *(ulonglong *)(unsigned)(ar4 + 0x54) = CONCAT44((*(undefined4 *)(fr0_ - 0xbc)),(*(undefined4 *)(fr0_ - 0xc0)));
    *(ulonglong *)(unsigned)(ar4 + 0x58) = CONCAT44((*(undefined4 *)(fr0_ - 0xb8)),(*(undefined4 *)(fr0_ - 0xbc)));
  }
  puVar3 = &(*(undefined4 *)(fr0_ - 0xb8));
  puVar2 = &(*(undefined4 *)(fr0_ - 0xc4));
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c255f40(&(*(undefined4 *)(fr0_ - 0xac)),puVar2,puVar3,ar7));
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0xb8)),*(undefined4 *)(unsigned)(ar4 + 0x84));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x84);
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0xb4)),(*(undefined4 *)(fr0_ - 0xb8)));
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) * F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x44),fVar4);
  }
  else {
    dVar5 = *(double *)(unsigned)(ar4 + 0x44);
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) + F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(unsigned)(ar4 + 0x44) = fVar4;
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0xb4)),*(undefined4 *)(unsigned)(ar4 + 0x84));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x44) = in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x84);
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0xb0)),(*(undefined4 *)(fr0_ - 0xb4)));
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) * F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),fVar4);
  }
  else {
    dVar5 = *(double *)(unsigned)(ar4 + 0x48);
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) + F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(unsigned)(ar4 + 0x48) = fVar4;
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0xb0)),*(undefined4 *)(unsigned)(ar4 + 0x84));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x48) = in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x84);
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0xac)),(*(undefined4 *)(fr0_ - 0xb0)));
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) * F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x4c),fVar4);
  }
  else {
    dVar5 = *(double *)(unsigned)(ar4 + 0x4c);
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) + F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(unsigned)(ar4 + 0x4c) = fVar4;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x4c) = in_xd0;
  }
  (vsp = ((unsigned long)(fr0_ - 216)), vec3_clear(ar4 + 0x80,puVar2,puVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c2572ec(ar4 + 4,puVar2,puVar3,ar7));
  return uVar1;
}

__asm__(".globl _Class_129a24_m1_019b68\n.set _Class_129a24_m1_019b68, _Class_129a24_m1_019b68_def\n");
