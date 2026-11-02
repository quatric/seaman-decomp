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
undefined4 FUN_8c07c0b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07c0b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int iVar2;
  int ar6_00;
  undefined8 in_dr0 = 0;
  char cVar3;
  
  cVar3 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = 1;
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if (iVar2 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    in_dr0 = CONCAT44(0x41700000,(int)in_dr0);
    *(undefined4 *)(unsigned)(ar4 + 0x38) = 0x41700000;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 == 2) {
      (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
      ar6_00 = ar4 + 0x54;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 104)), pure_virtual_stub(ar4,ar5,ar6_00,ar7));
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = *(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c;
      (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c031b68(ar4,iVar2,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c033530(ar4,iVar2,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_assign(ar4 + 0x54,(int)&(*(undefined8 *)(fr0_ - 0x64)) + 4,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x64)) + 4,0xffffffff,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      return 1;
    }
    if (iVar2 != 3) {
      return 1;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 104)), pure_virtual_stub(ar4,ar5,ar4 + 0x54,ar7));
    if (iVar2 != 0) {
      return 1;
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 0;
    return 0;
  }
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
  uVar1 = in_dr0;
  if (cVar3 == '\0') {
    (*(undefined8 *)(fr0_ - 0x64)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x64))+4)),(int)((ulonglong)in_dr0 >> 0x20));
    uVar1 = (*(undefined8 *)(fr0_ - 0x64));
  }
  (*(undefined8 *)(fr0_ - 0x64)) = uVar1;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 104)), pure_virtual_stub(ar4,ar5,ar6,ar7));
  if (iVar2 == 0) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x20))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); Vec3_scale(ar4 + 0x14,((undefined1 *)(unsigned)0x8c1379ac),ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x20)),ar4 + 0x48,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(unsigned)0x8c1379b0),ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x40)),ar5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 104)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x50)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c07c0b8\n.set _FUN_8c07c0b8, _FUN_8c07c0b8_def\n");
