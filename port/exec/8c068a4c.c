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
undefined4 FUN_8c068a4c_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c068a4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 6044; for (int i_ = 0; i_ < 6044; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 ar5_00;
  int *a6;
  float fVar4;
  double in_dr0 = 0;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  undefined4 in_fr3 = 0;
  double in_dr14 = 0;
  double in_xd0 = 0;
  undefined8 in_xd14 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  ((uint *)(fr0_ - 0x34))[0] = (*(undefined4 *)(unsigned)(unsigned)0x8c1370e0);
  ((uint *)(fr0_ - 0x34))[1] = (*(undefined1 *)(unsigned)0x8c1370e4);
  ((uint *)(fr0_ - 0x34))[2] = (*(undefined1 *)(unsigned)0x8c1370e8);
  ((uint *)(fr0_ - 0x34))[3] = (*(undefined1 *)(unsigned)0x8c1370ec);
  ((uint *)(fr0_ - 0x24))[0] = (*(undefined1 *)(unsigned)0x8c1370f0);
  ((uint *)(fr0_ - 0x24))[1] = (*(undefined1 *)(unsigned)0x8c1370f4);
  ((uint *)(fr0_ - 0x24))[2] = (*(undefined1 *)(unsigned)0x8c1370f8);
  ((uint *)(fr0_ - 0x24))[3] = (*(undefined1 *)(unsigned)0x8c1370fc);
  iVar1 = *(int *)(unsigned)(ar4 + 0x230);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 6044)), FUN_8c068890(((undefined1 *)(fr0_ - 0x800)),ar5,ar6,ar7));
    uVar3 = SUB84(in_dr0,0);
    uVar2 = (vsp = ((unsigned long)(fr0_ - 6044)), FUN_8c06afb0(ar4,((undefined1 *)(fr0_ - 0x800)),ar6,ar7));
    if (cVar11 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x240));
      dVar5 = CONCAT44D(0x44610000,uVar3);
    }
    else {
      in_xd14 = *(undefined8 *)(unsigned)(ar4 + 0x240);
      dVar5 = -9.834358688611842e-251;
    }
    if (cVar10 == '\0') {
      dVar6 = CONCAT44D((float)(uVar2 & 0xffff),SUB84(dVar5,0));
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 (F32LO(in_dr14) / F32HI(dVar5)) *
                                 (float)(uVar2 & 0xffff));
    }
    else {
      dVar6 = (double)(uVar2 & 0xffff);
      in_dr14 = (in_dr14 / dVar5) * dVar6;
    }
    uVar3 = SUB84(dVar6,0);
    (vsp = ((unsigned long)(fr0_ - 6044)), FUN_8c068818(((undefined1 *)(fr0_ - 0x800)),0xffffffff,ar6,ar7));
    if (cVar11 == '\0') {
      in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x240),uVar3);
    }
    else {
      in_dr0 = *(double *)(unsigned)(ar4 + 0x240);
    }
    if (cVar10 == '\0') {
      bVar9 = F32HI(in_dr0) < SUB84(in_dr14,0);
    }
    else {
      bVar9 = in_dr0 < in_dr14;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x240));
      }
      else {
        in_xd14 = *(undefined8 *)(unsigned)(ar4 + 0x240);
      }
      *(int *)(unsigned)(ar4 + 0x230) = *(int *)(unsigned)(ar4 + 0x230) + 1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 6044)), libgcc_divide_helper_01031c(*(undefined4 *)(unsigned)(ar4 + 0x210),4,ar6,ar7));
      *(uint *)(unsigned)(ar4 + 0x214) = *(uint *)(unsigned)(ar4 + 0x214) & ~((uint *)(fr0_ - 0x34))[iVar1];
    }
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 0x234) = SUB84(in_dr14,0);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x234) = in_xd14;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return iVar1;
      }
      a6 = ar6;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 6044)), get_field_24_026024(ar6,ar5,ar6,ar7));
      if (iVar1 != 1) {
        return iVar1;
      }
      (vsp = ((unsigned long)(fr0_ - 6044)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x188))))(ar6,ar5,a6,ar7));
      dVar5 = in_dr0;
      if (cVar11 == '\0') {
        in_dr0 = (double)((ulonglong)in_dr0 >> 0x20);
        dVar5 = in_xd0;
      }
      if (cVar10 == '\0' && 0.0 < SUB84(in_dr0,0)) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 6044)), rand(ar6,ar5,a6,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 6044)), libgcc_divide_helper_01031c(uVar3,5,a6,ar7));
        if (cVar11 == '\0') {
          dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x244),in_fr3);
        }
        else {
          dVar6 = *(double *)(unsigned)(ar4 + 0x244);
        }
        if (cVar11 == '\0') {
          dVar7 = CONCAT44D(0x41200000,(float)(iVar1 + 8));
        }
        else {
          dVar7 = 2.2974389978324538e-39;
        }
        if (cVar10 == '\0') {
          fVar4 = F32LO(dVar7) / F32HI(dVar7);
        }
        else {
          fVar4 = SUB84(dVar7 / dVar7,0);
        }
        if (cVar11 == '\0') {
          dVar7 = CONCAT44D(0x37e90453,fVar4);
        }
        else {
          dVar7 = 1.18029310218391e-311;
        }
        if (cVar10 == '\0') {
          fVar8 = F32HI(dVar7);
          fVar4 = F32LO(dVar7) * fVar8;
          dVar7 = CONCAT44D(fVar8,fVar4);
          dVar6 = CONCAT44D(F32HI(dVar6) - fVar4,SUB84(dVar6,0));
        }
        else {
          dVar7 = dVar7 * dVar7;
          dVar6 = dVar6 - dVar7;
        }
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x244) = (int)(D2U(dVar6) >> 0x20);
          dVar7 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x244);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x244) = dVar6;
          dVar5 = *(double *)(unsigned)(ar4 + 0x244);
        }
        fVar4 = F32LO(dVar7);
        if (cVar10 == '\0' && fVar4 < 0.0) {
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x244) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x244) = D2U(dVar7) & 0xffffffff;
          }
        }
        if (cVar11 == '\0') {
          fVar4 = *(float *)(unsigned)(ar4 + 0x244);
        }
        else {
          dVar5 = *(double *)(unsigned)(ar4 + 0x244);
        }
        if (cVar11 == '\0') {
          dVar6 = CONCAT44D(0x42b40000,fVar4);
        }
        else {
          dVar6 = 1.29532152133274e-310;
        }
        if (cVar10 == '\0') {
          fVar4 = F32LO(dVar6) * F32HI(dVar6);
        }
        else {
          fVar4 = SUB84(dVar6 * dVar6,0);
        }
        if (cVar11 == '\0') {
          *(float *)(unsigned)(ar4 + 0x22c) = fVar4;
          return ((undefined4 *)(unsigned)0x8c068e5c);
        }
        *(double *)(unsigned)(ar4 + 0x22c) = dVar5;
        return ((undefined4 *)(unsigned)0x8c068e5c);
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 6044)), rand(ar6,ar5,a6,ar7));
      ar5_00 = 5;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 6044)), libgcc_divide_helper_01031c(uVar3,5,a6,ar7));
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x244),in_fr3);
      }
      else {
        dVar6 = *(double *)(unsigned)(ar4 + 0x244);
      }
      if (cVar11 == '\0') {
        dVar7 = CONCAT44D(0x41200000,(float)(iVar1 + 8));
      }
      else {
        dVar7 = 2.2974389978324538e-39;
      }
      if (cVar10 == '\0') {
        fVar4 = F32LO(dVar7) / F32HI(dVar7);
      }
      else {
        fVar4 = SUB84(dVar7 / dVar7,0);
      }
      if (cVar11 == '\0') {
        dVar7 = CONCAT44D(0x37e90453,fVar4);
      }
      else {
        dVar7 = 1.18029310218391e-311;
      }
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) +
                                 F32LO(dVar7) * F32HI(dVar7),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar7 * dVar7;
      }
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 0x244) = (int)(D2U(dVar6) >> 0x20);
        dVar6 = CONCAT44D(0x42b40000,*(undefined4 *)(unsigned)(ar4 + 0x244));
      }
      else {
        *(double *)(unsigned)(ar4 + 0x244) = dVar6;
        dVar5 = *(double *)(unsigned)(ar4 + 0x244);
        dVar6 = 1.14643063239662e-311;
      }
      if (cVar10 == '\0') {
        fVar4 = F32LO(dVar6) * F32HI(dVar6);
      }
      else {
        fVar4 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar11 == '\0') {
        *(float *)(unsigned)(ar4 + 0x22c) = fVar4;
        fVar4 = *(float *)(unsigned)(ar4 + 0x244);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x22c) = dVar5;
      }
      if (cVar10 == '\0' && fVar4 < 1.0) {
        return ar4 + 0x244;
      }
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f604) = 0;
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f600) = 0;
      (vsp = ((unsigned long)(fr0_ - 6044)), FUN_8c0f4d84(ar4,ar5_00,a6,ar7));
      (*(undefined4 *)(unsigned)(unsigned)0x8c28099c) = (*(undefined4 *)(unsigned)(unsigned)0x8c28099c) + -1;
      return (*(undefined4 *)(unsigned)(unsigned)0x8c28099c);
    }
    goto LAB_8c068bfc;
  }
  uVar3 = SUB84(in_dr0,0);
  (vsp = ((unsigned long)(fr0_ - 6044)), FUN_8c068890(((undefined1 *)(fr0_ - 0xfcc)),ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 6044)), FUN_8c06afb0(ar4,((undefined1 *)(fr0_ - 0xfcc)),ar6,ar7));
  if (cVar11 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x240));
    dVar5 = CONCAT44D(0x44e10000,uVar3);
  }
  else {
    in_xd14 = *(undefined8 *)(unsigned)(ar4 + 0x240);
    dVar5 = 1.20586454969464e-311;
  }
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D((float)(uVar2 & 0xffff),SUB84(dVar5,0));
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                               (F32LO(in_dr14) / F32HI(dVar5)) *
                               (float)(uVar2 & 0xffff));
  }
  else {
    dVar6 = (double)(uVar2 & 0xffff);
    in_dr14 = (in_dr14 / dVar5) * dVar6;
  }
  uVar3 = SUB84(dVar6,0);
  (vsp = ((unsigned long)(fr0_ - 6044)), FUN_8c068818(((undefined1 *)(fr0_ - 0xfcc)),0xffffffff,ar6,ar7));
  if (cVar11 == '\0') {
    in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x240),uVar3);
  }
  else {
    in_dr0 = *(double *)(unsigned)(ar4 + 0x240);
  }
  if (cVar10 == '\0') {
    bVar9 = F32HI(in_dr0) < SUB84(in_dr14,0);
  }
  else {
    bVar9 = in_dr0 < in_dr14;
  }
  if (bVar9) {
    if (cVar11 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x240));
    }
    else {
      in_xd14 = *(undefined8 *)(unsigned)(ar4 + 0x240);
    }
    *(int *)(unsigned)(ar4 + 0x230) = *(int *)(unsigned)(ar4 + 0x230) + 1;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 6044)), libgcc_divide_helper_01031c(*(undefined4 *)(unsigned)(ar4 + 0x210),4,ar6,ar7));
    *(uint *)(unsigned)(ar4 + 0x214) = *(uint *)(unsigned)(ar4 + 0x214) & ~((uint *)(fr0_ - 0x24))[iVar1];
  }
  if (cVar11 == '\0') {
    *(int *)(unsigned)(ar4 + 0x238) = SUB84(in_dr14,0);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x238) = in_xd14;
  }
