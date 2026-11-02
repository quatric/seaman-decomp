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
undefined4 FUN_8c083780_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c083780";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar6_00;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fr1 = 0;
  char cVar4;
  
  cVar4 = '\0';
  uVar3 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 0x134);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
    if (iVar1 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 1;
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x18)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_assign(ar4 + 0x280,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 104)), object_dtor_delete(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
      if (cVar4 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)in_fr1;
      }
    }
  }
  else if (iVar1 == 1) {
    *(float *)(unsigned)(ar4 + 0x28) = *(float *)(unsigned)(ar4 + 0x28) + 0.5;
    if (10.0 < *(float *)(unsigned)(ar4 + 0x28)) {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x41200000;
    }
    (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x280,ar6,ar7));
    ar6_00 = 1;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x38)),1,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 1;
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x44)),uVar2,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x44)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_assign(ar4 + 0x280,((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 104)), object_dtor_delete(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
    }
  }
  else if (iVar1 == 2) {
    *(float *)(unsigned)(ar4 + 0x28) = *(float *)(unsigned)(ar4 + 0x28) + 0.5;
    if (10.0 < *(float *)(unsigned)(ar4 + 0x28)) {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x41200000;
    }
    (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x64)),ar4 + 0x280,ar6,ar7));
    uVar2 = 1;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x64)),1,ar7));
    (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,uVar2,ar7));
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c083780\n.set _FUN_8c083780, _FUN_8c083780_def\n");
