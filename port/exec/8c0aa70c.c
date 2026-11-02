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
undefined4 FUN_8c0aa70c_def(int ar4,undefined4 ar5,int *ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c0aa70c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 236; for (int i_ = 0; i_ < 236; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  undefined4 *a5;
  int iVar2;
  undefined4 uVar3;
  float *a6;
  undefined8 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  double dVar8;
  float fVar11;
  ulonglong uVar9;
  double dVar10;
  undefined4 in_fr3 = 0;
  ulonglong in_xd0 = 0;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar5 = 1;
  (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c102748(&(*(undefined4 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  puVar4 = (undefined8 *)(unsigned)((undefined4 *)(fr0_ - 0x1c));
  a6 = &(*(float *)(fr0_ - 0x20));
  a5 = &(*(undefined4 *)(fr0_ - 0x24));
  (vsp = ((unsigned long)(fr0_ - 236)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x120))))(ar6,a5,a6,puVar4));
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),a5,a6,puVar4));
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_ctor_zero(((float *)(fr0_ - 0x44)),a5,a6,puVar4));
  iVar2 = ar4 + 0x14;
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),iVar2,a6,puVar4));
  if (cVar13 == '\0') {
    dVar8 = CONCAT44D(0x42c80000,(*(undefined4 *)(fr0_ - 0x24)));
  }
  else {
    in_xd0 = CONCAT44((*(float *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
    dVar8 = 4.92856576361035e-312;
  }
  if (cVar12 == '\0') {
    ((float *)(fr0_ - 0x44))[0] = F32LO(dVar8) - F32HI(dVar8);
  }
  else {
    ((float *)(fr0_ - 0x44))[0] = SUB84(dVar8 - dVar8,0);
  }
  fVar7 = ((float *)(fr0_ - 0x44))[0];
  if (cVar13 != '\0') {
    ((float *)(fr0_ - 0x44))[0] = (float)in_xd0;
    (*(undefined4 *)(fr0_ - 0x38)) = 0xe8;
    fVar7 = 100.0;
  }
  (*(undefined4 *)(fr0_ - 0x3c)) = 0x42c80000;
  iVar1 = *(int *)(unsigned)(ar4 + 0x21b4);
  if (iVar1 == 0) {
    if (*(int *)(unsigned)(ar4 + 0x2198) == 0) {
      (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03f460(((float *)(fr0_ - 0x50)),&(*(undefined4 *)(fr0_ - 0x24)),a6,puVar4));
      a6 = ((float *)(fr0_ - 0x50));
      (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c0a861c(ar4,ar5,a6,puVar4));
      (vsp = ((unsigned long)(fr0_ - 236)), free_if_nonnull_wrap_102790(((float *)(fr0_ - 0x50)),0xffffffff,a6,puVar4));
      goto LAB_8c0aacb4;
    }
    if (*(int *)(unsigned)(ar4 + 0x2198) != 5) {
      (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03f460(((float *)(fr0_ - 0x5c)),&(*(undefined4 *)(fr0_ - 0x24)),a6,puVar4));
      a6 = ((float *)(fr0_ - 0x5c));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c0a8c0c(ar4,ar5,a6,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 236)), free_if_nonnull_wrap_102790(((float *)(fr0_ - 0x5c)),0xffffffff,a6,ar7));
      puVar4 = ar7;
      if (iVar2 == 0) {
        *(int *)(unsigned)(ar4 + 0x21b4) = *(int *)(unsigned)(ar4 + 0x21b4) + 1;
        (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c022d04(ar4 + 0x54,uVar3,a6,ar7));
        puVar4 = ar7;
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x54) = (*(undefined4 *)(fr0_ - 0x24));
          *(float *)(unsigned)(ar4 + 0x58) = (*(float *)(fr0_ - 0x20));
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x54) = CONCAT44((*(float *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
          *(ulonglong *)(unsigned)(ar4 + 0x58) = CONCAT44(((undefined4 *)(fr0_ - 0x1c))[0],(*(float *)(fr0_ - 0x20)));
        }
      }
      goto LAB_8c0aacb4;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x21b4) = 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (cVar13 == '\0') {
        fVar7 = *(float *)(unsigned)(ar4 + 0x2194);
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
      }
      if (cVar12 == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0);
      }
      if (cVar13 == '\0') {
        *(float *)(unsigned)(ar4 + 0x2194) = fVar7;
        fVar7 = *(float *)(unsigned)(ar4 + 0x2194);
        fVar11 = 15.0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2194) = in_xd0;
        in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
        fVar7 = 15.0;
        fVar11 = 108.7;
      }
      if (cVar12 != '\0' || fVar7 <= fVar11) {
        if (cVar13 == '\0') {
          dVar8 = CONCAT44D(0xc0981b4f,*(undefined4 *)(unsigned)(ar4 + 0x21a8));
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x21a8);
          dVar8 = 1.8293200140039e-310;
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar8) + F32HI(dVar8);
        }
        else {
          fVar7 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(unsigned)(ar4 + 0x21a8) = fVar7;
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x21ac),in_fr3);
          dVar10 = CONCAT44D(0x41700000,*(undefined4 *)(unsigned)(ar4 + 0x22c));
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x21a8) = in_xd0;
          dVar8 = *(double *)(unsigned)(ar4 + 0x21ac);
          dVar10 = 1.82412182335889e-310;
        }
        if (cVar12 == '\0') {
          dVar8 = CONCAT44D(F32HI(dVar8) +
                                   F32LO(dVar10) / F32HI(dVar10),
                                   SUB84(dVar8,0));
        }
        else {
          dVar8 = dVar8 + dVar10 / dVar10;
        }
        if (cVar13 == '\0') {
          *(int *)(unsigned)(ar4 + 0x21ac) = (int)(D2U(dVar8) >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x21ac) = dVar8;
        }
      }
      else {
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)ar7 = 0x42d96666;
          uVar9 = CONCAT44(0xc1c9999a,fVar7);
          *(undefined4 *)(unsigned)((int)ar7 + 4) = 0xc1c9999a;
        }
        else {
          *ar7 = 0xc1c9999a42d96666;
          uVar9 = 0x21a8c1c9999a;
          *(undefined8 *)(unsigned)((int)ar7 + 4) = 0x21a8c1c9999a;
        }
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar7 + 1) = 0;
        }
        else {
          ar7[1] = uVar9 & 0xffffffff;
        }
        (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c023d7c(ar4 + 0x21a8,iVar2,a6,puVar4));
      }
      if (cVar13 == '\0') {
        uVar9 = CONCAT44(0x43480000,*(undefined4 *)(unsigned)(ar4 + 0x2194));
      }
      else {
        uVar9 = 0xbf80000043480000;
      }
      if (cVar12 != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar9 & 0xffffffff;
        }
        (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c022d04(ar4 + 0x14,iVar2,a6,puVar4));
        *(int *)(unsigned)(ar4 + 0x21b4) = *(int *)(unsigned)(ar4 + 0x21b4) + 1;
      }
      (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03f3ac(ar4 + 0xb0,iVar2,a6,puVar4));
    }
    else if ((iVar1 == 3) &&
            (iVar2 = (vsp = ((unsigned long)(fr0_ - 236)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar2,a6,puVar4)), iVar2 == 1)) {
      *(undefined4 *)(unsigned)(ar4 + 0x2198) = 8;
      uVar5 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x21b4) = 0;
    }
    goto LAB_8c0aacb4;
  }
  (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03f460(&(*(undefined8 *)(fr0_ - 0x68)),&(*(undefined4 *)(fr0_ - 0x24)),a6,puVar4));
  puVar4 = &(*(undefined8 *)(fr0_ - 0x68));
  a6 = ((float *)(fr0_ - 0x44));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c0a8f94(ar4,ar5,a6,puVar4));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 236)), free_if_nonnull_wrap_102790(&(*(undefined8 *)(fr0_ - 0x68)),0xffffffff,a6,puVar4));
  if (iVar2 == 0) {
    *(int *)(unsigned)(ar4 + 0x21b4) = *(int *)(unsigned)(ar4 + 0x21b4) + 1;
    uVar9 = (ulonglong)(uint)fVar7;
    if (cVar13 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar9;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar3,a6,puVar4); });
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x88)),uVar3,a6,puVar4));
    uVar3 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x98))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x88)),ar5,a6,puVar4); });
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 236)), Vec3_length(((undefined1 *)(fr0_ - 0x98)),uVar3,a6,puVar4));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa8))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c0230f0(ar4_00,uVar3,a6,puVar4); });
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(fr0_ - 0xa8)),a6,puVar4));
    if (cVar13 == '\0') {
      *(int *)(unsigned)(ar4 + 0x22c) = (int)(uVar9 >> 0x20);
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x22c) = uVar9;
    }
    uVar6 = (uint)uVar9;
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,a6,puVar4));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,a6,puVar4));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,a6,puVar4));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,a6,puVar4));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xb8)),uVar3,a6,puVar4));
    uVar3 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0xb8)),ar5,a6,puVar4); });
    uVar3 = (vsp = ((unsigned long)(fr0_ - 236)), Vec3_length(((undefined1 *)(fr0_ - 0xc8)),uVar3,a6,puVar4));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x14,uVar3,a6,puVar4));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,a6,puVar4));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,a6,puVar4));
    uVar9 = (ulonglong)uVar6;
    if (cVar13 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x21a8) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x21a8) = uVar9;
    }
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x54,ar5,a6,puVar4));
    uVar9 = uVar9 & 0xffffffff;
    if (cVar13 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x2194) = uVar9;
    }
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xd8)),ar5,a6,puVar4));
    iVar2 = ar4 + 0x54;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe8))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0xd8)),iVar2,a6,puVar4); });
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_length_sq(((undefined1 *)(fr0_ - 0xe8)),iVar2,a6,puVar4));
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(0x43480000,(int)(uVar9 >> 0x20));
      uVar9 = in_xd0;
    }
    else {
      dVar8 = -0.007812501958142093;
    }
    if (cVar12 == '\0') {
      fVar7 = F32LO(dVar8) / F32HI(dVar8);
    }
    else {
      fVar7 = SUB84(dVar8 / dVar8,0);
    }
    if (cVar13 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar7;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar9;
    }
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,a6,puVar4));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,a6,puVar4));
    puVar4 = (undefined8 *)(unsigned)0x0;
    a6 = (float *)(unsigned)0xffffffff;
    uVar3 = 0;
    (vsp = ((unsigned long)(fr0_ - 236)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 236)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,a6,puVar4));
  }
LAB_8c0aacb4:
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((float *)(fr0_ - 0x44)),0xffffffff,a6,puVar4));
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,a6,puVar4));
  (vsp = ((unsigned long)(fr0_ - 236)), free_if_nonnull_wrap_102790(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,a6,puVar4));
  return uVar5;
}

__asm__(".globl _FUN_8c0aa70c\n.set _FUN_8c0aa70c, _FUN_8c0aa70c_def\n");