LAB_8c068bfc:
  uVar3 = SUB84(in_dr0,0);
  (vsp = ((unsigned long)(fr0_ - 6044)), FUN_8c068890(((undefined1 *)(fr0_ - 0x1798)),ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 6044)), FUN_8c06afb0(ar4,((undefined1 *)(fr0_ - 0x1798)),ar6,ar7));
  if (cVar11 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x240));
    dVar5 = CONCAT44D(0x45610000,uVar3);
  }
  else {
    in_xd14 = *(undefined8 *)(unsigned)(ar4 + 0x240);
    dVar5 = 1.21435667738153e-311;
  }
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D((float)(uVar2 & 0xffff),SUB84(dVar5,0));
    dVar5 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                             (F32LO(in_dr14) / F32HI(dVar5)) *
                             (float)(uVar2 & 0xffff));
  }
  else {
    dVar6 = (double)(uVar2 & 0xffff);
    dVar5 = (in_dr14 / dVar5) * dVar6;
  }
  uVar3 = SUB84(dVar6,0);
  (vsp = ((unsigned long)(fr0_ - 6044)), FUN_8c068818(((undefined1 *)(fr0_ - 0x1798)),0xffffffff,ar6,ar7));
  if (cVar11 == '\0') {
    dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x240),uVar3);
  }
  else {
    dVar6 = *(double *)(unsigned)(ar4 + 0x240);
  }
  if (cVar10 == '\0') {
    bVar9 = F32HI(dVar6) < SUB84(dVar5,0);
  }
  else {
    bVar9 = dVar6 < dVar5;
  }
  if (bVar9) {
    if (cVar11 == '\0') {
      dVar5 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x240);
    }
    else {
      in_xd14 = *(undefined8 *)(unsigned)(ar4 + 0x240);
    }
    *(int *)(unsigned)(ar4 + 0x230) = *(int *)(unsigned)(ar4 + 0x230) + 1;
  }
  if (cVar11 == '\0') {
    *(int *)(unsigned)(ar4 + 0x23c) = SUB84(dVar5,0);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x23c) = in_xd14;
  }
  return 0x23c;
}

__asm__(".globl _FUN_8c068a4c\n.set _FUN_8c068a4c, _FUN_8c068a4c_def\n");
