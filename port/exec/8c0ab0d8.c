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
undefined4 FUN_8c0ab0d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ab0d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 184; for (int i_ = 0; i_ < 184; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  double in_dr0 = 0;
  undefined8 uVar8;
  ulonglong uVar9;
  double dVar10;
  undefined8 in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  iVar2 = *(int *)(unsigned)(ar4 + 0x21bc);
  if (iVar2 == 0) {
    ar7 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0;
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
    uVar6 = SUB84(in_dr0,0);
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar5,ar7));
    if (cVar12 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x22c) = 0;
      uVar8 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x21ac),uVar6);
      *(undefined4 *)(unsigned)(ar4 + 0x21a0) = *(undefined4 *)(unsigned)(ar4 + 0x21ac);
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x22c) = (ulonglong)uVar6;
      uVar8 = *(undefined8 *)(unsigned)(ar4 + 0x21ac);
      *(undefined8 *)(unsigned)(ar4 + 0x21a0) = uVar8;
    }
    uVar4 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_sub(ar6,ar5,uVar5,ar7); });
    uVar3 = (vsp = ((unsigned long)(fr0_ - 184)), Vec3_length(((undefined1 *)(fr0_ - 0x28)),uVar4,uVar5,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); FUN_8c023138(uVar3,uVar4,uVar5,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); FUN_8c023138(ar4 + 0x14,uVar4,uVar5,ar7); });
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x48)),uVar5,ar7));
    if (cVar12 == '\0') {
      *(int *)(unsigned)(ar4 + 0x2194) = (int)((ulonglong)uVar8 >> 0x20);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x2194) = uVar8;
    }
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,uVar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,uVar5,ar7));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,uVar5,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); FUN_8c023138(ar4 + 0x14,uVar4,uVar5,ar7); });
    uVar4 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_sub(ar6,ar5,uVar5,ar7); });
    uVar3 = (vsp = ((unsigned long)(fr0_ - 184)), Vec3_length(((undefined1 *)(fr0_ - 0x68)),uVar4,uVar5,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); FUN_8c023138(uVar3,uVar4,uVar5,ar7); });
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x84)),uVar4,uVar5,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(fr0_ - 0x84)),uVar5,ar7); });
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x94)),uVar5,ar7));
    if (cVar12 == '\0') {
      in_dr0 = CONCAT44D(0x42b40000,(int)((ulonglong)uVar8 >> 0x20));
    }
    else {
      in_dr0 = -7.961142730794258e-251;
      in_xd0 = uVar8;
    }
    bVar1 = cVar11 != '\0';
    fVar7 = F32LO(in_dr0);
    uVar9 = (ulonglong)in_dr0 >> 0x20;
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,uVar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), object_dtor_delete(((undefined1 *)(fr0_ - 0x84)),0xffffffff,uVar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,uVar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,uVar5,ar7));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,uVar5,ar7));
    if (bVar1 || fVar7 <= (float)uVar9) {
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D(0xbf800000,*(undefined4 *)(unsigned)(ar4 + 0x2194));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2194);
        dVar10 = 3.75058611530083e-312;
      }
      if (cVar11 == '\0') {
        in_dr0 = (double)(ulonglong)(uint)(F32LO(dVar10) * F32HI(dVar10));
      }
      else {
        in_dr0 = dVar10 * dVar10;
      }
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2194) = SUB84(in_dr0,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2194) = in_xd0;
      }
    }
    *(int *)(unsigned)(ar4 + 0x21bc) = *(int *)(unsigned)(ar4 + 0x21bc) + 1;
  }
  else {
    uVar4 = ar5;
    uVar5 = ar6;
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c022fc0(ar5,ar6,ar6,ar7));
        if (cVar12 == '\0') {
          in_dr0 = (double)((ulonglong)in_dr0 >> 0x20);
        }
        if (cVar11 != '\0' || SUB84(in_dr0,0) <= 1.0) {
          if (cVar12 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
          }
          *(int *)(unsigned)(ar4 + 0x21bc) = *(int *)(unsigned)(ar4 + 0x21bc) + 1;
        }
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c03f3ac(ar4 + 0xb0,ar6,uVar5,ar7));
        return 1;
      }
      if (iVar2 != 3) {
        return 1;
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      if (iVar2 != 1) {
        return 1;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x21bc) = 0;
      return 0;
    }
  }
  fVar7 = F32LO(in_dr0);
  if (cVar12 == '\0') {
    fVar7 = *(float *)(unsigned)(ar4 + 0x2194);
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2194);
  }
  if (cVar11 == '\0' && 0.0 < fVar7) {
    if (cVar12 == '\0') {
      fVar7 = *(float *)(unsigned)(ar4 + 0x22c);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x22c);
    }
    if (cVar11 == '\0') {
      fVar7 = fVar7 + 1.0;
    }
    else {
      fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0);
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)(ar4 + 0x22c) = fVar7;
      uVar9 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x2194),*(undefined4 *)(unsigned)(ar4 + 0x22c));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x22c) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x22c);
      uVar9 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
    }
    if (cVar11 == '\0' && (float)uVar9 < (float)(uVar9 >> 0x20)) {
      if (cVar12 == '\0') {
        uVar9 = (ulonglong)*(uint *)(unsigned)(ar4 + 0x21ac);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x21ac);
      }
      dVar10 = CONCAT44D(0x3f800000,(float)uVar9);
      if (cVar11 == '\0') {
        fVar7 = (float)uVar9 + 1.0;
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x21ac) = in_xd0;
      }
    }
    else {
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2194),*(undefined4 *)(unsigned)(ar4 + 0x21a0));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x21a0);
        dVar10 = *(double *)(unsigned)(ar4 + 0x2194);
      }
      if (cVar11 == '\0') {
        fVar7 = F32LO(dVar10) + F32HI(dVar10);
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x21ac) = in_xd0;
      }
      *(int *)(unsigned)(ar4 + 0x21bc) = *(int *)(unsigned)(ar4 + 0x21bc) + 1;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_sub(ar6,ar5,uVar5,ar7); });
      uVar4 = (vsp = ((unsigned long)(fr0_ - 184)), Vec3_length(((undefined1 *)(fr0_ - 0xa4)),ar5,uVar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x14,uVar4,uVar5,ar7));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,uVar5,ar7));
      if (cVar12 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3f333333;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x53f41fe43f333333;
      }
    }
  }
  else {
    if (cVar12 == '\0') {
      fVar7 = *(float *)(unsigned)(ar4 + 0x22c);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x22c);
    }
    if (cVar11 == '\0') {
      fVar7 = fVar7 - 1.0;
    }
    else {
      fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7),0);
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)(ar4 + 0x22c) = fVar7;
      uVar9 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x2194),*(undefined4 *)(unsigned)(ar4 + 0x22c));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x22c) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x22c);
      uVar9 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
    }
    if (cVar11 == '\0' && (float)(uVar9 >> 0x20) < (float)uVar9) {
      if (cVar12 == '\0') {
        uVar9 = (ulonglong)*(uint *)(unsigned)(ar4 + 0x21ac);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x21ac);
      }
      dVar10 = CONCAT44D(0x3f800000,(float)uVar9);
      if (cVar11 == '\0') {
        fVar7 = (float)uVar9 - 1.0;
      }
      else {
        fVar7 = SUB84(dVar10 - dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x21ac) = in_xd0;
      }
    }
    else {
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2194),*(undefined4 *)(unsigned)(ar4 + 0x21a0));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x21a0);
        dVar10 = *(double *)(unsigned)(ar4 + 0x2194);
      }
      if (cVar11 == '\0') {
        fVar7 = F32LO(dVar10) + F32HI(dVar10);
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x21ac) = in_xd0;
      }
      *(int *)(unsigned)(ar4 + 0x21bc) = *(int *)(unsigned)(ar4 + 0x21bc) + 1;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_sub(ar6,ar5,uVar5,ar7); });
      uVar4 = (vsp = ((unsigned long)(fr0_ - 184)), Vec3_length(((undefined1 *)(fr0_ - 0xb4)),ar5,uVar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x14,uVar4,uVar5,ar7));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,uVar5,ar7));
      if (cVar12 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3f333333;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x53f11fe13f333333;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c03f3ac(ar4 + 0xb0,uVar4,uVar5,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0ab0d8\n.set _FUN_8c0ab0d8, _FUN_8c0ab0d8_def\n");
