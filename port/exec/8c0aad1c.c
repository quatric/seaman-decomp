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
undefined4 FUN_8c0aad1c_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0aad1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 224; for (int i_ = 0; i_ < 224; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *puVar2;
  int ar6_00;
  undefined4 unaff_r12 = 0;
  undefined4 unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  undefined8 *puVar3;
  float fVar4;
  double in_dr0 = 0;
  undefined4 uVar7;
  ulonglong uVar5;
  double dVar6;
  double in_dr14 = 0;
  double dVar8;
  undefined8 in_xd0 = 0;
  undefined8 in_xd14 = 0;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar3 = (undefined8 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x8)) + 4);
    (*(undefined8 *)(fr0_ - 0x8)) = CONCAT44(SUB84(in_dr14,0),(undefined4)(*(undefined8 *)(fr0_ - 0x8)));
  }
  else {
    puVar3 = &(*(undefined8 *)(fr0_ - 0x8));
    (*(undefined8 *)(fr0_ - 0x8)) = in_xd14;
  }
  *(undefined4 *)(unsigned)((int)puVar3 + -4) = unaff_r14;
  *(undefined4 *)(unsigned)((int)puVar3 + -8) = unaff_r13;
  *(undefined4 *)(unsigned)((int)puVar3 + -0xc) = unaff_r12;
  *(undefined4 *)(unsigned)((int)puVar3 + -0x10) = in_PR;
  puVar2 = ar5;
  ar6_00 = ar6;
  (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), FUN_8c022d04(ar4 + 0x200,ar5,ar6,ar7));
  (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c4c))))
            ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),puVar2,ar6_00,ar7));
  (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c4c))))
            ((undefined1 *)(unsigned)((int)puVar3 + 0xa0 + -0xd0),puVar2,ar6_00,ar7));
  (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c4c))))
            ((undefined1 *)(unsigned)((int)puVar3 + 0x90 + -0xd0),puVar2,ar6_00,ar7));
  if ((*(int *)(unsigned)(ar6 + 0x68) != 0) && ((int)((uint)*(byte *)(unsigned)(0x1fc + ar4) << 0x1e) < 0)) {
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xa0 + -0xd0),ar5,ar6_00,ar7));
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0x90 + -0xd0),*(int *)(unsigned)(ar6 + 0x68) + 4,ar6_00,
               ar7));
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x68) + 0x158));
    }
    *(unsigned *)(unsigned)((int)puVar3 + -0xd4) = (undefined1 *)(unsigned)((int)puVar3 + 0x80 + -0xd0);
    ({ unsigned long t0_ = (unsigned long)(
               *(undefined4 *)(unsigned)((int)puVar3 + -0xd4)); *(unsigned *)(((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023ae0))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xa4 + -0xd4),
               (undefined1 *)(unsigned)((int)puVar3 + 0x94 + -0xd4),ar6_00,ar7); });
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),
               (undefined1 *)(unsigned)((int)puVar3 + 0x80 + -0xd0),ar6_00,ar7));
    uVar1 = 0xffffffff;
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0x80 + -0xd0),0xffffffff,ar6_00,ar7));
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022e78))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),uVar1,ar6_00,ar7));
    uVar7 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)puVar3 + -0xb8) = uVar7;
      in_dr0 = CONCAT44D(uVar7,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      *(double *)(unsigned)((int)puVar3 + -0xb8) = in_dr0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = F32LO(in_dr0) + F32LO(in_dr14);
    }
    else {
      fVar4 = SUB84(in_dr0 + in_dr14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar3 + -0xb8),fVar4);
    }
    else {
      dVar6 = *(double *)(unsigned)((int)puVar3 + -0xb8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = F32LO(dVar6) - F32HI(dVar6);
    }
    else {
      fVar4 = SUB84(dVar6 - dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar3 + -0xb4) = fVar4;
      fVar4 = *(float *)(unsigned)((int)puVar3 + -0xb4);
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar3 + -0xb4) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)((int)puVar3 + -0xb4);
    }
    uVar5 = (ulonglong)(uint)fVar4;
    if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44((*(undefined1 *)(unsigned)0x8c0ab0a4),fVar4);
        *(undefined4 *)(unsigned)((int)puVar3 + -0xb4) = (*(undefined1 *)(unsigned)0x8c0ab0a4);
      }
      else {
        uVar5 = CONCAT44(((void *)(unsigned)0x8c022f54),(*(undefined1 *)(unsigned)0x8c0ab0a4));
        *(ulonglong *)(unsigned)((int)puVar3 + -0xb4) = uVar5;
      }
    }
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022f54))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),uVar1,ar6_00,ar7));
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), Vec3_length_sq(ar4 + 4,uVar1,ar6_00,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar3 + -0xbc) = (int)(uVar5 >> 0x20);
      uVar5 = (ulonglong)*(uint *)(unsigned)((int)puVar3 + -0xbc);
    }
    else {
      *(ulonglong *)(unsigned)((int)puVar3 + -0xbc) = uVar5;
      in_xd0 = *(undefined8 *)(unsigned)((int)puVar3 + -0xbc);
    }
    fVar4 = (float)uVar5;
    if (in_FPSCR_PR == '\0' && 0.0 < fVar4) {
      *(unsigned *)(unsigned)((int)puVar3 + -0xd4) = (undefined1 *)(unsigned)((int)puVar3 + -0x60);
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar3 + -0xd4)); *(unsigned *)(((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023b8c))))
                (ar4 + 0x14,(&(*(undefined1 *)(unsigned)0x8c13b29c)),ar6_00,ar7); });
      *(unsigned *)(unsigned)((int)puVar3 + -0xd4) = (undefined1 *)(unsigned)((int)puVar3 + -0x70);
      puVar2 = (undefined1 *)(unsigned)((int)puVar3 + -0x60);
      ({ unsigned long t0_ = (unsigned long)(
                 *(undefined4 *)(unsigned)((int)puVar3 + -0xd4)); *(unsigned *)(((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a34))))
                ((undefined1 *)(unsigned)((int)puVar3 + 0xb4 + -0xd4),puVar2,ar6_00,ar7); });
      uVar1 = (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022f54))))
                        ((undefined1 *)(unsigned)((int)puVar3 + -0x70),puVar2,ar6_00,ar7));
      *(undefined4 *)(unsigned)((int)puVar3 + -0xc0) = uVar1;
      (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
                ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),
                 *(undefined4 *)(unsigned)((int)puVar3 + -0xc0),ar6_00,ar7));
      (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar3 + -0x70),0xffffffff,ar6_00,ar7));
      (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar3 + -0x60),0xffffffff,ar6_00,ar7));
    }
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023bf4))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),
               (undefined1 *)(unsigned)((int)puVar3 + -0xb4),ar6_00,ar7));
    in_dr0 = (double)(ulonglong)(uint)fVar4;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)puVar3 + 0xb4 + -0xd0) = 0;
    }
    else {
      *(double *)(unsigned)((int)puVar3 + 0xb4 + -0xd0) = in_dr0;
    }
    puVar2 = (undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0);
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x200,puVar2,ar6_00,ar7));
  }
  if ((*(int *)(unsigned)(ar6 + 100) != 0) && ((int)((uint)*(byte *)(unsigned)(0x1fc + ar4) << 0x1d) < 0)) {
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x170 + *(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8)))))
              (*(int *)(unsigned)(ar6 + 0x50),puVar2,ar6_00,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar3 + -0xc4) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(unsigned)((int)puVar3 + -0xc4));
      dVar6 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0ab0c4),SUB84(in_dr0,0));
    }
    else {
      *(double *)(unsigned)((int)puVar3 + -0xc4) = in_dr0;
      dVar6 = CONCAT44D(((void *)(unsigned)0x8c02f670),(*(undefined1 *)(unsigned)0x8c0ab0c4));
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                               F32LO(in_dr14) + F32HI(dVar6));
    }
    else {
      dVar8 = in_dr14 + dVar6;
    }
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xa0 + -0xd0),ar5,ar6_00,ar7));
    *(unsigned *)(unsigned)((int)puVar3 + -0xd4) = (undefined1 *)(unsigned)((int)puVar3 + -0x80);
    ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar3 + -0xd4)); *(unsigned *)(((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02f670))))
              (*(undefined4 *)(unsigned)(ar6 + 0x50),ar5,ar6_00,ar7); });
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0x90 + -0xd0),
               (undefined1 *)(unsigned)((int)puVar3 + -0x80),ar6_00,ar7));
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar3 + -0x80),0xffffffff,ar6_00,ar7));
    *(unsigned *)(unsigned)((int)puVar3 + -0xd4) = (undefined1 *)(unsigned)((int)puVar3 + -0x90);
    ({ unsigned long t0_ = (unsigned long)(
               *(undefined4 *)(unsigned)((int)puVar3 + -0xd4)); *(unsigned *)(((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023ae0))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xa4 + -0xd4),
               (undefined1 *)(unsigned)((int)puVar3 + 0x94 + -0xd4),ar6_00,ar7); });
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),
               (undefined1 *)(unsigned)((int)puVar3 + -0x90),ar6_00,ar7));
    uVar1 = 0xffffffff;
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar3 + -0x90),0xffffffff,ar6_00,ar7));
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022e78))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),uVar1,ar6_00,ar7));
    uVar7 = (undefined4)(D2U(dVar6) >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)puVar3 + -200) = uVar7;
      dVar6 = CONCAT44D(uVar7,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      *(double *)(unsigned)((int)puVar3 + -200) = dVar6;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = F32LO(dVar6) + F32LO(dVar8);
    }
    else {
      fVar4 = SUB84(dVar6 + dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar3 + -200),fVar4);
    }
    else {
      dVar6 = *(double *)(unsigned)((int)puVar3 + -200);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = F32LO(dVar6) - F32HI(dVar6);
    }
    else {
      fVar4 = SUB84(dVar6 - dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0ab0cc),fVar4);
    }
    else {
      dVar6 = CONCAT44D((&(*(undefined1 *)(unsigned)0x8c13b2a0)),(*(undefined1 *)(unsigned)0x8c0ab0cc));
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = F32LO(dVar6) * F32HI(dVar6);
    }
    else {
      fVar4 = SUB84(dVar6 * dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar3 + -0xb4) = fVar4;
      fVar4 = *(float *)(unsigned)((int)puVar3 + -0xb4);
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar3 + -0xb4) = in_xd0;
    }
    uVar5 = (ulonglong)(uint)fVar4;
    if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44((*(undefined1 *)(unsigned)0x8c0ab0a4),fVar4);
        *(undefined4 *)(unsigned)((int)puVar3 + -0xb4) = (*(undefined1 *)(unsigned)0x8c0ab0a4);
      }
      else {
        uVar5 = CONCAT44(((void *)(unsigned)0x8c022f54),(*(undefined1 *)(unsigned)0x8c0ab0a4));
        *(ulonglong *)(unsigned)((int)puVar3 + -0xb4) = uVar5;
      }
    }
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022f54))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),uVar1,ar6_00,ar7));
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), Vec3_length_sq(ar4 + 4,uVar1,ar6_00,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar3 + -0xcc) = (int)(uVar5 >> 0x20);
      uVar5 = (ulonglong)*(uint *)(unsigned)((int)puVar3 + -0xcc);
    }
    else {
      *(ulonglong *)(unsigned)((int)puVar3 + -0xcc) = uVar5;
    }
    if (in_FPSCR_PR == '\0' && 0.0 < (float)uVar5) {
      *(unsigned *)(unsigned)((int)puVar3 + -0xd4) = (undefined1 *)(unsigned)((int)puVar3 + -0xa0);
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar3 + -0xd4)); *(unsigned *)(((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023b8c))))
                (ar4 + 0x14,(&(*(undefined1 *)(unsigned)0x8c13b2a0)),ar6_00,ar7); });
      *(unsigned *)(unsigned)((int)puVar3 + -0xd4) = (undefined1 *)(unsigned)((int)puVar3 + -0xb0);
      puVar2 = (undefined1 *)(unsigned)((int)puVar3 + -0xa0);
      ({ unsigned long t0_ = (unsigned long)(
                 *(undefined4 *)(unsigned)((int)puVar3 + -0xd4)); *(unsigned *)(((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a34))))
                ((undefined1 *)(unsigned)((int)puVar3 + 0xb4 + -0xd4),puVar2,ar6_00,ar7); });
      uVar1 = (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022f54))))
                        ((undefined1 *)(unsigned)((int)puVar3 + -0xb0),puVar2,ar6_00,ar7));
      *(undefined4 *)(unsigned)((int)puVar3 + -0xd0) = uVar1;
      (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
                ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),
                 *(undefined4 *)(unsigned)((int)puVar3 + -0xd0),ar6_00,ar7));
      (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar3 + -0xb0),0xffffffff,ar6_00,ar7));
      (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar3 + -0xa0),0xffffffff,ar6_00,ar7));
    }
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023bf4))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),
               (undefined1 *)(unsigned)((int)puVar3 + -0xb4),ar6_00,ar7));
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023aa0))))
              (ar4 + 0x200,(undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),ar6_00,ar7));
  }
  (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
            ((undefined1 *)(unsigned)((int)puVar3 + 0x90 + -0xd0),0xffffffff,ar6_00,ar7));
  (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
            ((undefined1 *)(unsigned)((int)puVar3 + 0xa0 + -0xd0),0xffffffff,ar6_00,ar7));
  uVar1 = (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
                    ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),0xffffffff,ar6_00,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0aad1c\n.set _FUN_8c0aad1c, _FUN_8c0aad1c_def\n");
