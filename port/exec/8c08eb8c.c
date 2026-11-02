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
undefined4 FUN_8c08eb8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08eb8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 248; for (int i_ = 0; i_ < 248; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int ar5_00;
  undefined4 ar5_01;
  undefined4 uVar3;
  undefined4 in_fr1 = 0;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar3 = 1;
  (vsp = ((unsigned long)(fr0_ - 248)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  if (cVar6 != '\0') {
    in_fr1 = (undefined4)*(undefined8 *)(unsigned)(ar4 + 700);
  }
  (vsp = ((unsigned long)(fr0_ - 248)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x34)),ar6,ar7); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(fr0_ - 0x44)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 248)), object_dtor_delete(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  if (iVar1 == 3) {
    iVar1 = 8;
  }
  else {
    iVar1 = 9;
  }
  ar5_00 = iVar1;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c034148(ar4 + 0xb0,iVar1,ar6,ar7));
  if ((iVar2 == 1) || (iVar2 == 2)) {
    (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 248)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x54)),ar5_00,ar6,ar7));
    if (cVar6 == '\0') {
      uVar4 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 700),in_fr1);
    }
    else {
      uVar4 = *(ulonglong *)(unsigned)(ar4 + 700);
    }
    (vsp = ((unsigned long)(fr0_ - 248)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x60)),ar5_00,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x60)),ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c022dac(ar4 + 0x14,((undefined1 *)(fr0_ - 0x70)),ar6,ar7));
    if (cVar6 == '\0') {
      uVar4 = uVar4 >> 0x20;
    }
    (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 248)), object_dtor_delete(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6,ar7));
    ar5_01 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7));
    if (cVar5 != '\0' || (float)uVar4 <= 1.0) {
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xd8)),ar5_01,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xe4)),ar5_01,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf4))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0xd8)),((undefined1 *)(fr0_ - 0xe4)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xf4)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), object_dtor_delete(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6,ar7));
      uVar3 = 0;
    }
    else if (iVar1 == 8) {
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x80)),ar5_01,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x8c)),ar5_01,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x80)),((undefined1 *)(fr0_ - 0x8c)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x9c)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), object_dtor_delete(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xac)),ar5_01,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xb8)),ar5_01,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0xac)),((undefined1 *)(fr0_ - 0xb8)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xc8)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), object_dtor_delete(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 248)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7));
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c08eb8c\n.set _FUN_8c08eb8c, _FUN_8c08eb8c_def\n");
