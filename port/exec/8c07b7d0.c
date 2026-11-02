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
undefined4 FUN_8c07b7d0_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07b7d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  undefined4 in_fr1 = 0;
  char cVar4;
  
  cVar4 = '\0';
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  uVar2 = ar5;
  if (iVar1 == 0) {
    ar7_00 = 0;
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 52)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,4,uVar3,ar7_00));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 52)), rand_range(ar4,0,uVar3,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 52)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,uVar3,ar7_00));
    if (cVar4 != '\0') {
      in_fr1 = 0x41700000;
    }
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c03263c(ar4,ar6,uVar3,ar7_00));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 52)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 52)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x20)),ar5,uVar3,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 52)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x30)),uVar3,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 52)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,uVar3,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 52)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,uVar3,ar7_00));
    if (cVar4 != '\0') {
      in_fr1 = 0x40400000;
    }
    iVar1 = ar4 + 0x54;
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c032788(ar4,iVar1,ar7,s0));
    if (cVar4 == '\0') {
      uVar3 = 0x40000000;
      *(undefined4 *)(unsigned)(ar4 + 0x34) = 0x40000000;
    }
    else {
      in_fr1 = 0x40000000;
      uVar3 = 0x42700000;
      *(undefined8 *)(unsigned)(ar4 + 0x34) = 0x4270000040000000;
    }
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c032ab0(ar4,iVar1,ar7,s0));
    if (cVar4 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x38) = uVar3;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x38) = CONCAT44(uVar3,in_fr1);
    }
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c032ab0(ar4,iVar1,ar7,s0));
    ar6 = ar4 + 0x54;
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c031bb4(ar4,ar5,ar6,s0));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else {
    s0 = ar7;
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c034148(ar4 + 0xb0,0,ar5,ar7));
        if (iVar1 < 1) {
          return 1;
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        return 1;
      }
      if (iVar1 != 3) {
        return 1;
      }
      iVar1 = ar4 + 0x54;
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c031764(ar4,iVar1,ar5,ar7));
      if (*(int *)(unsigned)(ar4 + 0x40) != 0) {
        return 1;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar5,ar7));
      if (iVar1 != 1) {
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar5,ar7));
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      return 0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c03f3ac(ar4 + 0xb0,uVar2,ar6,s0));
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c031764(ar4,ar4 + 0x54,ar5,s0));
  if (*(int *)(unsigned)(ar4 + 0x40) == 4) {
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c07b7d0\n.set _FUN_8c07b7d0, _FUN_8c07b7d0_def\n");
