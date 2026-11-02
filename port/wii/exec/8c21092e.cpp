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
int FUN_8c21092e_def(le<undefined4>* ar4,int ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c21092e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(le<int>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  uint uVar1;
  le<undefined4>* puVar2;
  undefined1 *puVar3;
  int iVar4;
  le<int>* piVar5;
  int ar6_00;
  le<int>* piVar6;
  int ar7_00;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  iVar7 = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1f4) = 1;
  uVar9 = 2;
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bb0) & 0x40) != 0) {
    ar5 = ar5 + 0x20;
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1b0) = s0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1a0) = ar4;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1a4) = ar5;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1a8) = ar6;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1ac) = ar7;
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c2758e8) == 0x80000000) {
    iVar7 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c211730(ar5,ar6,ar7,s0));
    ar4[4] = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014);
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c2758ec) = 0;
    for (puVar2 = (le<undefined4>* )(unsigned)((undefined1 *)(unsigned)0x8c4aa288); puVar2 < ((undefined1 *)(unsigned)0x8c4aa298); puVar2 = puVar2 + 1) {
      *puVar2 = 0;
    }
    iVar4 = ar6;
    ar6_00 = ar7;
    ar7_00 = s0;
    uVar1 = ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(0); *(le<unsigned>* )((((unsigned long)(fr0_ - 48)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 48)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 48)) - 8); FUN_8c211876(ar5,ar6,ar7,s0); });
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c211ba4(uVar1,iVar4,ar6_00,ar7_00));
    uVar8 = ar5 + ar6 + ar7 + s0;
    ((le<int>* )(fr0_ - 0x2c))[0] = ar6;
    ((le<int>* )(fr0_ - 0x2c))[1] = ar7;
    ((le<int>* )(fr0_ - 0x2c))[2] = s0;
    (*(le<int>* )(fr0_ - 0x30)) = ar5;
    if (ar5 != 0) {
      (*(le<int>* )(fr0_ - 0x30)) = ar5 + -0x10;
    }
    piVar5 = ((le<int>* )(fr0_ - 0x2c));
    piVar6 = piVar5;
    for (; piVar5 < ((le<int>* )(fr0_ - 0x2c)) + 3; piVar5 = piVar5 + 1) {
      if (*piVar5 != 0) {
        *piVar6 = *piVar6 + -0x10;
      }
      piVar6 = piVar6 + 1;
    }
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1a4) = (*(le<int>* )(fr0_ - 0x30));
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1a8) = ((le<int>* )(fr0_ - 0x2c))[0];
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1ac) = ((le<int>* )(fr0_ - 0x2c))[1];
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1b0) = ((le<int>* )(fr0_ - 0x2c))[2];
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 1) {
      uVar9 = 1;
    }
    iVar4 = ((le<int>* )(fr0_ - 0x2c))[2];
    iVar7 = ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(
                         iVar7 * 8 + uVar8 + 0xa0); unsigned long t2_ = (unsigned long)(uVar9); *(le<unsigned>* )((((unsigned long)(fr0_ - 48)) - 16) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 48)) - 16) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 48)) - 16) + 8) = (unsigned)t2_; vsp = (((unsigned long)(fr0_ - 48)) - 16); FUN_8c211c98((*(le<int>* )(fr0_ - 0x30)),((le<int>* )(fr0_ - 0x2c))[0],((le<int>* )(fr0_ - 0x2c))[1],((le<int>* )(fr0_ - 0x2c))[2]); });
    if (iVar7 == 0) {
      (vsp = ((unsigned long)(fr0_ - 48)), sh4_dmac_202c60(0xff,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1b8),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1c4),iVar4));
      if (uVar8 < 0x10000) {
        uVar8 = 0x10000;
      }
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1f8) = uVar8 * 4 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa204);
      if (0x200000U - (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa200) < (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1f8)) {
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1f8) = 0x200000U - (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa200);
      }
      iVar7 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c203820((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1f8),((undefined1 *)(unsigned)0x8c4aa280),((undefined1 *)(unsigned)0x8c4aa284),iVar4));
      if (iVar7 == 0) {
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa004) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1f8);
        uVar8 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c24) >> 7;
        ({ unsigned long t0_ = (unsigned long)(
                     ~(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1b8) & uVar1); *(le<unsigned>* )((((unsigned long)(fr0_ - 48)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 48)) - 8); FUN_8c25d7c6((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c18) >> 7,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c1c) >> 7,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c20) >> 7,uVar8); });
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa254) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa22c);
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa258) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa230);
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa25c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa234);
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa260) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa238);
        for (uVar1 = 0; uVar1 < 0x10; uVar1 = uVar1 + 4) {
          *(le<undefined4>* )(unsigned)(uVar1 + 0x8c4aa268) = *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa254) + uVar1);
        }
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa208) = 0;
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa20c) = 0;
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa210) = 0;
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa214) = 0;
        puVar3 = ((undefined1 *)(unsigned)0x8c4aa22c);
        *(le<unsigned>* )0x8c4aa218 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4aa22c));
        puVar2 = (le<undefined4>* )(unsigned)((undefined1 *)(unsigned)0x8c4aa224);
        *(le<unsigned>* )0x8c4aa21c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4aa254));
        uVar1 = 0;
        if (uVar9 != 0) {
          do {
            uVar1 = uVar1 + 1;
            *puVar2 = puVar3;
            puVar3 = puVar3 + 0x14;
            puVar2 = puVar2 + 1;
          } while (uVar1 < uVar9);
        }
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c211a20(uVar9,puVar2,uVar1,uVar8));
        for (uVar9 = 0; uVar9 < 0x10; uVar9 = uVar9 + 4) {
          *(le<int>* )(unsigned)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa21c) + uVar9) =
               *(le<int>* )(unsigned)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa21c) + uVar9) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa288) + uVar9) * 4;
        }
        *ar4 = ((undefined1 *)(unsigned)0x8c4aa254);
        ar4[1] = ((le<undefined4>* )(unsigned)0x8c2757a8);
        ar4[2] = ((undefined1 *)(unsigned)0x8c4aa208);
        ar4[3] = ((undefined1 *)(unsigned)0x8c4aa224);
      }
    }
  }
  else {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c2758e8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2758e8) | 0x100;
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c2758e8) == 0xb00) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2758e8) = 0x80000000;
      iVar7 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c211f40(1,0x80000000,0xb00,ar7));
    }
  }
  return iVar7;
}

__asm__(".globl FUN_8c21092e\n.set FUN_8c21092e, FUN_8c21092e_def\n");

}
