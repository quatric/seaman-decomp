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
uint FUN_8c0a14d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a14d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 ar6_00;
  int ar6_01;
  undefined4 uVar5;
  undefined1 *ar7_00;
  float fVar6;
  undefined8 in_dr0 = 0;
  float fVar7;
  char cVar8;
  char cVar9;
  
  fVar6 = F32HI(in_dr0);
  cVar9 = '\0';
  cVar8 = '\0';
  iVar1 = *(int *)(unsigned)(ar4 + 0x134);
  uVar4 = ar6;
  uVar3 = ar7;
  uVar5 = ar7;
  if (iVar1 == 0) {
    ar6_00 = 100;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 120)), rand_range(ar4,0,100,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x220) = uVar2;
    *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
  }
  else {
    ar6_00 = ar6;
    if (iVar1 != 1) {
      uVar3 = ar5;
      if (iVar1 == 2) goto LAB_8c0a15f4;
      if (iVar1 != 3) {
        return 1;
      }
      goto LAB_8c0a165a;
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x220) < 0x2d) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c0a2bf4(ar4,ar5,ar6_00,uVar3));
    if (iVar1 != 0) {
      return 1;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    return 0;
  }
  if (0x59 < *(int *)(unsigned)(ar4 + 0x220)) {
    ar7 = 0;
    ar6 = 0;
    uVar3 = 0;
    (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0,0));
    *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
LAB_8c0a15f4:
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x48)),uVar3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x48)),ar5,ar7));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c03207c(ar4,uVar4,ar5,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar5,ar7));
    if (iVar1 != 1) {
      return 1;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
    return 0;
  }
  if (cVar9 == '\0') {
    fVar6 = 3.0;
  }
  else {
    fVar6 = 500.0;
  }
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c032518(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x38)),uVar4,uVar5));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,uVar4,uVar5));
  *(undefined4 *)(unsigned)(ar4 + 0x134) = 3;
LAB_8c0a165a:
  if (*(int *)(unsigned)(ar4 + 0x1d4) == 1) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length(ar4 + 0x200,uVar3,uVar4,uVar5));
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x28)),uVar3,uVar4,uVar5));
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x28)),ar4 + 0x14,uVar4,uVar5));
    if (cVar9 == '\0') {
      fVar7 = 90.0;
    }
    else {
      fVar6 = 90.0;
      fVar7 = 2.0;
    }
    if (cVar8 == '\0' && fVar7 < fVar6) {
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c03263c(ar4,((undefined1 *)(fr0_ - 0x28)),uVar4,uVar5));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x58)),ar5,uVar4,uVar5); });
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x68)),uVar4,uVar5));
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,uVar4,uVar5));
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,uVar4,uVar5));
      uVar4 = ar6;
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c032788(ar4,ar4 + 0x54,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      uVar5 = ar7;
    }
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,uVar4,uVar5));
  }
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x74)),ar6,uVar4,uVar5));
  ar7_00 = ((undefined1 *)(fr0_ - 0x74));
  ar6_01 = ar4 + 0x54;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c0a1828(ar4,ar5,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 120)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_01,ar7_00));
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c0a14d8\n.set _FUN_8c0a14d8, _FUN_8c0a14d8_def\n");
