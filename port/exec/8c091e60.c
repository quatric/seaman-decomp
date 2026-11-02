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
undefined4 FUN_8c091e60_def(ulonglong *ar4,ulonglong *ar5,int *ar6,ulonglong *ar7)

{
  ring[rp++ & 255] = "FUN_8c091e60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 288; for (int i_ = 0; i_ < 288; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *ar5_00;
  ulonglong *ar5_01;
  int *ar6_00;
  ulonglong *ar7_00;
  uint uVar4;
  float fVar5;
  ulonglong in_dr0 = 0;
  float fVar9;
  ulonglong uVar6;
  double dVar7;
  ulonglong uVar8;
  ulonglong in_xd0 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  uVar4 = (uint)in_dr0;
  (*(undefined4 *)(fr0_ - 0x100)) = 1;
  ar5_01 = ar4 + 0xd;
  iVar1 = (int)*ar5_01;
  if ((4 < iVar1) || (iVar1 < 0)) goto switchD_8c091ea8_default;
                    
  switch(iVar1) {
  case 0:
    while( true ) {
      uVar4 = (uint)in_dr0;
      uVar3 = 0x8c2846d0;
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c031b68(ar4,0x8c2846d0,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c03c314(ar4,uVar3,ar6_00,ar7_00));
      ar7_00 = (ulonglong *)(unsigned)0x0;
      ar6_00 = (int *)(unsigned)0xffffffff;
      uVar3 = 1;
      (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,1,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,uVar3,ar6_00,ar7_00));
      uVar8 = (ulonglong)uVar4;
      if (cVar11 == '\0') {
        *(int *)(unsigned)((int)ar4 + 0x224) = 0;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x224) = uVar8;
      }
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(ar4 + 0x46,(int *)(unsigned)((int)ar4 + 0x14),ar6_00,ar7_00));
      uVar8 = uVar8 & 0xffffffff;
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 0x44) = 0;
      }
      else {
        ar4[0x44] = uVar8;
      }
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign((int *)(unsigned)((int)ar4 + 0x54),ar5,ar6_00,ar7_00));
      ar5_01 = ar5;
      (vsp = ((unsigned long)(fr0_ - 288)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*ar7 + 0x128))))(ar7,ar5,ar6_00,ar7_00));
      iVar1 = (int)(uVar8 >> 0x20);
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 0xb) = iVar1;
        dVar7 = CONCAT44D(0x3a83126f,*(int *)(unsigned)((int)ar4 + 0x54));
      }
      else {
        ar4[0xb] = uVar8;
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x54);
        dVar7 = 6.577018791706446e+182;
        (*(int *)(fr0_ - 0x11c)) = iVar1;
      }
      if (cVar10 == '\0') {
        fVar5 = F32LO(dVar7) + F32HI(dVar7);
      }
      else {
        fVar5 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar11 == '\0') {
        *(float *)(unsigned)((int)ar4 + 0x54) = fVar5;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x54) = in_xd0;
      }
      if (ar6 != (int *)(unsigned)0x0) {
        if (ar6 == (int *)(unsigned)0x3) {
          if (cVar11 == '\0') {
            uVar8 = CONCAT44(0x3e4ccccd,fVar5);
            *(int *)(unsigned)(ar4 + 0x14) = 0x3e4ccccd;
          }
          else {
            uVar8 = 0xb03e4ccccd;
            ar4[0x14] = 0xb03e4ccccd;
          }
          ar5_01 = ar4 + 5;
          if (cVar11 == '\0') {
            *(int *)(unsigned)ar5_01 = 0;
          }
          else {
            *ar5_01 = uVar8 & 0xffffffff;
          }
          *(int *)(unsigned)(ar4 + 0xd) = (int)ar4[0xd] + 1;
        }
        goto switchD_8c091ea8_caseD_1;
      }
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44(0x3ba3d70a,fVar5);
        *(int *)(unsigned)(ar4 + 0x14) = 0x3ba3d70a;
      }
      else {
        in_dr0 = 0x61e3d41b3ba3d70a;
        ar4[0x14] = 0x61e3d41b3ba3d70a;
      }
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 5) = 0;
      }
      else {
        ar4[5] = in_dr0;
      }
      ar5_01 = (ulonglong *)(unsigned)0x2;
      *(int *)(unsigned)(ar4 + 0xd) = 2;
