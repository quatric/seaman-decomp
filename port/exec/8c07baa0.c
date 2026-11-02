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
undefined4 FUN_8c07baa0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07baa0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar3 = 1;
  uVar2 = ar6;
  ar6_00 = ar6;
  ar7_00 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c023cd4(ar4 + 0x270,ar6,ar6,ar7));
  if (iVar1 != 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031de8(ar4,0,ar6_00,ar7_00));
    return uVar2;
  }
  if (*(int *)(unsigned)(ar4 + 0x1d4) == 1) {
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x270,ar6,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00));
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 2;
    return 0;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x134);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032ab0(ar4,uVar2,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032ab0(ar4,uVar2,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x2c)),uVar2,ar6_00,ar7_00));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x3c))); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); Vec3_sub(ar6,((undefined1 *)(fr0_ - 0x2c)),ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x3c)),ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7_00));
    ar7_00 = (*(undefined4 *)(fr0_ + 0x00000000));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0329ac(ar4,ar4 + 0x54,ar7,(*(undefined4 *)(fr0_ + 0x00000000))));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032788(ar4,ar4 + 0x54,ar7,(*(undefined4 *)(fr0_ + 0x00000000))));
      ar7_00 = (*(undefined4 *)(fr0_ + 0x00000000));
    }
    if (*(int *)(unsigned)(ar4 + 0x21c) == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x134) = 2;
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      if (((*(int *)(unsigned)(ar4 + 0x128) < 6) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), rand_range(ar4,0,100,ar7_00)), 10 < iVar1)) ||
         (*(int *)(unsigned)(ar4 + 0x124) == 0x21)) goto LAB_8c07bd04;
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 2;
    }
  }
  else {
    if (iVar1 == 1) {
LAB_8c07bd04:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), pure_virtual_stub(ar4,ar5,ar4 + 0x54,ar7_00));
      if (iVar1 != 0) {
        return 1;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      if (cVar4 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x38) = 0x41f00000;
        return 1;
      }
      *(undefined8 *)(unsigned)(ar4 + 0x38) = 0xeed01f41f00000;
      return 1;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 0;
      uVar2 = ar6;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c07f8e0(ar4,ar5,ar6,(*(undefined4 *)(fr0_ + 0x00000000))));
      if (iVar1 != 0) {
        return 1;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x270,ar6,uVar2,(*(undefined4 *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,uVar2,(*(undefined4 *)(fr0_ + 0x00000000))));
      *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 2;
      return 0;
    }
  }
  uVar2 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), pure_virtual_stub(ar4,ar5,ar6,ar7_00));
  if ((iVar1 == 0) && (*(int *)(unsigned)(ar4 + 0x40) == 0)) {
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x270,ar6,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,uVar2,ar7_00));
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 2;
    uVar3 = 0;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c07baa0\n.set _FUN_8c07baa0, _FUN_8c07baa0_def\n");
