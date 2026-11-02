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
undefined4 FUN_8c08e9fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08e9fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 uVar3;
  float fVar4;
  undefined8 in_dr0 = 0;
  float fVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 52)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c08ea30:
    uVar2 = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c034148(ar4 + 0xb0,0,ar6_00,ar7));
    uVar3 = (undefined4)in_dr0;
    if ((iVar1 != 1) && (iVar1 != 2)) {
      (vsp = ((unsigned long)(fr0_ - 52)), object_dtor_delete(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7));
      return 1;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 52)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 52)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 52)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x30)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 52)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c031b68(ar4,0x8c2846d0,ar6_00,ar7));
    in_dr0 = CONCAT44(0x3f800000,uVar3);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x48) = 0x3f800000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x48) = in_dr0;
    }
    uVar2 = ar5;
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c031bb4(ar4,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c08eb0e;
    goto LAB_8c08ea30;
  }
  fVar4 = F32HI(in_dr0);
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c03f3ac(ar4 + 0xb0,uVar2,ar6_00,ar7));
  ar6_00 = ar5;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c097ba4(ar4,ar6,ar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7));
  if (cVar7 == '\0') {
    fVar5 = 100.0;
  }
  else {
    fVar4 = 100.0;
    fVar5 = 7.1186e-43;
  }
  if (cVar6 == '\0' && fVar4 < fVar5) {
    *(byte *)(unsigned)(ar4 + 0x1fc) = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfb;
  }
LAB_8c08eb0e:
  (vsp = ((unsigned long)(fr0_ - 52)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), object_dtor_delete(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c08e9fc\n.set _FUN_8c08e9fc, _FUN_8c08e9fc_def\n");
