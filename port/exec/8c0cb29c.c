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
undefined4 FUN_8c0cb29c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0cb29c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  undefined1 *ar7_00;
  
  iVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x38)),iVar1,ar6,ar7));
  while (iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x11c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),5,ar6,ar7)),
        iVar1 != 0) {
    ar6 = iVar1 + -1;
    uVar4 = (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x100))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),5,ar6,ar7));
    uVar3 = uVar4;
    (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x5c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),uVar4,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); FUN_8c02f670(uVar4,uVar3,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x48)),ar6,ar7));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c036988(uVar4,uVar3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x4c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),uVar4,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x78))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x9c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x1b0))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),1,ar6,ar7));
  ar6_00 = 2;
  (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x1b4))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),0x8c3eb334,2,ar7));
  uVar3 = 2;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0c51b8(*(undefined4 *)(unsigned)(ar5 + 0x7cc),2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0c51c4(*(undefined4 *)(unsigned)(ar5 + 0x7cc),uVar3,ar6_00,ar7));
  uVar3 = 0x8c3eb334;
  (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x94))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),0x8c3eb334,ar6_00,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x14c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),uVar3,ar6_00,ar7));
  uVar4 = 0x8c3eb334;
  (vsp = ((unsigned long)(fr0_ - 76)), s_GRAPHICS_ENV_0d819c(uVar3,0x8c3eb334,ar6_00,ar7));
  ({ unsigned long ri0_ = (unsigned long)(iVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); noop_0d8458(uVar3,uVar4,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x70))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),3,ar6_00,ar7));
  ar7_00 = ((undefined1 *)(fr0_ - 0x20));
  ar6_01 = ((undefined1 *)(fr0_ - 0x24));
  puVar2 = ((undefined1 *)(fr0_ - 0x28));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0cb1e0(0x8c436f4c,puVar2,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c019560(0x8c436f4c,puVar2,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 76)), Class_129a24_m1_019b68(0x8c436f4c,puVar2,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x28))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),puVar2,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0xb4))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),puVar2,ar6_01,ar7_00));
  uVar3 = 0x8c3eb334;
  puVar2 = ((undefined1 *)(unsigned)0x8c436a28);
  (vsp = ((unsigned long)(fr0_ - 76)), s_GRAPHICS_MESSAGE_0cef1c(((undefined1 *)(unsigned)0x8c436a28),0x8c3eb334,ar6_01,ar7_00));
  *(undefined1 *)(unsigned)(ar5 + 0xa0) = 3;
  *(undefined4 *)(unsigned)(ar4 + 0x2d160) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2d15c) = 2;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0c4e2c(puVar2,uVar3,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0c4e48(puVar2,uVar3,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_01,ar7_00));
  return 0;
}

__asm__(".globl _FUN_8c0cb29c\n.set _FUN_8c0cb29c, _FUN_8c0cb29c_def\n");
