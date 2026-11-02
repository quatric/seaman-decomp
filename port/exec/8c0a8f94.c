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
uint FUN_8c0a8f94_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a8f94";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 352; for (int i_ = 0; i_ < 352; i_++) z_[i_] = 0; }
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *ar6_00;
  uint uVar5;
  float fVar6;
  double in_dr0 = 0;
  undefined4 uVar8;
  double dVar7;
  double in_dr14 = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar5 = 1;
  uVar4 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 352)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x21b8) == 0) {
    switch(*(undefined4 *)(unsigned)(ar4 + 0x2198)) {
    case 1:
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c023d7c((*(undefined4 *)(fr0_ + 0x00000000)),uVar4,ar6_00,ar7));
      break;
    case 2:
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c023d7c((*(undefined4 *)(fr0_ + 0x00000000)),uVar4,ar6_00,ar7));
      break;
    case 3:
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c023d7c((*(undefined4 *)(fr0_ + 0x00000000)),uVar4,ar6_00,ar7));
      break;
    case 4:
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c023d7c((*(undefined4 *)(fr0_ + 0x00000000)),uVar4,ar6_00,ar7));
    }
    *(int *)(unsigned)(ar4 + 0x21b8) = *(int *)(unsigned)(ar4 + 0x21b8) + 1;
  }
  else if (*(int *)(unsigned)(ar4 + 0x21b8) != 1) goto LAB_8c0a951a;
  (vsp = ((unsigned long)(fr0_ - 352)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),ar4 + 0x14,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 352)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x38)),ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 352)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x48)),ar6,ar6_00,ar7));
  ar6_00 = ((undefined1 *)(fr0_ - 0x48));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c0a72b4(ar4,((undefined1 *)(fr0_ - 0x38)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7));
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
  if (iVar3 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x21b8) = 0;
  }
  uVar5 = (uint)(iVar3 != 0);
  switch(*(undefined4 *)(unsigned)(ar4 + 0x2198)) {
  case 1:
  case 2:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023138(((undefined1 *)(fr0_ - 0x28)),uVar4,ar6_00,ar7); });
    uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc4))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023138(ar4 + 0x14,uVar4,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xb4)),((undefined1 *)(fr0_ - 0xc4)),ar6_00,ar7));
    if (cVar10 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),uVar8);
    }
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,ar6_00,ar7));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd4))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023138(ar4 + 0x14,uVar4,ar6_00,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe4))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023138(((undefined1 *)(fr0_ - 0x28)),uVar4,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xf0)),uVar4,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x100))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0xe4)),((undefined1 *)(fr0_ - 0xf0)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xd4)),((undefined1 *)(fr0_ - 0x100)),ar6_00,ar7));
    if (cVar10 == '\0') {
      in_dr0 = CONCAT44D(0x42b40000,uVar8);
    }
    else {
      in_dr0 = 3.65536181321395e-312;
    }
    bVar1 = cVar9 != '\0';
    fVar6 = F32LO(in_dr0);
    uVar2 = (ulonglong)in_dr0 >> 0x20;
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), object_dtor_delete(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd4)),0xffffffff,ar6_00,ar7));
    if (bVar1 || fVar6 <= (float)uVar2) {
      if (cVar10 == '\0') {
        in_dr0 = CONCAT44D(0xbf800000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = 1.0192512720885868e-72;
      }
      if (cVar9 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   F32LO(in_dr14) * F32HI(in_dr0));
      }
      else {
        in_dr14 = in_dr14 * in_dr0;
      }
    }
    break;
  case 3:
  case 4:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023180(((undefined1 *)(fr0_ - 0x28)),uVar4,ar6_00,ar7); });
    uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023180(ar4 + 0x14,uVar4,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x68)),ar6_00,ar7));
    if (cVar10 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),uVar8);
    }
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023180(ar4 + 0x14,uVar4,ar6_00,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023180(((undefined1 *)(fr0_ - 0x28)),uVar4,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x94)),uVar4,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x88)),((undefined1 *)(fr0_ - 0x94)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(fr0_ - 0xa4)),ar6_00,ar7));
    if (cVar10 == '\0') {
      in_dr0 = CONCAT44D(0x42b40000,uVar8);
    }
    else {
      in_dr0 = 5.607597940902e-312;
    }
    bVar1 = cVar9 != '\0';
    fVar6 = F32LO(in_dr0);
    uVar2 = (ulonglong)in_dr0 >> 0x20;
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), object_dtor_delete(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6_00,ar7));
    if (bVar1 || fVar6 <= (float)uVar2) {
      if (cVar10 == '\0') {
        in_dr0 = CONCAT44D(0xbf800000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = 1.0192410166384276e-72;
      }
      if (cVar9 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   F32LO(in_dr14) * F32HI(in_dr0));
      }
      else {
        in_dr14 = in_dr14 * in_dr0;
      }
    }
    break;
  case 5:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x110))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x28)),uVar4,ar6_00,ar7); });
    uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x120))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x110)),((undefined1 *)(fr0_ - 0x120)),ar6_00,ar7));
    if (cVar10 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),uVar8);
    }
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x120)),0xffffffff,ar6_00,ar7));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x110)),0xffffffff,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x130))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x140))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x28)),uVar4,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x14c)),uVar4,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x15c))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x140)),((undefined1 *)(fr0_ - 0x14c)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x130)),((undefined1 *)(fr0_ - 0x15c)),ar6_00,ar7));
    if (cVar10 == '\0') {
      in_dr0 = CONCAT44D(0x42b40000,uVar8);
    }
    else {
      in_dr0 = -7.961142730794258e-251;
    }
    bVar1 = cVar9 != '\0';
    fVar6 = F32LO(in_dr0);
    uVar2 = (ulonglong)in_dr0 >> 0x20;
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x15c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), object_dtor_delete(((undefined1 *)(fr0_ - 0x14c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x140)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x130)),0xffffffff,ar6_00,ar7));
    if (bVar1 || fVar6 <= (float)uVar2) {
      if (cVar10 == '\0') {
        in_dr0 = CONCAT44D(0xbf800000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = 1.82507511546215e-310;
      }
      if (cVar9 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   F32LO(in_dr14) * F32HI(in_dr0));
      }
      else {
        in_dr14 = in_dr14 * in_dr0;
      }
    }
  }
  if ((*(int *)(unsigned)(ar4 + 0x2198) == 4) || (*(int *)(unsigned)(ar4 + 0x2198) == 2)) {
    if (cVar10 == '\0') {
      in_dr0 = CONCAT44D(0xbf800000,SUB84(in_dr0,0));
    }
    else {
      in_dr0 = 1.82507511546215e-310;
    }
    if (cVar9 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 F32LO(in_dr14) * F32HI(in_dr0));
    }
    else {
      in_dr14 = in_dr14 * in_dr0;
    }
  }
  if (cVar10 == '\0') {
    dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x21ac),SUB84(in_dr0,0));
  }
  else {
    dVar7 = *(double *)(unsigned)(ar4 + 0x21ac);
  }
  if (cVar9 == '\0') {
    dVar7 = CONCAT44D(F32HI(dVar7) + F32LO(in_dr14),SUB84(dVar7,0));
  }
  else {
    dVar7 = dVar7 + in_dr14;
  }
  if (cVar10 == '\0') {
    *(int *)(unsigned)(ar4 + 0x21ac) = (int)(D2U(dVar7) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x21ac) = dVar7;
  }
LAB_8c0a951a:
  (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
  return uVar5;
}

__asm__(".globl _FUN_8c0a8f94\n.set _FUN_8c0a8f94, _FUN_8c0a8f94_def\n");
