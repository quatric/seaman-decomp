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
undefined4 FUN_8c07bec4_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07bec4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  ar5_00 = ar6;
  ar6_00 = ar6;
  uVar2 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c023cd4(ar4 + 0x270,ar6,ar6,ar7));
  if (iVar1 != 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c031de8(ar4,0x13,ar6_00,uVar2));
    return uVar2;
  }
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x28)),ar5_00,ar6_00,uVar2));
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c032ab0(ar4,ar5_00,ar6_00,uVar2));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c032ab0(ar4,ar5_00,ar6_00,uVar2));
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x38)),ar5_00,ar6_00,uVar2));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); Vec3_sub(ar6,((undefined1 *)(fr0_ - 0x38)),ar6_00,uVar2); });
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x48)),ar6_00,uVar2));
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,uVar2));
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,uVar2));
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(0x43340000,*(undefined4 *)(unsigned)(ar4 + 0x7c));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x7c);
      dVar5 = -7.933010938730413e-251;
    }
    if (cVar6 == '\0') {
      fVar4 = F32LO(dVar5) + F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 == '\0') {
      *(float *)(unsigned)(ar4 + 0x58) = fVar4;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x58) = in_xd0;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      ar6_00 = ((undefined1 *)(fr0_ - 0x28));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0755e0(ar4,ar5,ar6_00,ar7));
      uVar2 = ar7;
      if ((iVar1 == 0) && (*(int *)(unsigned)(ar4 + 0x40) == 0)) {
        (vsp = ((unsigned long)(fr0_ - 76)), Vec3_assign(ar4 + 0x270,ar6,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 2;
        uVar3 = 0;
        uVar2 = ar7;
      }
    }
    goto LAB_8c07c05e;
  }
  ar6_00 = (undefined1 *)(unsigned)(ar4 + 0x54);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0755e0(ar4,ar5,ar6_00,ar7));
  uVar2 = ar7;
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
LAB_8c07c05e:
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,uVar2));
  return uVar3;
}

__asm__(".globl _FUN_8c07bec4\n.set _FUN_8c07bec4, _FUN_8c07bec4_def\n");