switchD_8c091ea8_caseD_2:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,ar5_01,ar6_00,ar7_00));
      if (iVar1 == 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 288)), rand_range(ar4,0,100,ar7_00));
        if (iVar1 < 0x32) {
          ar7_00 = (ulonglong *)(unsigned)0x0;
          ar6_00 = (int *)(unsigned)0xffffffff;
          ar5_01 = (ulonglong *)(unsigned)0x1;
          (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,1,0xffffffff,0));
        }
        else {
          ar7_00 = (ulonglong *)(unsigned)0x0;
          ar6_00 = (int *)(unsigned)0xffffffff;
          ar5_01 = (ulonglong *)(unsigned)0x7;
          (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,7,0xffffffff,0));
        }
        (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,ar5_01,ar6_00,ar7_00));
      }
      fVar5 = (float)in_dr0;
      if (ar6 != (int *)(unsigned)0x3) break;
      *(int *)(unsigned)(ar4 + 0xd) = 0;
      *(int *)(unsigned)(ar4 + 0x45) = 0;
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 3) = 0;
      }
      else {
        ar4[3] = in_dr0 & 0xffffffff;
      }
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 0x44) = 0;
      }
      else {
        ar4[0x44] = in_dr0;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x70)),ar5_01,ar6_00,ar7_00));
    ar7_00 = (ulonglong *)(unsigned)((int)ar4 + 0x14);
    ar6_00 = (int *)(unsigned)((int)ar4 + 0x54);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); FUN_8c031eb0(ar4,ar5,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign((int *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x80)),ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6_00,ar7_00));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 288)), object_dtor_delete(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_00,ar7_00));
    if (cVar11 == '\0') {
      fVar5 = *(float *)(unsigned)((int)ar4 + 0x224);
    }
    else {
      in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x224);
    }
    if (cVar10 != '\0' || fVar5 <= 1.0) {
      if (cVar11 == '\0') {
        dVar7 = CONCAT44D(0x3c23d70a,*(int *)(unsigned)((int)ar4 + 0x224));
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x224);
        dVar7 = 4.1640967825903e-312;
      }
      if (cVar10 == '\0') {
        fVar5 = F32LO(dVar7) + F32HI(dVar7);
      }
      else {
        fVar5 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar11 == '\0') {
        *(float *)(unsigned)((int)ar4 + 0x224) = fVar5;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x224) = in_xd0;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x8c)),uVar3,ar6_00,ar7_00));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); FUN_8c023484((int *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x8c)),ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign((int *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x9c)),ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6_00,ar7_00));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 288)), object_dtor_delete(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6_00,ar7_00));
    if ((ar6 != (int *)(unsigned)0x1) && (ar6 != (int *)(unsigned)0x2)) {
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c0324ac(ar4,uVar3,ar6_00,ar7_00));
      break;
    }
    *(int *)(unsigned)(ar4 + 0xd) = 4;
    *(int *)(unsigned)(ar4 + 0x45) = 0;
    uVar8 = (ulonglong)(uint)fVar5;
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 0x44) = 0;
    }
    else {
      ar4[0x44] = uVar8;
    }
    ar5_01 = (ulonglong *)(unsigned)((int)ar4 + 0x14);
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(ar4 + 0x46,ar5_01,ar6_00,ar7_00));
    uVar4 = (uint)uVar8;
    *(int *)(unsigned)((int)ar4 + 0x244) = 0;
  case 4:
    uVar8 = (ulonglong)uVar4;
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 0x14) = 0;
    }
    else {
      ar4[0x14] = uVar8;
    }
    (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c073c9c(ar4,ar5_01,ar6_00,ar7_00));
    uVar6 = uVar8 & 0xffffffff;
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 5) = 0;
    }
    else {
      ar4[5] = uVar6;
    }
    if ((ar6 == (int *)(unsigned)0x1) || (ar6 == (int *)(unsigned)0x2)) {
      ar6_00 = (int *)(unsigned)0xb0;
      (vsp = ((unsigned long)(fr0_ - 288)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,ar4 + 0x16,0xb0,ar7_00));
      fVar5 = (float)uVar6;
      if (cVar11 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 3);
      }
      else {
        in_xd0 = ar4[3];
      }
      uVar8 = (ulonglong)(uint)fVar5;
      if (fVar5 != 0.0) {
        piVar2 = (int *)(unsigned)((int)ar4 + 0x14);
        (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),piVar2,ar6_00,ar7_00));
        uVar8 = uVar8 & 0xffffffff;
        if (cVar11 == '\0') {
          (*(undefined8 *)(fr0_ - 0x20)) = (*(undefined8 *)(fr0_ - 0x20)) & 0xffffffff00000000;
          uVar8 = (*(undefined8 *)(fr0_ - 0x20));
        }
        (*(undefined8 *)(fr0_ - 0x20)) = uVar8;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 288)), Vec3_length(((undefined1 *)(fr0_ - 0x24)),piVar2,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),uVar3,ar6_00,ar7_00));
        if (cVar11 == '\0') {
          dVar7 = CONCAT44D(0x3d4ccccd,(int)ar4[0x44]);
        }
        else {
          in_xd0 = ar4[0x44];
          dVar7 = 1.18882576146403e-311;
        }
        if (cVar10 == '\0') {
          fVar5 = F32LO(dVar7) + F32HI(dVar7);
        }
        else {
          fVar5 = SUB84(dVar7 + dVar7,0);
        }
        if (cVar11 == '\0') {
          *(float *)(unsigned)(ar4 + 0x44) = fVar5;
          fVar5 = *(float *)(unsigned)(ar4 + 0x44);
        }
        else {
          ar4[0x44] = in_xd0;
        }
        if (cVar10 != '\0' || 1.0 <= fVar5) {
          if (cVar11 == '\0') {
            *(int *)(unsigned)(ar4 + 0x44) = 0x3f800000;
          }
          else {
            ar4[0x44] = CONCAT44(0x3f800000,fVar5);
          }
        }
        if (cVar11 == '\0') {
          fVar5 = *(float *)(unsigned)(ar4 + 0x44);
        }
        if (cVar10 == '\0') {
          dVar7 = CONCAT44D(1.0 - fVar5,fVar5);
        }
        else {
          dVar7 = CONCAT44D(0x3f800000,fVar5) - CONCAT44D(0x3f800000,fVar5);
        }
        iVar1 = (int)(D2U(dVar7) >> 0x20);
        (*(int *)(fr0_ - 0x118)) = iVar1;
        if (cVar11 != '\0') {
          (*(int *)(fr0_ - 0x118)) = SUB84(dVar7,0);
          (*(int *)(fr0_ - 0x114)) = iVar1;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xdc))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_scale(ar4 + 0x46,&(*(int *)(fr0_ - 0x118)),ar6_00,ar7_00); });
        if (cVar11 == '\0') {
          (*(int *)(fr0_ - 0x11c)) = (int)ar4[0x44];
          uVar8 = CONCAT44((*(int *)(fr0_ - 0x11c)),SUB84(dVar7,0));
        }
        else {
          uVar8 = ar4[0x44];
          (*(int *)(fr0_ - 0x11c)) = (int)uVar8;
          (*(int *)(fr0_ - 0x118)) = (int)(uVar8 >> 0x20);
        }
        fVar5 = (float)uVar8;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xec))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x24)),&(*(int *)(fr0_ - 0x11c)),ar6_00,ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xfc))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xdc)),((undefined1 *)(fr0_ - 0xec)),ar6_00,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign((int *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0xfc)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xfc)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xec)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xdc)),0xffffffff,ar6_00,ar7_00));
        if (cVar11 == '\0') {
          fVar5 = *(float *)(unsigned)(ar4 + 0x44);
        }
        if (fVar5 == 1.0) {
          if (cVar11 == '\0') {
            *(int *)(unsigned)(ar4 + 0x44) = 0;
          }
          else {
            ar4[0x44] = (ulonglong)(uint)fVar5;
          }
        }
      }
    }
    else {
      ar6_00 = (int *)(unsigned)0x0;
      *(int *)(unsigned)(ar4 + 0xd) = 0;
      *(int *)(unsigned)(ar4 + 0x45) = 0;
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 3) = 0;
      }
      else {
        ar4[3] = uVar8 & 0xffffffff;
      }
      ar7_00 = ar4 + 0x44;
      if (cVar11 == '\0') {
        *(int *)(unsigned)ar7_00 = 0;
      }
      else {
        *ar7_00 = uVar8 & 0xffffffff;
      }
    }
    break;
  case 1:
