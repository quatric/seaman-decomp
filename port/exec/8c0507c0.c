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
undefined4 FUN_8c0507c0_def(int *ar4,float *ar5,code *ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c0507c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 604; for (int i_ = 0; i_ < 604; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  code *pcVar5;
  undefined4 uVar6;
  code *ar6_00;
  undefined4 ar6_01;
  undefined1 *ar5_00;
  float fVar7;
  uint uVar8;
  ulonglong in_dr0 = 0;
  undefined8 uVar9;
  float fVar13;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  undefined4 in_fr3 = 0;
  undefined8 in_dr4 = 0;
  undefined4 in_fr15 = 0;
  float fVar14;
  ulonglong in_xd0 = 0;
  char cVar15;
  char cVar16;
  code *ain0;
  
  cVar16 = '\0';
  cVar15 = '\0';
  dVar11 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),in_fr15);
  pcVar5 = (code *)ar5;
  ar6_00 = ar6;
  ain0 = ar7;
  (vsp = ((unsigned long)(fr0_ - 604)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 604)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x44)),pcVar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c031700(ar4,pcVar5,ar6_00,ar7));
  iVar1 = ar4[0x1a];
  if (iVar1 == 0) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); FUN_8c0230f0(ar4 + 0x20,((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7); });
    (*(float *)(fr0_ - 0x1f8)) = (float)in_dr0;
    (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 0x20,((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
    if (ar4[0x4a] < 3) {
      ar7 = (code *)0x0;
      ar6_00 = (code *)0xffffffff;
      uVar6 = 0;
      (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c022d04(ar4 + 5,uVar6,ar6_00,ar7));
      if (ar4[0x49] != 0x2e) {
        if (cVar16 == '\0') {
          fVar7 = ar5[2];
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)(ar5 + 2);
          fVar7 = 0.0;
        }
        if (cVar15 == '\0' && fVar7 < 0.0) {
          pfVar4 = ar5 + 2;
          if (cVar16 == '\0') {
            *pfVar4 = 0.0;
          }
          else {
            pfVar4[0] = 0.0;
            pfVar4[1] = 0.0;
          }
        }
        if (cVar16 == '\0') {
          (*(float *)(fr0_ - 0x1f8)) = *ar5;
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)ar5;
          (*(float *)(fr0_ - 0x1f8)) = 0.0;
        }
        if (cVar15 == '\0' && (*(float *)(fr0_ - 0x1f8)) < 0.0) {
          if (cVar16 == '\0') {
            *ar5 = 0.0;
          }
          else {
            (*(float *)(fr0_ - 0x1f8)) = 0.0;
            ar5[0] = 0.0;
            ar5[1] = 0.0;
          }
        }
      }
    }
    else {
      if (cVar16 == '\0') {
        (*(float *)(fr0_ - 0x1f8)) = *ar5;
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)ar5;
        (*(float *)(fr0_ - 0x1f8)) = 0.0;
      }
      if (cVar15 == '\0' && 0.0 < (*(float *)(fr0_ - 0x1f8))) {
        if (cVar16 == '\0') {
          (*(float *)(fr0_ - 0x1f8)) = ar5[2];
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)(ar5 + 2);
          (*(float *)(fr0_ - 0x1f8)) = 0.0;
        }
        if (cVar15 == '\0' && (*(float *)(fr0_ - 0x1f8)) < 0.0) {
          pfVar4 = ar5 + 2;
          if (cVar16 == '\0') {
            *pfVar4 = 0.0;
          }
          else {
            (*(float *)(fr0_ - 0x1f8)) = 0.0;
            pfVar4[0] = 0.0;
            pfVar4[1] = 0.0;
          }
        }
      }
      piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      pfVar4 = ar5;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 604)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)) + 0x130))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar5,ar6_00,ar7));
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_length(ar4 + 0x20,pfVar4,ar6_00,ar7));
        pfVar4 = (float *)(unsigned)(ar4 + 0x22);
        if (cVar16 == '\0') {
          (*(float *)(fr0_ - 0x1f8)) = *pfVar4;
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)pfVar4;
        }
        if ((*(float *)(fr0_ - 0x1f8)) == 0.0) {
          if (cVar16 == '\0') {
            (*(float *)(fr0_ - 0x1f8)) = (float)ar4[0x20];
          }
          else {
            in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x20);
          }
          if ((*(float *)(fr0_ - 0x1f8)) == 0.0) {
            ar6_00 = ((void *)0x8c022d04);
            (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c022d04(ar4 + 0x20,pfVar4,((void *)0x8c022d04),ar7));
          }
        }
        (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c02374c(ar4 + 0x20,pfVar4,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 0x20,((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
        if ((*(int *)(fr0_ + 0x00000008)) == 1) {
          iVar1 = 10;
        }
        else {
          iVar1 = 2;
        }
        uVar6 = 100;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 604)), rand_range(ar4,0,100,ar7));
        if ((iVar1 < iVar2) || (ar4[0x4a] != 4)) {
          ar7 = (code *)0x0;
          ar6_00 = (code *)0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,99,0xffffffff,0));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x70)),((void *)0x8c023d68),uVar6,ar7));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); FUN_8c023484(ar4 + 0x20,((undefined1 *)(fr0_ - 0x70)),uVar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 0x20,((undefined1 *)(fr0_ - 0x80)),uVar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,uVar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), object_dtor_delete(((undefined1 *)(fr0_ - 0x70)),0xffffffff,uVar6,ar7));
          ar7 = (code *)0x0;
          ar6_00 = (code *)0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0x49,0xffffffff,0));
        }
      }
      else if (iVar1 == 1) {
        ar7 = (code *)0x0;
        ar6_00 = (code *)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0));
      }
      else if (iVar1 == 2) {
        if (cVar16 == '\0') {
          uVar9 = CONCAT44(*ar5,(*(float *)(fr0_ - 0x1f8)));
        }
        else {
          uVar9 = *(undefined8 *)(unsigned)ar5;
        }
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 604)); FUN_8c010e38(piVar3,pfVar4,ar6_00,ar7); });
        fVar7 = F32HI(uVar9);
        if (cVar16 == '\0') {
          fVar13 = 1100.0;
          (*(float *)(fr0_ - 0x1f8)) = fVar7;
          fVar14 = (float)uVar9;
        }
        else {
          fVar14 = 1100.0;
          fVar13 = -1.0;
          (*(float *)(fr0_ - 0x1f8)) = (float)uVar9;
          (*(float *)(fr0_ - 0x1f4)) = fVar7;
        }
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 604)); FUN_8c010e38(piVar3,pfVar4,ar6_00,ar7); });
        if (cVar16 != '\0') {
          in_xd0 = CONCAT44((*(float *)(fr0_ - 0x1f4)),fVar13);
          (*(float *)(fr0_ - 0x1f8)) = fVar14;
        }
        if (cVar15 != '\0' || fVar13 <= (*(float *)(fr0_ - 0x1f8))) {
          pcVar5 = ((void *)0x8c022f54);
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_length(ar4 + 0x20,pfVar4,ar6_00,((void *)0x8c022f54)));
          uVar6 = 0x88;
          if (cVar16 == '\0') {
            (*(float *)(fr0_ - 0x1f8)) = (float)ar4[0x22];
          }
          else {
            in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x22);
          }
          if ((*(float *)(fr0_ - 0x1f8)) == 0.0) {
            if (cVar16 == '\0') {
              (*(float *)(fr0_ - 0x1f8)) = (float)ar4[0x20];
            }
            else {
              in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x20);
            }
            if ((*(float *)(fr0_ - 0x1f8)) == 0.0) {
              (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c022d04(ar4 + 0x20,pfVar4,0x88,pcVar5));
            }
          }
          (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c02374c(ar4 + 0x20,pfVar4,uVar6,pcVar5));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 0x20,((undefined1 *)(fr0_ - 0x90)),uVar6,pcVar5));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,uVar6,pcVar5));
          if (cVar16 == '\0') {
            *ar5 = 1100.0;
          }
          else {
            (*(float *)(fr0_ - 0x1f8)) = 1100.0;
            ar5[0] = 1100.0;
            ar5[1] = -1.0;
          }
          ar7 = (code *)0x0;
          ar6_00 = (code *)0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,99,0xffffffff,0));
        }
        else {
          if (cVar16 == '\0') {
            *ar5 = 1600.0;
          }
          else {
            (*(float *)(fr0_ - 0x1f8)) = 1600.0;
            ar5[0] = 1600.0;
            ar5[1] = -9.942077e-32;
          }
          ar7 = (code *)0x0;
          ar6_00 = (code *)0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0));
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 0x15,ar4 + 0x20,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 604)), Vec3_length(ar4 + 5,((void *)0x8c022f54),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,((void *)0x8c033e68),ar6_00,ar7));
    ar4[0xae] = 2;
    if (cVar16 == '\0') {
      ar4[10] = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 10) = (ulonglong)(uint)(*(float *)(fr0_ - 0x1f8));
    }
    (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c031b68(ar4,ar4[0x4a] * 0x18 + -0x73d7fc0c,ar6_00,ar7));
    if (cVar16 == '\0') {
      dVar10 = CONCAT44D(0x43a00000,(int)*(ulonglong *)(unsigned)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x28);
      dVar10 = -8.625516889892592e-251;
    }
    if (cVar15 == '\0') {
      fVar7 = F32LO(dVar10) * F32HI(dVar10);
    }
    else {
      fVar7 = SUB84(dVar10 * dVar10,0);
    }
    if (cVar16 == '\0') {
      ar4[0x28] = (int)fVar7;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = in_xd0;
    }
    pcVar5 = ((void *)0x8c03c314);
    (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c03c314(ar4,((void *)0x8c03c314),ar6_00,ar7));
    in_dr0 = (ulonglong)(uint)fVar7;
    if (cVar16 == '\0') {
      ar4[0xb] = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0xb) = in_dr0;
    }
    ar4[0x1a] = ar4[0x1a] + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (ar4[0x4a] == 0) {
        pcVar5 = ((void *)0x8c0230f0);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x160))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); FUN_8c0230f0(ar4 + 0x20,((void *)0x8c0230f0),ar6_00,ar7); });
        fVar7 = (float)in_dr0;
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_normalize(((undefined1 *)(fr0_ - 0x160)),pcVar5,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x170)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x170)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x160)),0xffffffff,ar6_00,ar7));
        if (cVar16 == '\0') {
          fVar7 = (float)ar4[0xb];
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0xb);
        }
        if (cVar15 == '\0') {
          fVar7 = fVar7 + 1.0;
        }
        else {
          fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0);
        }
        (*(undefined8 *)(fr0_ - 0x240)) = in_xd0;
        if (cVar16 == '\0') {
          (*(undefined8 *)(fr0_ - 0x240)) = CONCAT44(ar4,fVar7);
        }
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x240))+4)) + 0x2c) = (undefined4)(*(undefined8 *)(fr0_ - 0x240));
          dVar11 = CONCAT44D(0x42c80000,(undefined4)(*(undefined8 *)(fr0_ - 0x240)));
        }
        else {
          *(ulonglong *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x240))+4)) + 0x2c) = (*(undefined8 *)(fr0_ - 0x240));
          dVar11 = 2.89144980428368e-312;
          in_xd0 = (*(undefined8 *)(fr0_ - 0x240));
        }
        if (cVar15 == '\0') {
          (*(float *)(fr0_ - 0x1e0)) = F32LO(dVar11) / F32HI(dVar11);
        }
        else {
          (*(float *)(fr0_ - 0x1e0)) = SUB84(dVar11 / dVar11,0);
        }
        if (cVar16 != '\0') {
          (*(float *)(fr0_ - 0x1e0)) = (float)in_xd0;
          ((undefined4 *)(fr0_ - 0x1dc))[0] = (undefined4)(in_xd0 >> 0x20);
        }
      }
      else {
        piVar3 = ar4 + 0x20;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x180))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); FUN_8c0230f0(piVar3,piVar3,ar6_00,ar7); });
        fVar7 = (float)in_dr0;
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_normalize(((undefined1 *)(fr0_ - 0x180)),piVar3,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x190)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x190)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x180)),0xffffffff,ar6_00,ar7));
        if (cVar16 == '\0') {
          fVar7 = (float)ar4[0xb];
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0xb);
        }
        if (cVar15 == '\0') {
          fVar7 = fVar7 + 1.0;
        }
        else {
          fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0);
        }
        (*(undefined8 *)(fr0_ - 0x248)) = in_xd0;
        if (cVar16 == '\0') {
          (*(undefined8 *)(fr0_ - 0x248)) = CONCAT44(ar4,fVar7);
        }
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x248))+4)) + 0x2c) = (undefined4)(*(undefined8 *)(fr0_ - 0x248));
          dVar11 = CONCAT44D(0x43fa0000,(undefined4)(*(undefined8 *)(fr0_ - 0x248)));
        }
        else {
          *(ulonglong *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x248))+4)) + 0x2c) = (*(undefined8 *)(fr0_ - 0x248));
          dVar11 = 2.89154888428735e-312;
          in_xd0 = (*(undefined8 *)(fr0_ - 0x248));
        }
        if (cVar15 == '\0') {
          (*(float *)(fr0_ - 0x1e0)) = F32LO(dVar11) / F32HI(dVar11);
        }
        else {
          (*(float *)(fr0_ - 0x1e0)) = SUB84(dVar11 / dVar11,0);
        }
        if (cVar16 != '\0') {
          (*(float *)(fr0_ - 0x1e0)) = (float)in_xd0;
          ((undefined4 *)(fr0_ - 0x1dc))[0] = (undefined4)(in_xd0 >> 0x20);
        }
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1a0))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x34)),&(*(float *)(fr0_ - 0x1e0)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c023aa0(ar4 + 0x20,((undefined1 *)(fr0_ - 0x1a0)),ar6_00,ar7));
      uVar6 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1a0)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 604)), Vec3_length(ar4 + 0x20,uVar6,ar6_00,ar7));
      if (cVar16 == '\0') {
        dVar11 = CONCAT44D(0x3f70a3d7,(int)*(ulonglong *)(unsigned)(ar4 + 10));
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)(ar4 + 10);
        dVar11 = -9.106528023795323e-251;
      }
      if (cVar15 == '\0') {
        fVar7 = F32LO(dVar11) * F32HI(dVar11);
      }
      else {
        fVar7 = SUB84(dVar11 * dVar11,0);
      }
      if (cVar16 == '\0') {
        ar4[10] = (int)fVar7;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 10) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c04dd34(ar4,*(int *)(unsigned)(ar6 + 4),ar6_00,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c031de8(ar4,0,ar6_00,ar7));
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 604)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x2c))))(ar4,*ar4,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c031b68(ar4,ar4[0x4a] * 0x18 + -0x73d7fc0c,ar6_00,ar7));
        ar4[0x1a] = 0;
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 5,ar4 + 0x20,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c04dd34(ar4,*(int *)(unsigned)(ar6 + 4),ar6_00,ar7));
      }
    }
    else if (iVar1 == 3) {
      pcVar5 = ((void *)0x8c031748);
      (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c031748(ar4,((void *)0x8c031748),ar6_00,ar7));
      fVar7 = (float)in_dr0;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1b0))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); FUN_8c0230f0(ar4 + 0x20,pcVar5,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x1b0)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1b0)),0xffffffff,ar6_00,ar7));
      if (cVar16 == '\0') {
        fVar7 = (float)ar4[0xb];
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0xb);
      }
      if (cVar15 == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0);
      }
      (*(undefined8 *)(fr0_ - 0x258)) = in_xd0;
      if (cVar16 == '\0') {
        (*(undefined8 *)(fr0_ - 0x258)) = CONCAT44(ar4,fVar7);
      }
      if (cVar16 == '\0') {
        *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x258))+4)) + 0x2c) = (undefined4)(*(undefined8 *)(fr0_ - 0x258));
        dVar11 = CONCAT44D(0x43fa0000,(undefined4)(*(undefined8 *)(fr0_ - 0x258)));
      }
      else {
        *(ulonglong *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x258))+4)) + 0x2c) = (*(undefined8 *)(fr0_ - 0x258));
        dVar11 = 2.89154888428735e-312;
        in_xd0 = (*(undefined8 *)(fr0_ - 0x258));
      }
      if (cVar15 == '\0') {
        fVar7 = F32LO(dVar11) / F32HI(dVar11);
      }
      else {
        fVar7 = SUB84(dVar11 / dVar11,0);
      }
      (*(float *)(fr0_ - 0x1e0)) = fVar7;
      if (cVar16 != '\0') {
        (*(float *)(fr0_ - 0x1e0)) = (float)in_xd0;
        ((undefined4 *)(fr0_ - 0x1dc))[0] = (undefined4)(in_xd0 >> 0x20);
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c0))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x34)),&(*(float *)(fr0_ - 0x1e0)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c023aa0(ar4 + 0x20,((undefined1 *)(fr0_ - 0x1c0)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c0)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 604)), Vec3_length(ar4 + 0x20,ar4 + 0x20,ar6_00,ar7));
      ar7 = (code *)(ar4 + 10);
      uVar12 = (ulonglong)(uint)fVar7;
      if (cVar16 == '\0') {
        *(int *)(unsigned)ar7 = 0;
      }
      else {
        *(ulonglong *)(unsigned)ar7 = uVar12;
      }
      ar6_01 = 0x128;
      (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c031b68(ar4,ar4[0x4a] * 0x18 + -0x73d7fc0c,0x128,ar7));
      uVar6 = 0xb0;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 604)), get_field_1c_026dd8(ar4 + 0x2c,0xb0,ar6_01,ar7));
      if (iVar1 == 99) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x2c,uVar6,ar6_01,ar7));
        uVar8 = (uint)uVar12;
        if (iVar1 == 1) {
          ar4[0x1a] = 0;
          (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c031b68(ar4,ar4[0x4a] * 0x18 + -0x73d7fc0c,ar6_01,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 5,ar4 + 0x20,ar6_01,ar7));
          ar7 = (code *)0x0;
          uVar6 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0x1a,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,0xb0,uVar6,ar7));
          ar4[0xae] = 2;
          ar4[0xba] = 2;
          if (cVar16 == '\0') {
            ar4[0xb] = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0xb) = (ulonglong)uVar8;
          }
        }
      }
      else {
        ar4[0x86] = 0x12;
        uVar6 = 0xb0;
        piVar3 = ar4 + 0x2c;
        (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_AdvanceFrame_033ba0(piVar3,piVar3,0xb0,ar7));
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 604)); CAnimBody_GetCurFrame(ar4 + 0x2c,piVar3,uVar6,ar7); });
        if (cVar16 == '\0') {
          uVar12 = uVar12 >> 0x20;
        }
        fVar7 = (float)uVar12;
        if (cVar15 != '\0' || fVar7 <= 0.0) {
          ar4[0x1a] = 0;
          (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c031b68(ar4,ar4[0x4a] * 0x18 + -0x73d7fc0c,uVar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x1cc)),((undefined1 *)(fr0_ - 0x1cc)),uVar6,ar7));
          pcVar5 = ((void *)0x8c023484);
          ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x1dc))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); FUN_8c023484(ar4 + 0x20,((undefined1 *)(fr0_ - 0x1cc)),uVar6,((void *)0x8c023484)); });
          uVar6 = (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 0x20,((undefined4 *)(fr0_ - 0x1dc)),((undefined4 *)(fr0_ - 0x1dc)),pcVar5));
          piVar3 = ar4 + 5;
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(piVar3,uVar6,piVar3,uVar6));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined4 *)(fr0_ - 0x1dc)),0xffffffff,piVar3,uVar6));
          (vsp = ((unsigned long)(fr0_ - 604)), object_dtor_delete(((undefined1 *)(fr0_ - 0x1cc)),0xffffffff,((undefined1 *)(fr0_ - 0x1cc)),0xffffffff));
          uVar6 = 0;
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0x1a,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ar4 + 0x2c,0xb0,uVar6));
          ar4[0xae] = 2;
          ar4[0xba] = 2;
          ar7 = (code *)(ar4 + 0xb);
          if (cVar16 == '\0') {
            *(int *)(unsigned)ar7 = 0;
          }
          else {
            *(ulonglong *)(unsigned)ar7 = (ulonglong)(uint)fVar7;
          }
        }
      }
    }
    goto LAB_8c0519c6;
  }
  if (ain0 != (code *)0x0) {
    if (ain0 == (code *)0x1) {
      if ((char)ar4[0x84] == '\x01') {
        ar7 = (code *)0x5;
        ar6_00 = (code *)0x1;
        pcVar5 = (code *)ar5;
        (vsp = ((unsigned long)(fr0_ - 604)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar4[0x91] + 0xd0))))((int *)(unsigned)(uint)ar4[0x91],ar5,1,5));
      }
      uVar8 = (uint)in_dr0;
      (vsp = ((unsigned long)(fr0_ - 604)), vec3_clear(ar4 + 0xaa,pcVar5,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 604)), vec3_clear(ar4 + 0x24,pcVar5,ar6_00,ar7));
      if (cVar16 == '\0') {
        ar4[0x28] = 0;
        dVar11 = CONCAT44D(ar5[1],0x43340000);
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)uVar8;
        dVar11 = *(double *)(unsigned)(ar5 + 1);
        in_xd0 = 0x4120000043340000;
      }
      if (cVar15 == '\0') {
        fVar7 = F32LO(dVar11) - F32HI(dVar11);
      }
      else {
        fVar7 = SUB84(dVar11 - dVar11,0);
      }
      if (cVar16 == '\0') {
        dVar11 = CONCAT44D(0x41200000,fVar7);
      }
      else {
        dVar11 = 1.063644295445812e+156;
      }
      if (cVar15 == '\0') {
        fVar7 = F32LO(dVar11) - F32HI(dVar11);
      }
      else {
        fVar7 = SUB84(dVar11 - dVar11,0);
      }
      if (cVar16 == '\0') {
        ar4[0xab] = (int)fVar7;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xab) = in_xd0;
      }
      if (cVar16 == '\0') {
        ar4[0xb] = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xb) = (ulonglong)(uint)fVar7;
      }
      ar7 = (code *)0x3;
      ar4[0x1a] = 3;
      if (cVar16 == '\0') {
        ar4[0xb] = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xb) = (ulonglong)(uint)fVar7;
      }
      goto LAB_8c0519c6;
    }
    if (ain0 != (code *)0x2) {
      if (ain0 == (code *)0x3) {
        (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x2c,((void *)0x8c033b98),ar6_00,ar7));
        fVar7 = (float)in_dr0;
        pcVar5 = ((void *)0x8c026dd8);
        iVar1 = (vsp = ((unsigned long)(fr0_ - 604)), get_field_1c_026dd8(ar4 + 0x2c,((void *)0x8c026dd8),ar6_00,ar7));
        fVar14 = F32HI(dVar11);
        if (iVar1 == 99) {
          if (cVar16 == '\0') {
            dVar10 = CONCAT44D(0x43340000,fVar7);
          }
          else {
            dVar10 = 2.80660494205813e-312;
          }
          if (cVar15 == '\0') {
            dVar11 = CONCAT44D(fVar14 - F32HI(dVar10),SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 - dVar10;
          }
          fVar7 = F32HI(dVar11);
          (*(float *)(fr0_ - 0x1e4)) = fVar7;
          if (cVar16 != '\0') {
            (*(float *)(fr0_ - 0x1e4)) = SUB84(dVar11,0);
            (*(float *)(fr0_ - 0x1e0)) = fVar7;
          }
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,pcVar5,ar6_00,ar7));
          if (cVar16 == '\0') {
            dVar11 = CONCAT44D((*(float *)(fr0_ - 0x1e4)),in_fr3);
            dVar10 = CONCAT44D(0x43340000,ar5[1]);
          }
          else {
            dVar11 = CONCAT44D((*(float *)(fr0_ - 0x1e0)),(*(float *)(fr0_ - 0x1e4)));
            dVar10 = 4294968371.25;
          }
          if (cVar15 == '\0') {
            fVar7 = F32LO(dVar10) - F32HI(dVar10);
            dVar11 = CONCAT44D(F32HI(dVar11) - fVar7,SUB84(dVar11,0));
          }
          else {
            fVar7 = SUB84(dVar10 - dVar10,0);
            dVar11 = dVar11 - (dVar10 - dVar10);
          }
          if (cVar16 == '\0') {
            dVar10 = CONCAT44D((*(float *)(fr0_ - 0x1e4)),fVar7);
          }
          else {
            dVar10 = CONCAT44D((*(float *)(fr0_ - 0x1e0)),(*(float *)(fr0_ - 0x1e4)));
          }
          if (cVar15 == '\0') {
            dVar11 = CONCAT44D(F32HI(dVar11) /
                                      F32HI(dVar10),SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 / dVar10;
          }
          if (cVar16 == '\0') {
            dVar10 = CONCAT44D(0x38d1b717,SUB84(dVar10,0));
          }
          else {
            dVar10 = 2.72086438209188e-312;
          }
          if (cVar15 == '\0') {
            dVar11 = CONCAT44D(F32HI(dVar11) -
                                      F32HI(dVar10),SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 - dVar10;
          }
          fVar7 = F32HI(dVar11);
          if (cVar16 == '\0') {
            dVar10 = (double)(ulonglong)(uint)fVar7;
            (*(float *)(fr0_ - 0x1e4)) = fVar7;
          }
          else {
            (*(float *)(fr0_ - 0x1e4)) = SUB84(dVar11,0);
            (*(float *)(fr0_ - 0x1e0)) = fVar7;
          }
          fVar7 = F32LO(dVar10);
          if (cVar15 == '\0') {
            dVar11 = CONCAT44D(1.0 - fVar7,fVar7);
          }
          else {
            dVar11 = CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7);
          }
          fVar7 = F32HI(dVar11);
          (*(float *)(fr0_ - 0x1e8)) = fVar7;
          if (cVar16 != '\0') {
            (*(float *)(fr0_ - 0x1e8)) = SUB84(dVar11,0);
            (*(float *)(fr0_ - 0x1e4)) = fVar7;
          }
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa0))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); Vec3_scale(ar4 + 0x15,&(*(float *)(fr0_ - 0x1e8)),ar6_00,ar7); });
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); FUN_8c0230f0(ar4 + 0x20,0x80,ar6_00,ar7); });
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc0))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xb0)),&(*(float *)(fr0_ - 0x1e4)),ar6_00,ar7); });
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd0))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xa0)),((undefined1 *)(fr0_ - 0xc0)),ar6_00,ar7); });
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 0x20,((undefined1 *)(fr0_ - 0xd0)),ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_length(ar4 + 0x20,((void *)0x8c022f54),ar6_00,ar7));
        }
        else if (iVar1 == 0x49) {
          if (cVar16 == '\0') {
            dVar10 = CONCAT44D(0x43340000,fVar7);
          }
          else {
            dVar10 = 2.80660494205813e-312;
          }
          if (cVar15 == '\0') {
            dVar11 = CONCAT44D(fVar14 - F32HI(dVar10),SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 - dVar10;
          }
          fVar7 = F32HI(dVar11);
          (*(float *)(fr0_ - 0x1e4)) = fVar7;
          if (cVar16 != '\0') {
            (*(float *)(fr0_ - 0x1e4)) = SUB84(dVar11,0);
            (*(float *)(fr0_ - 0x1e0)) = fVar7;
          }
          uVar6 = 0x49;
          (vsp = ((unsigned long)(fr0_ - 604)), s_Check_This_Motion_Data_0314fc(ar4 + 0x2c,0x49,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,uVar6,ar6_00,ar7));
          if (cVar16 == '\0') {
            dVar11 = CONCAT44D((*(float *)(fr0_ - 0x1e4)),in_fr3);
            dVar10 = CONCAT44D(0x43340000,ar5[1]);
          }
          else {
            dVar11 = CONCAT44D((*(float *)(fr0_ - 0x1e0)),(*(float *)(fr0_ - 0x1e4)));
            dVar10 = 2.80660494205813e-312;
          }
          if (cVar15 == '\0') {
            fVar7 = F32LO(dVar10) - F32HI(dVar10);
            dVar11 = CONCAT44D(F32HI(dVar11) - fVar7,SUB84(dVar11,0));
          }
          else {
            fVar7 = SUB84(dVar10 - dVar10,0);
            dVar11 = dVar11 - (dVar10 - dVar10);
          }
          if (cVar16 == '\0') {
            dVar10 = CONCAT44D((*(float *)(fr0_ - 0x1e4)),fVar7);
          }
          else {
            dVar10 = CONCAT44D((*(float *)(fr0_ - 0x1e0)),(*(float *)(fr0_ - 0x1e4)));
          }
          if (cVar15 == '\0') {
            dVar11 = CONCAT44D(F32HI(dVar11) /
                                      F32HI(dVar10),SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 / dVar10;
          }
          if (cVar16 == '\0') {
            dVar10 = CONCAT44D(0x38d1b717,SUB84(dVar10,0));
          }
          else {
            dVar10 = 8.3229332702402e-312;
          }
          if (cVar15 == '\0') {
            dVar11 = CONCAT44D(F32HI(dVar11) -
                                      F32HI(dVar10),SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 - dVar10;
          }
          fVar7 = F32HI(dVar11);
          if (cVar16 == '\0') {
            dVar10 = (double)(ulonglong)(uint)fVar7;
            (*(float *)(fr0_ - 0x1e4)) = fVar7;
          }
          else {
            (*(float *)(fr0_ - 0x1e4)) = SUB84(dVar11,0);
            (*(float *)(fr0_ - 0x1e0)) = fVar7;
          }
          fVar7 = F32LO(dVar10);
          if (cVar15 == '\0') {
            dVar11 = CONCAT44D(1.0 - fVar7,fVar7);
          }
          else {
            dVar11 = CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7);
          }
          fVar7 = F32HI(dVar11);
          (*(float *)(fr0_ - 0x1ec)) = fVar7;
          if (cVar16 != '\0') {
            (*(float *)(fr0_ - 0x1ec)) = SUB84(dVar11,0);
            (*(float *)(fr0_ - 0x1e8)) = fVar7;
          }
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe0))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); Vec3_scale(ar4 + 0x15,&(*(float *)(fr0_ - 0x1ec)),ar6_00,ar7); });
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf0))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); FUN_8c0230f0(ar4 + 0x20,0x80,ar6_00,ar7); });
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x100))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xf0)),&(*(float *)(fr0_ - 0x1e4)),ar6_00,ar7); });
          ar7 = ((void *)0x8c023a34);
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x110))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xe0)),((undefined1 *)(fr0_ - 0x100)),ar6_00,((void *)0x8c023a34)); });
          ar6_00 = (code *)((undefined1 *)(fr0_ - 0x110));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 0x20,ar6_00,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x110)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,ar6_00,ar7));
          uVar6 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_length(ar4 + 0x20,uVar6,ar6_00,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x120)),pcVar5,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x120)),ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x120)),0xffffffff,ar6_00,ar7));
          if (cVar16 == '\0') {
            fVar7 = (float)ar4[0xb];
          }
          else {
            in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0xb);
          }
          if (cVar15 == '\0') {
            fVar7 = fVar7 + 1.0;
          }
          else {
            fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0)
            ;
          }
          (*(undefined8 *)(fr0_ - 0x234)) = in_xd0;
          if (cVar16 == '\0') {
            (*(undefined8 *)(fr0_ - 0x234)) = CONCAT44(ar4,fVar7);
          }
          if (cVar16 == '\0') {
            *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x234))+4)) + 0x2c) = (undefined4)(*(undefined8 *)(fr0_ - 0x234));
            dVar11 = CONCAT44D(0x43480000,(undefined4)(*(undefined8 *)(fr0_ - 0x234)));
          }
          else {
            *(ulonglong *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x234))+4)) + 0x2c) = (*(undefined8 *)(fr0_ - 0x234));
            dVar11 = 2.89149124951398e-312;
            in_xd0 = (*(undefined8 *)(fr0_ - 0x234));
          }
          if (cVar15 == '\0') {
            (*(float *)(fr0_ - 0x1e0)) = F32LO(dVar11) / F32HI(dVar11);
          }
          else {
            (*(float *)(fr0_ - 0x1e0)) = SUB84(dVar11 / dVar11,0);
          }
          if (cVar16 != '\0') {
            (*(float *)(fr0_ - 0x1e0)) = (float)in_xd0;
            ((undefined4 *)(fr0_ - 0x1dc))[0] = (undefined4)(in_xd0 >> 0x20);
          }
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x130))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x34)),&(*(float *)(fr0_ - 0x1e0)),ar6_00,ar7); });
          ar6_00 = (code *)(ar4 + 0x20);
          (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c023aa0(ar6_00,((undefined1 *)(fr0_ - 0x130)),ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x130)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_length(ar4 + 0x20,0x80,ar6_00,ar7));
        }
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
        uVar6 = (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
        return uVar6;
      }
      goto LAB_8c0519c6;
    }
  }
  piVar3 = ar4 + 0x2c;
  pcVar5 = ((void *)0x8c033b98);
  (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_AdvanceFrame_033ba0(piVar3,((void *)0x8c033b98),piVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 604)), Vec3_length_sq(ar4 + 1,pcVar5,piVar3,ar7));
  if (cVar16 == '\0') {
    dVar11 = CONCAT44D(0x3dcccccd,(int)(in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    dVar11 = 6.28623017172232e-312;
  }
  if (cVar15 == '\0') {
    fVar7 = F32LO(dVar11) * F32HI(dVar11);
  }
  else {
    fVar7 = SUB84(dVar11 * dVar11,0);
  }
  if (cVar16 == '\0') {
    ar4[10] = (int)fVar7;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 10) = in_dr0;
  }
  (vsp = ((unsigned long)(fr0_ - 604)), Vec3_normalize(ar4 + 1,pcVar5,piVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 5,((undefined1 *)(fr0_ - 0x140)),piVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x140)),0xffffffff,piVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c031b68(ar4,ar4[0x4a] * 0x18 + -0x73d7fc0c,piVar3,ar7));
  if (cVar16 == '\0') {
    iVar1 = 0x41200000;
  }
  else {
    fVar7 = 10.0;
    iVar1 = 0x270;
  }
  (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c032518(ar4,ar5,(*(undefined4 *)(fr0_ + 0x00000000)),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
  ar5_00 = ((undefined1 *)(fr0_ - 0x150));
  piVar3 = ar4 + 0x15;
  (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(piVar3,ar5_00,piVar3,ar5_00));
  uVar6 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x150)),0xffffffff,piVar3,ar5_00));
  ar7 = (code *)(ar4 + 0x14);
  (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c032ab0(ar4,uVar6,ar4 + 0x13,ar7));
  if (cVar16 == '\0') {
    ar4[9] = iVar1;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 9) = CONCAT44(iVar1,fVar7);
  }
  ar4[0x11] = 1;
  if (cVar16 == '\0') {
    ar4[0xb] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xb) = (ulonglong)(uint)fVar7;
  }
  ar4[0x10] = 5;
  ar4[0xa0] = 0;
  ar4[0x1a] = 2;
LAB_8c0519c6:
  uVar6 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,0xffffffff,ar7));
  uVar6 = (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,uVar6,ar7));
  return uVar6;
}

__asm__(".globl _FUN_8c0507c0\n.set _FUN_8c0507c0, _FUN_8c0507c0_def\n");
