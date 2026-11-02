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
int s_GRAPHICS_HIGYOLINE_0851fa_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_HIGYOLINE_0851fa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  ar6_00 = 1;
  uVar1 = 3;
  ar7_00 = ar6;
  ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(ar5); unsigned long t2_ = (unsigned long)(0x8c280fb4); unsigned long t3_ = (unsigned long)(0x8c2818e0); unsigned long t4_ = (unsigned long)(*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c137b2c))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0254d0))))
            (ar4,3,1,ar6); });
  *(unsigned *)(unsigned)(ar4 + 8) = (&(*(undefined1 *)(unsigned)0x8c12a434));
  (vsp = ((unsigned long)(fr0_ - 0)), s_HIGYOLINE_102eee(ar4 + 0x490,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c06e4ec(ar4 + 0xd20,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fcc(ar4 + 0x1014,uVar1,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c138590)) + 0x182b); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
            (ar4 + 0xc,uVar1,ar6_00,ar7_00); });
  *(int *)(unsigned)(0x308 + ar4) = ar4 + 0x490;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c034d38(ar4 + 0x2dc,ar6,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(undefined4 *)(unsigned)(0x308 + ar4),uVar1,ar6_00,ar7_00));
  *(int *)(unsigned)(0x30c + ar4) = ar4 + 0xd20;
  *(undefined1 *)(unsigned)(0x10d8 + ar4) = 0;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    *(undefined4 *)(unsigned)(0x10a8 + ar4 + iVar2 * 4) = 0;
    *(undefined4 *)(unsigned)(0x10c0 + ar4 + iVar2 * 4) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0f532c))))
            (ar4,*(undefined4 *)(unsigned)(0xb4 + *(int *)(unsigned)(0x328 + ar4)),ar4 + 0x1014,
             ar7_00));
  *(undefined4 *)(unsigned)(0x3d8 + ar4) = *(undefined4 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(0x328 + ar4)) + 0x40);
  *(undefined4 *)(unsigned)(0x3dc + ar4) = *(undefined4 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(0x328 + ar4)) + 0x40);
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x10;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_HIGYOLINE_0851fa\n.set _s_GRAPHICS_HIGYOLINE_0851fa, _s_GRAPHICS_HIGYOLINE_0851fa_def\n");
