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
undefined4 FUN_8c0a99c4_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a99c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 184; for (int i_ = 0; i_ < 184; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int ar6_00;
  undefined4 ar7_00;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  ulonglong in_dr0 = 0;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 in_xd0 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 184)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x20)),((void *)0x8c022c4c),ar6,ar7));
  (*(undefined4 *)(fr0_ - 0xa0)) = 1;
  if (*(int *)(unsigned)(ar4 + 0x2198) == 0) {
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c023d7c(ar7,0,ar6_00,ar7_00));
  }
  uVar3 = (uint)in_dr0;
  iVar1 = *(int *)(unsigned)(ar4 + 0x68);
  uVar2 = 5;
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      while( true ) {
        uVar3 = (uint)in_dr0;
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c03c314(ar4,((void *)0x8c03c314),ar6_00,ar7_00));
        in_dr0 = (ulonglong)uVar3;
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x21a0) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x21a0) = in_dr0;
        }
        (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x2174,ar4 + 0x14,ar6_00,ar7_00));
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2194) = in_dr0;
        }
        uVar2 = ar5;
        (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x54,ar5,ar6_00,ar7_00));
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x58) = in_dr0;
        }
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c023d7c(ar4 + 0x21a8,uVar2,ar6_00,ar7_00));
        uVar4 = (undefined4)in_dr0;
        if (ar6 != 0) {
          if (ar6 == 3) {
            ar7_00 = 0;
            ar6_00 = -1;
            uVar2 = 2;
            (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
            if (cVar11 == '\0') {
              in_dr0 = CONCAT44(0x3dcccccd,uVar4);
              *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0x3dcccccd;
            }
            else {
              in_dr0 = 0x8c0268583dcccccd;
              *(undefined8 *)(unsigned)(ar4 + 0xa0) = 0x8c0268583dcccccd;
            }
            in_dr0 = in_dr0 & 0xffffffff;
            if (cVar11 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0;
            }
            *(int *)(unsigned)(ar4 + 0x68) = *(int *)(unsigned)(ar4 + 0x68) + 1;
          }
          goto switchD_8c0a9a1a_caseD_1;
        }
        ar7_00 = 0;
        ar6_00 = -1;
        uVar2 = 7;
        (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        if (cVar11 == '\0') {
          in_dr0 = CONCAT44(0x3a83126f,uVar4);
          *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0x3a83126f;
        }
        else {
          in_dr0 = 0xc716e7003a83126f;
          *(undefined8 *)(unsigned)(ar4 + 0xa0) = 0xc716e7003a83126f;
        }
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x68) = 2;
switchD_8c0a9a1a_caseD_2:
        (vsp = ((unsigned long)(fr0_ - 184)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        uVar3 = (uint)in_dr0;
        if (ar6 != 3) break;
        *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x21a4) = 0;
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x18) = in_dr0 & 0xffffffff;
        }
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2194) = in_dr0;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x2c)),uVar2,ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x3c))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x2c)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x3c)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7_00));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 184)), object_dtor_delete(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7_00));
      if ((ar6 != 1) && (ar6 != 2)) {
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c03207c(ar4,uVar2,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c0324ac(ar4,uVar2,ar6_00,ar7_00));
        break;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x68) = 5;
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2194) = (ulonglong)uVar3;
      }
      iVar1 = ar4 + 0x14;
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x2174,iVar1,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031700(ar4,iVar1,ar6_00,ar7_00));
    case 5:
      *(undefined4 *)(unsigned)(ar4 + 0x21a4) = 2;
      break;
    case 1:
