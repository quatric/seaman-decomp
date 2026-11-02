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
undefined4
FUN_8c0332b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0332b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  float * s4 = (float *)(unsigned long)*(unsigned *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 108; for (int i_ = 0; i_ < 108; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  double in_dr0 = 0;
  float fVar5;
  int iVar6;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double in_dr2 = 0;
  undefined8 in_xd0 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 108)), Vec3_set_zero(&(*(float *)(fr0_ - 0x18)),ar5,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); Vec3_sub(ar6,ar5,ar6_00,ar7_00); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 108)), Vec3_length(((undefined1 *)(fr0_ - 0x38)),ar5,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 108)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x28)),uVar1,ar6_00,ar7_00));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 108)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c0230f0(ar7,uVar1,ar6_00,ar7_00); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x28)),uVar1,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7_00));
  (*(float *)(fr0_ - 0x14)) = SUB84(in_dr0,0);
  fVar5 = F32HI(in_dr0);
  if (cVar9 == '\0') {
    (*(float *)(fr0_ - 0x14)) = fVar5;
    fVar5 = (*(float *)(fr0_ - 0x10));
  }
  (*(float *)(fr0_ - 0x10)) = fVar5;
  (vsp = ((unsigned long)(fr0_ - 108)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 108)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7_00));
  ar5_00 = ((undefined1 *)(fr0_ - 0x28));
  (*(int *)(fr0_ - 0x64)) = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c023334(ar7,ar5_00,ar6_00,ar7_00));
  if ((*(int *)(fr0_ - 0x64)) == 4) {
    if (cVar9 == '\0') {
      in_dr0 = CONCAT44D(0xbf800000,(*(float *)(fr0_ - 0x14)));
    }
    else {
      in_xd0 = CONCAT44((*(float *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
      in_dr0 = -7.941325842067545e-251;
    }
    if (cVar8 == '\0') {
      fVar5 = F32HI(in_dr0);
      in_dr0 = CONCAT44D(fVar5,F32LO(in_dr0) * fVar5);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (cVar9 == '\0') {
      (*(float *)(fr0_ - 0x14)) = SUB84(in_dr0,0);
    }
    else {
      (*(float *)(fr0_ - 0x14)) = (float)in_xd0;
      (*(float *)(fr0_ - 0x10)) = F32HI(in_xd0);
    }
  }
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0231c8(((undefined1 *)(fr0_ - 0x28)),ar5_00,ar6_00,ar7_00));
  iVar6 = (int)((ulonglong)in_dr0 >> 0x20);
  (*(int *)(fr0_ - 0x68)) = iVar6;
  if (cVar9 != '\0') {
    (*(int *)(fr0_ - 0x68)) = SUB84(in_dr0,0);
    (*(int *)(fr0_ - 0x64)) = iVar6;
  }
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0231c8(ar7,ar5_00,ar6_00,ar7_00));
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar9 == '\0') {
    in_dr0 = CONCAT44D(uVar1,(*(int *)(fr0_ - 0x68)));
  }
  else {
    in_xd0 = CONCAT44((*(int *)(fr0_ - 0x64)),uVar1);
  }
  if (cVar8 == '\0') {
    (*(float *)(fr0_ - 0x18)) = F32LO(in_dr0) - F32HI(in_dr0);
  }
  else {
    (*(float *)(fr0_ - 0x18)) = SUB84(in_dr0 - in_dr0,0);
  }
  if (cVar9 == '\0') {
    uVar2 = CONCAT44(*s4,(*(float *)(fr0_ - 0x18)));
  }
  else {
    (*(float *)(fr0_ - 0x18)) = (float)in_xd0;
    (*(float *)(fr0_ - 0x14)) = F32HI(in_xd0);
    uVar2 = *(undefined8 *)(unsigned)s4;
  }
  if (cVar8 != '\0' || (float)uVar2 <= F32HI(uVar2)) {
    if (cVar9 == '\0') {
      in_dr2 = CONCAT44D((*(float *)(fr0_ - 0x18)),SUB84(in_dr2,0));
      dVar4 = CONCAT44D(0xbf800000,*s4);
    }
    else {
      in_dr2 = CONCAT44D((*(float *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
      in_xd0 = *(undefined8 *)(unsigned)s4;
      dVar4 = -7.941325842067545e-251;
    }
    if (cVar8 == '\0') {
      bVar7 = F32HI(in_dr2) <
              F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      bVar7 = in_dr2 < dVar4 * dVar4;
    }
    if (bVar7) {
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(0xbf800000,*s4);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)s4;
        dVar4 = -7.941325842067545e-251;
      }
      if (cVar8 == '\0') {
        (*(float *)(fr0_ - 0x18)) = F32LO(dVar4) * F32HI(dVar4);
      }
      else {
        (*(float *)(fr0_ - 0x18)) = SUB84(dVar4 * dVar4,0);
      }
      if (cVar9 != '\0') {
        (*(float *)(fr0_ - 0x18)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x14)) = F32HI(in_xd0);
      }
    }
  }
  else if (cVar9 == '\0') {
    (*(float *)(fr0_ - 0x18)) = *s4;
  }
  else {
    (*(float *)(fr0_ - 0x18)) = (float)*(undefined8 *)(unsigned)s4;
    (*(float *)(fr0_ - 0x14)) = (float)((ulonglong)*(undefined8 *)(unsigned)s4 >> 0x20);
  }
  if (cVar9 == '\0') {
    uVar2 = CONCAT44(s4[1],(*(float *)(fr0_ - 0x14)));
  }
  else {
    in_xd0 = CONCAT44((*(float *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
    uVar2 = *(undefined8 *)(unsigned)(s4 + 1);
  }
  if (cVar8 != '\0' || (float)uVar2 <= F32HI(uVar2)) {
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D((*(float *)(fr0_ - 0x14)),SUB84(in_dr2,0));
      dVar3 = CONCAT44D(0xbf800000,s4[1]);
    }
    else {
      dVar4 = CONCAT44D((*(float *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
      in_xd0 = *(undefined8 *)(unsigned)(s4 + 1);
      dVar3 = -7.941325842067545e-251;
    }
    if (cVar8 == '\0') {
      bVar7 = F32HI(dVar4) < F32LO(dVar3) * F32HI(dVar3)
      ;
    }
    else {
      bVar7 = dVar4 < dVar3 * dVar3;
    }
    if (bVar7) {
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(0xbf800000,s4[1]);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(s4 + 1);
        dVar4 = -7.941325842067545e-251;
      }
      if (cVar8 == '\0') {
        (*(float *)(fr0_ - 0x14)) = F32LO(dVar4) * F32HI(dVar4);
      }
      else {
        (*(float *)(fr0_ - 0x14)) = SUB84(dVar4 * dVar4,0);
      }
      if (cVar9 != '\0') {
        (*(float *)(fr0_ - 0x14)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x10)) = F32HI(in_xd0);
      }
    }
  }
  else if (cVar9 == '\0') {
    (*(float *)(fr0_ - 0x14)) = s4[1];
  }
  else {
    uVar2 = *(undefined8 *)(unsigned)(s4 + 1);
    (*(float *)(fr0_ - 0x14)) = (float)uVar2;
    (*(float *)(fr0_ - 0x10)) = F32HI(uVar2);
  }
  (vsp = ((unsigned long)(fr0_ - 108)), vec3_copy_8c02b5fc(s0,&(*(float *)(fr0_ - 0x18)),ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 108)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 108)), object_dtor_delete(&(*(float *)(fr0_ - 0x18)),0xffffffff,ar6_00,ar7_00));
  return 0;
}

__asm__(".globl _FUN_8c0332b4\n.set _FUN_8c0332b4, _FUN_8c0332b4_def\n");
