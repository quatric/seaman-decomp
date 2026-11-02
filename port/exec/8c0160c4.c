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
undefined4 s_C3DRenderPly_SetMem_0160d0_def(int ar4,int ar5,int ar6,short *ar7)

{
  ring[rp++ & 255] = "s_C3DRenderPly_SetMem_0160d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  int s4 = *(int *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int ar5_00;
  int ar5_01;
  undefined4 ar7_00;
  uint uVar1;
  
  *(undefined4 *)(unsigned)(ar4 + 0x10) = 4;
  for (uVar1 = 0; uVar1 < *(uint *)(unsigned)(ar4 + 0x10); uVar1 = uVar1 + 1) {
    *(undefined4 *)(unsigned)(uVar1 * 0xc + *(int *)(unsigned)(ar4 + 4)) = *(undefined4 *)(unsigned)(ar5 + uVar1 * 0x10);
    *(undefined4 *)(unsigned)(uVar1 * 0xc + *(int *)(unsigned)(ar4 + 4) + 4) = *(undefined4 *)(unsigned)(ar5 + uVar1 * 0x10 + 4);
    *(undefined4 *)(unsigned)(uVar1 * 0xc + *(int *)(unsigned)(ar4 + 4) + 8) = *(undefined4 *)(unsigned)(ar5 + uVar1 * 0x10 + 8);
    *(undefined4 *)(unsigned)(uVar1 * 4 + *(int *)(unsigned)(ar4 + 8)) = *(undefined4 *)(unsigned)(uVar1 * 4 + ar6);
  }
  *(undefined4 *)(unsigned)(ar4 + 0x90) = 1;
  *((undefined2 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) = 0;
  *(undefined2 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 2) = 0;
  *(undefined2 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 4) = 0;
  *(undefined2 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 6) = 0xff;
  *(undefined2 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 8) = 0xff;
  *(undefined2 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 10) = 0;
  *(undefined2 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 0xc) = 0xff;
  *(undefined2 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 0xe) = 0xff;
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1fb4b8((int)*ar7 * (int)ar7[1] * s4,ar5,ar6,ar7));
  if (ar5_00 == 0) {
    (vsp = ((unsigned long)(fr0_ - 76)), report_error_message("Lack of memory!","C3DRenderPly::SetMem()",1,2));
  }
  ({ unsigned long t0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x4c))); unsigned long ri0_ = (unsigned long)((int)ar7[1]); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vin0 = (unsigned)ri0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); FUN_8c257188(ar4 + 0xa0,ar5_00,0xb01,(int)*ar7); });
  ar7_00 = 0x40800000;
  ar5_01 = ar4 + 0xa0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c257196(*(undefined4 *)(unsigned)(ar4 + 0x8c),ar5_01,s0,0x40800000); });
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c25b3a2(ar4 + 0x8c,ar5_01,s0,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c25b100((int)*ar7,ar5_01,s0,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1fb586(ar5_00,ar5_01,s0,ar7_00));
  *(uint *)(unsigned)(ar4 + 0xcc) = *(uint *)(unsigned)(ar4 + 0xcc) | 0x80000000;
  *(uint *)(unsigned)(ar4 + 0xcc) = *(uint *)(unsigned)(ar4 + 0xcc) | 0x20;
  return 1;
}

__asm__(".globl _s_C3DRenderPly_SetMem_0160d0\n.set _s_C3DRenderPly_SetMem_0160d0, _s_C3DRenderPly_SetMem_0160d0_def\n");