switchD_8c091ea8_caseD_1:
    iVar1 = (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,ar5_01,ar6_00,ar7_00));
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 288)), rand_range(ar4,0,100,ar7_00));
      if (iVar1 < 0x32) {
        ar7_00 = (ulonglong *)(unsigned)0x0;
        ar6_00 = (int *)(unsigned)0xffffffff;
        ar5_01 = (ulonglong *)(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,1,0xffffffff,0));
      }
      else {
        ar7_00 = (ulonglong *)(unsigned)0x0;
        ar6_00 = (int *)(unsigned)0xffffffff;
        ar5_01 = (ulonglong *)(unsigned)0x7;
        (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,7,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,ar5_01,ar6_00,ar7_00));
    }
    if (ar6 == (int *)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c073c9c(ar4,ar5_01,ar6_00,ar7_00));
      *(int *)(unsigned)(ar4 + 0xd) = 0;
      break;
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x3c4ccccd,(int)ar4[0x44]);
    }
    else {
      in_xd0 = ar4[0x44];
      dVar7 = 0.007750001682143193;
    }
    if (cVar10 == '\0') {
      fVar5 = F32LO(dVar7) + F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar11 == '\0') {
      *(float *)(unsigned)(ar4 + 0x44) = fVar5;
      fVar5 = *(float *)(unsigned)(ar4 + 0x44);
      fVar9 = 0.999;
    }
    else {
      ar4[0x44] = in_xd0;
      in_xd0 = ar4[0x44];
      fVar5 = 0.999;
      fVar9 = 3.97969e-43;
    }
    if (cVar10 != '\0' || fVar9 <= fVar5) {
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 0x44) = 0x3f7fbe77;
      }
      else {
        ar4[0x44] = 0x11c3f7fbe77;
      }
    }
    if (cVar11 == '\0') {
      uVar8 = CONCAT44(0x3f7fbe77,(int)ar4[0x44]);
    }
    else {
      in_xd0 = ar4[0x44];
      uVar8 = 0x11c3f7fbe77;
    }
    if ((float)uVar8 != (float)(uVar8 >> 0x20)) {
      if (cVar11 == '\0') {
        uVar8 = (ulonglong)(uint)ar4[0x44];
      }
      else {
        in_xd0 = ar4[0x44];
      }
      fVar5 = (float)uVar8;
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(1.0 - fVar5,fVar5);
      }
      else {
        dVar7 = CONCAT44D(0x3f800000,fVar5) - CONCAT44D(0x3f800000,fVar5);
      }
      uVar3 = (undefined4)(D2U(dVar7) >> 0x20);
      (*(undefined4 *)(fr0_ - 0x108)) = uVar3;
      if (cVar11 != '\0') {
        (*(undefined4 *)(fr0_ - 0x108)) = SUB84(dVar7,0);
        (*(undefined4 *)(fr0_ - 0x104)) = uVar3;
      }
      ar5_00 = &(*(undefined4 *)(fr0_ - 0x108));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_scale(ar4 + 0x46,ar5_00,ar6_00,ar7_00); });
      uVar3 = SUB84(dVar7,0);
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x44)),ar5_00,ar6_00,ar7_00));
      if (cVar11 == '\0') {
        (*(int *)(fr0_ - 0x10c)) = (int)ar4[0x44];
        uVar8 = CONCAT44((*(int *)(fr0_ - 0x10c)),uVar3);
      }
      else {
        uVar8 = ar4[0x44];
        (*(int *)(fr0_ - 0x10c)) = (int)uVar8;
        (*(undefined4 *)(fr0_ - 0x108)) = (undefined4)(uVar8 >> 0x20);
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x44)),&(*(int *)(fr0_ - 0x10c)),ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign((int *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7_00));
      ar5_01 = (ulonglong *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7_00));
    }
    if ((ar6 != (int *)(unsigned)0x1) && (ar6 != (int *)(unsigned)0x2)) {
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c0324ac(ar4,ar5_01,ar6_00,ar7_00));
      break;
    }
    *(int *)(unsigned)(ar4 + 0xd) = 3;
    uVar8 = uVar8 & 0xffffffff;
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 0x44) = 0;
    }
    else {
      ar4[0x44] = uVar8;
    }
    ar5_01 = (ulonglong *)(unsigned)((int)ar4 + 0x14);
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(ar4 + 0x46,ar5_01,ar6_00,ar7_00));
    uVar4 = (uint)uVar8;
    *(int *)(unsigned)((int)ar4 + 0x244) = 0;
    if ((ar6 == (int *)(unsigned)0x1) && ((*(char *)(fr0_ + 0x00000000)) == '\x01')) {
      ar7_00 = (ulonglong *)(unsigned)0xa;
      ar6_00 = (int *)(unsigned)0x1;
      (vsp = ((unsigned long)(fr0_ - 288)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*ar7 + 0xd0))))(ar7,ar5,1,10));
      ar5_01 = ar5;
    }
  case 3:
    uVar8 = (ulonglong)uVar4;
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 0x14) = 0;
    }
    else {
      ar4[0x14] = uVar8;
    }
    (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c073c9c(ar4,ar5_01,ar6_00,ar7_00));
    uVar6 = uVar8 & 0xffffffff;
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 5) = 0;
    }
    else {
      ar4[5] = uVar6;
    }
    if ((ar6 == (int *)(unsigned)0x1) || (ar6 == (int *)(unsigned)0x2)) {
      (vsp = ((unsigned long)(fr0_ - 288)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,ar5_01,ar6_00,ar7_00));
      uVar4 = (uint)uVar6;
      piVar2 = (int *)(unsigned)((int)ar4 + 0x14);
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),piVar2,ar6_00,ar7_00));
      uVar8 = (ulonglong)uVar4;
      if (cVar11 == '\0') {
        (*(undefined8 *)(fr0_ - 0x20)) = (ulonglong)(*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x20))+4)) << 0x20;
        uVar8 = (*(undefined8 *)(fr0_ - 0x20));
      }
      (*(undefined8 *)(fr0_ - 0x20)) = uVar8;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 288)), Vec3_length(((undefined1 *)(fr0_ - 0x24)),piVar2,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),uVar3,ar6_00,ar7_00));
      ar6_00 = (int *)(unsigned)0x220;
      if (cVar11 == '\0') {
        dVar7 = CONCAT44D(0x3e4ccccd,(int)ar4[0x44]);
      }
      else {
        in_xd0 = ar4[0x44];
        dVar7 = 3.48523717287845e-312;
      }
      if (cVar10 == '\0') {
        fVar5 = F32LO(dVar7) + F32HI(dVar7);
      }
      else {
        fVar5 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar11 == '\0') {
        *(float *)(unsigned)(ar4 + 0x44) = fVar5;
        fVar5 = *(float *)(unsigned)(ar4 + 0x44);
      }
      else {
        ar4[0x44] = in_xd0;
      }
      if (cVar10 != '\0' || 1.0 <= fVar5) {
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x44) = 0x3f800000;
        }
        else {
          ar4[0x44] = CONCAT44(0x3f800000,fVar5);
        }
      }
      if (cVar11 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x44);
      }
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(1.0 - fVar5,fVar5);
      }
      else {
        dVar7 = CONCAT44D(0x3f800000,fVar5) - CONCAT44D(0x3f800000,fVar5);
      }
      iVar1 = (int)(D2U(dVar7) >> 0x20);
      (*(int *)(fr0_ - 0x110)) = iVar1;
      if (cVar11 != '\0') {
        (*(int *)(fr0_ - 0x110)) = SUB84(dVar7,0);
        (*(int *)(fr0_ - 0x10c)) = iVar1;
      }
      ar7_00 = ar4;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xac))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_scale(ar4 + 0x46,&(*(int *)(fr0_ - 0x110)),0x220,ar4); });
      if (cVar11 == '\0') {
        (*(int *)(fr0_ - 0x114)) = (int)ar4[0x44];
        uVar8 = CONCAT44((*(int *)(fr0_ - 0x114)),SUB84(dVar7,0));
      }
      else {
        uVar8 = ar4[0x44];
        (*(int *)(fr0_ - 0x114)) = (int)uVar8;
        (*(int *)(fr0_ - 0x110)) = (int)(uVar8 >> 0x20);
      }
      fVar5 = (float)uVar8;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xbc))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x24)),&(*(int *)(fr0_ - 0x114)),ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xcc))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xac)),((undefined1 *)(fr0_ - 0xbc)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign((int *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0xcc)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xcc)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xbc)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,ar6_00,ar7_00));
      if (cVar11 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x44);
      }
      if (fVar5 == 1.0) {
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x44) = 0;
        }
        else {
          ar4[0x44] = (ulonglong)(uint)fVar5;
        }
        *(int *)(unsigned)(ar4 + 0x45) = 1;
        ar6_00 = (int *)(unsigned)0x40;
        *(int *)(unsigned)(ar4 + 8) = 5;
      }
    }
    else {
      *(int *)(unsigned)(ar4 + 0xd) = 0;
      *(int *)(unsigned)(ar4 + 0x45) = 0;
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 3) = 0;
      }
      else {
        ar4[3] = uVar8 & 0xffffffff;
      }
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 0x44) = 0;
      }
      else {
        ar4[0x44] = uVar8 & 0xffffffff;
      }
    }
    break;
  case 2:
    goto switchD_8c091ea8_caseD_2;
  }
switchD_8c091ea8_default:
  (*(undefined4 *)(fr0_ - 0x104)) = 0;
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7_00));
  return (*(undefined4 *)(fr0_ - 0x104));
}

__asm__(".globl _FUN_8c091e60\n.set _FUN_8c091e60, _FUN_8c091e60_def\n");
