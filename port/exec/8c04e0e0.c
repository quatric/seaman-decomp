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
undefined4 FUN_8c04e0e0_def(int ar4,undefined4 ar5,undefined1 *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c04e0e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 108; for (int i_ = 0; i_ < 108; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar6_00;
  int ar7_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 in_dr0 = 0;
  double dVar5;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 108)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 0x298);
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    *(int *)(unsigned)(ar4 + 0x298) = *(int *)(unsigned)(ar4 + 0x298) + 1;
  }
  else if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c04c314(ar4,ar5,ar6,ar7_00));
    ar6_00 = ar6;
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 0x298) = *(int *)(unsigned)(ar4 + 0x298) + 1;
    }
  }
  else if (iVar1 == 2) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,ar7_00); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c0230f0(ar7,uVar2,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x48)),ar6_00,ar7_00));
    if (cVar8 == '\0') {
      in_fr15 = F32HI(in_dr0);
    }
    (vsp = ((unsigned long)(fr0_ - 108)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7_00));
    uVar4 = (undefined4)in_dr0;
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 108)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7_00));
    if (cVar8 == '\0') {
      dVar5 = CONCAT44D(0x40400000,uVar4);
    }
    else {
      dVar5 = -7.937140056776321e-251;
    }
    if (cVar7 == '\0') {
      bVar6 = F32HI(dVar5) < in_fr15;
    }
    else {
      bVar6 = dVar5 < CONCAT44D(in_fr14,in_fr15);
    }
    if (bVar6) {
      (vsp = ((unsigned long)(fr0_ - 108)), Vec3_length(ar7,uVar2,ar6_00,ar7_00));
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar7 + 4) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar7 + 4) = D2U(dVar5) & 0xffffffff;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); Vec3_scale(ar7,((undefined1 *)(unsigned)0x8c13658c),ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7_00); });
      ar6_00 = ((undefined1 *)(fr0_ - 0x68));
      (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c057b6c(ar4,ar5,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 108)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 108)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7_00));
      *(int *)(unsigned)(ar4 + 0x298) = *(int *)(unsigned)(ar4 + 0x298) + 1;
    }
    else {
      uVar3 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x298) = 0;
    }
  }
  else if ((iVar1 == 3) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c057e58(ar4,uVar2,ar6_00,ar7_00)), iVar1 == 0)) {
    *(undefined4 *)(unsigned)(ar4 + 0x298) = 2;
  }
  (vsp = ((unsigned long)(fr0_ - 108)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7_00));
  return uVar3;
}

__asm__(".globl _FUN_8c04e0e0\n.set _FUN_8c04e0e0, _FUN_8c04e0e0_def\n");