switchD_8c0a9a1a_caseD_1:
      uVar3 = (uint)in_dr0;
      (vsp = ((unsigned long)(fr0_ - 184)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
      if (ar6 == 0) {
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c073c9c(ar4,uVar2,ar6_00,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
        break;
      }
      if (ar6 != 1) {
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c0324ac(ar4,uVar2,ar6_00,ar7_00));
        break;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x68) = 3;
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2194) = (ulonglong)uVar3;
      }
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x94) = (ulonglong)uVar3;
      }
      uVar6 = (ulonglong)uVar3;
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xa0) = uVar6;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x21a4) = 1;
      if (*(char *)(unsigned)(ar4 + 0x210) == '\x01') {
        ar7_00 = 0xd;
        ar6_00 = 1;
        (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0xd0))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar5,1,0xd));
        uVar3 = (uint)uVar6;
        uVar2 = ar5;
      }
    case 3:
      uVar6 = (ulonglong)uVar3;
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xa0) = uVar6;
      }
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c073c9c(ar4,uVar2,ar6_00,ar7_00));
      uVar7 = uVar6 & 0xffffffff;
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar7;
      }
      if (ar6 == 1) {
        (vsp = ((unsigned long)(fr0_ - 184)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        uVar3 = (uint)uVar7;
        iVar1 = ar4 + 0x14;
        (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(((undefined1 *)(fr0_ - 0x20)),iVar1,ar6_00,ar7_00));
        uVar6 = (ulonglong)uVar3;
        if (cVar11 == '\0') {
          (*(undefined8 *)(fr0_ - 0x1c)) = (ulonglong)(*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1c))+4)) << 0x20;
          uVar6 = (*(undefined8 *)(fr0_ - 0x1c));
        }
        (*(undefined8 *)(fr0_ - 0x1c)) = uVar6;
        (vsp = ((unsigned long)(fr0_ - 184)), Vec3_length(((undefined1 *)(fr0_ - 0x20)),iVar1,ar6_00,ar7_00));
        if (cVar11 == '\0') {
          dVar8 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x2194));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2194);
          dVar8 = 1.81732883613961e-310;
        }
        if (cVar10 == '\0') {
          fVar5 = F32LO(dVar8) + F32HI(dVar8);
        }
        else {
          fVar5 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar11 == '\0') {
          *(float *)(unsigned)(ar4 + 0x2194) = fVar5;
          fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2194) = in_xd0;
        }
        if (cVar10 != '\0' || 1.0 <= fVar5) {
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0x3f800000;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x2194) = CONCAT44(0x3f800000,fVar5);
          }
        }
        if (cVar11 == '\0') {
          fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
        }
        if (cVar10 == '\0') {
          dVar8 = CONCAT44D(1.0 - fVar5,fVar5);
        }
        else {
          dVar8 = CONCAT44D(0x3f800000,fVar5) - CONCAT44D(0x3f800000,fVar5);
        }
        uVar2 = (undefined4)(D2U(dVar8) >> 0x20);
        (*(undefined4 *)(fr0_ - 0xa8)) = uVar2;
        if (cVar11 != '\0') {
          (*(undefined4 *)(fr0_ - 0xa8)) = SUB84(dVar8,0);
          (*(undefined4 *)(fr0_ - 0xa4)) = uVar2;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_scale(ar4 + 0x2174,&(*(undefined4 *)(fr0_ - 0xa8)),ar6_00,ar7_00); });
        if (cVar11 == '\0') {
          (*(undefined4 *)(fr0_ - 0xac)) = *(undefined4 *)(unsigned)(ar4 + 0x2194);
          uVar9 = CONCAT44((*(undefined4 *)(fr0_ - 0xac)),SUB84(dVar8,0));
        }
        else {
          uVar9 = *(undefined8 *)(unsigned)(ar4 + 0x2194);
          (*(undefined4 *)(fr0_ - 0xac)) = (undefined4)uVar9;
          (*(undefined4 *)(fr0_ - 0xa8)) = (undefined4)((ulonglong)uVar9 >> 0x20);
        }
        fVar5 = (float)uVar9;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x20)),&(*(undefined4 *)(fr0_ - 0xac)),ar6_00,ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0x5c)),ar6_00,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x6c)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6_00,ar7_00));
        if (cVar11 == '\0') {
          fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
        }
        if (fVar5 == 1.0) {
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2194) = (ulonglong)(uint)fVar5;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x21a4) = 2;
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x94) = (ulonglong)(uint)fVar5;
          }
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0xa0) = (ulonglong)(uint)fVar5;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
        }
        (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7_00));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x21a4) = 0;
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x18) = uVar6 & 0xffffffff;
        }
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2194) = uVar6 & 0xffffffff;
        }
      }
      break;
    case 2:
      goto switchD_8c0a9a1a_caseD_2;
    case 4:
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xa0) = in_dr0;
      }
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c073c9c(ar4,5,ar6_00,ar7_00));
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0;
      }
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c022d04(ar4 + 0x6c,uVar2,ar6_00,ar7_00));
      fVar5 = (float)in_dr0;
      if (ar6 == 1) {
        (vsp = ((unsigned long)(fr0_ - 184)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        if (cVar11 == '\0') {
          fVar5 = *(float *)(unsigned)(ar4 + 0x18);
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x18);
        }
        uVar6 = (ulonglong)(uint)fVar5;
        if (fVar5 != 0.0) {
          iVar1 = ar4 + 0x14;
          (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(((undefined1 *)(fr0_ - 0x20)),iVar1,ar6_00,ar7_00));
          uVar6 = uVar6 & 0xffffffff;
          if (cVar11 == '\0') {
            (*(undefined8 *)(fr0_ - 0x1c)) = (*(undefined8 *)(fr0_ - 0x1c)) & 0xffffffff00000000;
            uVar6 = (*(undefined8 *)(fr0_ - 0x1c));
          }
          (*(undefined8 *)(fr0_ - 0x1c)) = uVar6;
          (vsp = ((unsigned long)(fr0_ - 184)), Vec3_length(((undefined1 *)(fr0_ - 0x20)),iVar1,ar6_00,ar7_00));
          if (cVar11 == '\0') {
            dVar8 = CONCAT44D(0x3d4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x2194));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2194);
            dVar8 = 1.81732800723501e-310;
          }
          if (cVar10 == '\0') {
            fVar5 = F32LO(dVar8) + F32HI(dVar8);
          }
          else {
            fVar5 = SUB84(dVar8 + dVar8,0);
          }
          if (cVar11 == '\0') {
            *(float *)(unsigned)(ar4 + 0x2194) = fVar5;
            fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x2194) = in_xd0;
          }
          if (cVar10 != '\0' || 1.0 <= fVar5) {
            if (cVar11 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0x3f800000;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x2194) = CONCAT44(0x3f800000,fVar5);
            }
          }
          if (cVar11 == '\0') {
            fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
          }
          if (cVar10 == '\0') {
            dVar8 = CONCAT44D(1.0 - fVar5,fVar5);
          }
          else {
            dVar8 = CONCAT44D(0x3f800000,fVar5) - CONCAT44D(0x3f800000,fVar5);
          }
          uVar2 = (undefined4)(D2U(dVar8) >> 0x20);
          (*(undefined4 *)(fr0_ - 0xb0)) = uVar2;
          if (cVar11 != '\0') {
            (*(undefined4 *)(fr0_ - 0xb0)) = SUB84(dVar8,0);
            (*(undefined4 *)(fr0_ - 0xac)) = uVar2;
          }
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_scale(ar4 + 0x2174,&(*(undefined4 *)(fr0_ - 0xb0)),ar6_00,ar7_00); });
          if (cVar11 == '\0') {
            (*(undefined4 *)(fr0_ - 0xb4)) = *(undefined4 *)(unsigned)(ar4 + 0x2194);
            uVar9 = CONCAT44((*(undefined4 *)(fr0_ - 0xb4)),SUB84(dVar8,0));
          }
          else {
            uVar9 = *(undefined8 *)(unsigned)(ar4 + 0x2194);
            (*(undefined4 *)(fr0_ - 0xb4)) = (undefined4)uVar9;
            (*(undefined4 *)(fr0_ - 0xb0)) = (undefined4)((ulonglong)uVar9 >> 0x20);
          }
          fVar5 = (float)uVar9;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x20)),&(*(undefined4 *)(fr0_ - 0xb4)),ar6_00,ar7_00); });
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x7c)),((undefined1 *)(fr0_ - 0x8c)),ar6_00,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x9c)),ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6_00,ar7_00));
          if (cVar11 == '\0') {
            fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
          }
          if (fVar5 == 1.0) {
            if (cVar11 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x2194) = (ulonglong)(uint)fVar5;
            }
          }
        }
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x21a4) = 0;
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x18) = in_dr0 & 0xffffffff;
        }
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2194) = in_dr0 & 0xffffffff;
        }
      }
    }
  }
  (*(undefined4 *)(fr0_ - 0xa4)) = 0;
  (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7_00));
  return (*(undefined4 *)(fr0_ - 0xa4));
}

__asm__(".globl _FUN_8c0a99c4\n.set _FUN_8c0a99c4, _FUN_8c0a99c4_def\n");
