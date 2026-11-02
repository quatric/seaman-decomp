#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c210e40_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c210e40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint a6;
  uint a7;
  int iVar1;
  uint uVar2;
  uint a5;
  
  iVar1 = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1f4) = 2;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1a0) = ar4;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1f8) = ar5;
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c2758e8) == 0x80000000) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c2758ec) = 1;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f10) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08);
    *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) * 4) = 2;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db8) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f20) = 1;
    uVar2 = *(le<uint>* )(unsigned)(ar4 + 0x10) & 1;
    a5 = *(le<uint>* )(unsigned)(ar4 + 0x10) & 2;
    a6 = *(le<uint>* )(unsigned)(ar4 + 0x10) & 4;
    a7 = *(le<uint>* )(unsigned)(ar4 + 0x10) & 8;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c211730(uVar2,a5,a6,a7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c211876(uVar2,a5,a6,a7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c211ba4(uVar2,a5,a6,a7));
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1f8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1f8) >> 1;
    (vsp = ((unsigned long)(fr0_ - 0)), sh4_dmac_202c60(0xff,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1b8),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1c4),a7));
    if (0x200000U - (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa200) < (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1f8)) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1f8) = 0x200000U - (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa200);
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203820((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1f8),((undefined1 *)(unsigned)0x8c4aa280),((undefined1 *)(unsigned)0x8c4aa284),a7));
    if (iVar1 == 0) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa004) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1f8);
      ({ unsigned long t0_ = (unsigned long)(
                   uVar2 & ~(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1b8)); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c25d7c6((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c18) >> 7,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c1c) >> 7,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c20) >> 7,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c24) >> 7); });
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db8) = 1;
    }
  }
  else {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c2758e8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2758e8) | 0x100;
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c2758e8) == 0xb00) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2758e8) = 0x80000000;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c211f40(2,((le<undefined4>* )(unsigned)0x8c2758e8),2,0x80000000));
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c210e40\n.set FUN_8c210e40, FUN_8c210e40_def\n");

}
