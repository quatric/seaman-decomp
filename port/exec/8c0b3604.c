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
undefined4 FUN_8c0b3604_def(int ar4,double *ar5,double *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c0b3604";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 728; for (int i_ = 0; i_ < 728; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  double *pdVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  float fVar9;
  double in_dr0 = 0;
  undefined8 uVar10;
  undefined4 uVar12;
  double dVar11;
  float fVar13;
  undefined4 uVar14;
  double in_dr2 = 0;
  double dVar15;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  double in_xd0 = 0;
  bool bVar16;
  char cVar17;
  char cVar18;
  
  cVar18 = '\0';
  cVar17 = '\0';
  pdVar5 = ar5;
  (vsp = ((unsigned long)(fr0_ - 728)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  uVar8 = 1;
  (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c10277c(&(*(double *)(fr0_ - 0x38)),pdVar5,ar6,ar7));
  uVar14 = SUB84(in_dr2,0);
  iVar4 = *(int *)(unsigned)(ar4 + 0x40);
  if ((5 < iVar4) || (iVar4 < 0)) goto override_jmp_8c0b3676_case_2;
                    
  switch(iVar4) {
  case 0:
    if (*(int *)(unsigned)(ar4 + 0x348) == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x31c) = 2;
    }
    else {
      ar6 = (double *)(unsigned)0x64;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 728)), rand_range(ar4,0,100,ar7));
      uVar8 = SUB84(in_dr2,0);
      if (iVar4 < 0x50) {
        *(undefined4 *)(unsigned)(ar4 + 0x31c) = 0;
        (vsp = ((unsigned long)(fr0_ - 728)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar5,ar6,ar7));
        if (cVar18 == '\0') {
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5 + 4),uVar8);
          dVar11 = CONCAT44D(0x42100000,(int)((ulonglong)in_dr0 >> 0x20));
        }
        else {
          in_dr2 = *(double *)(unsigned)((int)ar5 + 4);
          dVar11 = -2.066327991859925e+159;
          in_xd0 = in_dr0;
        }
        if (cVar17 == '\0') {
          fVar13 = F32HI(dVar11);
          fVar9 = F32LO(dVar11) + fVar13;
          in_dr0 = CONCAT44D(fVar13,fVar9);
          bVar16 = fVar9 < F32HI(in_dr2);
        }
        else {
          in_dr0 = dVar11 + dVar11;
          bVar16 = in_dr0 < in_dr2;
        }
        if (!bVar16) {
          *(undefined4 *)(unsigned)(ar4 + 0x31c) = 1;
        }
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x31c) = 2;
      }
    }
    uVar14 = SUB84(in_dr2,0);
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
    break;
  case 2:
    goto override_jmp_8c0b3676_case_2;
  case 3:
    goto override_jmp_8c0b3676_case_3;
  case 4:
    pcVar7 = ((void *)0x8c026dd8);
    iVar4 = (vsp = ((unsigned long)(fr0_ - 728)), get_field_1c_026dd8(ar4 + 0xb0,((void *)0x8c026dd8),ar6,ar7));
    if (iVar4 == 0) {
      (vsp = ((unsigned long)(fr0_ - 728)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar7,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c034148(ar4 + 0xb0,0,ar6,ar7));
    }
    uVar8 = (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c031764(ar4,&(*(undefined4 *)(fr0_ - 0x2c)),ar5,ar7));
    ar6 = ar5;
    goto override_jmp_8c0b3676_case_2;
  }
  fVar9 = F32LO(in_dr0);
  (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6,ar7));
  iVar4 = *(int *)(unsigned)(ar4 + 0x31c);
  if (iVar4 == 0) {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c034148(ar4 + 0xb0,0,ar6,ar7));
    if ((iVar4 != 1) && (iVar4 != 2)) {
      (*(undefined4 *)(fr0_ - 0x200)) = 1;
      (vsp = ((unsigned long)(fr0_ - 728)), free_if_nonnull_wrap_102790(&(*(double *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
      return (*(undefined4 *)(fr0_ - 0x200));
    }
    iVar4 = (vsp = ((unsigned long)(fr0_ - 728)), rand_range(ar4,0,3,ar7));
    if (cVar17 == '\0') {
      dVar11 = CONCAT44D((float)(iVar4 + 1),fVar9);
    }
    else {
      dVar11 = (double)(iVar4 + 1);
    }
    if (cVar18 == '\0') {
      *(int *)(unsigned)(ar4 + 0x24) = (int)(D2U(dVar11) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x24) = dVar11;
    }
    puVar6 = ((undefined1 *)(fr0_ - 0x58));
    uVar8 = 0x80;
    ({ unsigned long t0_ = (unsigned long)(puVar6); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); FUN_8c0230f0(ar4 + 0x80,0x80,puVar6,ar7); });
    uVar8 = (vsp = ((unsigned long)(fr0_ - 728)), Vec3_length(((undefined1 *)(fr0_ - 0x58)),uVar8,puVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c03263c(ar4,uVar8,puVar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x68)),ar5,puVar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x2e4,((undefined1 *)(fr0_ - 0x78)),puVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,puVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,puVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,puVar6,ar7));
    if (cVar18 == '\0') {
      fVar9 = *(float *)(unsigned)ar5;
      fVar13 = 1000.0;
    }
    else {
      in_xd0 = *ar5;
      fVar9 = 1000.0;
      fVar13 = -1.1275111e-31;
    }
    if (cVar17 != '\0' || fVar9 <= fVar13) {
      if (cVar18 != '\0') {
        fVar9 = 2.0;
      }
      ar6 = &(*(double *)(fr0_ - 0x38));
      ar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c032788(ar4,ar4 + 0x2e4,ar6,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
    }
    else {
      if (cVar18 != '\0') {
        fVar9 = 2.0;
      }
      ar6 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c125c0c);
      ar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c032788(ar4,ar4 + 0x2e4,((undefined1 *)(unsigned)0x8c125c0c),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
    }
    iVar4 = -0x73d79244;
    (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c031b68(ar4,0x8c286dbc,ar6,ar7));
  }
  else if (iVar4 == 1) {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c034148(ar4 + 0xb0,10,ar6,ar7));
    if ((iVar4 != 1) && (iVar4 != 2)) {
      (*(undefined4 *)(fr0_ - 0x204)) = 1;
      pcVar7 = ((void *)0x8c102790);
      (vsp = ((unsigned long)(fr0_ - 728)), free_if_nonnull_wrap_102790(&(*(double *)(fr0_ - 0x38)),0xffffffff,((void *)0x8c102790),ar7));
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,pcVar7,ar7));
      return (*(undefined4 *)(fr0_ - 0x204));
    }
    if (cVar18 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x24) = 0x3e800000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x24) = 0x24c3e800000;
    }
    uVar8 = 0x80;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); FUN_8c0230f0(ar4 + 0x80,0x80,ar6,ar7); });
    uVar8 = (vsp = ((unsigned long)(fr0_ - 728)), Vec3_length(((undefined1 *)(fr0_ - 0x88)),uVar8,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c03263c(ar4,uVar8,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa8))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x98)),ar5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x2e4,((undefined1 *)(fr0_ - 0xa8)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6,ar7));
    if (cVar18 == '\0') {
      fVar9 = *(float *)(unsigned)ar5;
      fVar13 = 1000.0;
    }
    else {
      in_xd0 = *ar5;
      fVar9 = 1000.0;
      fVar13 = -1.1275111e-31;
    }
    if (cVar17 != '\0' || fVar9 <= fVar13) {
      if (cVar18 == '\0') {
        dVar11 = CONCAT44D(0x40000000,fVar9);
      }
      else {
        dVar11 = 1.4265116704764e-311;
      }
      ar6 = &(*(double *)(fr0_ - 0x38));
      ar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c032788(ar4,ar4 + 0x2e4,ar6,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
    }
    else {
      if (cVar18 == '\0') {
        dVar11 = CONCAT44D(0x40000000,fVar9);
      }
      else {
        dVar11 = -1.6026767271217265e-250;
      }
      ar6 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c125c0c);
      ar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c032788(ar4,ar4 + 0x2e4,((undefined1 *)(unsigned)0x8c125c0c),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
    }
    (vsp = ((unsigned long)(fr0_ - 728)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar4 + 0x2e4,ar6,ar7));
    if (cVar18 == '\0') {
      dVar15 = CONCAT44D(0x42100000,(int)(D2U(dVar11) >> 0x20));
    }
    else {
      dVar15 = -4.264942176124392e-250;
      in_xd0 = dVar11;
    }
    if (cVar17 == '\0') {
      fVar9 = F32LO(dVar15) + F32HI(dVar15);
    }
    else {
      fVar9 = SUB84(dVar15 + dVar15,0);
    }
    if (cVar18 == '\0') {
      *(float *)(unsigned)(ar4 + 0x2e8) = fVar9;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x2e8) = in_xd0;
    }
    iVar4 = -0x73d79244;
    (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c031b68(ar4,0x8c286dbc,ar6,ar7));
  }
  else if (iVar4 == 2) {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c034148(ar4 + 0xb0,9,ar6,ar7));
    if ((iVar4 != 1) && (iVar4 != 2)) {
      (*(undefined4 *)(fr0_ - 0x208)) = 1;
      (vsp = ((unsigned long)(fr0_ - 728)), free_if_nonnull_wrap_102790(&(*(double *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
      return (*(undefined4 *)(fr0_ - 0x208));
    }
    if (cVar18 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x24) = 0x41700000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x24) = 0x8c13bac441700000;
    }
    (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c023bf4(ar4 + 0x14,((undefined1 *)(unsigned)0x8c13bac4),ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 800) = 0;
    (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c03263c(ar4,ar4 + 0x14,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xb8)),ar5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x2e4,((undefined1 *)(fr0_ - 0xc8)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,ar6,ar7));
    if (cVar18 == '\0') {
      dVar11 = CONCAT44D(0x43fa0000,*(undefined4 *)(unsigned)(ar4 + 0x2e8));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x2e8);
      dVar11 = 1.1709360855895245e+17;
    }
    if (cVar17 == '\0') {
      fVar9 = F32LO(dVar11) + F32HI(dVar11);
    }
    else {
      fVar9 = SUB84(dVar11 + dVar11,0);
    }
    if (cVar18 == '\0') {
      *(float *)(unsigned)(ar4 + 0x2e8) = fVar9;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x2e8) = in_xd0;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_sub(ar4 + 0x2e4,ar5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x2d4,((undefined1 *)(fr0_ - 0xd8)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6,ar7));
    iVar4 = -0x73d7922c;
    (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c031b68(ar4,0x8c286dd4,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c031748(ar4,iVar4,ar6,ar7));
  pdVar5 = (double *)(unsigned)(ar4 + 0x2c);
  in_dr0 = (double)(ulonglong)(uint)fVar9;
  if (cVar18 == '\0') {
    *(undefined4 *)(unsigned)pdVar5 = 0;
  }
  else {
    *pdVar5 = in_dr0;
  }
  (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c031c64(ar4,pdVar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x318) = 0;
override_jmp_8c0b3676_case_3:
  if ((0 < *(int *)(unsigned)(ar4 + 0x1d4)) && (*(int *)(unsigned)(ar4 + 0x31c) != 2)) {
    pdVar5 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe8))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_sub(ar4 + 0x2e4,ar5,ar6,ar7); });
    uVar8 = (vsp = ((unsigned long)(fr0_ - 728)), Vec3_length(((undefined1 *)(fr0_ - 0xe8)),pdVar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x48)),uVar8,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,ar6,ar7));
    if (*(int *)(unsigned)(ar4 + 0x1d4) == 2) {
      iVar4 = ar4 + 0x14;
      (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x48)),iVar4,ar6,ar7));
      if (cVar18 == '\0') {
        dVar11 = CONCAT44D(0x42b40000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar11 = 1.01062290177484e-311;
        in_xd0 = in_dr0;
      }
      if (cVar17 == '\0' && SUB84(dVar11,0) < F32HI(dVar11)) {
        if (cVar18 == '\0') {
          dVar15 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x14);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x14);
          dVar15 = dVar11;
        }
        dVar11 = (double)(D2U(dVar15) & 0xffffffff);
        if (cVar17 == '\0' && SUB84(dVar15,0) < 0.0) {
          (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c0238b4(((undefined1 *)(fr0_ - 0x48)),((void *)0x8c0238b4),ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c022fc0(ar5,ar4 + 0x2e4,ar6,ar7));
          (*(undefined4 *)(fr0_ - 0x218)) = SUB84(dVar11,0);
          uVar8 = (undefined4)(D2U(dVar11) >> 0x20);
          if (cVar18 == '\0') {
            (*(undefined4 *)(fr0_ - 0x218)) = uVar8;
            uVar8 = (*(undefined4 *)(fr0_ - 0x214));
          }
          (*(undefined4 *)(fr0_ - 0x214)) = uVar8;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x108))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xf8)),&(*(undefined4 *)(fr0_ - 0x218)),ar6,ar7); });
          puVar6 = ((undefined1 *)(fr0_ - 0x108));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x118))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_add(puVar6,ar5,puVar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x2e4,((undefined1 *)(fr0_ - 0x118)),puVar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x118)),0xffffffff,puVar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x108)),0xffffffff,puVar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf8)),0xffffffff,puVar6,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c0238b4(((undefined1 *)(fr0_ - 0x48)),iVar4,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c022fc0(ar5,ar4 + 0x2e4,ar6,ar7));
          (*(undefined4 *)(fr0_ - 0x21c)) = SUB84(dVar11,0);
          uVar8 = (undefined4)(D2U(dVar11) >> 0x20);
          if (cVar18 == '\0') {
            (*(undefined4 *)(fr0_ - 0x21c)) = uVar8;
            uVar8 = (*(undefined4 *)(fr0_ - 0x218));
          }
          (*(undefined4 *)(fr0_ - 0x218)) = uVar8;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x138))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x128)),&(*(undefined4 *)(fr0_ - 0x21c)),ar6,ar7); });
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x148))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x138)),ar5,ar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x2e4,((undefined1 *)(fr0_ - 0x148)),ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x148)),0xffffffff,ar6,ar7));
          puVar6 = ((undefined1 *)(fr0_ - 0x138));
          (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(puVar6,0xffffffff,puVar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x128)),0xffffffff,puVar6,ar7));
        }
        ar6 = &(*(double *)(fr0_ - 0x38));
        ar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
        (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c032788(ar4,ar4 + 0x2e4,ar6,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
        if (*(int *)(unsigned)(ar4 + 0x31c) == 1) {
          (vsp = ((unsigned long)(fr0_ - 728)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar4 + 0x2e4,ar6,ar7));
          if (cVar18 == '\0') {
            dVar15 = CONCAT44D(0x42100000,(int)(D2U(dVar11) >> 0x20));
          }
          else {
            dVar15 = 7.909484942708294e+231;
            in_xd0 = dVar11;
          }
          if (cVar17 == '\0') {
            fVar9 = F32HI(dVar15);
            dVar11 = CONCAT44D(fVar9,F32LO(dVar15) + fVar9);
          }
          else {
            dVar11 = dVar15 + dVar15;
          }
          if (cVar18 == '\0') {
            *(int *)(unsigned)(ar4 + 0x2e8) = SUB84(dVar11,0);
          }
          else {
            *(double *)(unsigned)(ar4 + 0x2e8) = in_xd0;
          }
        }
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x48)),ar4 + 0x14,ar6,ar7));
      if (cVar18 == '\0') {
        dVar11 = CONCAT44D(0x42b40000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar11 = 1.68966155488372e-311;
        in_xd0 = in_dr0;
      }
      if (cVar17 == '\0' && SUB84(dVar11,0) < F32HI(dVar11)) {
        *(undefined4 *)(unsigned)(ar4 + 0x31c) = 2;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
        (*(undefined4 *)(fr0_ - 0x20c)) = 1;
        (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 728)), free_if_nonnull_wrap_102790(&(*(double *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,((void *)0x8c022cb0),ar7));
        return (*(undefined4 *)(fr0_ - 0x20c));
      }
    }
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
    in_dr0 = dVar11;
  }
  pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x31c));
  if ((double *)(unsigned)pcVar7 == (double *)(unsigned)0x0) {
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x2c)),ar4 + 0x2e4,0,ar7));
    fVar9 = F32LO(in_dr0);
    iVar4 = ar4 + 0x14;
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x80,iVar4,pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar4,pcVar7,ar7));
    if (cVar18 == '\0') {
      fVar9 = *(float *)(unsigned)(ar4 + 0x28);
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
    }
    if (cVar17 == '\0' && 1.0 < fVar9) {
      if (cVar18 == '\0') {
        in_dr0 = CONCAT44D(0x3e19999a,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        in_dr0 = 3.73986008970316e-312;
      }
      if (cVar17 == '\0') {
        fVar9 = F32HI(in_dr0);
        in_dr0 = CONCAT44D(fVar9,F32LO(in_dr0) - fVar9);
      }
      else {
        in_dr0 = in_dr0 - in_dr0;
      }
      iVar4 = ar4;
      if (cVar18 == '\0') {
        *(int *)(unsigned)(ar4 + 0x28) = SUB84(in_dr0,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
    }
    else {
      uVar10 = CONCAT44(0x3f800000,fVar9);
      if (cVar18 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3f800000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = uVar10;
      }
      pcVar7 = (code *)0x3;
      iVar4 = 0;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 728)), rand_range(ar4,0,3,ar7));
      if (cVar17 == '\0') {
        in_dr0 = CONCAT44D((float)(iVar2 + 1),(int)uVar10);
      }
      else {
        in_dr0 = (double)(iVar2 + 1);
      }
      if (cVar18 == '\0') {
        *(int *)(unsigned)(ar4 + 0x24) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x24) = in_dr0;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 728)), CAnimBody_GetCurFrame(ar4 + 0xb0,iVar4,pcVar7,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 1;
  }
  else if ((double *)(unsigned)pcVar7 == (double *)(unsigned)0x1) {
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x2c)),ar4 + 0x2e4,1,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,((void *)0x8c033d88),pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), CAnimBody_GetCurFrame(ar4 + 0xb0,((void *)0x8c026da8),pcVar7,ar7));
    if (cVar18 == '\0') {
      dVar11 = CONCAT44D(0x41f00000,SUB84(in_dr0,0));
      in_fr15 = F32HI(in_dr0);
    }
    else {
      dVar11 = 3.74017818184368e-312;
    }
    if (cVar17 == '\0') {
      bVar16 = in_fr15 < F32HI(dVar11);
    }
    else {
      bVar16 = CONCAT44D(in_fr14,in_fr15) < dVar11;
    }
    if (bVar16) {
LAB_8c0b42c2:
      if (cVar18 == '\0') {
        in_dr0 = CONCAT44D(0x3f7d70a4,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        in_dr0 = -1.1562114664300326e+79;
      }
      if (cVar17 == '\0') {
        fVar9 = F32HI(in_dr0);
        in_dr0 = CONCAT44D(fVar9,F32LO(in_dr0) * fVar9);
      }
      else {
        in_dr0 = in_dr0 * in_dr0;
      }
      if (cVar18 == '\0') {
        *(int *)(unsigned)(ar4 + 0x28) = SUB84(in_dr0,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
    }
    else {
      if (cVar18 == '\0') {
        in_dr0 = CONCAT44D(0x42700000,SUB84(dVar11,0));
      }
      else {
        in_dr0 = 0.007187501562839316;
      }
      if (cVar17 == '\0') {
        bVar16 = F32HI(in_dr0) < in_fr15;
      }
      else {
        bVar16 = in_dr0 < CONCAT44D(in_fr14,in_fr15);
      }
      if (bVar16) goto LAB_8c0b42c2;
    }
    pcVar7 = (code *)0xb0;
    (vsp = ((unsigned long)(fr0_ - 728)), CAnimBody_GetCurFrame(ar4 + 0xb0,((void *)0x8c026da8),0xb0,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 1;
  }
  else if ((double *)(unsigned)pcVar7 == (double *)(unsigned)0x2) {
    pcVar7 = (code *)(ar4 + 0x94);
    if (cVar18 == '\0') {
      uVar8 = SUB84(in_dr0,0);
      uVar12 = 0x3fc00000;
    }
    else {
      uVar8 = 0x3fc00000;
      uVar12 = 0x17c;
    }
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x158)),((void *)0x8c022ce8),pcVar7,ar7));
    puVar6 = ((undefined1 *)(fr0_ - 0x158));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x168))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_add(ar4 + 0x2d4,puVar6,pcVar7,ar7); });
    uVar3 = (vsp = ((unsigned long)(fr0_ - 728)), Vec3_length(((undefined1 *)(fr0_ - 0x168)),puVar6,pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_length_sq(ar4 + 0x2d4,ar4 + 0x2d4,pcVar7,ar7));
    (*(undefined4 *)(fr0_ - 0x278)) = uVar12;
    (*(undefined4 *)(fr0_ - 0x220)) = uVar8;
    uVar1 = uVar12;
    if (cVar18 == '\0') {
      (*(undefined4 *)(fr0_ - 0x278)) = uVar3;
      (*(undefined4 *)(fr0_ - 0x220)) = uVar12;
      uVar1 = (*(undefined4 *)(fr0_ - 0x21c));
    }
    (*(undefined4 *)(fr0_ - 0x21c)) = uVar1;
    in_dr0 = CONCAT44D(uVar12,uVar8);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x178))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_scale((*(undefined4 *)(fr0_ - 0x278)),&(*(undefined4 *)(fr0_ - 0x220)),pcVar7,ar7); });
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x2d4,((undefined1 *)(fr0_ - 0x178)),pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x178)),0xffffffff,pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x168)),0xffffffff,pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x158)),0xffffffff,pcVar7,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x188))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_add(ar4 + 0x2d4,ar5,pcVar7,ar7); });
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x188)),pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x188)),0xffffffff,pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x2e4,&(*(undefined4 *)(fr0_ - 0x2c)),pcVar7,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x198))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_scale(ar4 + 0x14,((undefined1 *)(unsigned)0x8c13bac8),pcVar7,ar7); });
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x198)),pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x198)),0xffffffff,pcVar7,ar7));
    iVar4 = *(int *)(unsigned)(ar4 + 800);
    if (iVar4 == 0) {
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_length_sq(ar4 + 0x2d4,0,pcVar7,ar7));
      uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      (*(undefined4 *)(fr0_ - 0x224)) = uVar8;
      if (cVar18 != '\0') {
        (*(undefined4 *)(fr0_ - 0x280)) = SUB84(in_dr0,0);
        (*(undefined4 *)(fr0_ - 0x224)) = (*(undefined4 *)(fr0_ - 0x280));
        (*(undefined4 *)(fr0_ - 0x220)) = uVar8;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1a8))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_scale(ar4 + 0x14,&(*(undefined4 *)(fr0_ - 0x224)),pcVar7,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1b8))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0x1a8)),pcVar7,ar7); });
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x1b8)),pcVar7,ar7));
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1b8)),0xffffffff,pcVar7,ar7));
      uVar8 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1a8)),0xffffffff,pcVar7,ar7));
      if (cVar18 == '\0') {
        dVar11 = CONCAT44D(0x3f7d70a4,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        dVar11 = -8.034349276309792e-251;
      }
      if (cVar17 == '\0') {
        fVar9 = F32HI(dVar11);
        dVar11 = CONCAT44D(fVar9,F32LO(dVar11) * fVar9);
      }
      else {
        dVar11 = dVar11 * dVar11;
      }
      if (cVar18 == '\0') {
        *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar11,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 728)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar8,pcVar7,ar7));
      (vsp = ((unsigned long)(fr0_ - 728)), CAnimBody_GetCurFrame(ar4 + 0xb0,uVar8,pcVar7,ar7));
      if (cVar18 == '\0') {
        in_dr0 = CONCAT44D(0x41a00000,SUB84(dVar11,0));
        in_fr15 = F32HI(dVar11);
      }
      else {
        in_dr0 = 1.6981406014198e-311;
      }
      if (in_fr15 == F32HI(in_dr0)) {
        *(undefined4 *)(unsigned)(ar4 + 0x44) = 1;
        *(int *)(unsigned)(ar4 + 800) = *(int *)(unsigned)(ar4 + 800) + 1;
        if (cVar18 == '\0') {
          in_dr0 = CONCAT44D(0x3eb33333,SUB84(in_dr0,0));
          *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0x3eb33333;
        }
        else {
          in_dr0 = 3.48527032906071e-312;
          *(undefined8 *)(unsigned)(ar4 + 0xa0) = 0xa43eb33333;
        }
        *(undefined4 *)(unsigned)(ar4 + 0xa4) = 1;
        (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c03c314(ar4,ar4,pcVar7,ar7));
        if (*(int *)(unsigned)(ar4 + 0x348) == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x240) = 1;
          pcVar7 = (code *)ar5;
          (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c033474(ar4,0xb,ar5,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
          ar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
        }
      }
    }
    else if (iVar4 == 1) {
      if (cVar18 == '\0') {
        dVar11 = CONCAT44D(0x3e19999a,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        dVar11 = 32.000007402896884;
      }
      if (cVar17 == '\0') {
        fVar9 = F32LO(dVar11) - F32HI(dVar11);
      }
      else {
        fVar9 = SUB84(dVar11 - dVar11,0);
      }
      if (cVar18 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar9;
        in_dr0 = CONCAT44D(0x40400000,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        in_dr0 = 3.74003830419144e-312;
      }
      if (cVar17 == '\0' && SUB84(in_dr0,0) < F32HI(in_dr0)) {
        if (cVar18 == '\0') {
          in_dr0 = CONCAT44D(0x40400000,SUB84(in_dr0,0));
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x40400000;
        }
        else {
          in_dr0 = 3.74003830419144e-312;
          *(undefined8 *)(unsigned)(ar4 + 0x28) = 0xb040400000;
        }
      }
      pcVar7 = (code *)0xb0;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 728)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,1,0xb0,ar7));
      if (iVar4 == 1) {
        *(int *)(unsigned)(ar4 + 800) = *(int *)(unsigned)(ar4 + 800) + 1;
        ar7 = (int *)(unsigned)0x0;
        pcVar7 = (code *)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 728)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
      }
    }
    else if (iVar4 == 2) {
      if (cVar18 == '\0') {
        dVar11 = CONCAT44D(0x3e19999a,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        dVar11 = 32.000007402896884;
      }
      if (cVar17 == '\0') {
        fVar9 = F32LO(dVar11) - F32HI(dVar11);
      }
      else {
        fVar9 = SUB84(dVar11 - dVar11,0);
      }
      if (cVar18 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar9;
        dVar11 = CONCAT44D(0x40400000,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        dVar11 = 21990236766208.0;
      }
      if (cVar17 == '\0' && SUB84(dVar11,0) < F32HI(dVar11)) {
        if (cVar18 == '\0') {
          dVar11 = CONCAT44D(0x40400000,SUB84(dVar11,0));
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x40400000;
        }
        else {
          dVar11 = 21990236766208.0;
          *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x42b4000040400000;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 728)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar4 + 0x28,pcVar7,ar7));
      (vsp = ((unsigned long)(fr0_ - 728)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar5,pcVar7,ar7));
      if (cVar18 == '\0') {
        dVar15 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5 + 4),uVar14);
        in_dr0 = CONCAT44D(0x42100000,(int)(D2U(dVar11) >> 0x20));
      }
      else {
        dVar15 = *(double *)(unsigned)((int)ar5 + 4);
        in_dr0 = 1.52838456460023e-311;
        in_xd0 = dVar11;
      }
      if (cVar17 == '\0') {
        fVar13 = F32HI(in_dr0);
        fVar9 = F32LO(in_dr0) + fVar13;
        in_dr0 = CONCAT44D(fVar13,fVar9);
        bVar16 = fVar9 < F32HI(dVar15);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
        fVar9 = F32LO(in_dr0);
        bVar16 = in_dr0 < dVar15;
      }
      if (!bVar16) {
        if (cVar18 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2d0) = 0x3f800000;
          in_dr0 = CONCAT44D(0x42f00000,fVar9);
          *(undefined4 *)(unsigned)(ar4 + 0x2cc) = 0x42f00000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2d0) = CONCAT44(0x3f800000,fVar9);
          in_dr0 = 5.69249719999231e-312;
          *(undefined8 *)(unsigned)(ar4 + 0x2cc) = 0x10c42f00000;
        }
        iVar4 = ar4 + 0x2cc;
        pcVar7 = ((void *)0x8c0230f0);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c8))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); FUN_8c0230f0(ar4 + 0x80,iVar4,((void *)0x8c0230f0),ar7); });
        uVar8 = (vsp = ((unsigned long)(fr0_ - 728)), Vec3_length(((undefined1 *)(fr0_ - 0x1c8)),iVar4,pcVar7,ar7));
        pcVar7 = ((void *)0x8c023a14);
        (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 700,uVar8,((void *)0x8c023a14),ar7));
        (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c8)),0xffffffff,pcVar7,ar7));
        *(int *)(unsigned)(ar4 + 800) = *(int *)(unsigned)(ar4 + 800) + 1;
      }
    }
    else if (iVar4 == 3) {
      if (cVar18 == '\0') {
        dVar11 = CONCAT44D(0x3e19999a,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        dVar11 = 21990236625305.6;
      }
      if (cVar17 == '\0') {
        fVar9 = F32LO(dVar11) - F32HI(dVar11);
      }
      else {
        fVar9 = SUB84(dVar11 - dVar11,0);
      }
      if (cVar18 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar9;
        fVar9 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (cVar17 != '\0' || fVar9 <= 0.0) {
        if (cVar18 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar9;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 728)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar4 + 0xb0,pcVar7,ar7));
      if (cVar18 == '\0') {
        fVar9 = *(float *)(unsigned)(ar4 + 0x2d0);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x2d0);
      }
      if (cVar17 == '\0') {
        fVar9 = fVar9 + 1.0;
      }
      else {
        fVar9 = SUB84(CONCAT44D(0x3f800000,fVar9) + CONCAT44D(0x3f800000,fVar9),0);
      }
      (*(undefined8 *)(fr0_ - 0x2d4)) = in_xd0;
      if (cVar18 == '\0') {
        (*(undefined8 *)(fr0_ - 0x2d4)) = CONCAT44D(ar4,fVar9);
      }
      if (cVar18 == '\0') {
        *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2d4))+4)) + 0x2d0) = (undefined4)(*(undefined8 *)(fr0_ - 0x2d4));
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2cc),(undefined4)(*(undefined8 *)(fr0_ - 0x2d4)));
        (*(undefined8 *)(fr0_ - 0x2d4)) = in_xd0;
      }
      else {
        *(double *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2d4))+4)) + 0x2d0) = (*(undefined8 *)(fr0_ - 0x2d4));
        dVar11 = *(double *)(unsigned)(ar4 + 0x2cc);
      }
      if (cVar17 == '\0') {
        fVar9 = F32LO(dVar11) / F32HI(dVar11);
      }
      else {
        fVar9 = SUB84(dVar11 / dVar11,0);
      }
      dVar11 = (*(undefined8 *)(fr0_ - 0x2d4));
      if (cVar18 == '\0') {
        (*(undefined8 *)(fr0_ - 0x1fc)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1fc))+4)),fVar9);
        dVar11 = (*(undefined8 *)(fr0_ - 0x1fc));
      }
      (*(undefined8 *)(fr0_ - 0x1fc)) = dVar11;
      if (cVar17 == '\0') {
        dVar11 = CONCAT44D(1.0 - fVar9,fVar9);
      }
      else {
        dVar11 = CONCAT44D(0x3f800000,fVar9) - CONCAT44D(0x3f800000,fVar9);
      }
      uVar8 = (undefined4)(D2U(dVar11) >> 0x20);
      (*(undefined4 *)(fr0_ - 0x228)) = uVar8;
      if (cVar18 != '\0') {
        (*(undefined4 *)(fr0_ - 0x228)) = SUB84(dVar11,0);
        (*(undefined4 *)(fr0_ - 0x224)) = uVar8;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1d8))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_scale(ar4 + 0x80,&(*(undefined4 *)(fr0_ - 0x228)),&(*(undefined4 *)(fr0_ - 0x228)),ar7); });
      uVar8 = 700;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1e8))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_scale(ar4 + 700,&(*(undefined8 *)(fr0_ - 0x1fc)),700,ar7); });
      ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x1fc)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x1d8)),((undefined1 *)(fr0_ - 0x1e8)),uVar8,ar7); });
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x80,(int)&(*(undefined8 *)(fr0_ - 0x1fc)) + 4,uVar8,ar7));
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x1fc)) + 4,0xffffffff,uVar8,ar7));
      pcVar7 = (code *)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1e8)),0xffffffff,0xffffffff,ar7));
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1d8)),0xffffffff,pcVar7,ar7));
      (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c022dac(ar4 + 0x80,ar4 + 700,pcVar7,ar7));
      in_xd0 = dVar11;
      if (cVar18 == '\0') {
        dVar11 = (double)(D2U(dVar11) >> 0x20);
        in_xd0 = (*(undefined8 *)(fr0_ - 0x2d4));
      }
      in_dr0 = (double)(D2U(dVar11) & 0xffffffff);
      if (cVar17 != '\0' || SUB84(dVar11,0) <= 0.0) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        *(undefined4 *)(unsigned)(ar4 + 0x31c) = 0;
        (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c031748(ar4,0,pcVar7,ar7));
        *(undefined4 *)(unsigned)(ar4 + 800) = 0;
        (*(undefined4 *)(fr0_ - 0x210)) = 0;
        (vsp = ((unsigned long)(fr0_ - 728)), free_if_nonnull_wrap_102790(&(*(double *)(fr0_ - 0x38)),0xffffffff,pcVar7,ar7));
        (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,pcVar7,ar7));
        return (*(undefined4 *)(fr0_ - 0x210));
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c022fc0(ar5,&(*(undefined4 *)(fr0_ - 0x2c)),pcVar7,ar7));
  if (cVar18 == '\0') {
    dVar11 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),(int)((ulonglong)in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    dVar11 = *(double *)(unsigned)(ar4 + 0x28);
  }
  if (cVar17 == '\0') {
    fVar9 = F32LO(dVar11) / F32HI(dVar11);
  }
  else {
    fVar9 = SUB84(dVar11 / dVar11,0);
  }
  if (cVar18 == '\0') {
    *(float *)(unsigned)(ar4 + 0x30) = fVar9;
  }
  else {
    *(double *)(unsigned)(ar4 + 0x30) = in_dr0;
  }
  uVar8 = (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c031764(ar4,&(*(undefined4 *)(fr0_ - 0x2c)),ar5,ar7));
  ar6 = (double *)(unsigned)0x1b8;
  if (*(int *)(unsigned)(ar4 + 0x1b8) == 1) {
    if (cVar18 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x18c) = *(undefined4 *)(unsigned)ar5;
      *(undefined4 *)(unsigned)(ar4 + 400) = *(undefined4 *)(unsigned)((int)ar5 + 4);
      *(undefined4 *)(unsigned)(ar4 + 0x194) = *(undefined4 *)(unsigned)(ar5 + 1);
      *(undefined4 *)(unsigned)(ar4 + 0x198) = (*(undefined4 *)(fr0_ - 0x2c));
      *(undefined4 *)(unsigned)(ar4 + 0x19c) = (*(undefined4 *)(fr0_ - 0x28));
      *(undefined4 *)(unsigned)(ar4 + 0x1a0) = (*(undefined4 *)(fr0_ - 0x24));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x18c) = *ar5;
      *(undefined8 *)(unsigned)(ar4 + 400) = *(undefined8 *)(unsigned)((int)ar5 + 4);
      *(double *)(unsigned)(ar4 + 0x194) = ar5[1];
      *(ulonglong *)(unsigned)(ar4 + 0x198) = CONCAT44((*(undefined4 *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x2c)));
      *(ulonglong *)(unsigned)(ar4 + 0x19c) = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
      *(ulonglong *)(unsigned)(ar4 + 0x1a0) = CONCAT44((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
    }
    ar6 = (double *)(unsigned)((int)ar5 + 4);
  }
override_jmp_8c0b3676_case_2:
  (*(undefined4 *)(fr0_ - 0x214)) = uVar8;
  (vsp = ((unsigned long)(fr0_ - 728)), free_if_nonnull_wrap_102790(&(*(double *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
  return (*(undefined4 *)(fr0_ - 0x214));
}

__asm__(".globl _FUN_8c0b3604\n.set _FUN_8c0b3604, _FUN_8c0b3604_def\n");
