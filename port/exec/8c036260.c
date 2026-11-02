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
int s_GRAPHICS_FROGMANLINE_036266_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_FROGMANLINE_036266";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar2;
  undefined4 extraout_fr1 = 0;
  char cVar3;
  
  cVar3 = '\0';
  ar6_00 = 1;
  uVar1 = 5;
  ar7_00 = ar6;
  ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(ar5); unsigned long t2_ = (unsigned long)(0x8c27dfd4); unsigned long t3_ = (unsigned long)(((undefined1 *)(unsigned)0x8c27e594)); unsigned long t4_ = (unsigned long)((*(undefined4 *)(unsigned)(unsigned)0x8c13368c)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c0254d0(ar4,5,1,ar6); });
  *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c129ea0);
  (vsp = ((unsigned long)(fr0_ - 0)), s_FROGMANLINE_05d646(ar4 + 0x490,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03a5a4(ar4 + 0xd2c,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fcc(ar4 + 0x1088,uVar1,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c135e05)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c014334(ar4 + 0xc,uVar1,ar6_00,ar7_00); });
  *(int *)(unsigned)(ar4 + 0x308) = ar4 + 0x490;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c034d38(ar4 + 0x2dc,ar6,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(undefined4 *)(unsigned)(ar4 + 0x308),uVar1,ar6_00,ar7_00));
  *(int *)(unsigned)(ar4 + 0x30c) = ar4 + 0xd2c;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    *(undefined4 *)(unsigned)(ar4 + iVar2 * 4 + 0x111c) = 0;
    *(undefined4 *)(unsigned)(ar4 + iVar2 * 4 + 0x1134) = 0;
  }
  *(undefined1 *)(unsigned)(ar4 + 0x114c) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f532c(ar4,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xb4),ar4 + 0x1088,ar7_00));
  *(undefined4 *)(unsigned)(ar4 + 0x3d8) = *(undefined4 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x328)) + 0x40);
  *(undefined4 *)(unsigned)(ar4 + 0x3dc) = *(undefined4 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x328)) + 0x40);
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x468) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x468) = CONCAT44(0x3f800000,extraout_fr1);
  }
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_FROGMANLINE_036266\n.set _s_GRAPHICS_FROGMANLINE_036266, _s_GRAPHICS_FROGMANLINE_036266_def\n");
