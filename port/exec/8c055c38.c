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
undefined4 FUN_8c055c38_def(int ar4,int ar5,float *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c055c38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 280; for (int i_ = 0; i_ < 280; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float *ar5_00;
  undefined4 uVar4;
  undefined1 *ar5_01;
  undefined1 *ar7_00;
  undefined4 *puVar5;
  undefined4 uVar6;
  float fVar7;
  uint uVar8;
  double dVar9;
  float fVar10;
  undefined4 in_fr3 = 0;
  double dVar11;
  undefined8 in_xd0 = 0;
  char cVar12;
  char cVar13;
  float *ain0;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar6 = 1;
  ar7_00 = ar7;
  ar5_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x3c)),((void *)0x8c022c4c),ar6,ar7_00));
  ain0 = ar5_00;
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_ctor_copy(&(*(float *)(fr0_ - 0x4c)),ar5_00,ar6,ar7_00));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 280)), get_field_24_026024(*(undefined4 *)(unsigned)(ar4 + 0x244),ar5_00,ar6,ar7_00));
  if (iVar1 != 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x2a4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
    *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
    (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(&(*(float *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7_00));
    return 0;
  }
  (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c031748(ar4,((void *)0x8c031748),ar6,ar7_00));
  if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(0x42e6c234,(*(float *)(fr0_ - 0x48)));
    }
    else {
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
      dVar9 = 6.20177319754504e-312;
    }
    if (cVar12 == '\0') {
      (*(float *)(fr0_ - 0x48)) = F32LO(dVar9) - F32HI(dVar9);
    }
    else {
      (*(float *)(fr0_ - 0x48)) = SUB84(dVar9 - dVar9,0);
    }
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(0x438a051f,(*(float *)(fr0_ - 0x4c)));
    }
    else {
      (*(float *)(fr0_ - 0x48)) = (float)in_xd0;
      (*(undefined4 *)(fr0_ - 0x44)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
      in_xd0 = CONCAT44((*(float *)(fr0_ - 0x48)),(*(float *)(fr0_ - 0x4c)));
      dVar9 = -9.507220658418769e+240;
    }
    if (cVar12 == '\0') {
      (*(float *)(fr0_ - 0x4c)) = F32LO(dVar9) + F32HI(dVar9);
    }
    else {
      (*(float *)(fr0_ - 0x4c)) = SUB84(dVar9 + dVar9,0);
    }
    if (cVar13 != '\0') {
      (*(float *)(fr0_ - 0x4c)) = (float)in_xd0;
      (*(float *)(fr0_ - 0x48)) = F32HI(in_xd0);
    }
  }
  else {
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(0x42e6c234,(*(float *)(fr0_ - 0x48)));
    }
    else {
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
      dVar9 = 6.20177319754504e-312;
    }
    if (cVar12 == '\0') {
      (*(float *)(fr0_ - 0x48)) = F32LO(dVar9) - F32HI(dVar9);
    }
    else {
      (*(float *)(fr0_ - 0x48)) = SUB84(dVar9 - dVar9,0);
    }
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(0x43938ccd,(*(float *)(fr0_ - 0x4c)));
    }
    else {
      (*(float *)(fr0_ - 0x48)) = (float)in_xd0;
      (*(undefined4 *)(fr0_ - 0x44)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
      in_xd0 = CONCAT44((*(float *)(fr0_ - 0x48)),(*(float *)(fr0_ - 0x4c)));
      dVar9 = 1.74908467537556e-311;
    }
    if (cVar12 == '\0') {
      (*(float *)(fr0_ - 0x4c)) = F32LO(dVar9) + F32HI(dVar9);
    }
    else {
      (*(float *)(fr0_ - 0x4c)) = SUB84(dVar9 + dVar9,0);
    }
    if (cVar13 != '\0') {
      (*(float *)(fr0_ - 0x4c)) = (float)in_xd0;
      (*(float *)(fr0_ - 0x48)) = F32HI(in_xd0);
    }
  }
  uVar4 = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x338) = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 0x2a4);
  if (iVar1 == 0) {
    if (ar7 == (undefined1 *)(unsigned)0x1) {
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
      uVar6 = 0;
      goto LAB_8c0563fa;
    }
    uVar4 = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 280)), rand_range(ar4,0,0x1e,ar7_00));
    *(int *)(unsigned)(ar4 + 0x2f8) = iVar1 + 0x14;
    ar7_00 = (undefined1 *)(unsigned)0x5;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    ar6 = (float *)(unsigned)0x2d4;
    (vsp = ((unsigned long)(fr0_ - 280)), vec3_clear(ar4 + 0x2d4,uVar4,0x2d4,5));
    (vsp = ((unsigned long)(fr0_ - 280)), vec3_clear(ar4 + 0x2a8,uVar4,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 280)), vec3_clear(ar4 + 0x90,uVar4,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 280)), vec3_clear(ar4 + 0x6c,uVar4,ar6,ar7_00));
    *(int *)(unsigned)(ar4 + 0x2a4) = *(int *)(unsigned)(ar4 + 0x2a4) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      *(undefined4 *)(unsigned)(ar4 + 0x334) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c026db0(ar4,1,ar6,ar7_00));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c03c0f0(ar4 + 0xb0,uVar4,ar6,ar7_00));
      puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 280)), deref_u32(uVar2,uVar4,ar6,ar7_00));
      uVar2 = puVar3[1];
      *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar3;
      *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar2;
      *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar3[2];
      if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
        puVar5 = ((undefined4 *)(unsigned)0x8c135f7c);
        puVar3 = ((undefined4 *)(unsigned)0x8c135f94);
      }
      else {
        puVar5 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c13621c);
        puVar3 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c136234);
      }
      (vsp = ((unsigned long)(fr0_ - 280)), vec3_clear(((undefined1 *)(fr0_ - 0x3c)),uVar4,ar6,ar7_00));
      *(unsigned *)(unsigned)(ar4 + 0xb4) = puVar5;
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 280)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x6c)),ar6,ar7_00));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6,ar7_00));
      (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined4 *)(fr0_ - 0x28));
      *(unsigned *)(unsigned)(ar4 + 0xb4) = puVar3;
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 280)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x7c)),ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6,ar7_00));
      (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined4 *)(fr0_ - 0x24));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 280)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 280)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x3c)),ar4 + 0x2d4,ar6,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x8c)),ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6,ar7_00));
      ar5_01 = ((undefined1 *)(fr0_ - 0x3c));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(ar4 + 0x2d4,ar5_01,ar6,ar7_00));
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D((*(undefined4 *)(fr0_ - 0x38)),(*(float *)(fr0_ - 0x48)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
        dVar9 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x38)));
      }
      if (cVar12 == '\0') {
        fVar7 = F32LO(dVar9) + F32HI(dVar9);
      }
      else {
        fVar7 = SUB84(dVar9 + dVar9,0);
      }
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),fVar7);
      }
      else {
        dVar9 = *(double *)(unsigned)(ar5 + 4);
      }
      if (cVar12 == '\0') {
        fVar7 = F32LO(dVar9) - F32HI(dVar9);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(0x3dcccccd,fVar7);
      }
      else {
        dVar9 = 4.50375370731149e-312;
      }
      if (cVar12 == '\0') {
        fVar7 = F32LO(dVar9) * F32HI(dVar9);
      }
      else {
        fVar7 = SUB84(dVar9 * dVar9,0);
      }
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2ac),fVar7);
      }
      else {
        dVar9 = *(double *)(unsigned)(ar4 + 0x2ac);
      }
      if (cVar12 == '\0') {
        fVar7 = F32HI(dVar9);
        dVar9 = CONCAT44D(fVar7,F32LO(dVar9) + fVar7);
      }
      else {
        dVar9 = dVar9 + dVar9;
      }
      if (cVar13 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2ac) = SUB84(dVar9,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2ac) = in_xd0;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 280)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 280)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_01,ar6,ar7_00); });
      uVar2 = (undefined4)(D2U(dVar9) >> 0x20);
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xac)),ar5_01,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x9c)),((undefined1 *)(fr0_ - 0xac)),ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,ar6,ar7_00));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xbc)),uVar4,ar6,ar7_00));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(fr0_ - 0xbc)),ar6,ar7_00));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0xbc)),0xffffffff,ar6,ar7_00));
      if (iVar1 == 3) {
        (vsp = ((unsigned long)(fr0_ - 280)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xc8)),uVar4,ar6,ar7_00));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 280)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 280)) - 8); FUN_8c023484(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0xc8)),ar6,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0xd8)),ar6,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6,ar7_00));
        uVar4 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 280)), object_dtor_delete(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6,ar7_00));
      }
      else if (iVar1 == 4) {
        (vsp = ((unsigned long)(fr0_ - 280)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xe4)),uVar4,ar6,ar7_00));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf4))); *(unsigned *)((((unsigned long)(fr0_ - 280)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 280)) - 8); FUN_8c023484(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0xe4)),ar6,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0xf4)),ar6,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,ar6,ar7_00));
        uVar4 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 280)), object_dtor_delete(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,ar6,ar7_00));
      }
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 280)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6,ar7_00); });
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(0x43660000,uVar2);
      }
      else {
        dVar9 = 1.45200378977295e-311;
      }
      if (cVar12 == '\0' && F32HI(dVar9) < SUB84(dVar9,0)) {
        if (cVar13 == '\0') {
          dVar11 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2ac),in_fr3);
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),0x43340000);
        }
        else {
          dVar11 = *(double *)(unsigned)(ar4 + 0x2ac);
          dVar9 = *(double *)(unsigned)(ar5 + 4);
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar9) - F32HI(dVar9);
        }
        else {
          fVar7 = SUB84(dVar9 - dVar9,0);
        }
        if (cVar13 == '\0') {
          dVar9 = CONCAT44D(0x3e99999a,fVar7);
        }
        else {
          dVar9 = 1.57928376276162e-311;
        }
        if (cVar12 == '\0') {
          fVar10 = F32HI(dVar9);
          fVar7 = F32LO(dVar9) * fVar10;
          dVar9 = CONCAT44D(fVar10,fVar7);
          dVar11 = CONCAT44D(F32HI(dVar11) + fVar7,SUB84(dVar11,0));
        }
        else {
          dVar9 = dVar9 * dVar9;
          dVar11 = dVar11 + dVar9;
        }
        if (cVar13 == '\0') {
          *(int *)(unsigned)(ar4 + 0x2ac) = (int)(D2U(dVar11) >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x2ac) = dVar11;
        }
      }
      uVar8 = SUB84(dVar9,0);
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x104))); *(unsigned *)((((unsigned long)(fr0_ - 280)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 280)) - 8); FUN_8c0230f0(ar4 + 0x14,((undefined1 *)(fr0_ - 0x104)),ar6,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_normalize(((undefined1 *)(fr0_ - 0x104)),((undefined1 *)(fr0_ - 0x114)),ar6,ar7_00));
      uVar4 = (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x114)),ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(ar4 + 0x80,uVar4,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x114)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x104)),0xffffffff,ar6,ar7_00));
      ar6 = (float *)(unsigned)(ar4 + 0xb0);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 280)), s_CAnimBody_AdvanceFrame_033ba0(ar6,((void *)0x8c033b98),ar6,ar7_00));
      if (iVar1 == 1) {
        (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7_00));
        uVar2 = 0;
        uVar4 = 0xffffffff;
        uVar6 = 0x1a;
        (vsp = ((unsigned long)(fr0_ - 280)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 280)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar6,uVar4,uVar2));
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)uVar8;
        }
        (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c031700(ar4,uVar6,uVar4,uVar2));
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
        (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c030eb8(ar4 + 0x1fc,uVar6,uVar4,uVar2));
        *(undefined4 *)(unsigned)(ar4 + 0x334) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
        ar7_00 = (undefined1 *)(unsigned)0x0;
        uVar6 = 0;
        ar6 = (float *)(unsigned)0x2a4;
        *(undefined4 *)(unsigned)(ar4 + 0x2a4) = 0;
      }
    }
    goto LAB_8c0563fa;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x334) = 1;
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x5c)),uVar4,ar6,ar7_00));
  ar7_00 = ((undefined1 *)(fr0_ - 0x5c));
  ar6 = &(*(float *)(fr0_ - 0x4c));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c04e2d0(ar4,ar5,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6,ar7_00));
  uVar4 = 0;
  if (iVar1 == 0) {
    ar7_00 = (undefined1 *)(unsigned)0x0;
    ar6 = (float *)(unsigned)0xffffffff;
    uVar4 = 0x48;
    (vsp = ((unsigned long)(fr0_ - 280)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x48,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 280)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6,ar7_00));
    *(int *)(unsigned)(ar4 + 0x2a4) = *(int *)(unsigned)(ar4 + 0x2a4) + 1;
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
  }
  if (*(int *)(unsigned)(ar4 + 0x298) == 1) {
    (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c030f2c(ar4 + 0x1fc,uVar4,ar6,ar7_00));
  }
LAB_8c0563fa:
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(&(*(float *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,((void *)0x8c022cb0),((undefined1 *)(fr0_ - 0x2c))));
  return uVar6;
}

__asm__(".globl _FUN_8c055c38\n.set _FUN_8c055c38, _FUN_8c055c38_def\n");
