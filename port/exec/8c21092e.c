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
int FUN_8c21092e_def(undefined4 *ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c21092e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  int ar6_00;
  int *piVar6;
  int ar7_00;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  iVar7 = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1f4) = 1;
  uVar9 = 2;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bb0) & 0x40) != 0) {
    ar5 = ar5 + 0x20;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1b0) = s0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1a0) = ar4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1a4) = ar5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1a8) = ar6;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1ac) = ar7;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2758e8) == 0x80000000) {
    iVar7 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c211730(ar5,ar6,ar7,s0));
    ar4[4] = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa014);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2758ec) = 0;
    for (puVar2 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c4aa288); puVar2 < ((undefined1 *)(unsigned)0x8c4aa298); puVar2 = puVar2 + 1) {
      *puVar2 = 0;
    }
    iVar4 = ar6;
    ar6_00 = ar7;
    ar7_00 = s0;
    uVar1 = ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 48)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 48)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 48)) - 8); FUN_8c211876(ar5,ar6,ar7,s0); });
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c211ba4(uVar1,iVar4,ar6_00,ar7_00));
    uVar8 = ar5 + ar6 + ar7 + s0;
    ((int *)(fr0_ - 0x2c))[0] = ar6;
    ((int *)(fr0_ - 0x2c))[1] = ar7;
    ((int *)(fr0_ - 0x2c))[2] = s0;
    (*(int *)(fr0_ - 0x30)) = ar5;
    if (ar5 != 0) {
      (*(int *)(fr0_ - 0x30)) = ar5 + -0x10;
    }
    piVar5 = ((int *)(fr0_ - 0x2c));
    piVar6 = piVar5;
    for (; piVar5 < ((int *)(fr0_ - 0x2c)) + 3; piVar5 = piVar5 + 1) {
      if (*piVar5 != 0) {
        *piVar6 = *piVar6 + -0x10;
      }
      piVar6 = piVar6 + 1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1a4) = (*(int *)(fr0_ - 0x30));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1a8) = ((int *)(fr0_ - 0x2c))[0];
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1ac) = ((int *)(fr0_ - 0x2c))[1];
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1b0) = ((int *)(fr0_ - 0x2c))[2];
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef0) == 1) {
      uVar9 = 1;
    }
    iVar4 = ((int *)(fr0_ - 0x2c))[2];
    iVar7 = ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(
                         iVar7 * 8 + uVar8 + 0xa0); unsigned long t2_ = (unsigned long)(uVar9); *(unsigned *)((((unsigned long)(fr0_ - 48)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 48)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 48)) - 16) + 8) = (unsigned)t2_; vsp = (((unsigned long)(fr0_ - 48)) - 16); FUN_8c211c98((*(int *)(fr0_ - 0x30)),((int *)(fr0_ - 0x2c))[0],((int *)(fr0_ - 0x2c))[1],((int *)(fr0_ - 0x2c))[2]); });
    if (iVar7 == 0) {
      (vsp = ((unsigned long)(fr0_ - 48)), sh4_dmac_202c60(0xff,(*(undefined4 *)(unsigned)(unsigned)0x8c4aa1b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa1c4),iVar4));
      if (uVar8 < 0x10000) {
        uVar8 = 0x10000;
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1f8) = uVar8 * 4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa204);
      if (0x200000U - (*(undefined4 *)(unsigned)(unsigned)0x8c4aa200) < (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1f8)) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1f8) = 0x200000U - (*(undefined4 *)(unsigned)(unsigned)0x8c4aa200);
      }
      iVar7 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c203820((*(undefined4 *)(unsigned)(unsigned)0x8c4aa1f8),((undefined1 *)(unsigned)0x8c4aa280),((undefined1 *)(unsigned)0x8c4aa284),iVar4));
      if (iVar7 == 0) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa004) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1f8);
        uVar8 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c24) >> 7;
        ({ unsigned long t0_ = (unsigned long)(
                     ~(*(undefined4 *)(unsigned)(unsigned)0x8c4aa1b8) & uVar1); *(unsigned *)((((unsigned long)(fr0_ - 48)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 48)) - 8); FUN_8c25d7c6((*(undefined4 *)(unsigned)(unsigned)0x8c4a9c18) >> 7,(*(undefined4 *)(unsigned)(unsigned)0x8c4a9c1c) >> 7,(*(undefined4 *)(unsigned)(unsigned)0x8c4a9c20) >> 7,uVar8); });
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa254) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa22c);
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa258) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa230);
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa25c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa234);
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa260) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa238);
        for (uVar1 = 0; uVar1 < 0x10; uVar1 = uVar1 + 4) {
          *(undefined4 *)(unsigned)(uVar1 + 0x8c4aa268) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa254) + uVar1);
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa208) = 0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa20c) = 0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa210) = 0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa214) = 0;
        puVar3 = ((undefined1 *)(unsigned)0x8c4aa22c);
        *(unsigned *)0x8c4aa218 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4aa22c));
        puVar2 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c4aa224);
        *(unsigned *)0x8c4aa21c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4aa254));
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
          *(int *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa21c) + uVar9) =
               *(int *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa21c) + uVar9) + *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa288) + uVar9) * 4;
        }
        *ar4 = ((undefined1 *)(unsigned)0x8c4aa254);
        ar4[1] = ((undefined4 *)(unsigned)0x8c2757a8);
        ar4[2] = ((undefined1 *)(unsigned)0x8c4aa208);
        ar4[3] = ((undefined1 *)(unsigned)0x8c4aa224);
      }
    }
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2758e8) = (*(undefined4 *)(unsigned)(unsigned)0x8c2758e8) | 0x100;
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c2758e8) == 0xb00) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2758e8) = 0x80000000;
      iVar7 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c211f40(1,0x80000000,0xb00,ar7));
    }
  }
  return iVar7;
}

__asm__(".globl _FUN_8c21092e\n.set _FUN_8c21092e, _FUN_8c21092e_def\n");
