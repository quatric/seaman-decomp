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
undefined4 FUN_8c0e0f48_def(int *ar4,undefined4 ar5,float *ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0f48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int ar4_00;
  int iVar1;
  int iVar2;
  int *ar5_00;
  float *ar5_01;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  double in_dr0 = 0;
  double dVar7;
  uint uVar9;
  double dVar8;
  undefined4 in_fr3 = 0;
  double in_dr14 = 0;
  double in_xd0 = 0;
  double dVar10;
  double in_xd14 = 0;
  bool bVar11;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  (vsp = ((unsigned long)(fr0_ - 80)), get_field_300_0bf154(ar4 + 0x29,ar5,ar6,ar7));
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0da588(ar4 + 0x29,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x30)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x40)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_set_xyz(((float *)(fr0_ - 0x4c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c023040(ar4 + 0x8bae,ar5,ar6,ar7));
  if (cVar13 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
    dVar7 = CONCAT44D(0x3f400000,ar4[0x8c03]);
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x8c03);
    dVar7 = 7.38978817419112e-312;
  }
  if (cVar12 == '\0') {
    fVar6 = F32HI(dVar7);
    fVar5 = F32LO(dVar7) * fVar6;
    dVar7 = CONCAT44D(fVar6,fVar5);
    bVar11 = F32HI(in_dr0) < fVar5;
  }
  else {
    dVar7 = dVar7 * dVar7;
    bVar11 = in_dr0 < dVar7;
  }
  if (bVar11) {
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x15c))))(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0d56b4(ar4 + 0x42b,ar5,ar6,ar7));
  }
  ar5_00 = ar4 + 0x8bad;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0d3d6c(ar4 + 0x42b,ar5_00,ar6,ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0e1320(ar4 + 0x4edc,ar5_00,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0d0aac(ar4 + 0x4edc,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0d568c(ar4 + 0x42b,ar5_00,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0d08c0(ar4 + 0x4edc,ar5_00,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_14_0e1318(ar4 + 0x4edc,ar5_00,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_300_0bf154(ar4 + 0x29,ar5_00,ar6,ar7));
    for (iVar4 = 0; uVar3 = SUB84(in_dr14,0), iVar4 < iVar1; iVar4 = iVar4 + 1) {
      ar7 = &(*(float *)(fr0_ - 0x28));
      ar6 = &(*(float *)(fr0_ - 0x2c));
      ar5_01 = &(*(float *)(fr0_ - 0x30));
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0507a4(ar4_00,ar5_01,ar6,ar7));
      if (cVar13 == '\0') {
        in_dr14 = CONCAT44D((*(float *)(fr0_ - 0x2c)),uVar3);
      }
      else {
        in_dr14 = CONCAT44D((*(float *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
      }
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0e130c(ar4 + 0x42b,ar5_01,ar6,ar7));
      if (cVar12 == '\0') {
        bVar11 = F32HI(dVar7) < F32HI(in_dr14);
      }
      else {
        bVar11 = dVar7 < in_dr14;
      }
      if ((!bVar11) &&
         (iVar2 = (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 200))))(ar4_00,ar5_01,ar6,ar7)), iVar2 == 1)) {
        if (cVar13 == '\0') {
          dVar7 = CONCAT44D(0x44861000,(*(float *)(fr0_ - 0x30)));
        }
        else {
          in_xd0 = CONCAT44D((*(float *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
          dVar7 = 3.03513869969298e-309;
        }
        if (cVar12 == '\0') {
          (*(float *)(fr0_ - 0x30)) = F32LO(dVar7) - F32HI(dVar7);
        }
        else {
          (*(float *)(fr0_ - 0x30)) = SUB84(dVar7 - dVar7,0);
        }
        if (cVar13 == '\0') {
          dVar7 = CONCAT44D(0x43320000,(*(float *)(fr0_ - 0x2c)));
        }
        else {
          (*(float *)(fr0_ - 0x30)) = SUB84(in_xd0,0);
          (*(float *)(fr0_ - 0x2c)) = F32HI(in_xd0);
          in_xd0 = CONCAT44D((*(float *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
          dVar7 = 1.3023403680263821e+22;
        }
        if (cVar12 == '\0') {
          (*(float *)(fr0_ - 0x2c)) = F32LO(dVar7) - F32HI(dVar7);
        }
        else {
          (*(float *)(fr0_ - 0x2c)) = SUB84(dVar7 - dVar7,0);
        }
        if (cVar13 == '\0') {
          dVar7 = CONCAT44D(0x44358000,(*(float *)(fr0_ - 0x28)));
        }
        else {
          (*(float *)(fr0_ - 0x2c)) = SUB84(in_xd0,0);
          (*(float *)(fr0_ - 0x28)) = F32HI(in_xd0);
          in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
          dVar7 = 5066550725148672.0;
        }
        if (cVar12 == '\0') {
          (*(float *)(fr0_ - 0x28)) = F32LO(dVar7) - F32HI(dVar7);
        }
        else {
          (*(float *)(fr0_ - 0x28)) = SUB84(dVar7 - dVar7,0);
        }
        if (cVar13 == '\0') {
          (*(double *)(fr0_ - 0x38)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x38))+4)),(*(float *)(fr0_ - 0x28)));
          dVar10 = CONCAT44D((*(float *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x28)));
        }
        else {
          (*(float *)(fr0_ - 0x28)) = SUB84(in_xd0,0);
          (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
          dVar10 = in_xd0;
          (*(double *)(fr0_ - 0x38)) = in_xd0;
          (*(float *)(fr0_ - 0x3c)) = (*(float *)(fr0_ - 0x2c));
        }
        (*(float *)(fr0_ - 0x40)) = CONCAT44((*(float *)(fr0_ - 0x3c)),(*(float *)(fr0_ - 0x30)));
        (vsp = ((unsigned long)(fr0_ - 80)), Vec3_length_sq(&(*(float *)(fr0_ - 0x40)),ar5_01,ar6,ar7));
        uVar3 = SUB84(in_dr0,0);
        if (cVar13 == '\0') {
          dVar7 = CONCAT44D(0x443b8000,(int)(D2U(dVar10) >> 0x20));
        }
        else {
          dVar7 = -7.937140160381387e-251;
          in_xd0 = dVar10;
        }
        if (cVar12 == '\0' && SUB84(dVar7,0) < F32HI(dVar7)) {
          (vsp = ((unsigned long)(fr0_ - 80)), Vec3_length(&(*(float *)(fr0_ - 0x30)),ar5_01,ar6,ar7));
          if (cVar13 == '\0') {
            dVar7 = CONCAT44D(0x43320000,SUB84(dVar7,0));
          }
          else {
            dVar7 = 1.3023403680263821e+22;
          }
          fVar5 = F32HI(dVar7);
          if (cVar12 == '\0') {
            in_dr14 = CONCAT44D(F32HI(in_dr14) - fVar5,SUB84(in_dr14,0))
            ;
          }
          else {
            in_dr14 = in_dr14 - dVar7;
          }
          if (cVar13 == '\0') {
            dVar7 = CONCAT44D(fVar5,0x44348000);
          }
          else {
            in_xd0 = 0.008437501388982582;
          }
          fVar5 = F32HI(in_dr14);
          if (cVar12 == '\0') {
            fVar6 = F32LO(dVar7) - fVar5;
          }
          else {
            fVar6 = SUB84(dVar7 - in_dr14,0);
          }
          if (cVar13 == '\0') {
            dVar7 = CONCAT44D(0x44348000,fVar6);
          }
          else {
            dVar7 = 0.008437501388982582;
          }
          if (cVar12 == '\0') {
            fVar6 = F32LO(dVar7) / F32HI(dVar7);
          }
          else {
            fVar6 = SUB84(dVar7 / dVar7,0);
          }
          if (cVar13 == '\0') {
            dVar7 = CONCAT44D(0x3f8147ae,fVar6);
          }
          else {
            dVar7 = 5.377642808889976e-19;
          }
          if (cVar12 == '\0') {
            dVar7 = CONCAT44D(F32HI(dVar7) - F32LO(dVar7),
                                     SUB84(dVar7,0));
          }
          else {
            dVar7 = dVar7 - dVar7;
          }
          dVar10 = dVar7;
          dVar8 = dVar7;
          if (cVar13 == '\0') {
            uVar9 = (uint)(D2U(dVar7) >> 0x20);
            in_dr14 = CONCAT44D(fVar5,uVar9);
            dVar7 = (double)(ulonglong)uVar9;
            dVar10 = in_xd0;
            dVar8 = in_xd14;
          }
          in_xd14 = dVar8;
          if (cVar12 == '\0' && SUB84(dVar7,0) < 0.0) {
            if (cVar13 == '\0') {
              in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),0x3c23d70a);
            }
            else {
              in_xd14 = 134217758.07;
            }
          }
          fVar5 = F32LO(in_dr14);
          if (cVar13 == '\0') {
            dVar7 = CONCAT44D((*(float *)(fr0_ - 0x30)),uVar3);
            dVar8 = CONCAT44D(fVar5,0x41a00000);
          }
          else {
            dVar7 = CONCAT44D((*(float *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
            dVar10 = -1.362436379967432e-249;
            dVar8 = in_xd14;
          }
          if (cVar12 == '\0') {
            dVar7 = CONCAT44D(F32HI(dVar7) *
                                     F32HI(dVar8) * F32LO(dVar8),
                                     SUB84(dVar7,0));
          }
          else {
            dVar7 = dVar7 * dVar8 * dVar8;
          }
          (*(float *)(fr0_ - 0x30)) = SUB84(dVar7,0);
          fVar6 = F32HI(dVar7);
          if (cVar13 == '\0') {
            in_dr0 = CONCAT44D((*(float *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
            dVar7 = CONCAT44D(fVar5,0x41a00000);
            (*(float *)(fr0_ - 0x30)) = fVar6;
          }
          else {
            in_dr0 = CONCAT44D((*(float *)(fr0_ - 0x28)),fVar6);
            dVar10 = -1.362436379967432e-249;
            dVar7 = in_xd14;
          }
          if (cVar12 == '\0') {
            in_dr0 = CONCAT44D(F32HI(in_dr0) *
                                      F32HI(dVar7) * F32LO(dVar7),
                                      SUB84(in_dr0,0));
          }
          else {
            in_dr0 = in_dr0 * dVar7 * dVar7;
          }
          fVar6 = F32HI(in_dr0);
          if (cVar13 == '\0') {
            dVar7 = CONCAT44D(0x41a00000,(*(float *)(fr0_ - 0x28)));
            in_xd0 = dVar10;
            (*(float *)(fr0_ - 0x2c)) = fVar6;
          }
          else {
            (*(float *)(fr0_ - 0x2c)) = SUB84(in_dr0,0);
            in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),fVar6);
            dVar7 = -1.362436379967432e-249;
          }
          fVar6 = F32HI(dVar7);
          if (cVar12 == '\0') {
            fVar5 = fVar5 * fVar6;
            in_dr14 = (double)(ulonglong)(uint)fVar5;
            dVar7 = CONCAT44D(fVar6,F32LO(dVar7) * fVar5);
          }
          else {
            in_dr14 = in_dr14 * dVar7;
            dVar7 = dVar7 * in_dr14;
          }
          if (cVar13 == '\0') {
            (*(float *)(fr0_ - 0x28)) = SUB84(dVar7,0);
          }
          else {
            (*(float *)(fr0_ - 0x28)) = SUB84(in_xd0,0);
            (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
          }
          (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c023bf4(&(*(float *)(fr0_ - 0x30)),((undefined1 *)(unsigned)0x8c438264),ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x9c))))(ar4_00,&(*(float *)(fr0_ - 0x30)),ar6,ar7));
          ar5_01 = ((float *)(fr0_ - 0x4c));
          (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0xa0))))(ar4_00,ar5_01,ar6,ar7));
        }
      }
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 80)), list_node_next(ar4_00,ar5_01,ar6,ar7));
    }
    dVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c438264);
    if (cVar13 == '\0') {
      dVar7 = (double)((ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c438264) & 0xffffffff);
      dVar10 = in_xd0;
    }
    dVar8 = (*(undefined4 *)(unsigned)(unsigned)0x8c438264);
    if (cVar12 == '\0' && SUB84(dVar7,0) < 1.0) {
      if (cVar13 == '\0') {
        dVar7 = CONCAT44D(0x3dcccccd,SUB84((*(undefined4 *)(unsigned)(unsigned)0x8c438264),0));
      }
      else {
        dVar7 = -1.2971028142978771e-250;
        dVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c438264);
      }
      if (cVar12 == '\0') {
        fVar5 = F32LO(dVar7) + F32HI(dVar7);
      }
      else {
        fVar5 = SUB84(dVar7 + dVar7,0);
      }
      dVar8 = dVar10;
      if (cVar13 == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c438264) = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c438268),fVar5);
        dVar8 = (*(undefined4 *)(unsigned)(unsigned)0x8c438264);
      }
    }
  }
  else {
    dVar8 = (double)(D2U(dVar7) & 0xffffffff);
    if (cVar13 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c438264) = (double)((ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c438264) & 0xffffffff00000000);
      dVar8 = (*(undefined4 *)(unsigned)(unsigned)0x8c438264);
    }
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c438264) = dVar8;
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0db7d4(ar4,1,ar6,ar7));
  uVar3 = 3;
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0db7d4(ar4,3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0d0a44(ar4 + 0x4edc,uVar3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), object_dtor_delete(((float *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(&(*(float *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(&(*(float *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c0e0f48\n.set _FUN_8c0e0f48, _FUN_8c0e0f48_def\n");
