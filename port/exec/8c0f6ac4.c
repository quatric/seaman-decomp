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
undefined4 FUN_8c0f6ac4_def(ulonglong *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f6ac4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  int *piVar2;
  uint *a5;
  float *a6;
  float *a7;
  uint uVar3;
  float fVar4;
  ulonglong in_dr0 = 0;
  double dVar5;
  float fVar9;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined4 in_fr15 = 0;
  ulonglong in_xd0 = 0;
  ulonglong in_xd14 = 0;
  bool bVar10;
  undefined4 in_PR = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  piVar2 = ar5;
  (*(undefined4 *)(fr0_ - 0x18)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c102748(&(*(uint *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),piVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x44)),piVar2,ar6,ar7));
  a7 = &(*(float *)(fr0_ - 0x1c));
  a6 = &(*(float *)(fr0_ - 0x20));
  a5 = &(*(uint *)(fr0_ - 0x24));
  piVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x120))))(ar5,a5,a6,a7));
  dVar8 = CONCAT44D(0x3f800000,in_fr15);
  uVar3 = (uint)in_dr0;
  if (((uint)ar4[9] == 0) && ((uint)ar4[10] == 0)) {
    if (cVar12 == '\0') {
      dVar5 = CONCAT44D(*(uint *)(unsigned)((int)ar4 + 0x44),uVar3);
    }
    else {
      dVar5 = *(double *)(unsigned)((int)ar4 + 0x44);
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) + 1.0,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 + dVar8;
    }
    if (cVar12 == '\0') {
      *(uint *)(unsigned)((int)ar4 + 0x44) = (uint)(D2U(dVar5) >> 0x20);
    }
    else {
      *(double *)(unsigned)((int)ar4 + 0x44) = dVar5;
    }
  }
  else {
    *(uint *)(unsigned)(ar4 + 5) = (uint)ar4[5] + 1;
    if ((int)(uint)ar4[5] < 0xb5) {
      if (cVar12 == '\0') {
        *(uint *)(unsigned)((int)ar4 + 0x44) = 0;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x44) = in_dr0 & 0xffffffff;
      }
    }
    else {
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 104)), rand(piVar2,a5,a6,a7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), libgcc_divide_helper_01031c(ar4_00,10,a6,a7));
      if ((iVar1 == 0) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0f72ec(ar4,ar5,a6,a7)), iVar1 != 0)) {
        if (cVar12 == '\0') {
          *(uint *)(unsigned)((int)ar4 + 0x44) = 0;
        }
        else {
          *(ulonglong *)(unsigned)((int)ar4 + 0x44) = (ulonglong)uVar3;
        }
      }
      else {
        if (cVar12 == '\0') {
          dVar5 = CONCAT44D(0x3dcccccd,*(uint *)(unsigned)((int)ar4 + 0x44));
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x44);
          dVar5 = 4.07935454911844e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = F32LO(dVar5) + F32HI(dVar5);
        }
        else {
          fVar4 = SUB84(dVar5 + dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)((int)ar4 + 0x44) = fVar4;
        }
        else {
          *(ulonglong *)(unsigned)((int)ar4 + 0x44) = in_xd0;
        }
      }
    }
    if (*(uint *)(unsigned)((int)ar4 + 100) == 0) {
      a7 = ((float *)(fr0_ - 0x2c));
      a6 = &(*(float *)(fr0_ - 0x30));
      (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x13c))))(ar5,((undefined1 *)(fr0_ - 0x34)),a6,a7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); Vec3_sub(ar4,((undefined1 *)(fr0_ - 0x34)),a6,a7); });
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_assign(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x54)),a6,a7));
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,a6,a7));
      (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c02174c(0x8c2b59d0,0x28,a6,a7));
      *(uint *)(unsigned)((int)ar4 + 100) = 1;
    }
  }
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); Vec3_scale((uint *)(unsigned)((int)ar4 + 0x34),ar4 + 6,a6,a7); });
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c023aa0(ar4,((undefined1 *)(fr0_ - 0x64)),a6,a7));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,a6,a7));
  if (cVar12 == '\0') {
    dVar5 = CONCAT44D(*(uint *)(unsigned)((int)ar4 + 0x44),*(uint *)(unsigned)((int)ar4 + 4));
  }
  else {
    in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 4);
    dVar5 = *(double *)(unsigned)((int)ar4 + 0x44);
  }
  if (cVar11 == '\0') {
    fVar4 = F32LO(dVar5) - F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 - dVar5,0);
  }
  if (cVar12 == '\0') {
    *(float *)(unsigned)((int)ar4 + 4) = fVar4;
    uVar6 = CONCAT44((*(uint *)(fr0_ - 0x24)),(uint)*ar4);
  }
  else {
    *(ulonglong *)(unsigned)((int)ar4 + 4) = in_xd0;
    in_xd0 = *ar4;
    uVar6 = CONCAT44((*(float *)(fr0_ - 0x20)),(*(uint *)(fr0_ - 0x24)));
  }
  if (cVar11 == '\0' && (float)uVar6 < (float)(uVar6 >> 0x20)) {
    if (cVar12 == '\0') {
      uVar6 = (ulonglong)(uint)*ar4;
    }
    else {
      in_xd0 = *ar4;
    }
    if (cVar11 != '\0' || (float)uVar6 <= 0.0) {
      if (cVar12 == '\0') {
        *(uint *)(unsigned)ar4 = 0;
      }
      else {
        *ar4 = uVar6 & 0xffffffff;
      }
      fVar4 = (float)(int)(uint)ar4[9];
      if (cVar12 == '\0') {
        fVar9 = 3.0;
      }
      else {
        fVar4 = 3.0;
        fVar9 = 1.8;
      }
      if (cVar11 == '\0' && fVar4 < fVar9) {
        if (cVar12 == '\0') {
          dVar5 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x1c));
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x1c);
          dVar5 = 4.41904794563714e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = F32LO(dVar5) / F32HI(dVar5);
        }
        else {
          fVar4 = SUB84(dVar5 / dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)((int)ar4 + 0x1c) = fVar4;
          dVar5 = CONCAT44D(0x3fe66666,(uint)ar4[4]);
        }
        else {
          *(ulonglong *)(unsigned)((int)ar4 + 0x1c) = in_xd0;
          in_xd0 = ar4[4];
          dVar5 = 4.41904794563714e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = F32LO(dVar5) * F32HI(dVar5);
        }
        else {
          fVar4 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)(ar4 + 4) = fVar4;
          dVar5 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x24));
        }
        else {
          ar4[4] = in_xd0;
          in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x24);
          dVar5 = 4.41904794563714e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = F32LO(dVar5) * F32HI(dVar5);
        }
        else {
          fVar4 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)((int)ar4 + 0x24) = fVar4;
        }
        else {
          *(ulonglong *)(unsigned)((int)ar4 + 0x24) = in_xd0;
        }
        if (cVar12 == '\0') {
          *(uint *)(unsigned)(ar4 + 6) = 0;
        }
        else {
          ar4[6] = (ulonglong)(uint)fVar4;
        }
        *(uint *)(unsigned)(ar4 + 9) = (uint)ar4[9] + 1;
        if (cVar12 == '\0') {
          *(uint *)(unsigned)((int)ar4 + 0x44) = 0;
        }
        else {
          *(ulonglong *)(unsigned)((int)ar4 + 0x44) = (ulonglong)(uint)fVar4;
        }
      }
    }
  }
  else {
    if (cVar12 == '\0') {
      *(uint *)(unsigned)ar4 = (*(uint *)(fr0_ - 0x24));
    }
    else {
      *ar4 = CONCAT44((*(float *)(fr0_ - 0x20)),(*(uint *)(fr0_ - 0x24)));
    }
    fVar4 = (float)(int)(uint)ar4[9];
    if (cVar12 == '\0') {
      fVar9 = 3.0;
    }
    else {
      fVar4 = 3.0;
      fVar9 = 1.8;
    }
    if (cVar11 == '\0' && fVar4 < fVar9) {
      if (cVar12 == '\0') {
        dVar5 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x1c));
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x1c);
        dVar5 = -1.4876824575960095e+234;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) / F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 / dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)((int)ar4 + 0x1c) = fVar4;
        dVar5 = CONCAT44D(0x3fe66666,(uint)ar4[4]);
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x1c) = in_xd0;
        in_xd0 = ar4[4];
        dVar5 = -1.4876824575960095e+234;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 4) = fVar4;
        dVar5 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x24));
      }
      else {
        ar4[4] = in_xd0;
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x24);
        dVar5 = -1.4876824575960095e+234;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)((int)ar4 + 0x24) = fVar4;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x24) = in_xd0;
      }
      if (cVar12 == '\0') {
        *(uint *)(unsigned)(ar4 + 6) = 0;
      }
      else {
        ar4[6] = (ulonglong)(uint)fVar4;
      }
      *(uint *)(unsigned)(ar4 + 9) = (uint)ar4[9] + 1;
      if (cVar12 == '\0') {
        *(uint *)(unsigned)((int)ar4 + 0x44) = 0;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x44) = (ulonglong)(uint)fVar4;
      }
    }
  }
  if (cVar12 == '\0') {
    uVar6 = CONCAT44((*(float *)(fr0_ - 0x1c)),(uint)ar4[1]);
  }
  else {
    in_xd0 = ar4[1];
    uVar6 = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
  }
  if (cVar11 == '\0' && (float)uVar6 < (float)(uVar6 >> 0x20)) {
    if (cVar12 == '\0') {
      uVar6 = (ulonglong)(uint)ar4[1];
    }
    else {
      in_xd0 = ar4[1];
    }
    uVar7 = uVar6 & 0xffffffff;
    if (cVar11 != '\0' || (float)uVar6 <= 0.0) {
      if (cVar12 == '\0') {
        *(uint *)(unsigned)(ar4 + 1) = 0;
      }
      else {
        ar4[1] = uVar6 & 0xffffffff;
      }
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(0x40400000,(float)(int)(uint)ar4[10]);
      }
      else {
        uVar7 = 0x3fe6666640400000;
      }
      if (cVar11 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
        if (cVar12 == '\0') {
          dVar5 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x24));
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x24);
          dVar5 = 6.28640424168658e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = F32LO(dVar5) / F32HI(dVar5);
        }
        else {
          fVar4 = SUB84(dVar5 / dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)((int)ar4 + 0x24) = fVar4;
          dVar5 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x1c));
        }
        else {
          *(ulonglong *)(unsigned)((int)ar4 + 0x24) = in_xd0;
          in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x1c);
          dVar5 = 6.28640424168658e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = F32LO(dVar5) * F32HI(dVar5);
        }
        else {
          fVar4 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)((int)ar4 + 0x1c) = fVar4;
          dVar5 = CONCAT44D(0x3fe66666,(uint)ar4[4]);
        }
        else {
          *(ulonglong *)(unsigned)((int)ar4 + 0x1c) = in_xd0;
          in_xd0 = ar4[4];
          dVar5 = 6.28640424168658e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = F32LO(dVar5) * F32HI(dVar5);
        }
        else {
          fVar4 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)(ar4 + 4) = fVar4;
        }
        else {
          ar4[4] = in_xd0;
        }
        if (cVar12 == '\0') {
          *(uint *)(unsigned)(ar4 + 6) = 0;
        }
        else {
          ar4[6] = (ulonglong)(uint)fVar4;
        }
        *(uint *)(unsigned)(ar4 + 10) = (uint)ar4[10] + 1;
        uVar7 = (ulonglong)(uint)fVar4;
        if (cVar12 == '\0') {
          *(uint *)(unsigned)((int)ar4 + 0x44) = 0;
        }
        else {
          *(ulonglong *)(unsigned)((int)ar4 + 0x44) = uVar7;
        }
      }
    }
  }
  else {
    if (cVar12 == '\0') {
      *(float *)(unsigned)(ar4 + 1) = (*(float *)(fr0_ - 0x1c));
    }
    else {
      ar4[1] = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
    }
    if (cVar12 == '\0') {
      uVar7 = CONCAT44(0x40400000,(float)(int)(uint)ar4[10]);
    }
    else {
      uVar7 = 0x3fe6666640400000;
    }
    if (cVar11 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
      if (cVar12 == '\0') {
        dVar5 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x24));
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x24);
        dVar5 = 4.41904794563714e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) / F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 / dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)((int)ar4 + 0x24) = fVar4;
        dVar5 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x1c));
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x24) = in_xd0;
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x1c);
        dVar5 = 4.41904794563714e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)((int)ar4 + 0x1c) = fVar4;
        dVar5 = CONCAT44D(0x3fe66666,(uint)ar4[4]);
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x1c) = in_xd0;
        in_xd0 = ar4[4];
        dVar5 = 4.41904794563714e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 4) = fVar4;
      }
      else {
        ar4[4] = in_xd0;
      }
      if (cVar12 == '\0') {
        *(uint *)(unsigned)(ar4 + 6) = 0;
      }
      else {
        ar4[6] = (ulonglong)(uint)fVar4;
      }
      *(uint *)(unsigned)(ar4 + 10) = (uint)ar4[10] + 1;
      uVar7 = (ulonglong)(uint)fVar4;
      if (cVar12 == '\0') {
        *(uint *)(unsigned)((int)ar4 + 0x44) = 0;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x44) = uVar7;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,ar4,a6,a7));
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),(int)(uVar7 >> 0x20));
    uVar7 = in_xd14;
    fVar4 = *(float *)(unsigned)((int)ar4 + 4);
    fVar9 = (*(float *)(fr0_ - 0x20));
  }
  else {
    in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 4);
    fVar4 = (*(float *)(fr0_ - 0x20));
    fVar9 = (*(float *)(fr0_ - 0x1c));
  }
  if (cVar11 == '\0' && fVar4 < fVar9) {
    if (cVar12 == '\0') {
      dVar5 = CONCAT44D(*(uint *)(unsigned)((int)ar4 + 4),fVar4);
    }
    else {
      dVar5 = *(double *)(unsigned)((int)ar4 + 4);
    }
    if (cVar11 == '\0') {
      bVar10 = SUB84(dVar8,0) < F32HI(dVar5);
    }
    else {
      bVar10 = dVar8 < dVar5;
    }
    if (!bVar10) {
      if (cVar12 == '\0') {
        *(float *)(unsigned)((int)ar4 + 4) = SUB84(dVar8,0);
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 4) = uVar7;
      }
      *(uint *)(unsigned)((int)ar4 + 0x2c) = *(uint *)(unsigned)((int)ar4 + 0x2c) + 1;
      if (((uint)ar4[9] == 0) && ((uint)ar4[10] == 0)) {
        fVar4 = (float)(int)*(uint *)(unsigned)((int)ar4 + 0x4c);
        if (cVar12 == '\0') {
          fVar9 = 3.0;
        }
        else {
          fVar4 = 3.0;
          fVar9 = 1.8;
        }
        if (cVar11 == '\0' && fVar4 < fVar9) {
          if (cVar12 == '\0') {
            dVar8 = CONCAT44D(0x3fe66666,(uint)ar4[4]);
          }
          else {
            in_xd0 = ar4[4];
            dVar8 = 2.80633114450354e-312;
          }
          if (cVar11 == '\0') {
            fVar4 = F32LO(dVar8) / F32HI(dVar8);
          }
          else {
            fVar4 = SUB84(dVar8 / dVar8,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)(ar4 + 4) = fVar4;
            dVar8 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x1c));
          }
          else {
            ar4[4] = in_xd0;
            in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x1c);
            dVar8 = 2.80633114450354e-312;
          }
          if (cVar11 == '\0') {
            fVar4 = F32LO(dVar8) * F32HI(dVar8);
          }
          else {
            fVar4 = SUB84(dVar8 * dVar8,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)((int)ar4 + 0x1c) = fVar4;
            dVar8 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x24));
          }
          else {
            *(ulonglong *)(unsigned)((int)ar4 + 0x1c) = in_xd0;
            in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x24);
            dVar8 = 2.80633114450354e-312;
          }
          if (cVar11 == '\0') {
            fVar4 = F32LO(dVar8) * F32HI(dVar8);
          }
          else {
            fVar4 = SUB84(dVar8 * dVar8,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)((int)ar4 + 0x24) = fVar4;
          }
          else {
            *(ulonglong *)(unsigned)((int)ar4 + 0x24) = in_xd0;
          }
          if (cVar12 == '\0') {
            *(uint *)(unsigned)(ar4 + 6) = 0;
          }
          else {
            ar4[6] = (ulonglong)(uint)fVar4;
          }
          *(uint *)(unsigned)((int)ar4 + 0x4c) = *(uint *)(unsigned)((int)ar4 + 0x4c) + 1;
          if (cVar12 == '\0') {
            *(uint *)(unsigned)((int)ar4 + 0x44) = 0;
          }
          else {
            *(ulonglong *)(unsigned)((int)ar4 + 0x44) = (ulonglong)(uint)fVar4;
          }
        }
      }
    }
  }
  else {
    if (cVar12 == '\0') {
      *(float *)(unsigned)((int)ar4 + 4) = (*(float *)(fr0_ - 0x20));
    }
    else {
      *(ulonglong *)(unsigned)((int)ar4 + 4) = CONCAT44((*(float *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
    }
    fVar4 = (float)(int)*(uint *)(unsigned)((int)ar4 + 0x4c);
    if (cVar12 == '\0') {
      fVar9 = 3.0;
    }
    else {
      fVar4 = 3.0;
      fVar9 = 1.8;
    }
    if (cVar11 == '\0' && fVar4 < fVar9) {
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(0x3fe66666,(uint)ar4[4]);
      }
      else {
        in_xd0 = ar4[4];
        dVar8 = 6.28640424168658e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar8) / F32HI(dVar8);
      }
      else {
        fVar4 = SUB84(dVar8 / dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 4) = fVar4;
        dVar8 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x1c));
      }
      else {
        ar4[4] = in_xd0;
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x1c);
        dVar8 = 6.28640424168658e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar8) * F32HI(dVar8);
      }
      else {
        fVar4 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)((int)ar4 + 0x1c) = fVar4;
        dVar8 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x24));
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x1c) = in_xd0;
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x24);
        dVar8 = 6.28640424168658e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar8) * F32HI(dVar8);
      }
      else {
        fVar4 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)((int)ar4 + 0x24) = fVar4;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x24) = in_xd0;
      }
      if (cVar12 == '\0') {
        *(uint *)(unsigned)(ar4 + 6) = 0;
      }
      else {
        ar4[6] = (ulonglong)(uint)fVar4;
      }
      *(uint *)(unsigned)((int)ar4 + 0x4c) = *(uint *)(unsigned)((int)ar4 + 0x4c) + 1;
      if (cVar12 == '\0') {
        *(uint *)(unsigned)((int)ar4 + 0x44) = 0;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x44) = (ulonglong)(uint)fVar4;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 104)), free_if_nonnull_wrap_102790(&(*(uint *)(fr0_ - 0x24)),0xffffffff,a6,a7));
  return 0;
}

__asm__(".globl _FUN_8c0f6ac4\n.set _FUN_8c0f6ac4, _FUN_8c0f6ac4_def\n");
