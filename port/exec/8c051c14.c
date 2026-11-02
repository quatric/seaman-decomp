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
undefined4 FUN_8c051c14_def(int ar4,undefined4 ar5,undefined *ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c051c14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 428; for (int i_ = 0; i_ < 428; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined1 *ar5_00;
  undefined4 uVar4;
  code *ar5_01;
  undefined4 uVar5;
  undefined *ar6_00;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  double in_dr0 = 0;
  double dVar9;
  undefined4 uVar10;
  undefined4 in_fr3 = 0;
  double dVar11;
  undefined4 in_fr15 = 0;
  undefined8 in_xd0 = 0;
  bool bVar12;
  char cVar13;
  char cVar14;
  
  cVar14 = '\0';
  cVar13 = '\0';
  uVar6 = 1;
  uVar5 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_ctor_zero(((undefined4 *)(fr0_ - 0x3c)),uVar5,ar6_00,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar5,ar6_00,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); FUN_8c0230f0(ar6,uVar5,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x74)),((undefined1 *)(fr0_ - 0x84)),ar6_00,ar7));
  dVar11 = in_dr0;
  if (cVar14 == '\0') {
    dVar11 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
  puVar3 = (undefined *)(unsigned)0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_set_zero(&(*(float *)(fr0_ - 0x48)),puVar3,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x54)),puVar3,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x64)),puVar3,ar6_00,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 0x28c);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 428)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,puVar3,ar6_00,ar7));
    if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c02a1fc(ar4 + 0x2c8,puVar3,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 1;
    }
  }
  else {
    if (iVar1 == 1) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); FUN_8c0230f0(ar4 + 0x14,puVar3,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x94)),ar6,ar6_00,ar7));
      if (cVar14 == '\0') {
        *(int *)(unsigned)(ar4 + 0x224) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x224) = in_dr0;
      }
      uVar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c0231c8(ar6,uVar5,ar6_00,ar7));
      iVar1 = ar4 + 0x14;
      (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c0231c8(iVar1,uVar5,ar6_00,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1a8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 428)); FUN_8c010e38(iVar1,((void *)0x8c010e38),ar6_00,ar7); });
      if (cVar14 == '\0') {
        *(int *)(unsigned)(ar4 + 0x228) = (int)((ulonglong)in_dr0 >> 0x20);
        fVar7 = *(float *)(unsigned)(ar4 + 0x224);
        fVar8 = 3.0;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x228) = in_dr0;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x224);
        fVar7 = 3.0;
        fVar8 = 3.64338e-43;
      }
      if (cVar13 == '\0' && fVar7 < fVar8) {
        uVar6 = 0;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); FUN_8c0230f0(ar4 + 0x14,((undefined1 *)(fr0_ - 0xa4)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xa4)),((undefined1 *)(unsigned)0x8c125d48),ar6_00,ar7));
        if (cVar14 == '\0') {
          fVar7 = 45.0;
        }
        else {
          fVar8 = 45.0;
          fVar7 = 8.91226e-43;
        }
        (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6_00,ar7));
        if (cVar13 != '\0' || fVar7 <= fVar8) {
          uVar5 = (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125d48),ar6_00,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar5;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x27c) = 0;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
        goto LAB_8c0525f2;
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(0x40400000,*(undefined4 *)(unsigned)(ar4 + 0x224));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x224);
        dVar9 = 6.28643325334977e-312;
      }
      if (cVar13 == '\0') {
        fVar7 = F32LO(dVar9) - F32HI(dVar9);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar14 == '\0') {
        *(float *)(unsigned)(ar4 + 0x224) = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x224) = in_xd0;
      }
      if (*(int *)(unsigned)(ar4 + 0x128) == 0) {
        ar7 = (code *)0x0;
        ar6_00 = (undefined *)(unsigned)0xffffffff;
        puVar3 = (undefined *)(unsigned)0x5;
        (vsp = ((unsigned long)(fr0_ - 428)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
      }
      else {
        puVar3 = ar6;
        uVar5 = (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c023334(ar4 + 0x14,ar6,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar5;
        if (*(int *)(unsigned)(ar4 + 0x27c) == 3) {
          ar7 = (code *)0x0;
          ar6_00 = (undefined *)(unsigned)0xffffffff;
          uVar5 = 7;
          (vsp = ((unsigned long)(fr0_ - 428)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0));
          uVar5 = (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c026db0(ar4,uVar5,ar6_00,ar7));
          uVar4 = (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c03c0f0(ar4 + 0xb0,uVar5,ar6_00,ar7));
          puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 428)), deref_u32(uVar4,uVar5,ar6_00,ar7));
          uVar5 = puVar2[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar2;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar5;
          puVar3 = (undefined *)(unsigned)puVar2[2];
          *(unsigned *)(unsigned)(ar4 + 0xbc) = puVar3;
          if (*(int *)(unsigned)(ar4 + 0x128) == 1) {
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c13630c);
          }
          else {
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c136354);
          }
          if (cVar14 == '\0') {
            dVar9 = CONCAT44D(0x42700000,*(undefined4 *)(unsigned)(ar4 + 0x224));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x224);
            dVar9 = -3.102702123153873e+34;
          }
          if (cVar13 == '\0') {
            fVar7 = F32LO(dVar9) / F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 / dVar9,0);
          }
          if (cVar14 == '\0') {
            *(float *)(unsigned)(ar4 + 0x2c0) = fVar7;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x2c0) = in_xd0;
          }
        }
        else if (*(int *)(unsigned)(ar4 + 0x27c) == 4) {
          ar7 = (code *)0x0;
          ar6_00 = (undefined *)(unsigned)0xffffffff;
          uVar5 = 8;
          (vsp = ((unsigned long)(fr0_ - 428)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
          puVar3 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 428)), FUN_8c026db0(ar4,uVar5,ar6_00,ar7));
          uVar5 = (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c03c0f0(ar4 + 0xb0,puVar3,ar6_00,ar7));
          puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 428)), deref_u32(uVar5,puVar3,ar6_00,ar7));
          uVar5 = puVar2[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar2;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar5;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar2[2];
          if (*(int *)(unsigned)(ar4 + 0x128) == 1) {
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c136324);
          }
          else {
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c13636c);
          }
          if (cVar14 == '\0') {
            dVar9 = CONCAT44D(0x42700000,*(undefined4 *)(unsigned)(ar4 + 0x224));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x224);
            dVar9 = 1.53687565615637e-311;
          }
          if (cVar13 == '\0') {
            fVar7 = F32LO(dVar9) / F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 / dVar9,0);
          }
          if (cVar14 == '\0') {
            *(float *)(unsigned)(ar4 + 0x2c0) = fVar7;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x2c0) = in_xd0;
          }
        }
      }
      (vsp = ((unsigned long)(fr0_ - 428)), vec3_clear(ar4 + 0x2d4,puVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 428)), vec3_clear(ar4 + 0x2a8,puVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 428)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,puVar3,ar6_00,ar7));
      in_dr0 = (double)(ulonglong)(uint)fVar7;
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x2c) = in_dr0;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
      *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 1;
    }
    else if (iVar1 != 2) goto LAB_8c0525f2;
    uVar5 = SUB84(in_dr0,0);
    (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c05ae54(ar4,puVar3,ar6_00,ar7));
    if (*(int *)(unsigned)(ar4 + 0x128) == 0) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); Vec3_scale(ar6,((undefined1 *)(unsigned)0x8c1365a0),ar6_00,ar7); });
      ar5_00 = ((undefined1 *)(fr0_ - 0xb4));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc4))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); Vec3_add(ar5,ar5_00,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 428)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xd0)),ar5_00,ar6_00,ar7));
      ar7 = (code *)(ar4 + 0x14);
      ar6_00 = ((undefined1 *)(fr0_ - 0xc4));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe0))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); FUN_8c031eb0(ar4,ar5,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 428)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xe0)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 428)), object_dtor_delete(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,ar6_00,ar7));
      puVar3 = (undefined *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7));
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(0x40400000,uVar5);
      }
      else {
        dVar9 = 4.58883662057755e-312;
      }
      if (cVar13 == '\0') {
        bVar12 = F32HI(dVar9) < F32HI(dVar11);
      }
      else {
        bVar12 = dVar9 < dVar11;
      }
      if (!bVar12) {
        *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
        uVar6 = 0;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf0))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); FUN_8c0230f0(ar4 + 0x14,puVar3,ar6_00,ar7); });
        fVar7 = F32HI(dVar9);
        (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xf0)),((undefined1 *)(unsigned)0x8c125d48),ar6_00,ar7));
        if (cVar14 == '\0') {
          fVar8 = 45.0;
        }
        else {
          fVar7 = 45.0;
          fVar8 = 8.91226e-43;
        }
        puVar3 = (undefined *)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,ar6_00,ar7));
        if (cVar13 != '\0' || fVar8 <= fVar7) {
          puVar3 = ((undefined1 *)(unsigned)0x8c125d48);
          uVar5 = (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125d48),ar6_00,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar5;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x27c) = 0;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 428)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,puVar3,ar6_00,ar7));
    }
    else {
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(0x3d4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar9 = 5.238690701939511e-11;
      }
      if (cVar13 == '\0') {
        fVar7 = F32LO(dVar9) + F32HI(dVar9);
      }
      else {
        fVar7 = SUB84(dVar9 + dVar9,0);
      }
      if (cVar14 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar7;
        fVar7 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
      }
      dVar9 = CONCAT44D(0x3f800000,fVar7);
      if (cVar13 == '\0' && 1.0 < fVar7) {
        if (cVar14 == '\0') {
          dVar9 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar9 = 3.73983522256399e-312;
        }
        if (cVar13 == '\0') {
          fVar7 = F32HI(dVar9);
          dVar9 = CONCAT44D(fVar7,F32LO(dVar9) - fVar7);
        }
        else {
          dVar9 = dVar9 - dVar9;
        }
        (*(int *)(fr0_ - 0x1a8)) = ar4;
        if (cVar14 == '\0') {
          *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar9,0);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
      }
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1a8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 428)); CAnimBody_GetCurFrame(ar4 + 0xb0,puVar3,ar6_00,ar7); });
      uVar5 = (undefined4)(D2U(dVar11) >> 0x20);
      (*(undefined4 *)(fr0_ - 0x180)) = (undefined4)(D2U(dVar9) >> 0x20);
      if (cVar14 != '\0') {
        (*(undefined4 *)(fr0_ - 0x180)) = SUB84(dVar9,0);
      }
      (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xb4) + 4),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 428)), vec3_copy_8c023d8c(&(*(undefined4 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0xfc)),ar6_00,ar7));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 428)), object_dtor_delete(((undefined1 *)(fr0_ - 0xfc)),0xffffffff,ar6_00,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1a8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 428)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6_00,ar7); });
      uVar10 = (undefined4)(D2U(dVar9) >> 0x20);
      (*(undefined4 *)(fr0_ - 0x184)) = uVar10;
      if (cVar14 != '\0') {
        (*(undefined4 *)(fr0_ - 0x184)) = SUB84(dVar9,0);
        (*(undefined4 *)(fr0_ - 0x180)) = uVar10;
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 428)), get_field_1c_026dd8(ar4 + 0xb0,uVar4,ar6_00,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 428)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar4,ar6_00,ar7));
      if (cVar14 == '\0') {
        dVar11 = CONCAT44D((*(undefined4 *)(fr0_ - 0x184)),in_fr3);
      }
      else {
        dVar11 = CONCAT44D((*(undefined4 *)(fr0_ - 0x180)),(*(undefined4 *)(fr0_ - 0x184)));
      }
      fVar7 = (float)iVar1;
      dVar9 = (double)(ulonglong)(uint)fVar7;
      if (cVar13 == '\0' && fVar7 < 0.0) {
        if (cVar14 == '\0') {
          dVar9 = CONCAT44D(0x4f800000,fVar7);
        }
        else {
          dVar9 = 2.0000005923211575;
        }
        if (cVar13 == '\0') {
          fVar7 = F32HI(dVar9);
          dVar9 = CONCAT44D(fVar7,F32LO(dVar9) + fVar7);
        }
        else {
          dVar9 = dVar9 + dVar9;
        }
      }
      if (cVar13 == '\0') {
        dVar11 = CONCAT44D(F32HI(dVar11) / F32LO(dVar9),
                                  SUB84(dVar11,0));
      }
      else {
        dVar11 = dVar11 / dVar9;
      }
      if (cVar13 == '\0') {
        dVar11 = CONCAT44D(uVar5,1.0 - F32HI(dVar11));
      }
      else {
        dVar11 = CONCAT44D(uVar5,0x3f800000) - dVar11;
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(0x40000000,SUB84(dVar9,0));
      }
      else {
        dVar9 = 1.51139150211502e-311;
      }
      if (cVar13 == '\0') {
        dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),
                                  F32LO(dVar11) * F32HI(dVar9));
      }
      else {
        dVar11 = dVar11 * dVar9;
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c8),(*(undefined4 *)(fr0_ - 0x54)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x50)),(*(undefined4 *)(fr0_ - 0x54)));
        dVar9 = *(double *)(unsigned)(ar4 + 0x2c8);
      }
      if (cVar13 == '\0') {
        fVar7 = F32LO(dVar9) - F32HI(dVar9);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c0),fVar7);
      }
      else {
        dVar9 = *(double *)(unsigned)(ar4 + 0x2c0);
      }
      fVar7 = F32LO(dVar11);
      if (cVar13 == '\0') {
        (*(float *)(fr0_ - 0x48)) = F32LO(dVar9) * F32HI(dVar9) * fVar7;
      }
      else {
        (*(float *)(fr0_ - 0x48)) = SUB84(dVar9 * dVar9 * dVar11,0);
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2cc),(*(undefined4 *)(fr0_ - 0x50)));
      }
      else {
        (*(float *)(fr0_ - 0x48)) = (float)in_xd0;
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x4c)),(*(undefined4 *)(fr0_ - 0x50)));
        dVar9 = *(double *)(unsigned)(ar4 + 0x2cc);
      }
      if (cVar13 == '\0') {
        fVar8 = F32LO(dVar9) - F32HI(dVar9);
      }
      else {
        fVar8 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c0),fVar8);
      }
      else {
        dVar9 = *(double *)(unsigned)(ar4 + 0x2c0);
      }
      if (cVar13 == '\0') {
        (*(float *)(fr0_ - 0x44)) = F32LO(dVar9) * F32HI(dVar9) * fVar7;
      }
      else {
        (*(float *)(fr0_ - 0x44)) = SUB84(dVar9 * dVar9 * dVar11,0);
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2d0),(*(undefined4 *)(fr0_ - 0x4c)));
      }
      else {
        (*(float *)(fr0_ - 0x44)) = (float)in_xd0;
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x48)),(*(undefined4 *)(fr0_ - 0x4c)));
        dVar9 = *(double *)(unsigned)(ar4 + 0x2d0);
      }
      if (cVar13 == '\0') {
        fVar8 = F32LO(dVar9) - F32HI(dVar9);
      }
      else {
        fVar8 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c0),fVar8);
      }
      else {
        dVar9 = *(double *)(unsigned)(ar4 + 0x2c0);
      }
      if (cVar13 == '\0') {
        fVar8 = F32HI(dVar9);
        dVar11 = CONCAT44D(fVar8,F32LO(dVar9) * fVar8 * fVar7);
      }
      else {
        dVar11 = dVar9 * dVar9 * dVar11;
      }
      if (cVar14 == '\0') {
        (*(undefined4 *)(fr0_ - 0x40)) = SUB84(dVar11,0);
      }
      else {
        (*(undefined4 *)(fr0_ - 0x40)) = (undefined4)in_xd0;
        ((undefined4 *)(fr0_ - 0x3c))[0] = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      (vsp = ((unsigned long)(fr0_ - 428)), vec3_copy_8c023d8c(ar4 + 0x2c8,&(*(undefined4 *)(fr0_ - 0x54)),ar6_00,ar7));
      fVar7 = F32HI(dVar11);
      (vsp = ((unsigned long)(fr0_ - 428)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x108)),&(*(float *)(fr0_ - 0x48)),ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x118))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x108)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 428)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x118)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0x118)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 428)), object_dtor_delete(((undefined1 *)(fr0_ - 0x108)),0xffffffff,ar6_00,ar7));
      ar5_01 = ((void *)0x8c022f54);
      (vsp = ((unsigned long)(fr0_ - 428)), Vec3_length(ar4 + 0x14,((void *)0x8c022f54),ar6_00,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 428)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_01,ar6_00,ar7));
      if (iVar1 == 1) {
        uVar6 = 0;
        uVar4 = 0xffffffff;
        uVar5 = 0;
        (vsp = ((unsigned long)(fr0_ - 428)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 428)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar4,uVar6));
        *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
        uVar6 = 0;
        ar7 = ((void *)0x8c0230f0);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x128))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar5,uVar4,((void *)0x8c0230f0)); });
        ar6_00 = ((undefined1 *)(unsigned)0x8c125d48);
        (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x128)),((undefined1 *)(unsigned)0x8c125d48),((undefined1 *)(unsigned)0x8c125d48),ar7));
        if (cVar14 == '\0') {
          fVar8 = 45.0;
        }
        else {
          fVar7 = 45.0;
          fVar8 = 8.91226e-43;
        }
        (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0x128)),0xffffffff,ar6_00,ar7));
        if (cVar13 != '\0' || fVar8 <= fVar7) {
          ar7 = ((void *)0x8c023334);
          ar6_00 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 428)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125d48),ar6_00,((void *)0x8c023334)));
          *(unsigned *)(unsigned)(ar4 + 0x27c) = ar6_00;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x27c) = 0;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      }
    }
  }
LAB_8c0525f2:
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 428)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 428)), object_dtor_delete(&(*(float *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined4 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
  return uVar6;
}

__asm__(".globl _FUN_8c051c14\n.set _FUN_8c051c14, _FUN_8c051c14_def\n");
