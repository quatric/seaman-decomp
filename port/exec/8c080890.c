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
uint FUN_8c080890_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c080890";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 276; for (int i_ = 0; i_ < 276; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  uint uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar3 = 1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 276)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x10c))))(ar6,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x20)),uVar1,ar6,ar7));
  if (cVar4 == '\0') {
    (*(undefined8 *)(fr0_ - 0x1c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1c))+4)),0x44570000);
  }
  else {
    (*(undefined8 *)(fr0_ - 0x1c)) = 0x14c44570000;
  }
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x60)),uVar1,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 276)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 276)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x60)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x70)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x80)),uVar1,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x90))); *(unsigned *)((((unsigned long)(fr0_ - 276)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 276)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x80)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x40)),((undefined1 *)(fr0_ - 0x90)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xa0)),uVar1,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 276)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 276)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0xa0)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x50)),((undefined1 *)(fr0_ - 0xb0)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6,ar7));
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if (iVar2 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 276)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6,ar7));
    if (iVar2 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      ar6 = (int *)(unsigned)0x5;
      ar5_00 = 3;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 276)), rand_range(ar4,3,5,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x294) = uVar1;
      (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c032ab0(ar4,ar5_00,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c032ab0(ar4,ar5_00,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c032ab0(ar4,ar5_00,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xc0)),ar5_00,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd0))); *(unsigned *)((((unsigned long)(fr0_ - 276)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 276)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0xc0)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0xd0)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar6,ar7));
    }
  }
  else if (iVar2 == 1) {
    ar6 = (int *)(unsigned)(ar4 + 0x54);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 276)), pure_virtual_stub(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xe0)),ar5,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf0))); *(unsigned *)((((unsigned long)(fr0_ - 276)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 276)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x40)),((undefined1 *)(fr0_ - 0xe0)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0xf0)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,ar6,ar7));
    }
  }
  else if (iVar2 == 2) {
    ar6 = (int *)(unsigned)(ar4 + 0x54);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 276)), pure_virtual_stub(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x100)),ar5,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x110))); *(unsigned *)((((unsigned long)(fr0_ - 276)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 276)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x50)),((undefined1 *)(fr0_ - 0x100)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x110)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x110)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,ar6,ar7));
    }
  }
  else if (iVar2 == 3) {
    ar6 = (int *)(unsigned)(ar4 + 0x54);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 276)), pure_virtual_stub(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      iVar2 = *(int *)(unsigned)(ar4 + 0x294) + -1;
      *(int *)(unsigned)(ar4 + 0x294) = iVar2;
      uVar3 = (uint)(0 < iVar2);
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c080890\n.set _FUN_8c080890, _FUN_8c080890_def\n");
