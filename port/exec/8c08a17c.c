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
int s_GRAPHICS_MOTHLINE_08a182_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_MOTHLINE_08a182";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  ar6_00 = 1;
  uVar1 = 10;
  ar7_00 = ar6;
  ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(ar5); unsigned long t2_ = (unsigned long)(0x8c283b30); unsigned long t3_ = (unsigned long)(0x8c283fcc); unsigned long t4_ = (unsigned long)(*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139e80))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0254d0))))
            (ar4,10,1,ar6); });
  *(unsigned *)(unsigned)(ar4 + 8) = (&(*(undefined1 *)(unsigned)0x8c12a5d0));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c098ca8(ar4 + 0x490,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c08dad4(ar4 + 0x538,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015b94(ar4 + 0x850,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015bc8(ar4 + 0x854,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fcc(ar4 + 0x858,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x900,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 0x910,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023dac(ar4 + 0x91c,uVar1,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c139fcc)) + 0x45d); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
            (ar4 + 0xc,uVar1,ar6_00,ar7_00); });
  *(int *)(unsigned)(0x308 + ar4) = ar4 + 0x490;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c034d38(ar4 + 0x2dc,ar6,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(undefined4 *)(unsigned)(0x308 + ar4),uVar1,ar6_00,ar7_00));
  *(int *)(unsigned)(0x30c + ar4) = ar4 + 0x538;
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    *(undefined4 *)(unsigned)(0x8ec + ar4 + iVar2 * 4) = 0;
    *(undefined4 *)(unsigned)(0x8f4 + ar4 + iVar2 * 4) = 0;
  }
  iVar2 = ar4 + 0x858;
  uVar1 = *(undefined4 *)(unsigned)(0xb4 + *(int *)(unsigned)(0x328 + ar4));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f532c(ar4,uVar1,iVar2,ar7_00));
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023d7c(ar4 + 0x338,uVar1,iVar2,ar7_00));
  *(undefined4 *)(unsigned)(0x8fc + ar4) = 0;
  *(undefined4 *)(unsigned)(0x840 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x844 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x848 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x84c + ar4) = 0;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_MOTHLINE_08a182\n.set _s_GRAPHICS_MOTHLINE_08a182, _s_GRAPHICS_MOTHLINE_08a182_def\n");
