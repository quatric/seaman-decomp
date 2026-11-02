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
undefined4 FUN_8c0b0eec_def(int ar4,float *ar5,float *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b0eec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 520; for (int i_ = 0; i_ < 520; i_++) z_[i_] = 0; }
  double dVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int *ar5_00;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  code *ar5_01;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  ulonglong in_dr0 = 0;
  float fVar13;
  double dVar12;
  undefined8 in_xd0 = 0;
  char cVar14;
  char cVar15;
  float *ain0;
  
  cVar15 = '\0';
  cVar14 = '\0';
  uVar10 = 1;
  pfVar6 = ar5;
  uVar9 = ar7;
  ain0 = ar6;
  (vsp = ((unsigned long)(fr0_ - 520)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 520)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x40)),pfVar6,ar6,uVar9));
  (vsp = ((unsigned long)(fr0_ - 520)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x50)),pfVar6,ar6,uVar9));
  iVar4 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar4 < 9) && (-1 < iVar4)) {
                    
    switch(iVar4) {
    case 0:
      uVar8 = 0xc;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c034148(ar4 + 0xb0,0xc,ar6,uVar9));
      if (iVar4 != 1) {
        if (iVar4 != 2) break;
        (vsp = ((unsigned long)(fr0_ - 520)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar8,ar6,uVar9));
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6,uVar9));
      break;
    case 1:
      if (cVar15 == '\0') {
        fVar11 = *ar5;
        fVar13 = 1500.0;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)ar5;
        fVar11 = 1500.0;
        fVar13 = 1000.0;
      }
      if (cVar14 == '\0' && fVar13 < fVar11) {
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x70)),((void *)0x8c022ce8),ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x2e4,((undefined1 *)(fr0_ - 0x70)),ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6,uVar9));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x60)),pfVar6,ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x2e4,((undefined1 *)(fr0_ - 0x60)),ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6,uVar9));
      }
      (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c031b68(ar4,0x8c286dbc,ar6,uVar9));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      in_dr0 = (ulonglong)(uint)fVar11;
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = in_dr0;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 2:
      if (cVar15 == '\0') {
        uVar8 = (undefined4)in_dr0;
        uVar5 = 0x3f000000;
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3f000000;
      }
      else {
        uVar8 = 0x3f000000;
        uVar5 = 0xb0;
        *(undefined8 *)(unsigned)(ar4 + 0x28) = 0xb03f000000;
      }
      (vsp = ((unsigned long)(fr0_ - 520)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,((void *)0x8c026858),ar6,uVar9));
      pfVar6 = ar5;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); Vec3_sub(ar4 + 0x2e4,ar5,ar6,uVar9); });
      uVar3 = (vsp = ((unsigned long)(fr0_ - 520)), Vec3_length(((undefined1 *)(fr0_ - 0x80)),pfVar6,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(((undefined1 *)(fr0_ - 0x50)),uVar3,ar6,uVar9));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6,uVar9));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x90))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar3,ar6,uVar9); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa0))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x50)),uVar3,ar6,uVar9); });
      (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x90)),((undefined1 *)(fr0_ - 0xa0)),ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c022fc0(ar5,ar4 + 0x2e4,ar6,uVar9));
      if (cVar15 == '\0') {
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),uVar5);
      }
      else {
        in_xd0 = CONCAT44(uVar5,uVar8);
        dVar12 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        fVar11 = F32LO(dVar12) / F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      if (cVar15 == '\0') {
        *(float *)(unsigned)(ar4 + 0x30) = fVar11;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd0;
      }
      iVar4 = (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c031764(ar4,ar4 + 0x2e4,ar5,uVar9));
      if (iVar4 == 0) {
        uVar9 = 300;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      }
      ar6 = (float *)(unsigned)0x1e;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 520)), rand_range(ar4,0,0x1e,uVar9));
      if (iVar4 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x240) = 1;
        (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c033474(ar4,0xb,ar5,ar7));
        ar6 = ar5;
        uVar9 = ar7;
      }
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,uVar9));
      break;
    case 3:
      if (cVar15 == '\0') {
        fVar11 = *ar5;
        fVar13 = 1500.0;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)ar5;
        fVar11 = 1500.0;
        fVar13 = 1200.0;
      }
      if (cVar14 == '\0' && fVar13 < fVar11) {
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xc0)),pfVar6,ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x2e4,((undefined1 *)(fr0_ - 0xc0)),ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar6,uVar9));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xb0)),((void *)0x8c022ce8),ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x2e4,((undefined1 *)(fr0_ - 0xb0)),ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6,uVar9));
      }
      (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c031b68(ar4,0x8c286dbc,ar6,uVar9));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      pfVar6 = (float *)(unsigned)(ar4 + 0x2c);
      in_dr0 = (ulonglong)(uint)fVar11;
      if (cVar15 == '\0') {
        *pfVar6 = 0.0;
      }
      else {
        *(ulonglong *)(unsigned)pfVar6 = in_dr0;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 4:
      if (cVar15 == '\0') {
        uVar8 = (undefined4)in_dr0;
        uVar5 = 0x3f000000;
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3f000000;
      }
      else {
        uVar8 = 0x3f000000;
        uVar5 = 0xb0;
        *(undefined8 *)(unsigned)(ar4 + 0x28) = 0xb03f000000;
      }
      (vsp = ((unsigned long)(fr0_ - 520)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pfVar6,ar6,uVar9));
      pfVar6 = ar5;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd0))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); Vec3_sub(ar4 + 0x2e4,ar5,ar6,uVar9); });
      uVar3 = (vsp = ((unsigned long)(fr0_ - 520)), Vec3_length(((undefined1 *)(fr0_ - 0xd0)),pfVar6,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(((undefined1 *)(fr0_ - 0x50)),uVar3,ar6,uVar9));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,ar6,uVar9));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe0))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar3,ar6,uVar9); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf0))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x50)),uVar3,ar6,uVar9); });
      (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xe0)),((undefined1 *)(fr0_ - 0xf0)),ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c022fc0(ar5,ar4 + 0x2e4,ar6,uVar9));
      if (cVar15 == '\0') {
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),uVar5);
      }
      else {
        in_xd0 = CONCAT44(uVar5,uVar8);
        dVar12 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        fVar11 = F32LO(dVar12) / F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      if (cVar15 == '\0') {
        *(float *)(unsigned)(ar4 + 0x30) = fVar11;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd0;
      }
      iVar4 = (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c031764(ar4,ar4 + 0x2e4,ar5,uVar9));
      if (iVar4 == 0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      }
      ar6 = (float *)(unsigned)0x1e;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 520)), rand_range(ar4,0,0x1e,uVar9));
      if (iVar4 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x240) = 1;
        (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c033474(ar4,0xb,ar5,ar7));
        ar6 = ar5;
        uVar9 = ar7;
      }
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,uVar9));
      break;
    case 5:
      *(undefined4 *)(unsigned)(ar4 + 0x240) = 1;
      uVar9 = 0xb;
      (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c033474(ar4,0xb,ar5,ar7));
      uVar8 = (undefined4)in_dr0;
      (vsp = ((unsigned long)(fr0_ - 520)), vec3_clear(ar4 + 0x54,uVar9,ar5,ar7));
      ar6 = ar5;
      uVar9 = ar7;
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c286db8) == 0) {
        uVar5 = 0xd;
        uVar9 = (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c03c0f0(ar4 + 0xb0,0xd,ar5,ar7));
        ar5_00 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 520)), deref_u32(uVar9,uVar5,ar5,ar7));
        ar6 = (float *)(unsigned)0x1;
        iVar4 = (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c0342ac(ar4 + 0xb0,ar5_00,1,ar7));
        if (iVar4 != 0) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c286db8) = iVar4;
        }
        *(undefined4 *)(unsigned)(*ar5_00 + 0x18) = 0;
        uVar9 = ar7;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2d0) = 0x3f800000;
        in_dr0 = CONCAT44(0x42f00000,uVar8);
        *(undefined4 *)(unsigned)(ar4 + 0x2cc) = 0x42f00000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2d0) = CONCAT44(0x3f800000,uVar8);
        in_dr0 = 0x11042f00000;
        *(undefined8 *)(unsigned)(ar4 + 0x2cc) = 0x11042f00000;
      }
      iVar4 = ar4 + 0x80;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x100))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); FUN_8c0230f0(iVar4,iVar4,ar6,uVar9); });
      uVar8 = (vsp = ((unsigned long)(fr0_ - 520)), Vec3_length(((undefined1 *)(fr0_ - 0x100)),iVar4,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 700,uVar8,ar6,uVar9));
      pfVar6 = (float *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,ar6,uVar9));
    case 6:
      fVar11 = (float)in_dr0;
      (vsp = ((unsigned long)(fr0_ - 520)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pfVar6,ar6,uVar9));
      if (cVar15 == '\0') {
        fVar11 = *(float *)(unsigned)(ar4 + 0x2d0);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2d0);
      }
      if (cVar14 == '\0') {
        fVar11 = fVar11 + 1.0;
      }
      else {
        fVar11 = SUB84(CONCAT44D(0x3f800000,fVar11) + CONCAT44D(0x3f800000,fVar11),0);
      }
      (*(undefined8 *)(fr0_ - 0x204)) = in_xd0;
      if (cVar15 == '\0') {
        (*(undefined8 *)(fr0_ - 0x204)) = CONCAT44(ar4,fVar11);
      }
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x204))+4)) + 0x2d0) = (undefined4)(*(undefined8 *)(fr0_ - 0x204));
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2cc),(undefined4)(*(undefined8 *)(fr0_ - 0x204)));
      }
      else {
        *(undefined8 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x204))+4)) + 0x2d0) = (*(undefined8 *)(fr0_ - 0x204));
        dVar12 = *(double *)(unsigned)(ar4 + 0x2cc);
        in_xd0 = (*(undefined8 *)(fr0_ - 0x204));
      }
      if (cVar14 == '\0') {
        fVar11 = F32LO(dVar12) / F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      uVar2 = in_xd0;
      if (cVar15 == '\0') {
        (*(undefined8 *)(fr0_ - 0x180)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x180))+4)),fVar11);
        uVar2 = (*(undefined8 *)(fr0_ - 0x180));
      }
      (*(undefined8 *)(fr0_ - 0x180)) = uVar2;
      if (cVar14 == '\0') {
        dVar12 = CONCAT44D(1.0 - fVar11,fVar11);
      }
      else {
        dVar12 = CONCAT44D(0x3f800000,fVar11) - CONCAT44D(0x3f800000,fVar11);
      }
      dVar1 = dVar12;
      if (cVar15 == '\0') {
        (*(undefined8 *)(fr0_ - 0x188)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x188))+4)),(int)(D2U(dVar12) >> 0x20));
        dVar1 = (*(undefined8 *)(fr0_ - 0x188));
      }
      (*(undefined8 *)(fr0_ - 0x188)) = dVar1;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x110))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); Vec3_scale(ar4 + 0x80,&(*(undefined8 *)(fr0_ - 0x188)),ar6,uVar9); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x120))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); Vec3_scale(ar4 + 700,&(*(undefined8 *)(fr0_ - 0x180)),ar6,uVar9); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x130))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x110)),((undefined1 *)(fr0_ - 0x120)),ar6,uVar9); });
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x130)),ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x130)),0xffffffff,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x120)),0xffffffff,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x110)),0xffffffff,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c022dac(ar4 + 0x80,ar4 + 700,ar6,uVar9));
      if (cVar15 == '\0') {
        dVar12 = (double)(D2U(dVar12) >> 0x20);
      }
      if (cVar14 != '\0' || SUB84(dVar12,0) <= 0.0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 7:
      uVar8 = 0xd;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c034148(ar4 + 0xb0,0xd,ar6,uVar9));
      if (iVar4 != 1) {
        if (iVar4 != 2) break;
        (vsp = ((unsigned long)(fr0_ - 520)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar8,ar6,uVar9));
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x314) = 1;
      break;
    case 8:
      iVar4 = (vsp = ((unsigned long)(fr0_ - 520)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pfVar6,ar6,uVar9));
      if (iVar4 == 1) {
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar15 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0;
        }
        (vsp = ((unsigned long)(fr0_ - 520)), vec3_clear(ar4 + 0x54,1,ar6,uVar9));
        uVar10 = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x314) = 2;
        uVar9 = 0;
        (vsp = ((unsigned long)(fr0_ - 520)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xe,0xffffffff,0));
        ar6 = (float *)(unsigned)(ar4 + 0xb0);
        ar5_01 = ((void *)0x8c033e68);
        (vsp = ((unsigned long)(fr0_ - 520)), s_CAnimBody_SetFrame_033e6e(ar6,((void *)0x8c033e68),ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c022d04(ar4 + 0x304,ar5_01,ar6,uVar9));
      }
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 520)); CAnimBody_GetCurFrame(ar4 + 0xb0,((void *)0x8c026da8),ar6,uVar9); });
      (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c034384(ar4 + 0xb0,(*(undefined4 *)(unsigned)(unsigned)0x8c286db8),ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x140)),ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x140)),0xffffffff,ar6,uVar9));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x30)),ar4 + 0x54,ar6,uVar9); });
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(((undefined1 *)(fr0_ - 0x40)),((undefined1 *)(fr0_ - 0x150)),ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x150)),0xffffffff,ar6,uVar9));
      puVar7 = ((undefined1 *)(fr0_ - 0x30));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x54,puVar7,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x160)),puVar7,ar6,uVar9));
      iVar4 = (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c023d04(((undefined1 *)(fr0_ - 0x40)),((undefined1 *)(fr0_ - 0x160)),ar6,uVar9));
      uVar8 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x160)),0xffffffff,ar6,uVar9));
      if (iVar4 != 0) {
        (vsp = ((unsigned long)(fr0_ - 520)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x16c)),ain0,ar6,uVar9));
        puVar7 = ((undefined1 *)(fr0_ - 0x16c));
        ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x180)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x40)),puVar7,ar6,uVar9); });
        uVar8 = (vsp = ((unsigned long)(fr0_ - 520)), Vec3_length((int)&(*(undefined8 *)(fr0_ - 0x180)) + 4,puVar7,ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x14,uVar8,ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x180)) + 4,0xffffffff,ar6,uVar9));
        uVar8 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 520)), object_dtor_delete(((undefined1 *)(fr0_ - 0x16c)),0xffffffff,ar6,uVar9));
      }
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x40)),uVar8,ar6,uVar9));
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x28) = (int)(in_dr0 >> 0x20);
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0;
      }
    }
  }
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x188))+4)) = uVar10;
  (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6,uVar9));
  (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,uVar9));
  (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,uVar9));
  return (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x188))+4));
}

__asm__(".globl _FUN_8c0b0eec\n.set _FUN_8c0b0eec, _FUN_8c0b0eec_def\n");
