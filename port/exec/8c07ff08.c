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
undefined4 FUN_8c07ff08_def(int ar4,float *ar5,float *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c07ff08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 220; for (int i_ = 0; i_ < 220; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar4_00;
  undefined4 *ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined4 in_fr3 = 0;
  float fVar8;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  int *ain0;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar4 = 1;
  ain0 = ar7;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 220)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x10c))))(ar7,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x28)),uVar1,ar6,ar7));
  fVar8 = 0.0;
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_zero(((float *)(fr0_ - 0x38)),uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x48)),((void *)0x8c022c4c),ar6,ar7));
  if (cVar11 == '\0') {
    dVar6 = CONCAT44D(0x40e00000,*(undefined4 *)(unsigned)(ar4 + 0x48));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
    dVar6 = 512.0001237392426;
  }
  if (cVar10 == '\0') {
    ((float *)(fr0_ - 0x38))[0] = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    ((float *)(fr0_ - 0x38))[0] = SUB84(dVar6 * dVar6,0);
  }
  if (cVar11 == '\0') {
    dVar6 = CONCAT44D(0x40800000,*(undefined4 *)(unsigned)(ar4 + 0x48));
  }
  else {
    ((float *)(fr0_ - 0x38))[0] = (float)in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
    dVar6 = 7.971355785012665e+24;
  }
  if (cVar10 == '\0') {
    fVar5 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar11 == '\0') {
    dVar6 = CONCAT44D(0x451a6000,fVar5);
  }
  else {
    dVar6 = 7.321052503998254e+19;
  }
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(F32HI(dVar6) - F32LO(dVar6),SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 - dVar6;
  }
  (*(undefined4 *)(fr0_ - 0x48)) = SUB84(dVar6,0);
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x48)) = (undefined4)(D2U(dVar6) >> 0x20);
    fVar5 = 750.0;
  }
  else {
    ((float *)(fr0_ - 0x38))[3] = 4.14784e-43;
    fVar5 = 4.14784e-43;
    (*(undefined4 *)(fr0_ - 0x3c)) = 0x128;
  }
  ((float *)(fr0_ - 0x38))[2] = 750.0;
  ((float *)(fr0_ - 0x38))[1] = 575.0;
  (*(undefined4 *)(fr0_ - 0x40)) = 0x443b8000;
  (*(undefined4 *)(fr0_ - 0x44)) = 0x440fc000;
  ar5_00 = &(*(undefined4 *)(fr0_ - 0x48));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 220)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 220)) - 8); Vec3_sub(ar5,ar5_00,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_normalize(((undefined1 *)(fr0_ - 0x68)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x78)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x128) < 6) {
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((float *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
    return 0;
  }
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if ((6 < iVar2) || (iVar2 < 0)) goto switchD_8c0800be_default;
                    
  switch(iVar2) {
  case 0:
    ar7 = (int *)(unsigned)0xb0;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,((void *)0x8c026858),ar6,0xb0));
    if (iVar2 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
    break;
  case 1:
    ar6 = ((float *)(fr0_ - 0x38));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), pure_virtual_stub(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      ar6 = (float *)(unsigned)0x5;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 220)), rand_range(ar4,3,5,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x294) = uVar1;
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
    }
    break;
  case 2:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 220)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 220)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar1,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x88)),ar6,ar7));
    uVar1 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6,ar7));
    ar4_00 = ar4 + 0xb0;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), CAnimBody_AdvanceFrame_wrapper(ar4_00,uVar1,ar6,ar7));
    if (iVar2 == 1) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c010e38(ar4_00,uVar1,ar6,ar7); });
      if (cVar11 == '\0') {
        fVar8 = 0.03;
      }
      else {
        fVar5 = 0.03;
        fVar8 = 4.2039e-43;
      }
      if (cVar10 == '\0' && fVar5 < fVar8) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      }
    }
    break;
  case 3:
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x98)),((undefined1 *)(fr0_ - 0x58)),ar6,ar7));
    ar6 = (float *)(unsigned)0x1;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x98)),1,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,ar6,ar7));
    if (iVar2 == 0) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      if (*(int *)(unsigned)(ar4 + 0x128) == 6) {
        ar7 = (int *)(unsigned)0x0;
        ar6 = (float *)(unsigned)0xffffffff;
        uVar1 = 0x23;
        (vsp = ((unsigned long)(fr0_ - 220)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x23,0xffffffff,0));
      }
      else {
        ar7 = (int *)(unsigned)0x0;
        ar6 = (float *)(unsigned)0xffffffff;
        uVar1 = 0x2d;
        (vsp = ((unsigned long)(fr0_ - 220)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2d,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 220)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c032ab0(ar4,uVar1,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c032204(ar4 + 0xb0,uVar1,ar6,ar7); });
    }
    break;
  case 4:
    *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0xa8)),((undefined1 *)(fr0_ - 0x58)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0xa8)),ar6,ar7));
    uVar1 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c031748(ar4,uVar1,ar6,ar7));
    ar6 = ar5;
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c031c74(ar4,ar5,ar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7); });
    if (cVar11 == '\0') {
      fVar8 = 100.0;
    }
    else {
      fVar5 = 100.0;
      fVar8 = 4.2039e-43;
    }
    if (cVar10 != '\0' || fVar8 <= fVar5) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      ar6 = (float *)(unsigned)0x6;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 220)), rand_range(ar4,4,6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x294) = uVar1;
      *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xf;
    }
    break;
  case 5:
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0xb8)),((undefined1 *)(fr0_ - 0x58)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0xb8)),ar6,ar7));
    uVar1 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6,ar7); });
    if (cVar11 == '\0') {
      fVar8 = fVar5;
    }
    if (cVar10 == '\0') {
      iVar2 = (int)fVar8;
    }
    else {
      iVar2 = (int)CONCAT44D(in_fr14,fVar8);
    }
    if ((iVar2 == 0x8a) && (*(int *)(unsigned)(ar4 + 0x294) < 1)) {
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(0x3ca3d70a,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar6 = 985162545658593.2;
      }
      if (cVar10 == '\0') {
        fVar5 = F32LO(dVar6) + F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar11 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar5;
        fVar5 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
      }
      if (cVar10 == '\0' && 0.0 < fVar5) {
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
        }
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,uVar1,ar6,ar7));
      if (iVar2 == 7) {
        ar6 = (float *)(unsigned)0x6;
        uVar1 = 4;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 220)), rand_range(ar4,4,6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x294) = uVar3;
      }
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c03f3ac(ar4 + 0xb0,uVar1,ar6,ar7));
      if (iVar2 == 7) {
        (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c032ab0(ar4,uVar1,ar6,ar7));
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c032204(ar4 + 0xb0,uVar1,ar6,ar7); });
        *(int *)(unsigned)(ar4 + 0x294) = *(int *)(unsigned)(ar4 + 0x294) + -1;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c031748(ar4,uVar1,ar6,ar7));
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D(0x3d4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
      dVar6 = 87960946291507.2;
    }
    if (cVar10 == '\0') {
      fVar5 = F32LO(dVar6) + F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar11 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar5;
      fVar5 = *(float *)(unsigned)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
    }
    if (cVar10 == '\0' && 0.0 < fVar5) {
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
      }
    }
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D(0x42d40000,fVar5);
    }
    else {
      dVar6 = 211106267570176.0;
    }
    if (cVar10 == '\0') {
      bVar9 = F32HI(dVar6) < fVar8;
    }
    else {
      bVar9 = dVar6 < CONCAT44D(in_fr14,fVar8);
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(0x42e80000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 492581279399936.0;
      }
      if (cVar10 == '\0') {
        bVar9 = fVar8 < F32HI(dVar6);
      }
      else {
        bVar9 = CONCAT44D(in_fr14,fVar8) < dVar6;
      }
      if (!bVar9) goto LAB_8c08060a;
LAB_8c08061a:
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(0xc0400000,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar6 = 1.1920937492693184e-07;
      }
      if (cVar10 == '\0' && F32HI(dVar6) < SUB84(dVar6,0)) {
        if (cVar11 == '\0') {
          dVar6 = CONCAT44D(0x3e800000,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar6 = 3.06085459277653e-312;
        }
        if (cVar10 == '\0') {
          fVar8 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar8,F32LO(dVar6) - fVar8);
        }
        else {
          dVar6 = dVar6 - dVar6;
        }
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar6,0);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
      }
    }
    else {
LAB_8c08060a:
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(0x42fc0000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 844425070608384.0;
      }
      if (cVar10 == '\0') {
        bVar9 = F32HI(dVar6) < fVar8;
      }
      else {
        bVar9 = dVar6 < CONCAT44D(in_fr14,fVar8);
      }
      if (bVar9) {
        if (cVar11 == '\0') {
          dVar6 = CONCAT44D(0x43080000,SUB84(dVar6,0));
        }
        else {
          dVar6 = -32.00000799074769;
        }
        if (cVar10 == '\0') {
          bVar9 = fVar8 < F32HI(dVar6);
        }
        else {
          bVar9 = CONCAT44D(in_fr14,fVar8) < dVar6;
        }
        if (bVar9) goto LAB_8c08061a;
      }
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 220)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 220)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 220)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 220)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0xc8)),ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0xd8)),&(*(undefined4 *)(fr0_ - 0x48)),ar6,ar7));
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),in_fr3);
      dVar7 = CONCAT44D(0x3f99999a,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      dVar7 = 3.051758535548288e-05;
    }
    if (cVar10 == '\0') {
      bVar9 = F32LO(dVar7) * F32HI(dVar7) < F32HI(dVar6)
      ;
    }
    else {
      bVar9 = dVar7 * dVar7 < dVar6;
    }
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6,ar7));
    if (!bVar9) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
    }
    break;
  case 6:
    *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c031748(ar4,0x178,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c031c74(ar4,ar5,ar5,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,((void *)0x8c026858),ar5,ar7));
    ar6 = ar5;
    if (iVar2 == 1) {
      uVar4 = 0;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
      (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c03c314(ar4,0,ar5,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      ar7 = (int *)(unsigned)0x0;
      uVar3 = 0xffffffff;
      uVar1 = 0;
      (vsp = ((unsigned long)(fr0_ - 220)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 220)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar3,ar7));
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c032204(ar4 + 0xb0,uVar1,uVar3,ar7); });
      ar6 = (float *)(unsigned)0xffffffff;
      *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xffffffff;
    }
  }
switchD_8c0800be_default:
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((float *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c07ff08\n.set _FUN_8c07ff08, _FUN_8c07ff08_def\n");
