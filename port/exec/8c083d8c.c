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
undefined4 FUN_8c083d8c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c083d8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 320; for (int i_ = 0; i_ < 320; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0 = 0;
  undefined *puVar8;
  float fVar9;
  double dVar6;
  double dVar7;
  undefined4 in_fr3 = 0;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  fVar5 = F32HI(in_dr0);
  cVar12 = '\0';
  cVar11 = '\0';
  uVar4 = 1;
  (vsp = ((unsigned long)(fr0_ - 320)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 0x134);
  if ((4 < iVar1) || (iVar1 < 0)) goto switchD_8c083dce_default;
                    
  switch(iVar1) {
  case 0:
    ar6 = (vsp = ((unsigned long)(fr0_ - 320)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,ar6,ar7));
    if (ar6 == 1) {
      if (cVar12 == '\0') {
        fVar5 = *(float *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
        puVar8 = (undefined *)(unsigned)0x449a6000;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
        fVar5 = 1235.0;
        puVar8 = ((undefined1 *)(unsigned)0x8c125e48);
      }
      if (cVar11 != '\0' || fVar5 <= (float)(uint)puVar8) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 320)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 320)) - 8); Vec3_scale(((undefined1 *)(unsigned)0x8c125e48),((undefined1 *)(unsigned)0x8c1379d4),1,ar7); });
        (vsp = ((unsigned long)(fr0_ - 320)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x38)),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 320)), Vec3_assign(ar4 + 0x54,((undefined1 *)(unsigned)0x8c125e48),1,ar7));
      }
      ar7 = 0;
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 320)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 320)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar3,ar7));
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),fVar5);
      }
      else {
        dVar6 = *(double *)(unsigned)(ar4 + 0x48);
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(-F32HI(dVar6),SUB84(dVar6,0));
      }
      else {
        dVar6 = -dVar6;
      }
      if (cVar12 == '\0') {
        (*(undefined8 *)(fr0_ - 0xe0)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xe0))+4)),(int)(D2U(dVar6) >> 0x20));
        dVar6 = (*(undefined8 *)(fr0_ - 0xe0));
      }
      (*(undefined8 *)(fr0_ - 0xe0)) = dVar6;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 320)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 320)) - 8); Vec3_scale(ar4 + 0x54,&(*(undefined8 *)(fr0_ - 0xe0)),uVar3,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 320)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 320)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(unsigned)0x8c1379d8),uVar3,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 320)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 320)) - 8); Vec3_add(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),((undefined1 *)(fr0_ - 0x58)),uVar3,ar7); });
      ar6 = 0x280;
      (vsp = ((unsigned long)(fr0_ - 320)), Vec3_assign(ar4 + 0x280,((undefined1 *)(fr0_ - 0x68)),0x280,ar7));
      (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x288));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x288);
        dVar6 = 6.54086966663815e-312;
      }
      if (cVar11 == '\0') {
        fVar5 = F32LO(dVar6) - F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 - dVar6,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x288) = fVar5;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x288) = in_xd0;
      }
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
    }
    break;
  case 1:
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x78)),ar4 + 0x54,ar6,ar7));
    ar6 = 1;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x78)),1,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6,ar7));
    if (iVar1 == 0) {
      if (*(int *)(unsigned)(ar4 + 0x128) == 6) {
        ar7 = 0;
        ar6 = -1;
        uVar3 = 0x23;
        (vsp = ((unsigned long)(fr0_ - 320)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x23,0xffffffff,0));
      }
      else {
        ar7 = 0;
        ar6 = -1;
        uVar3 = 0x2d;
        (vsp = ((unsigned long)(fr0_ - 320)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2d,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 320)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
    }
    break;
  case 2:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 320)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 320)) - 8); Vec3_sub(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),ar4 + 0x280,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x88)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x98)),((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x98)),ar6,ar7));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c031748(ar4,uVar3,ar6,ar7));
    ar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
    uVar3 = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c031c74(ar4,uVar3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x13c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7); });
    if (cVar12 == '\0') {
      fVar9 = 100.0;
    }
    else {
      fVar5 = 100.0;
      fVar9 = 4.316e-43;
    }
    if (cVar11 != '\0' || fVar9 <= fVar5) {
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      ar6 = 6;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 320)), rand_range(ar4,4,6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x294) = uVar3;
    }
    break;
  case 3:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa8))); *(unsigned *)((((unsigned long)(fr0_ - 320)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 320)) - 8); Vec3_sub(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),ar4 + 0x280,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0xa8)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0xb8)),((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0xb8)),ar6,ar7));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x13c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7); });
    if (cVar12 == '\0') {
      in_fr15 = fVar5;
    }
    if (cVar11 == '\0') {
      iVar1 = (int)in_fr15;
    }
    else {
      iVar1 = (int)CONCAT44D(in_fr14,in_fr15);
    }
    if ((iVar1 == 0x8a) && (*(int *)(unsigned)(ar4 + 0x294) < 1)) {
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(0x3ca3d70a,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar6 = 985162545658593.2;
      }
      if (cVar11 == '\0') {
        fVar5 = F32LO(dVar6) + F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar5;
        fVar5 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
      }
      if (cVar11 == '\0' && 0.0 < fVar5) {
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
        }
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 320)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,uVar3,ar6,ar7));
      if (iVar1 == 7) {
        ar6 = 6;
        uVar3 = 4;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 320)), rand_range(ar4,4,6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x294) = uVar2;
      }
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c03f3ac(ar4 + 0xb0,uVar3,ar6,ar7));
      if (iVar1 == 7) {
        (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c032ab0(ar4,uVar3,ar6,ar7));
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x13c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); FUN_8c032204(ar4 + 0xb0,uVar3,ar6,ar7); });
        *(int *)(unsigned)(ar4 + 0x294) = *(int *)(unsigned)(ar4 + 0x294) + -1;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c031748(ar4,uVar3,ar6,ar7));
    if (cVar12 == '\0') {
      dVar6 = CONCAT44D(0x3c23d70a,*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
      dVar6 = 87960945987420.16;
    }
    if (cVar11 == '\0') {
      fVar5 = F32LO(dVar6) + F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar5;
      fVar5 = *(float *)(unsigned)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
    }
    if (cVar11 == '\0' && 0.0 < fVar5) {
      if (cVar12 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
      }
    }
    if (cVar12 == '\0') {
      dVar6 = CONCAT44D(0x42d40000,fVar5);
    }
    else {
      dVar6 = 211106267570176.0;
    }
    if (cVar11 == '\0') {
      bVar10 = F32HI(dVar6) < in_fr15;
    }
    else {
      bVar10 = dVar6 < CONCAT44D(in_fr14,in_fr15);
    }
    if (bVar10) {
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(0x42e80000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 492581279399936.0;
      }
      if (cVar11 == '\0') {
        bVar10 = in_fr15 < F32HI(dVar6);
      }
      else {
        bVar10 = CONCAT44D(in_fr14,in_fr15) < dVar6;
      }
      if (!bVar10) goto LAB_8c08437e;
LAB_8c08438e:
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(0xc0400000,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar6 = 1.1920937492693184e-07;
      }
      if (cVar11 == '\0' && F32HI(dVar6) < SUB84(dVar6,0)) {
        if (cVar12 == '\0') {
          dVar6 = CONCAT44D(0x3e800000,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar6 = -7.957972465383526e-251;
        }
        if (cVar11 == '\0') {
          fVar5 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar5,F32LO(dVar6) - fVar5);
        }
        else {
          dVar6 = dVar6 - dVar6;
        }
        if (cVar12 == '\0') {
          *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar6,0);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
      }
    }
    else {
LAB_8c08437e:
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(0x42fc0000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 844425070608384.0;
      }
      if (cVar11 == '\0') {
        bVar10 = F32HI(dVar6) < in_fr15;
      }
      else {
        bVar10 = dVar6 < CONCAT44D(in_fr14,in_fr15);
      }
      if (bVar10) {
        if (cVar12 == '\0') {
          dVar6 = CONCAT44D(0x43080000,SUB84(dVar6,0));
        }
        else {
          dVar6 = -32.00000799074769;
        }
        if (cVar11 == '\0') {
          bVar10 = in_fr15 < F32HI(dVar6);
        }
        else {
          bVar10 = CONCAT44D(in_fr14,in_fr15) < dVar6;
        }
        if (bVar10) goto LAB_8c08438e;
      }
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 320)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 320)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 320)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 320)) - 8); Vec3_add(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),((undefined1 *)(fr0_ - 0xc8)),ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0xd8)),ar4 + 0x280,ar6,ar7));
    if (cVar12 == '\0') {
      dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),in_fr3);
      dVar7 = CONCAT44D(0x3f99999a,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      dVar7 = -7.932637885456047e-251;
    }
    if (cVar11 == '\0') {
      bVar10 = F32LO(dVar7) * F32HI(dVar7) <
               F32HI(dVar6);
    }
    else {
      bVar10 = dVar7 * dVar7 < dVar6;
    }
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6,ar7));
    if (bVar10) {
      if (*(int *)(unsigned)(ar4 + 0x2b8) == 1) {
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
        ar7 = 0x2b4;
        ar6 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      }
    }
    else {
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      ar6 = ar4;
    }
    break;
  case 4:
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c031748(ar4,((void *)0x8c031748),ar6,ar7));
    ar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
    uVar3 = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c031c74(ar4,uVar3,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 320)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar3,ar6,ar7));
    if (iVar1 == 1) {
      uVar4 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c03c314(ar4,0,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      ar7 = 0;
      ar6 = -1;
      (vsp = ((unsigned long)(fr0_ - 320)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 320)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x13c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); FUN_8c032204(ar4 + 0xb0,ar4 + 0xb0,ar6,ar7); });
    }
  }
switchD_8c083dce_default:
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xe0))+4)) = uVar4;
  (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  return (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xe0))+4));
}

__asm__(".globl _FUN_8c083d8c\n.set _FUN_8c083d8c, _FUN_8c083d8c_def\n");
