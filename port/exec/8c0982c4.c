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
undefined4 FUN_8c0982c4_def(int *ar4,float *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0982c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 260; for (int i_ = 0; i_ < 260; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float *pfVar2;
  undefined1 *puVar3;
  int ar6_00;
  undefined4 unaff_r12 = 0;
  undefined4 unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  undefined8 *puVar4;
  float fVar5;
  double in_dr0 = 0;
  undefined4 uVar8;
  ulonglong uVar6;
  double dVar7;
  double in_dr14 = 0;
  double dVar9;
  undefined8 in_xd0 = 0;
  undefined8 in_xd14 = 0;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar4 = (undefined8 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x8)) + 4);
    (*(undefined8 *)(fr0_ - 0x8)) = CONCAT44(SUB84(in_dr14,0),(undefined4)(*(undefined8 *)(fr0_ - 0x8)));
  }
  else {
    puVar4 = &(*(undefined8 *)(fr0_ - 0x8));
    (*(undefined8 *)(fr0_ - 0x8)) = in_xd14;
  }
  *(undefined4 *)(unsigned)((int)puVar4 + -4) = unaff_r14;
  *(undefined4 *)(unsigned)((int)puVar4 + -8) = unaff_r13;
  *(undefined4 *)(unsigned)((int)puVar4 + -0xc) = unaff_r12;
  *(undefined4 *)(unsigned)((int)puVar4 + -0x10) = in_PR;
  *(undefined4 *)(unsigned)((int)puVar4 + -0xf4) = ar7;
  pfVar2 = ar5;
  ar6_00 = ar6;
  (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), FUN_8c022d04((int)ar4 + 0x200,ar5,ar6,ar7));
  (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c4c))))
            ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),pfVar2,ar6_00,ar7));
  (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c4c))))
            ((undefined1 *)(unsigned)((int)puVar4 + 0xc4 + -0xf4),pfVar2,ar6_00,ar7));
  (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c4c))))
            ((undefined1 *)(unsigned)((int)puVar4 + 0xb4 + -0xf4),pfVar2,ar6_00,ar7));
  if ((*(int *)(unsigned)(ar6 + 0x68) != 0) && ((int)((uint)*(byte *)(unsigned)(0x1fc + (int)ar4) << 0x1e) < 0))
  {
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xc4 + -0xf4),ar5,ar6_00,ar7));
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xb4 + -0xf4),*(int *)(unsigned)(ar6 + 0x68) + 4,ar6_00,
               ar7));
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x68) + 0x158));
    }
    *(unsigned *)(unsigned)((int)puVar4 + -0xf8) = (undefined1 *)(unsigned)((int)puVar4 + 0xa4 + -0xf4);
    ({ unsigned long t0_ = (unsigned long)(
               *(undefined4 *)(unsigned)((int)puVar4 + -0xf8)); *(unsigned *)(((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023ae0))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xc8 + -0xf8),
               (undefined1 *)(unsigned)((int)puVar4 + 0xb8 + -0xf8),ar6_00,ar7); });
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),
               (undefined1 *)(unsigned)((int)puVar4 + 0xa4 + -0xf4),ar6_00,ar7));
    uVar1 = 0xffffffff;
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xa4 + -0xf4),0xffffffff,ar6_00,ar7));
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022e78))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),uVar1,ar6_00,ar7));
    uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)puVar4 + -200) = uVar8;
      in_dr0 = CONCAT44D(uVar8,ar4[0x12]);
    }
    else {
      *(double *)(unsigned)((int)puVar4 + -200) = in_dr0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x12);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = F32LO(in_dr0) + F32LO(in_dr14);
    }
    else {
      fVar5 = SUB84(in_dr0 + in_dr14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar4 + -200),fVar5);
    }
    else {
      dVar7 = *(double *)(unsigned)((int)puVar4 + -200);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar4 + -0xc4) = fVar5;
      fVar5 = *(float *)(unsigned)((int)puVar4 + -0xc4);
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar4 + -0xc4) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)((int)puVar4 + -0xc4);
    }
    uVar6 = (ulonglong)(uint)fVar5;
    if (in_FPSCR_PR != '\0' || fVar5 <= 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar6 = CONCAT44((*(undefined1 *)(unsigned)0x8c098500),fVar5);
        *(undefined4 *)(unsigned)((int)puVar4 + -0xc4) = (*(undefined1 *)(unsigned)0x8c098500);
      }
      else {
        uVar6 = CONCAT44(((void *)(unsigned)0x8c022f54),(*(undefined1 *)(unsigned)0x8c098500));
        *(ulonglong *)(unsigned)((int)puVar4 + -0xc4) = uVar6;
      }
    }
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022f54))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),uVar1,ar6_00,ar7));
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), Vec3_length_sq(ar4 + 1,uVar1,ar6_00,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar4 + -0xcc) = (int)(uVar6 >> 0x20);
      uVar6 = (ulonglong)*(uint *)(unsigned)((int)puVar4 + -0xcc);
    }
    else {
      *(ulonglong *)(unsigned)((int)puVar4 + -0xcc) = uVar6;
      in_xd0 = *(undefined8 *)(unsigned)((int)puVar4 + -0xcc);
    }
    fVar5 = (float)uVar6;
    if (in_FPSCR_PR == '\0' && 0.0 < fVar5) {
      *(unsigned *)(unsigned)((int)puVar4 + -0xf8) = (undefined1 *)(unsigned)((int)puVar4 + 0x94 + -0xf4);
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar4 + -0xf8)); *(unsigned *)(((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023b8c))))
                (ar4 + 5,(&(*(undefined1 *)(unsigned)0x8c13a7a4)),ar6_00,ar7); });
      *(unsigned *)(unsigned)((int)puVar4 + -0xf8) = (undefined1 *)(unsigned)((int)puVar4 + 0x84 + -0xf4);
      puVar3 = (undefined1 *)(unsigned)((int)puVar4 + 0x98 + -0xf8);
      ({ unsigned long t0_ = (unsigned long)(
                 *(undefined4 *)(unsigned)((int)puVar4 + -0xf8)); *(unsigned *)(((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a34))))
                ((undefined1 *)(unsigned)((int)puVar4 + 0xd8 + -0xf8),puVar3,ar6_00,ar7); });
      uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022f54))))
                        ((undefined1 *)(unsigned)((int)puVar4 + 0x84 + -0xf4),puVar3,ar6_00,ar7));
      *(undefined4 *)(unsigned)((int)puVar4 + -0xd0) = uVar1;
      (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
                ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),
                 *(undefined4 *)(unsigned)((int)puVar4 + -0xd0),ar6_00,ar7));
      (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
                ((undefined1 *)(unsigned)((int)puVar4 + 0x84 + -0xf4),0xffffffff,ar6_00,ar7));
      (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
                ((undefined1 *)(unsigned)((int)puVar4 + 0x94 + -0xf4),0xffffffff,ar6_00,ar7));
    }
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023bf4))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),
               (undefined1 *)(unsigned)((int)puVar4 + -0xc4),ar6_00,ar7));
    in_dr0 = (double)(ulonglong)(uint)fVar5;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)puVar4 + 0xd8 + -0xf4) = 0;
    }
    else {
      *(double *)(unsigned)((int)puVar4 + 0xd8 + -0xf4) = in_dr0;
    }
    pfVar2 = (float *)(unsigned)((int)puVar4 + 0xd4 + -0xf4);
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), Vec3_assign((int)ar4 + 0x200,pfVar2,ar6_00,ar7));
  }
  if ((*(int *)(unsigned)(ar6 + 100) != 0) && ((int)((uint)*(byte *)(unsigned)(0x1fc + (int)ar4) << 0x1d) < 0)) {
    if ((-1 < *(int *)(unsigned)(0x2f4 + (int)ar4)) && (-1 < *(int *)(unsigned)(0x2f8 + (int)ar4))) {
      uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x114 + *(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8)))))
                        (*(int *)(unsigned)(ar6 + 0x50),pfVar2,ar6_00,ar7));
      *(undefined4 *)(unsigned)((int)puVar4 + -0xd4) = uVar1;
      if (*(int *)(unsigned)((int)puVar4 + -0xd4) == 0x12) {
        (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x2c))))(ar4,pfVar2,ar6_00,ar7));
      }
      else {
        uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x114 + *(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8)))))
                          (*(int *)(unsigned)(ar6 + 0x50),pfVar2,ar6_00,ar7));
        *(undefined4 *)(unsigned)((int)puVar4 + -0xd8) = uVar1;
        if (*(int *)(unsigned)((int)puVar4 + -0xd8) == 0x13) {
          uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x180 + *(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8)))))
                            (*(int *)(unsigned)(ar6 + 0x50),pfVar2,ar6_00,ar7));
          *(undefined4 *)(unsigned)((int)puVar4 + -0xdc) = uVar1;
          if (*(int *)(unsigned)((int)puVar4 + -0xdc) == 9) {
            (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x2c))))(ar4,pfVar2,ar6_00,ar7));
          }
        }
      }
      (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
                ((undefined1 *)(unsigned)((int)puVar4 + 0xb4 + -0xf4),0xffffffff,ar6_00,ar7));
      (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
                ((undefined1 *)(unsigned)((int)puVar4 + 0xc4 + -0xf4),0xffffffff,ar6_00,ar7));
      uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
                        ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),0xffffffff,ar6_00,ar7));
      return uVar1;
    }
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x170 + *(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8)))))
              (*(int *)(unsigned)(ar6 + 0x50),pfVar2,ar6_00,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar4 + -0xe0) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(unsigned)((int)puVar4 + -0xe0));
      dVar7 = CONCAT44D((*(undefined1 *)(unsigned)0x8c09873c),SUB84(in_dr0,0));
    }
    else {
      *(double *)(unsigned)((int)puVar4 + -0xe0) = in_dr0;
      dVar7 = CONCAT44D(0xc4,(*(undefined1 *)(unsigned)0x8c09873c));
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                               F32LO(in_dr14) + F32HI(dVar7));
    }
    else {
      dVar9 = in_dr14 + dVar7;
    }
    pfVar2 = ar5;
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xc4 + -0xf4),ar5,ar6_00,ar7));
    *(unsigned *)(unsigned)((int)puVar4 + -0xf8) = (undefined1 *)(unsigned)((int)puVar4 + -0x80);
    ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar4 + -0xf8)); *(unsigned *)(((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02f670))))
              (*(undefined4 *)(unsigned)(ar6 + 0x50),pfVar2,ar6_00,ar7); });
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xb4 + -0xf4),
               (undefined1 *)(unsigned)((int)puVar4 + -0x80),ar6_00,ar7));
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar4 + -0x80),0xffffffff,ar6_00,ar7));
    *(unsigned *)(unsigned)((int)puVar4 + -0xf8) = (undefined1 *)(unsigned)((int)puVar4 + -0x90);
    ({ unsigned long t0_ = (unsigned long)(
               *(undefined4 *)(unsigned)((int)puVar4 + -0xf8)); *(unsigned *)(((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023ae0))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xc8 + -0xf8),
               (undefined1 *)(unsigned)((int)puVar4 + 0xb8 + -0xf8),ar6_00,ar7); });
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),
               (undefined1 *)(unsigned)((int)puVar4 + -0x90),ar6_00,ar7));
    uVar1 = 0xffffffff;
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar4 + -0x90),0xffffffff,ar6_00,ar7));
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022e78))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),uVar1,ar6_00,ar7));
    uVar8 = (undefined4)(D2U(dVar7) >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)puVar4 + -0xe4) = uVar8;
      dVar7 = CONCAT44D(uVar8,ar4[0x12]);
    }
    else {
      *(double *)(unsigned)((int)puVar4 + -0xe4) = dVar7;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x12);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = F32LO(dVar7) + F32LO(dVar9);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar4 + -0xe4),fVar5);
    }
    else {
      dVar7 = *(double *)(unsigned)((int)puVar4 + -0xe4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D((*(undefined1 *)(unsigned)0x8c098768),fVar5);
    }
    else {
      dVar7 = CONCAT44D((*(undefined1 *)(unsigned)0x8c09876c),(*(undefined1 *)(unsigned)0x8c098768));
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar4 + -0xc4) = fVar5;
      fVar5 = *(float *)(unsigned)((int)puVar4 + -0xc4);
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar4 + -0xc4) = in_xd0;
    }
    uVar6 = (ulonglong)(uint)fVar5;
    if (in_FPSCR_PR != '\0' || fVar5 <= 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar6 = CONCAT44((*(undefined1 *)(unsigned)0x8c09876c),fVar5);
        *(undefined4 *)(unsigned)((int)puVar4 + -0xc4) = (*(undefined1 *)(unsigned)0x8c09876c);
      }
      else {
        uVar6 = CONCAT44(((void *)(unsigned)0x8c022f54),(*(undefined1 *)(unsigned)0x8c09876c));
        *(ulonglong *)(unsigned)((int)puVar4 + -0xc4) = uVar6;
      }
    }
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022f54))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),uVar1,ar6_00,ar7));
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), Vec3_length_sq(ar4 + 1,uVar1,ar6_00,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar4 + -0xe8) = (int)(uVar6 >> 0x20);
      uVar6 = (ulonglong)*(uint *)(unsigned)((int)puVar4 + -0xe8);
    }
    else {
      *(ulonglong *)(unsigned)((int)puVar4 + -0xe8) = uVar6;
    }
    fVar5 = (float)uVar6;
    if (in_FPSCR_PR == '\0' && 0.0 < fVar5) {
      *(unsigned *)(unsigned)((int)puVar4 + -0xf8) = (undefined1 *)(unsigned)((int)puVar4 + -0xa0);
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar4 + -0xf8)); *(unsigned *)(((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023b8c))))
                (ar4 + 5,(&(*(undefined1 *)(unsigned)0x8c13a7a8)),ar6_00,ar7); });
      *(unsigned *)(unsigned)((int)puVar4 + -0xf8) = (undefined1 *)(unsigned)((int)puVar4 + -0xb0);
      puVar3 = (undefined1 *)(unsigned)((int)puVar4 + -0xa0);
      ({ unsigned long t0_ = (unsigned long)(
                 *(undefined4 *)(unsigned)((int)puVar4 + -0xf8)); *(unsigned *)(((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a34))))
                ((undefined1 *)(unsigned)((int)puVar4 + 0xd8 + -0xf8),puVar3,ar6_00,ar7); });
      uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022f54))))
                        ((undefined1 *)(unsigned)((int)puVar4 + -0xb0),puVar3,ar6_00,ar7));
      *(undefined4 *)(unsigned)((int)puVar4 + -0xec) = uVar1;
      (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
                ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),
                 *(undefined4 *)(unsigned)((int)puVar4 + -0xec),ar6_00,ar7));
      (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar4 + -0xb0),0xffffffff,ar6_00,ar7));
      (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar4 + -0xa0),0xffffffff,ar6_00,ar7));
    }
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023bf4))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),
               (undefined1 *)(unsigned)((int)puVar4 + -0xc4),ar6_00,ar7));
    puVar3 = (undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4);
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), FUN_8c023aa0((int)ar4 + 0x200,puVar3,ar6_00,ar7));
    if (*(int *)(unsigned)(0x128 + (int)ar4) == 3) {
      if ((*(int *)(unsigned)(0x124 + (int)ar4) == 10) && (*(int *)(unsigned)(0x12c + (int)ar4) < 2)) {
        *(undefined4 *)(unsigned)(0x12c + (int)ar4) = 0;
        ar4[0x10] = 5;
      }
      else if ((*(int *)(unsigned)(0x248 + (int)ar4) == 2) && (*(int *)(unsigned)(0x124 + (int)ar4) != 10)
              ) {
        *(undefined4 *)(unsigned)(0x288 + (int)ar4) = 1;
        *(unsigned *)(unsigned)((int)puVar4 + -0xf8) = (undefined1 *)(unsigned)((int)puVar4 + -0xc0);
        ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar4 + -0xf8)); *(unsigned *)(((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0230f0))))
                  ((int)ar4 + 0x80,puVar3,ar6_00,ar7); });
        (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), Vec3_assign(ar4 + 5,(undefined1 *)(unsigned)((int)puVar4 + -0xc0),ar6_00,ar7));
        uVar1 = 0xffffffff;
        (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar4 + -0xc0),0xffffffff,ar6_00,ar7))
        ;
        *(undefined4 *)(unsigned)(0x248 + (int)ar4) = 0;
        ar4[0x10] = 5;
        (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033e68))))
                  ((int)ar4 + 0xb0,uVar1,ar6_00,ar7));
      }
    }
    else {
      uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c026024))))
                        (*(undefined4 *)(unsigned)((int)puVar4 + -0xf4),puVar3,ar6_00,ar7));
      *(undefined4 *)(unsigned)((int)puVar4 + -0xf0) = uVar1;
      if (*(int *)(unsigned)((int)puVar4 + -0xf0) == 0) {
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *ar5;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar7 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0x200),fVar5);
        }
        else {
          dVar7 = *(double *)(unsigned)((int)ar4 + 0x200);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = F32LO(dVar7) + F32HI(dVar7);
        }
        else {
          fVar5 = SUB84(dVar7 + dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar6 = CONCAT44((*(undefined1 *)(unsigned)0x8c098890),fVar5);
        }
        else {
          uVar6 = CONCAT44(0xb4,(*(undefined1 *)(unsigned)0x8c098890));
        }
        if (in_FPSCR_PR == '\0' && (float)(uVar6 >> 0x20) < (float)uVar6) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)((int)ar4 + 0x200) = 0;
          }
          else {
            *(ulonglong *)(unsigned)((int)ar4 + 0x200) = uVar6 & 0xffffffff;
          }
        }
      }
    }
  }
  (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
            ((undefined1 *)(unsigned)((int)puVar4 + 0xb4 + -0xf4),0xffffffff,ar6_00,ar7));
  (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
            ((undefined1 *)(unsigned)((int)puVar4 + 0xc4 + -0xf4),0xffffffff,ar6_00,ar7));
  uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
                    ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),0xffffffff,ar6_00,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0982c4\n.set _FUN_8c0982c4, _FUN_8c0982c4_def\n");
