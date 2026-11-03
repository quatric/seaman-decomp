//@unit 8c21035c
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
undefined4 FUN_8c21035c_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21035c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint ar6_00;
  
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c2757a0) = (uint)((int)ar4 < 0);
  ar6_00 = (1 - (*(le<undefined4>* )(unsigned)(unsigned)0x8c2757a0)) * 0x100;
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x74,ar6_00 | ar4 & 0xff,ar6_00,ar7));
  return 0;
}

__asm__(".globl FUN_8c21035c\n.set FUN_8c21035c, FUN_8c21035c_def\n");

}
//@unit 8c2103c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2103c4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2103c4");
  return (unsigned)sh4_interp(0x8c2103c4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2103c4\n.set FUN_8c2103c4, FUN_8c2103c4_def\n");
}
//@unit 8c21092e
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
//@unit 8c210cc0
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
uint FUN_8c210cc0_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c210cc0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  le<int>* piVar2;
  int iVar3;
  int iVar4;
  le<int>* piVar5;
  uint uVar6;
  uint uVar7;
  
  piVar1 = 0x8c4aa218;
  if (*(le<undefined4>* )(unsigned)0x8c4a9ef0 == 1) {
    *(le<undefined4>* )(unsigned)0x8c4aa218 = 0x8c4aa22c;
  }
  else {
    *(le<undefined4>* )(unsigned)0x8c4aa218 = ar4 * 0x14 + 0x8c4aa22c;
  }
  piVar2 = 0x8c4aa21c;
  *(le<undefined4>* )(unsigned)*(le<undefined4>* )(unsigned)0x8c4aa21c = *(le<undefined4>* )(unsigned)*piVar1;
  *(le<undefined4>* )(unsigned)(*piVar2 + 4) = *(le<undefined4>* )(unsigned)(*piVar1 + 4);
  *(le<undefined4>* )(unsigned)(*piVar2 + 8) = *(le<undefined4>* )(unsigned)(*piVar1 + 8);
  *(le<undefined4>* )(unsigned)(*piVar2 + 0xc) = *(le<undefined4>* )(unsigned)(*piVar1 + 0xc);
  *(le<undefined4>* )(unsigned)(*piVar2 + 0x10) = *(le<undefined4>* )(unsigned)(*piVar1 + 0x10);
  iVar3 = 0x8c4aa268;
  uVar6 = 0;
  do {
    uVar7 = uVar6 + 4;
    *(le<undefined4>* )(unsigned)(uVar6 + iVar3) = *(le<undefined4>* )(unsigned)(uVar6 + *piVar2);
    iVar4 = 0x8c4aa288;
    uVar6 = uVar7;
  } while (uVar7 < 0x14);
  *(le<undefined4>* )(unsigned)0x8c4aa214 = ar4 & 1;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    piVar1 = (le<int>* )(unsigned)(uVar6 + iVar4);
    piVar5 = (le<int>* )(unsigned)(*piVar2 + uVar6);
    uVar6 = uVar6 + 4;
    *piVar5 = *piVar5 + *piVar1 * 4;
  } while (uVar6 < 0x14);
  return uVar7;
}

__asm__(".globl FUN_8c210cc0\n.set FUN_8c210cc0, FUN_8c210cc0_def\n");

}
//@unit 8c210d80
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
undefined4 FUN_8c210d80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c210d80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 ar4_00;
  int iVar2;
  int iVar3;
  le<undefined4>* puVar4;
  int iVar5;
  int iVar6;
  
  ar4_00 = 0x10000000;
  puVar1 = ((void *)(unsigned)0x8c202f40);
  iVar3 = ar4 * 4;
  iVar5 = *(le<int>* )(unsigned)(*(le<undefined4>* )(unsigned)0x8c4aa21c + iVar3) - *(le<int>* )(unsigned)(0x8c4aa268 + iVar3);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 3;
  }
  iVar6 = (int)0x100;
  puVar4 = (le<undefined4>* )(unsigned)(iVar3 + 0x8c4aa268);
  do {
    iVar2 = ({ unsigned long t0_ = (unsigned long)(((le<undefined4>*  *)(fr0_ - 0x20))); *(le<unsigned>* )((((unsigned long)(fr0_ - 32)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 32)) - 8); (*(code *)xlat((unsigned long)(puVar1)))(ar4_00,*puVar4,(iVar5 >> 2) << 2,0x10); });
  } while (iVar2 == iVar6);
  *(le<int>* )(unsigned)(*(le<undefined4>* )(unsigned)0x8c4aa21c + iVar3) =
       *(le<int>* )(unsigned)(0x8c4aa288 + iVar3) * 4 + *(le<int>* )(unsigned)(0x8c4aa268 + iVar3);
  *(le<undefined4>* )(unsigned)0x8c4a9fd4 = *((le<undefined4>*  *)(fr0_ - 0x20))[0];
  return 0;
}

__asm__(".globl FUN_8c210d80\n.set FUN_8c210d80, FUN_8c210d80_def\n");

}
//@unit 8c210dfc
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
undefined4 FUN_8c210dfc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c210dfc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203298(*(le<undefined4>* )(unsigned)0x8c4a9fd4,ar5,ar6,ar7));
  if (iVar1 != 1) {
    return 0xd;
  }
  return 0;
}

__asm__(".globl FUN_8c210dfc\n.set FUN_8c210dfc, FUN_8c210dfc_def\n");

}
//@unit 8c210e40
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
//@unit 8c210fd2
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
int FUN_8c210fd2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c210fd2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<undefined4>* puVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203ca0((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa280),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa284),ar6,ar7));
  if (iVar1 != 0) {
    return iVar1;
  }
  for (puVar2 = (le<undefined4>* )(unsigned)((undefined1 *)(unsigned)0x8c4aa288); puVar2 < (le<undefined4>* )(unsigned)0x8c4aa29c; puVar2 = puVar2 + 1)
  {
    *puVar2 = 0;
  }
  return 0;
}

__asm__(".globl FUN_8c210fd2\n.set FUN_8c210fd2, FUN_8c210fd2_def\n");

}
//@unit 8c210fd4
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
int FUN_8c210fd4_def(undefined4 ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c210fd4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<undefined4>* puVar2;
  le<undefined4>* puVar3;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203ca0(*(le<undefined4>* )(unsigned)0x8c4aa280,*ar5,ar6,ar7));
  if (iVar1 != 0) {
    return iVar1;
  }
  puVar3 = 0x8c4aa288 + 5;
  for (puVar2 = 0x8c4aa288; puVar2 < puVar3; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  return 0;
}

__asm__(".globl FUN_8c210fd4\n.set FUN_8c210fd4, FUN_8c210fd4_def\n");

}
//@unit 8c211040
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c211040_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c211040");
  return (unsigned)sh4_interp(0x8c211040, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c211040\n.set FUN_8c211040, FUN_8c211040_def\n");
}
//@unit 8c2110b2
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
int FUN_8c2110b2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2110b2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(*(le<undefined4>* )(unsigned)0x8c4aa21c + ar4 * 4) - *(le<int>* )(unsigned)(0x8c4aa268 + ar4 * 4);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  return iVar1 >> 2;
}

__asm__(".globl FUN_8c2110b2\n.set FUN_8c2110b2, FUN_8c2110b2_def\n");

}
//@unit 8c2110e8
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
undefined4 FUN_8c2110e8_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2110e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  undefined *puVar2;
  le<undefined4>* puVar3;
  
  puVar2 = ((void *)(unsigned)0x8c207300);
  piVar1 = 0x8c4aa220;
  puVar3 = (le<undefined4>* )(unsigned)(ar4 * 4 + *(le<undefined4>* )(unsigned)0x8c4aa21c);
  *(le<undefined4>* )(unsigned)0x8c4aa220 = (int)puVar3;
  ((le<undefined4>* )(fr0_ - 0xc))[0] = ar5;
  (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(puVar2)))(*puVar3,((le<undefined4>* )(fr0_ - 0xc)),4,ar7));
  *(le<int>* )(unsigned)*piVar1 = *(le<int>* )(unsigned)*piVar1 + ar6 * 4;
  return 0;
}

__asm__(".globl FUN_8c2110e8\n.set FUN_8c2110e8, FUN_8c2110e8_def\n");

}
//@unit 8c211120
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_HARDWARE_211130_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_HARDWARE_211130");
  return (unsigned)sh4_interp(0x8c211120, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_HARDWARE_211130\n.set s_HARDWARE_211130, s_HARDWARE_211130_def\n");
}
//@unit 8c211730
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
uint FUN_8c211730_def(int ar4,int ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c211730");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(le<int>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  le<uint>* puVar1;
  uint uVar2;
  le<int>* piVar3;
  bool bVar4;
  
  puVar1 = 0x8c4aa014;
  for (piVar3 = ((le<int>* )(fr0_ - 0x28)); piVar3 < (fr0_ + (int)0xffffffec); piVar3 = piVar3 + 1) {
    *piVar3 = 0;
  }
  if (*(le<undefined4>* )(unsigned)0x8c4a9ef0 == 1) {
    if (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x20) {
      ((le<int>* )(fr0_ - 0x28))[0] = 1;
    }
    if (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x21) {
      ((le<int>* )(fr0_ - 0x28))[1] = 1;
    }
    if (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x22) {
      ((le<int>* )(fr0_ - 0x28))[2] = 1;
    }
    if (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x23) {
      ((le<int>* )(fr0_ - 0x28))[3] = 1;
    }
    if (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x24) {
      ((le<int>* )(fr0_ - 0x28))[4] = 1;
    }
  }
  bVar4 = ar4 + ((le<int>* )(fr0_ - 0x28))[0] != 0;
  *(le<undefined4>* )(unsigned)0x8c4aa014 = 0;
  if (bVar4) {
    *puVar1 = *puVar1 | 1;
  }
  uVar2 = (uint)bVar4;
  if (ar5 + ((le<int>* )(fr0_ - 0x28))[1] != 0) {
    *(le<undefined4>* )(unsigned)0x8c4aa014 = *(le<undefined4>* )(unsigned)0x8c4aa014 | 2;
    uVar2 = uVar2 + 1;
  }
  if (ar6 + ((le<int>* )(fr0_ - 0x28))[2] != 0) {
    *(le<undefined4>* )(unsigned)0x8c4aa014 = *(le<undefined4>* )(unsigned)0x8c4aa014 | 4;
    uVar2 = uVar2 + 1;
  }
  if (ar7 + ((le<int>* )(fr0_ - 0x28))[3] != 0) {
    *(le<undefined4>* )(unsigned)0x8c4aa014 = *(le<undefined4>* )(unsigned)0x8c4aa014 | 8;
    uVar2 = uVar2 + 1;
  }
  if (s0 + ((le<int>* )(fr0_ - 0x28))[4] != 0) {
    *(le<undefined4>* )(unsigned)0x8c4aa014 = *(le<undefined4>* )(unsigned)0x8c4aa014 | 0x10;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

__asm__(".globl FUN_8c211730\n.set FUN_8c211730, FUN_8c211730_def\n");

}
//@unit 8c211876
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
uint FUN_8c211876_def(uint ar4,int ar5,uint ar6,int ar7)

{
  TRACE_ENTER("FUN_8c211876");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(le<int>* )(vsp + 0);
  int s4 = *(le<int>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = *(le<undefined4>* )(unsigned)0x8c4a9c14;
  iVar5 = 0;
  iVar7 = 0;
  iVar6 = 0;
  uVar4 = (uint)(ar5 != 0);
  uVar3 = (uint)(ar7 != 0);
  if (s0 != 0) {
    iVar5 = 2;
  }
  if (s4 == 1) {
    if (ar4 != 0) {
      iVar6 = 2;
    }
    if (ar6 != 0) {
      iVar7 = 2;
    }
  }
  else {
    if (ar4 != 0) {
      iVar6 = 3;
    }
    if (ar6 != 0) {
      iVar7 = 3;
    }
    if ((ar4 != 0) && (ar6 != 0)) {
      if (ar4 < ar6) {
        iVar6 = 2;
      }
      else {
        iVar7 = 2;
      }
    }
  }
  if (*(le<undefined4>* )(unsigned)0x8c4a9ef0 == 1) {
    if (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x20) {
      iVar6 = 3;
    }
    if (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x21) {
      uVar4 = 2;
    }
    if (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x22) {
      iVar7 = 3;
    }
    if (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x23) {
      uVar3 = 2;
    }
    if (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x24) {
      iVar5 = 3;
    }
  }
  uVar3 = iVar6 << 0x11 & 0x60000 | uVar4 << 0x13 & 0x180000 | iVar7 << 0x15 & 0x600000
          | uVar3 << 0x17 & 0x600000 << 2 | iVar5 << 0x19 & 0x6000000 | 0x10000;
  if ((*(le<undefined4>* )(unsigned)0x8c4a9bb0 & 0x20) != 0) {
    if (((uVar4 == 0) || (iVar7 == 0)) || (iVar5 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(le<undefined4>* )(unsigned)0x8c4aa010 = uVar1;
  }
  return uVar2 & 0xff | uVar3;
}

__asm__(".globl FUN_8c211876\n.set FUN_8c211876, FUN_8c211876_def\n");

}
//@unit 8c211a20
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
undefined1 * FUN_8c211a20_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c211a20");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  (*(le<undefined4>* )(fr0_ - 0x40)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d6f8);
  (*(le<undefined4>* )(fr0_ - 0x3c)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d6fc);
  (*(le<undefined4>* )(fr0_ - 0x38)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d700);
  (*(le<undefined4>* )(fr0_ - 0x34)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d704);
  (*(le<undefined4>* )(fr0_ - 0x30)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d708);
  (*(le<undefined4>* )(fr0_ - 0x2c)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d70c);
  (*(le<undefined4>* )(fr0_ - 0x28)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d710);
  (*(le<undefined4>* )(fr0_ - 0x24)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d714);
  if ((((uint)(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014) & 1) != 0) &&
     (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 0 || (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4a9fcc) != (undefined1 *)(unsigned)0x20)))) {
    puVar1 = (le<undefined4>* )(unsigned)((undefined1 *)(unsigned)0x8c4aa22c);
    (*(le<uint>* )(fr0_ - 0x44)) = 0;
    if (ar4 != 0) {
      do {
        (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c20731e(*puVar1,&(*(le<undefined4>* )(fr0_ - 0x40)),0x20,ar7));
        (*(le<uint>* )(fr0_ - 0x44)) = (*(le<uint>* )(fr0_ - 0x44)) + 1;
        puVar1 = puVar1 + 5;
      } while ((*(le<uint>* )(fr0_ - 0x44)) < ar4);
    }
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa288) = 8;
  }
  if ((((uint)(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014) & 2) != 0) &&
     (((*(le<undefined4>* )(fr0_ - 0x40)) = 0x81000000, (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 0 || (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4a9fcc) != (undefined1 *)(unsigned)0x21)))) {
    puVar2 = ((undefined1 *)(unsigned)0x8c4aa22c);
    (*(le<uint>* )(fr0_ - 0x44)) = 0;
    if (ar4 != 0) {
      do {
        (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c20731e(*(le<undefined4>* )(unsigned)(puVar2 + 4),&(*(le<undefined4>* )(fr0_ - 0x40)),0x20,ar7));
        (*(le<uint>* )(fr0_ - 0x44)) = (*(le<uint>* )(fr0_ - 0x44)) + 1;
        puVar2 = puVar2 + 0x14;
      } while ((*(le<uint>* )(fr0_ - 0x44)) < ar4);
    }
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa28c) = 8;
  }
  if ((((uint)(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014) & 4) != 0) &&
     (((*(le<undefined4>* )(fr0_ - 0x40)) = 0x82000000, (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 0 || (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4a9fcc) != (undefined1 *)(unsigned)0x22)))) {
    puVar2 = ((undefined1 *)(unsigned)0x8c4aa22c);
    (*(le<uint>* )(fr0_ - 0x44)) = 0;
    if (ar4 != 0) {
      do {
        (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c20731e(*(le<undefined4>* )(unsigned)(puVar2 + 8),&(*(le<undefined4>* )(fr0_ - 0x40)),0x20,ar7));
        (*(le<uint>* )(fr0_ - 0x44)) = (*(le<uint>* )(fr0_ - 0x44)) + 1;
        puVar2 = puVar2 + 0x14;
      } while ((*(le<uint>* )(fr0_ - 0x44)) < ar4);
    }
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa290) = 8;
  }
  if ((((uint)(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014) & 8) != 0) &&
     (((*(le<undefined4>* )(fr0_ - 0x40)) = 0x83000000, (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 0 || (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4a9fcc) != (undefined1 *)(unsigned)0x23)))) {
    puVar2 = ((undefined1 *)(unsigned)0x8c4aa22c);
    (*(le<uint>* )(fr0_ - 0x44)) = 0;
    if (ar4 != 0) {
      do {
        (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c20731e(*(le<undefined4>* )(unsigned)(puVar2 + 0xc),&(*(le<undefined4>* )(fr0_ - 0x40)),0x20,ar7));
        (*(le<uint>* )(fr0_ - 0x44)) = (*(le<uint>* )(fr0_ - 0x44)) + 1;
        puVar2 = puVar2 + 0x14;
      } while ((*(le<uint>* )(fr0_ - 0x44)) < ar4);
    }
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa294) = 8;
  }
  puVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014);
  if (((uint)(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014) & 0x10) != 0) {
    (*(le<undefined4>* )(fr0_ - 0x40)) = 0x84000000;
    puVar2 = ((undefined1 *)(unsigned)0x8c4a9ef0);
    if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 0) || (puVar2 = (undefined1*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4a9fcc)), ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4a9fcc) != (undefined1 *)(unsigned)0x24)) {
      puVar3 = ((undefined1 *)(unsigned)0x8c4aa22c);
      (*(le<uint>* )(fr0_ - 0x44)) = 0;
      if (ar4 != 0) {
        do {
          puVar2 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 68)), FUN_8c20731e(*(le<undefined4>* )(unsigned)(puVar3 + 0x10),&(*(le<undefined4>* )(fr0_ - 0x40)),0x20,ar7));
          (*(le<uint>* )(fr0_ - 0x44)) = (*(le<uint>* )(fr0_ - 0x44)) + 1;
          puVar3 = puVar3 + 0x14;
        } while ((*(le<uint>* )(fr0_ - 0x44)) < ar4);
      }
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa298) = 8;
    }
  }
  return puVar2;
}

__asm__(".globl FUN_8c211a20\n.set FUN_8c211a20, FUN_8c211a20_def\n");

}
//@unit 8c211ba4
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
int FUN_8c211ba4_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c211ba4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  
  ((le<int>* )(fr0_ - 0x10))[0] = *(le<int>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c26d718));
  ((le<int>* )(fr0_ - 0x10))[1] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c26d718)) + 4);
  ((le<int>* )(fr0_ - 0x10))[2] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c26d718)) + 8);
  ((le<int>* )(fr0_ - 0x10))[3] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c26d718)) + 0xc);
  uVar1 = ar4 >> 0x19 & 3;
  iVar2 = *(le<undefined4>* )(unsigned)0x8c4aa008 * *(le<undefined4>* )(unsigned)0x8c4aa00c;
  if ((*(le<undefined4>* )(unsigned)0x8c4a9bb0 & 0x20) != 0) {
    if (*(le<undefined4>* )(unsigned)0x8c4aa010 == 0) {
      iVar2 = iVar2 * 2;
    }
    else {
      iVar2 = iVar2 * 4;
    }
  }
  *(le<undefined4>* )(unsigned)0x8c4aa204 =
       ((((le<int>* )(fr0_ - 0x10))[ar4 >> 0x11 & 3] + ((le<int>* )(fr0_ - 0x10))[ar4 >> 0x13 & 3] + ((le<int>* )(fr0_ - 0x10))[ar4 >> 0x15 & 3] +
         ((le<int>* )(fr0_ - 0x10))[ar4 >> 0x17 & 3] + ((le<int>* )(fr0_ - 0x10))[uVar1]) * 4 + 0x18) * iVar2;
  return uVar1 * 4;
}

__asm__(".globl FUN_8c211ba4\n.set FUN_8c211ba4, FUN_8c211ba4_def\n");

}
//@unit 8c211c98
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
undefined4 FUN_8c211c98_def(int ar4,int ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c211c98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(le<int>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);
  uint s8 = *(le<uint>* )(vsp + 8);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  int iVar2;
  uint uVar3;
  le<uint>* puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  *(le<undefined4>* )(unsigned)0x8c4aa070 = ar4 << 2;
  piVar1 = 0x8c4aa074;
  *(le<undefined4>* )(unsigned)0x8c4aa074 = ar5 << 2;
  *(le<undefined4>* )(unsigned)0x8c4aa078 = ar6 << 2;
  *(le<undefined4>* )(unsigned)0x8c4aa07c = ar7 << 2;
  piVar1[3] = s0 << 2;
  uVar3 = 0x10000000;
  iVar2 = 0x8c4aa22c;
  uVar6 = 0;
  ((le<uint>* )(fr0_ - 0x24))[0] = *(le<undefined4>* )(unsigned)0x8c4a9fec;
  (*(le<int>* )(fr0_ - 0x38)) = 0x8c4aa22c;
  (*(le<int>* )(fr0_ - 0x30)) = 0x8c4aa22c;
  (*(le<unsigned>* )(fr0_ - 0x2c) = (unsigned)(unsigned long)(((le<uint>* )(fr0_ - 0x24))));
  if (s8 != 0) {
    do {
      uVar7 = 0;
      if ((((le<uint>* )(fr0_ - 0x24))[uVar6] & 0x1f) != 0) {
        puVar4 = ((le<uint>* )(fr0_ - 0x24)) + uVar6;
        *puVar4 = *puVar4 + 0x1f & 0xffffffe0;
      }
      puVar4 = (le<uint>* )(unsigned)(uVar6 * 0x14 + iVar2);
      if ((*(le<undefined4>* )(unsigned)0x8c4a9ef0 == 1) && (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x20)) {
        *puVar4 = uVar3;
      }
      else if (ar4 == 0) {
        *puVar4 = 0;
      }
      else {
        *puVar4 = ((le<uint>* )(fr0_ - 0x24))[uVar6];
        uVar7 = ar4 + 0x17U & 0xfffffff8;
      }
      iVar5 = uVar6 * 0x14 + iVar2;
      if ((*(le<undefined4>* )(unsigned)0x8c4a9ef0 == 1) && (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x21)) {
        *(le<uint>* )(unsigned)(iVar5 + 4) = uVar3;
      }
      else if (ar5 == 0) {
        *(le<undefined4>* )(unsigned)(iVar5 + 4) = 0;
      }
      else {
        *(le<uint>* )(unsigned)(iVar5 + 4) = ((le<uint>* )(fr0_ - 0x24))[uVar6] + uVar7 * 4;
        uVar7 = uVar7 + ar5 + 0x17 & 0xfffffff8;
      }
      iVar5 = uVar6 * 0x14 + iVar2;
      if ((*(le<undefined4>* )(unsigned)0x8c4a9ef0 == 1) && (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x22)) {
        *(le<uint>* )(unsigned)(iVar5 + 8) = uVar3;
      }
      else if (ar6 == 0) {
        *(le<undefined4>* )(unsigned)(iVar5 + 8) = 0;
      }
      else {
        *(le<uint>* )(unsigned)(iVar5 + 8) = ((le<uint>* )(fr0_ - 0x24))[uVar6] + uVar7 * 4;
        uVar7 = uVar7 + ar6 + 0x17 & 0xfffffff8;
      }
      iVar5 = uVar6 * 0x14 + iVar2;
      if ((*(le<undefined4>* )(unsigned)0x8c4a9ef0 == 1) && (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x23)) {
        *(le<uint>* )(unsigned)(iVar5 + 0xc) = uVar3;
      }
      else if (ar7 == 0) {
        *(le<undefined4>* )(unsigned)(iVar5 + 0xc) = 0;
      }
      else {
        *(le<uint>* )(unsigned)(iVar5 + 0xc) = ((le<uint>* )(fr0_ - 0x24))[uVar6] + uVar7 * 4;
        uVar7 = uVar7 + ar7 + 0x17 & 0xfffffff8;
      }
      if ((*(le<undefined4>* )(unsigned)0x8c4a9ef0 == 1) && (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x24)) {
        *(le<uint>* )(unsigned)(uVar6 * 0x14 + iVar2 + 0x10) = uVar3;
      }
      else if (s0 == 0) {
        *(le<undefined4>* )(unsigned)((*(le<int>* )(fr0_ - 0x30)) + 0x10) = 0;
      }
      else {
        *(le<uint>* )(unsigned)((*(le<int>* )(fr0_ - 0x38)) + 0x10) = uVar7 * 4 + *((le<uint>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x2c));
        uVar7 = uVar7 + s0 + 0x17 & 0xfffffff8;
      }
      uVar6 = uVar6 + 1;
      ((le<uint>* )(fr0_ - 0x24))[1] = uVar7 * 4 + ((le<uint>* )(fr0_ - 0x24))[0];
      (*(le<int>* )(fr0_ - 0x30)) = (*(le<int>* )(fr0_ - 0x30)) + 0x14;
      (*(le<unsigned>* )(fr0_ - 0x2c) = (unsigned)(unsigned long)(((le<uint>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x2c)) + 1));
      (*(le<int>* )(fr0_ - 0x38)) = (*(le<int>* )(fr0_ - 0x38)) + 0x14;
    } while (uVar6 < s8);
  }
  return 0;
}

__asm__(".globl FUN_8c211c98\n.set FUN_8c211c98, FUN_8c211c98_def\n");

}
//@unit 8c211f40
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
int FUN_8c211f40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c211f40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 2;
  if (((ar4 != 1) ||
      (ar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1a8), ar7 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1ac),
      iVar1 = ({ unsigned long t0_ = (unsigned long)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1b0)); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c21092e((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1a0),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1a4),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1a8),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1ac)); }),
      iVar1 == 0)) &&
     ((ar4 != 2 || (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c210e40((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1a0),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1f8),ar6,ar7)), iVar1 == 0)))) {
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1bc) == (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1cc)) {
      uVar4 = 1;
    }
    uVar3 = 0;
    iVar1 = 0;
    if (uVar4 != 0) {
      do {
        iVar2 = ({ unsigned long t0_ = (unsigned long)(
                             *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa1c8) + iVar1)); unsigned long t1_ = (unsigned long)(ar4); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c202a80(*(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa1bc) + iVar1),
                             *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa1c0) + iVar1),
                             *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa1c4) + iVar1),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1b8)); });
        if (iVar2 != 0) {
          return iVar2;
        }
        uVar3 = uVar3 + 1;
        iVar1 = iVar1 + 0x10;
      } while (uVar3 < uVar4);
    }
    ar6_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1b8);
    ar7_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1e4);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20af76((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1dc),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1e0),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1b8),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1e4)));
    if ((iVar1 == 0) && (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 1 || ((*(le<undefined4>* )(unsigned)(unsigned)0x8c2758ec) == 1)))) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f10) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08);
      *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) * 4) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f20) = 1;
      uVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) & 1;
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,1,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,0,ar6_00,ar7_00));
      iVar2 = uVar4 * 0x20;
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x124,*(le<undefined4>* )(unsigned)(iVar2 + -0x73b55fdc),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(300,*(le<undefined4>* )(unsigned)(iVar2 + -0x73b55fd8),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x128,*(le<undefined4>* )(unsigned)(iVar2 + -0x73b55fd0),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x130,*(le<undefined4>* )(unsigned)(iVar2 + -0x73b55fcc),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x164,*(le<undefined4>* )(unsigned)(iVar2 + -0x73b55fd4),ar6_00,ar7_00));
      ar5_00 = 0x80000000;
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x144,0x80000000,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a876(0x144,ar5_00,ar6_00,ar7_00));
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f18) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f14) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014);
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c211f40\n.set FUN_8c211f40, FUN_8c211f40_def\n");

}
//@unit 8c2120c0
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
uint FUN_8c2120c0_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2120c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c2758e8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2758e8) | ar4;
  return (*(le<undefined4>* )(unsigned)(unsigned)0x8c2758e8);
}

__asm__(".globl FUN_8c2120c0\n.set FUN_8c2120c0, FUN_8c2120c0_def\n");

}
//@unit 8c212140
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
undefined4 FUN_8c212140_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c212140");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c2758e8) = ar4;
  return ar4;
}

__asm__(".globl FUN_8c212140\n.set FUN_8c212140, FUN_8c212140_def\n");

}
//@unit 8c212148
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
undefined4 FUN_8c212148_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c212148");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (*(le<undefined4>* )(unsigned)(unsigned)0x8c2758e8);
}

__asm__(".globl FUN_8c212148\n.set FUN_8c212148, FUN_8c212148_def\n");

}
//@unit 8c21214e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21214e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21214e");
  return (unsigned)sh4_interp(0x8c21214e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21214e\n.set FUN_8c21214e, FUN_8c21214e_def\n");
}
//@unit 8c212152
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c212152_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c212152");
  return (unsigned)sh4_interp(0x8c212152, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c212152\n.set FUN_8c212152, FUN_8c212152_def\n");
}
//@unit 8c212220
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
undefined4 FUN_8c212220_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c212220");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int ar5_00;
  uint uVar3;
  uint ar6_00;
  
  ar6_00 = ((le<int>* )(unsigned)(uint)ar4[2])[1];
  iVar1 = *(le<int>* )(unsigned)(uint)ar4[2] * 4;
  ar5_00 = ar4[1];
  uVar2 = *(le<uint>* )(unsigned)(*ar4 + iVar1);
  uVar3 = uVar2 >> 0x18;
  *(volatile le<undefined4>* )(unsigned)0xff000038 = uVar3;
  *(volatile le<undefined4>* )(unsigned)0xff00003c = uVar3;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c207300(0x3ffffff & uVar2 | 0xe0000000,ar5_00,ar6_00,ar7));
  *(le<uint>* )(unsigned)(*ar4 + iVar1) = *(le<int>* )(unsigned)(*ar4 + iVar1) + (ar6_00 & 0xfffffffc);
  return 0;
}

__asm__(".globl FUN_8c212220\n.set FUN_8c212220, FUN_8c212220_def\n");

}
//@unit 8c212284
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
undefined4 FUN_8c212284_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  TRACE_ENTER("FUN_8c212284");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<uint>* puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = 0xff000038;
  *(le<undefined4>* )(unsigned)0x8c4aa210 = ar6;
  iVar2 = *(le<int>* )(unsigned)(uint)ar4[2] * 4;
  uVar3 = *(le<uint>* )(unsigned)(*ar4 + iVar2);
  uVar4 = uVar3 >> 0x18;
  *puVar1 = uVar4;
  *(volatile le<undefined4>* )(unsigned)0xff00003c = uVar4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c207300(0x3ffffff & uVar3 | 0xe0000000,ar5,ar7,ar7));
  *(le<int>* )(unsigned)(*ar4 + iVar2) = *(le<int>* )(unsigned)(*ar4 + iVar2) + (ar7 >> 2) * 4;
  return 0;
}

__asm__(".globl FUN_8c212284\n.set FUN_8c212284, FUN_8c212284_def\n");

}
//@unit 8c2122ea
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
undefined4 FUN_8c2122ea_def(le<int>* ar4,uint ar5,undefined4 ar6,le<undefined4>* ar7)

{
  TRACE_ENTER("FUN_8c2122ea");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  le<undefined4>* ar7_00;
  int iVar3;
  
  iVar3 = ar5 * 4;
  ar7_00 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c2110b2(ar5,ar5,ar6,ar7));
  if (iVar1 != 8) {
    ar7_00 = ((le<undefined4>* )(unsigned)0x8c2758f0);
    if ((ar5 & 1) == 0) {
      uVar2 = 0xa0000000;
    }
    else {
      uVar2 = 0x81000040;
    }
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c2758f0) = *(le<uint>* )(unsigned)(uint)ar4[1] & 0x830000 | uVar2;
    (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038) = *(le<uint>* )(unsigned)(*ar4 + iVar3) >> 0x18;
    (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff00003c) = (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038);
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c207300(*(le<uint>* )(unsigned)(*ar4 + iVar3) & 0x3ffffff | 0xe0000000,((le<undefined4>* )(unsigned)0x8c2758f0),0x20,((le<undefined4>* )(unsigned)0x8c2758f0)));
    *(le<int>* )(unsigned)(*ar4 + iVar3) = *(le<int>* )(unsigned)(*ar4 + iVar3) + 0x20;
    for ((*(le<int>* )(fr0_ - 0x4c)) = 2; (*(le<int>* )(fr0_ - 0x4c)) != 0; (*(le<int>* )(fr0_ - 0x4c)) = (*(le<int>* )(fr0_ - 0x4c)) + -1) {
      (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038) = *(le<uint>* )(unsigned)(*ar4 + iVar3) >> 0x18;
      (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff00003c) = (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038);
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c207300(*(le<uint>* )(unsigned)(*ar4 + iVar3) & 0x3ffffff | 0xe0000000,((undefined1 *)(unsigned)0x8c275910),0x40,ar7_00));
      *(le<int>* )(unsigned)(*ar4 + iVar3) = *(le<int>* )(unsigned)(*ar4 + iVar3) + 0x40;
    }
  }
  ((le<undefined4>* )(fr0_ - 0x40))[0] = 0x20000000;
  (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038) = *(le<uint>* )(unsigned)(*ar4 + iVar3) >> 0x18;
  (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff00003c) = (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038);
  (*(le<undefined4>* )(fr0_ - 0x30)) = ar6;
  (*(le<unsigned>* )(fr0_ - 0x2c) = (unsigned)(unsigned long)(ar7));
  (*(le<unsigned>* )(fr0_ - 0x28)) = *(le<unsigned>* )(fr0_ + 0);
  (*(le<unsigned>* )(fr0_ - 0x24)) = *(le<unsigned>* )(fr0_ + 4);
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c207300(*(le<uint>* )(unsigned)(*ar4 + iVar3) & 0x3ffffff | 0xe0000000,((le<undefined4>* )(fr0_ - 0x40)),0x20,ar7_00));
  *(le<int>* )(unsigned)(*ar4 + iVar3) = *(le<int>* )(unsigned)(*ar4 + iVar3) + 0x20;
  return 0;
}

__asm__(".globl FUN_8c2122ea\n.set FUN_8c2122ea, FUN_8c2122ea_def\n");

}
//@unit 8c212440
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
undefined4 FUN_8c212440_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c212440");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int ar4_00;
  int iVar1;
  int iVar2;
  undefined1 *ar5_00;
  undefined1 *ain0;
  
  ar5_00 = (fr0_ + (int)0xfffffff0);
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1f397e(ar4,0,ar6,ar7));
  if (ar4_00 != 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1f30ee(ar4_00,(fr0_ + (int)0xfffffff0),ar6,ar7));
    ain0 = ((undefined1 *)(unsigned long)*(le<unsigned>* )(fr0_ - 0x10));
    if ((iVar1 == 1) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), malloc_thunk((int)((undefined1 *)(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) * 0x800 + 8,ar5_00,ar6,ar7)),
       ain0 = ((undefined1 *)(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)), iVar1 != 0)) {
      ar6 = iVar1;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1f31c6(ar4_00,((undefined1 *)(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),iVar1,ar7));
      if (iVar2 == 0) {
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c1f309c(ar4_00,((undefined1 *)(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),ar6,ar7); });
        return iVar1;
      }
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1fb57c(iVar1,((undefined1 *)(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),ar6,ar7));
      ar5_00 = ((undefined1 *)(unsigned long)*(le<unsigned>* )(fr0_ - 0x10));
    }
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c1f309c(ar4_00,ar5_00,ar6,ar7); });
  }
  return 0;
}

__asm__(".globl FUN_8c212440\n.set FUN_8c212440, FUN_8c212440_def\n");

}
//@unit 8c2124aa
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
uint FUN_8c2124aa_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2124aa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 << 0x18 | (0xff00 & ar4) << 8 | (0xff0000 & ar4) >> 8 |
         (0xff000000 & ar4) >> 0x18;
}

__asm__(".globl FUN_8c2124aa\n.set FUN_8c2124aa, FUN_8c2124aa_def\n");

}
//@unit 8c2124d0
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
undefined4 FUN_8c2124d0_def(int ar4,le<int>* ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2124d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined *puVar1;
  uint uVar2;
  le<int>* piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = ((void *)(unsigned)0x8c23c814);
  iVar6 = *ar5 + ar4;
  iVar5 = 0;
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c23c814(&(*(le<int>* )(fr0_ - 0x30)),iVar6,4,ar7));
  iVar7 = iVar6 + 4;
  uVar4 = 4;
  (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(&(*(le<int>* )(fr0_ - 0x34)),iVar7,4,ar7));
  *ar5 = *ar5 + 8;
  (*(le<int>* )(fr0_ - 0x30)) = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c2124aa((*(le<int>* )(fr0_ - 0x30)),iVar7,uVar4,ar7));
  if ((*(le<int>* )(fr0_ - 0x30)) == 0x4e4a494e) {
    *ar6 = 0x4e4a494e;
    goto LAB_8c212588;
  }
  iVar8 = 0x4e4a434d;
  if ((*(le<int>* )(fr0_ - 0x30)) != 0x4e4a434d) {
    iVar8 = 0x4e4a424d;
    if ((*(le<int>* )(fr0_ - 0x30)) == 0x4e4a424d) {
LAB_8c212580:
      *ar6 = iVar8;
      goto LAB_8c212588;
    }
    iVar8 = 0x4e4a544c;
    if ((*(le<int>* )(fr0_ - 0x30)) != 0x4e4a544c) {
      iVar8 = 0x4e4a4c49;
      if ((*(le<int>* )(fr0_ - 0x30)) == 0x4e4a4c49) goto LAB_8c212580;
      iVar8 = 0x4e4a4341;
      if ((*(le<int>* )(fr0_ - 0x30)) != 0x4e4a4341) {
        iVar8 = 0x4e4d444d;
        if ((*(le<int>* )(fr0_ - 0x30)) == 0x4e4d444d) goto LAB_8c212580;
        iVar8 = 0x4e4c494d;
        if ((*(le<int>* )(fr0_ - 0x30)) != 0x4e4c494d) {
          iVar8 = 0x4e43414d;
          if ((*(le<int>* )(fr0_ - 0x30)) == 0x4e43414d) goto LAB_8c212580;
          iVar8 = 0x4e53534d;
          if ((*(le<int>* )(fr0_ - 0x30)) != 0x4e53534d) {
            *ar6 = 0x2a2a2a2a;
            return 0;
          }
        }
      }
    }
  }
  *ar6 = iVar8;
LAB_8c212588:
  iVar7 = (vsp = ((unsigned long)(fr0_ - 52)), malloc_thunk((*(le<int>* )(fr0_ - 0x34)),iVar7,uVar4,ar7));
  if (iVar7 == 0) {
    return 0;
  }
  (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(iVar7,iVar6 + 8,(*(le<int>* )(fr0_ - 0x34)),ar7));
  iVar8 = iVar6 + 8 + (*(le<int>* )(fr0_ - 0x34));
  *ar5 = *ar5 + (*(le<int>* )(fr0_ - 0x34));
  uVar4 = 4;
  iVar6 = iVar8;
  (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(&(*(le<int>* )(fr0_ - 0x30)),iVar8,4,ar7));
  *ar5 = *ar5 + 4;
  (*(le<int>* )(fr0_ - 0x30)) = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c2124aa((*(le<int>* )(fr0_ - 0x30)),iVar6,uVar4,ar7));
  if ((*(le<int>* )(fr0_ - 0x30)) != 0x504f4630) {
    return iVar7;
  }
  (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(&(*(le<int>* )(fr0_ - 0x34)),iVar8 + 4,4,ar7));
  *ar5 = *ar5 + 4;
  iVar6 = iVar8 + 8;
  while( true ) {
    do {
      iVar8 = iVar6;
      if ((*(le<int>* )(fr0_ - 0x34)) == 0) {
        return iVar7;
      }
      (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(((byte *)(fr0_ - 0x28)),iVar8,1,ar7));
      uVar2 = (uint)0xc0;
      iVar6 = iVar8 + 1;
      *ar5 = *ar5 + 1;
      (*(le<int>* )(fr0_ - 0x34)) = (*(le<int>* )(fr0_ - 0x34)) + -1;
      uVar2 = ((byte *)(fr0_ - 0x28))[0] & uVar2;
    } while (uVar2 == 0);
    if (uVar2 == 0x40) break;
    if (uVar2 == (int)0x80) {
      (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(((byte *)(fr0_ - 0x2c)),iVar6,1,ar7));
      iVar6 = iVar8 + 2;
      (*(le<int>* )(fr0_ - 0x34)) = (*(le<int>* )(fr0_ - 0x34)) + -1;
      *ar5 = *ar5 + 1;
      uVar2 = (((byte *)(fr0_ - 0x28))[0] & 0x3f) << 8 | (uint)((byte *)(fr0_ - 0x2c))[0];
      goto LAB_8c21270c;
    }
    if (uVar2 == (int)0xc0) {
      (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(((byte *)(fr0_ - 0x2c)),iVar6,1,ar7));
      (*(le<int>* )(fr0_ - 0x34)) = (*(le<int>* )(fr0_ - 0x34)) + -1;
      (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(((byte *)(fr0_ - 0x20)),iVar8 + 2,1,ar7));
      (*(le<int>* )(fr0_ - 0x34)) = (*(le<int>* )(fr0_ - 0x34)) + -1;
      (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(((byte *)(fr0_ - 0x24)),iVar8 + 3,1,ar7));
      iVar6 = iVar8 + 4;
      (*(le<int>* )(fr0_ - 0x34)) = (*(le<int>* )(fr0_ - 0x34)) + -1;
      *ar5 = *ar5 + 3;
      uVar2 = (((byte *)(fr0_ - 0x28))[0] & 0x3f) << 0x18 | (uint)((byte *)(fr0_ - 0x2c))[0] << 0x10 |
              (uint)((byte *)(fr0_ - 0x20))[0] << 8 | (uint)((byte *)(fr0_ - 0x24))[0];
LAB_8c21270c:
      iVar5 = iVar5 + uVar2 * 4;
      piVar3 = (le<int>* )(unsigned)(iVar7 + iVar5);
      if (*piVar3 != 0) {
        *piVar3 = *piVar3 + iVar7;
      }
    }
  }
  uVar2 = ((byte *)(fr0_ - 0x28))[0] & 0x3f;
  goto LAB_8c21270c;
}

__asm__(".globl FUN_8c2124d0\n.set FUN_8c2124d0, FUN_8c2124d0_def\n");

}
//@unit 8c212740
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c212740_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c212740");
  return (unsigned)sh4_interp(0x8c212740, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c212740\n.set FUN_8c212740, FUN_8c212740_def\n");
}
//@unit 8c21279c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21279c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21279c");
  return (unsigned)sh4_interp(0x8c21279c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21279c\n.set FUN_8c21279c, FUN_8c21279c_def\n");
}
//@unit 8c212808
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c212808_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c212808");
  return (unsigned)sh4_interp(0x8c212808, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c212808\n.set FUN_8c212808, FUN_8c212808_def\n");
}
//@unit 8c212898
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c212898_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c212898");
  return (unsigned)sh4_interp(0x8c212898, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c212898\n.set FUN_8c212898, FUN_8c212898_def\n");
}
//@unit 8c212946
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c212946_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c212946");
  return (unsigned)sh4_interp(0x8c212946, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c212946\n.set FUN_8c212946, FUN_8c212946_def\n");
}
//@unit 8c212a30
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c212a30_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c212a30");
  return (unsigned)sh4_interp(0x8c212a30, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c212a30\n.set FUN_8c212a30, FUN_8c212a30_def\n");
}
//@unit 8c2136b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2136b0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2136b0");
  return (unsigned)sh4_interp(0x8c2136b0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2136b0\n.set FUN_8c2136b0, FUN_8c2136b0_def\n");
}
//@unit 8c2137c0
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
undefined4 FUN_8c2137c0_def(le<uint>* ar4,uint ar5,uint ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c2137c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar2 = ar7 & 0xff;
  uVar5 = 0;
  uVar3 = (uint)0x1000;
  uVar4 = 0xff00 & ar7;
  *ar4 = ar7 << 0x10;
  if ((uVar4 == uVar3) || (uVar4 == (int)0x1100)) {
    uVar3 = *ar4 | 3;
  }
  else {
    uVar3 = *ar4 | 2;
  }
  uVar1 = (uint)0x500;
  *ar4 = uVar3;
  ar4[1] = 1;
  uVar3 = 0x28000000;
  if ((uVar4 == uVar1) || (uVar4 == (int)0x600)) goto LAB_8c21384c;
  uVar3 = 0x30000000;
  if ((uVar4 == (int)0x700) || (uVar4 == (int)0x800)) goto LAB_8c213852;
  if (uVar2 == 0) {
    ar4[2] = 0;
    goto LAB_8c213882;
  }
  uVar3 = 0x8000000;
  if (uVar2 == 1) {
LAB_8c21384c:
    ar4[2] = uVar3;
  }
  else {
    uVar3 = 0x10000000;
    if (uVar2 != 2) {
      uVar3 = 0x18000000;
      if (uVar2 == 3) goto LAB_8c21384c;
      uVar3 = 0x20000000;
      if (uVar2 != 4) {
        uVar5 = 4;
        goto LAB_8c213882;
      }
    }
LAB_8c213852:
    ar4[2] = uVar3;
  }
LAB_8c213882:
  ar4[3] = ar5;
  ar4[4] = ar6;
  if ((((ar5 != 8) && (ar5 != 0x10)) && (ar5 != 0x20)) &&
     (((ar5 != 0x40 && (ar5 != (int)0x80)) &&
      ((ar5 != (int)0x100 && ((ar5 != (int)0x200 && (ar5 != (int)0x400))))))))
  {
    uVar5 = 4;
  }
  if (((((ar6 != 8) && (ar6 != 0x10)) && (ar6 != 0x20)) &&
      ((ar6 != 0x40 && (ar6 != (int)0x80)))) &&
     ((ar6 != (int)0x100 && ((ar6 != (int)0x200 && (ar6 != (int)0x400)))))) {
    uVar5 = 4;
  }
  if (((((uVar4 != (int)0x900) && (uVar4 != (int)0xb00)) &&
       (uVar4 != (int)0xd00)) &&
      ((uVar4 != (int)0x500 && (uVar4 != (int)0x700)))) && (ar5 != ar6)) {
    uVar5 = 4;
  }
  uVar2 = (uint)0xf00;
  ar4[6] = 0;
  if (((uVar4 == uVar2) || (uVar4 == (int)0x200)) ||
     ((uVar4 == (int)0x400 ||
      (((uVar4 == (int)0x1100 || (uVar4 == (int)0x600)) || (uVar4 == (int)0x800)
       ))))) {
    ar4[6] = ar4[6] | 1;
  }
  if (((uVar4 == (int)0xe00) || (uVar4 == (int)0xf00)) ||
     ((uVar4 == (int)0x100 || ((uVar4 == (int)0x200 || (uVar4 == (int)0xd00))))
     )) {
    ar4[6] = ar4[6] | 4;
  }
  if ((((uVar4 == (int)0x300) || (uVar4 == (int)0x400)) ||
      (uVar4 == (int)0x1000)) || (uVar4 == (int)0x1100)) {
    ar4[6] = ar4[6] | 0xc;
  }
  if (uVar4 == (int)0xb00) {
    ar4[6] = ar4[6] | 0x10;
  }
  if (((uVar4 == (int)0x500) || (uVar4 == (int)0x600)) ||
     ((uVar4 == (int)0x700 || (uVar4 == (int)0x800)))) {
    ar4[6] = ar4[6] | 0x24;
  }
  if (uVar4 == (int)0x1200) {
    ar4[6] = ar4[6] | 5;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213a76(ar4,ar5,ar6,4));
  ar4[5] = uVar2;
  return uVar5;
}

__asm__(".globl FUN_8c2137c0\n.set FUN_8c2137c0, FUN_8c2137c0_def\n");

}
//@unit 8c213a04
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
undefined4 FUN_8c213a04_def(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c213a04");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  if (ar5 <= ar4) {
    ar4 = ar5;
  }
  if (ar4 == 1) {
    return 0;
  }
  if (ar4 == 2) {
    return 1;
  }
  if (ar4 == 4) {
    return 2;
  }
  if (ar4 == 8) {
    return 3;
  }
  if (ar4 == 0x10) {
    return 4;
  }
  if (ar4 == 0x20) {
    return 5;
  }
  if (ar4 != 0x40) {
    if (ar4 == (int)0x80) {
      return 7;
    }
    if (ar4 == (int)0x100) {
      return 8;
    }
    if (ar4 == (int)0x200) {
      return 9;
    }
    if (ar4 != (int)0x400) {
      return 0xffffffff;
    }
    return 10;
  }
  return 6;
}

__asm__(".globl FUN_8c213a04\n.set FUN_8c213a04, FUN_8c213a04_def\n");

}
//@unit 8c213a76
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
undefined4 FUN_8c213a76_def(le<uint>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c213a76");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if ((*ar4 & 0xffff) == 3) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213de4(ar4,ar5,ar6,ar7));
  }
  else if ((ar4[6] & 8) == 0) {
    if ((ar4[6] & 0x20) == 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213d0e(ar4,ar5,ar6,ar7));
    }
    else {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213d8a(ar4,ar5,ar6,ar7));
    }
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213d3e(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c213a76\n.set FUN_8c213a76, FUN_8c213a76_def\n");

}
//@unit 8c213ab6
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
undefined4 FUN_8c213ab6_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c213ab6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213a04(ar4,ar5,ar6,ar7));
  uVar3 = ar4 * ar5;
  uVar2 = ar6 & 0xff00;
  iVar1 = iVar1 * 4;
  if ((((uVar2 == 0x100) || (uVar2 == 0xd00)) || (uVar2 == 0x900)) || (uVar2 == 0xb00)) {
    return uVar3 * 2;
  }
  if (uVar2 == 0x200) {
    return *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar1);
  }
  if (uVar2 != 0x300) {
    if (uVar2 == 0x1000) {
      uVar2 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277ce0) + iVar1) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d18) + iVar1);
    }
    else if (uVar2 == 0x400) {
      uVar2 = (*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar1) + 4U >> 3) + 0x800;
    }
    else if (uVar2 == 0x1100) {
      uVar2 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277cfc) + iVar1) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d34) + iVar1);
    }
    else {
      if (uVar2 == 0x500) {
        return uVar3 >> 1;
      }
      if (uVar2 == 0x600) {
        uVar2 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar1) + 4U >> 2;
      }
      else {
        if (uVar2 == 0x700) {
          return uVar3;
        }
        if (uVar2 != 0x800) {
          return 0;
        }
        uVar2 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar1) + 4U >> 1;
      }
    }
    return uVar2;
  }
  return (uVar3 >> 2) + 0x800;
}

__asm__(".globl FUN_8c213ab6\n.set FUN_8c213ab6, FUN_8c213ab6_def\n");

}
//@unit 8c213bf4
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
uint FUN_8c213bf4_def(le<uint>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c213bf4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = ar4[1];
  uVar3 = *ar4;
  uVar1 = *(le<ushort>* )(unsigned)((int)ar4 + 6);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213a04((uint)(ushort)uVar4,(uint)uVar1,ar6,ar7));
  uVar4 = (uint)(ushort)uVar4 * (uint)uVar1;
  uVar3 = uVar3 & 0xff00;
  iVar2 = iVar2 * 4;
  if ((((uVar3 == 0x100) || (uVar3 == 0xd00)) || (uVar3 == 0x900)) || (uVar3 == 0xb00)) {
    uVar4 = uVar4 * 2;
  }
  else if (uVar3 == 0x200) {
    uVar4 = *(le<uint>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar2);
  }
  else if (uVar3 == 0x300) {
    uVar4 = (uVar4 >> 2) + 0x800;
  }
  else if (uVar3 == 0x1000) {
    uVar4 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277ce0) + iVar2) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d18) + iVar2);
  }
  else if (uVar3 == 0x400) {
    uVar4 = (*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar2) + 4U >> 3) + 0x800;
  }
  else if (uVar3 == 0x1100) {
    uVar4 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277cfc) + iVar2) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d34) + iVar2);
  }
  else if (uVar3 == 0x500) {
    uVar4 = uVar4 >> 1;
  }
  else if (uVar3 == 0x600) {
    uVar4 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar2) + 4U >> 2;
  }
  else if (uVar3 != 0x700) {
    if (uVar3 == 0x800) {
      uVar4 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar2) + 4U >> 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

__asm__(".globl FUN_8c213bf4\n.set FUN_8c213bf4, FUN_8c213bf4_def\n");

}
//@unit 8c213d0e
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
int FUN_8c213d0e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c213d0e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if ((*(le<uint>* )(unsigned)(ar4 + 0x18) & 1) == 0) {
    iVar1 = *(le<int>* )(unsigned)(ar4 + 0xc) * *(le<int>* )(unsigned)(ar4 + 0x10) * 2;
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213a04(*(le<int>* )(unsigned)(ar4 + 0xc),*(le<int>* )(unsigned)(ar4 + 0x10),ar6,ar7));
    iVar1 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar1 * 4) + 4;
  }
  return iVar1;
}

__asm__(".globl FUN_8c213d0e\n.set FUN_8c213d0e, FUN_8c213d0e_def\n");

}
//@unit 8c213d12
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
int FUN_8c213d12_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c213d12");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int unaff_r14 = 0;
  
  if ((*(le<uint>* )(unsigned)(unaff_r14 + 0x18) & 1) == 0) {
    iVar1 = *(le<int>* )(unsigned)(unaff_r14 + 0xc) * *(le<int>* )(unsigned)(unaff_r14 + 0x10) * 2;
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213a04(*(le<int>* )(unsigned)(unaff_r14 + 0xc),*(le<int>* )(unsigned)(unaff_r14 + 0x10),ar6,ar7));
    iVar1 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar1 * 4) + 4;
  }
  return iVar1;
}

__asm__(".globl FUN_8c213d12\n.set FUN_8c213d12, FUN_8c213d12_def\n");

}
//@unit 8c213d3e
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
int FUN_8c213d3e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c213d3e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  
  if ((*(le<uint>* )(unsigned)(ar4 + 0x18) & 1) == 0) {
    uVar2 = (uint)(*(le<int>* )(unsigned)(ar4 + 0xc) * *(le<int>* )(unsigned)(ar4 + 0x10)) >> 2;
    if ((*(le<int>* )(unsigned)(ar4 + 0xc) == 8) && (*(le<int>* )(unsigned)(ar4 + 0x10) == 8)) {
      uVar2 = uVar2 + 0x10;
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213a04(*(le<int>* )(unsigned)(ar4 + 0xc),*(le<int>* )(unsigned)(ar4 + 0x10),ar6,ar7));
    uVar2 = (*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar1 * 4) + 4U >> 3) + 10;
  }
  return uVar2 + 0x800;
}

__asm__(".globl FUN_8c213d3e\n.set FUN_8c213d3e, FUN_8c213d3e_def\n");

}
//@unit 8c213d8a
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
uint FUN_8c213d8a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c213d8a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  
  if ((*(le<uint>* )(unsigned)(ar4 + 0x18) & 1) == 0) {
    uVar2 = *(le<int>* )(unsigned)(ar4 + 0xc) * *(le<int>* )(unsigned)(ar4 + 0x10);
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213a04(*(le<int>* )(unsigned)(ar4 + 0xc),*(le<int>* )(unsigned)(ar4 + 0x10),ar6,ar7));
    uVar2 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar1 * 4) + 4U >> 1;
    if (*(le<int>* )(unsigned)(ar4 + 8) == 0x28000000) {
      uVar2 = uVar2 + 0x28;
    }
    else {
      uVar2 = uVar2 + 8;
    }
  }
  if (*(le<int>* )(unsigned)(ar4 + 8) == 0x28000000) {
    uVar2 = uVar2 >> 1;
  }
  return uVar2;
}

__asm__(".globl FUN_8c213d8a\n.set FUN_8c213d8a, FUN_8c213d8a_def\n");

}
//@unit 8c213d8e
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
uint FUN_8c213d8e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c213d8e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int unaff_r14 = 0;
  
  if ((*(le<uint>* )(unsigned)(unaff_r14 + 0x18) & 1) == 0) {
    uVar2 = *(le<int>* )(unsigned)(unaff_r14 + 0xc) * *(le<int>* )(unsigned)(unaff_r14 + 0x10);
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213a04(*(le<int>* )(unsigned)(unaff_r14 + 0xc),*(le<int>* )(unsigned)(unaff_r14 + 0x10),ar6,ar7));
    uVar2 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar1 * 4) + 4U >> 1;
    if (*(le<int>* )(unsigned)(unaff_r14 + 8) == 0x28000000) {
      uVar2 = uVar2 + 0x28;
    }
    else {
      uVar2 = uVar2 + 8;
    }
  }
  if (*(le<int>* )(unsigned)(unaff_r14 + 8) == 0x28000000) {
    uVar2 = uVar2 >> 1;
  }
  return uVar2;
}

__asm__(".globl FUN_8c213d8e\n.set FUN_8c213d8e, FUN_8c213d8e_def\n");

}
//@unit 8c213de4
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
int FUN_8c213de4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c213de4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213a04(*(le<undefined4>* )(unsigned)(ar4 + 0xc),*(le<undefined4>* )(unsigned)(ar4 + 0x10),ar6,ar7));
  iVar1 = iVar1 * 4;
  if ((*(le<uint>* )(unsigned)(ar4 + 0x18) & 1) == 0) {
    iVar1 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277ce0) + iVar1) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d18) + iVar1);
  }
  else {
    iVar1 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277cfc) + iVar1) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d34) + iVar1) + 10;
  }
  return iVar1;
}

__asm__(".globl FUN_8c213de4\n.set FUN_8c213de4, FUN_8c213de4_def\n");

}
//@unit 8c213de8
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
int FUN_8c213de8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c213de8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int unaff_r14 = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213a04(*(le<undefined4>* )(unsigned)(unaff_r14 + 0xc),*(le<undefined4>* )(unsigned)(unaff_r14 + 0x10),ar6,ar7));
  iVar1 = iVar1 * 4;
  if ((*(le<uint>* )(unsigned)(unaff_r14 + 0x18) & 1) == 0) {
    iVar1 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277ce0) + iVar1) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d18) + iVar1);
  }
  else {
    iVar1 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277cfc) + iVar1) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d34) + iVar1) + 10;
  }
  return iVar1;
}

__asm__(".globl FUN_8c213de8\n.set FUN_8c213de8, FUN_8c213de8_def\n");

}
//@unit 8c213e2c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c213e2c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c213e2c");
  return (unsigned)sh4_interp(0x8c213e2c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c213e2c\n.set FUN_8c213e2c, FUN_8c213e2c_def\n");
}
//@unit 8c213e32
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c213e32_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c213e32");
  return (unsigned)sh4_interp(0x8c213e32, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c213e32\n.set FUN_8c213e32, FUN_8c213e32_def\n");
}
//@unit 8c213ee4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c213ee4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c213ee4");
  return (unsigned)sh4_interp(0x8c213ee4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c213ee4\n.set FUN_8c213ee4, FUN_8c213ee4_def\n");
}
//@unit 8c213f28
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c213f28_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c213f28");
  return (unsigned)sh4_interp(0x8c213f28, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c213f28\n.set FUN_8c213f28, FUN_8c213f28_def\n");
}
//@unit 8c2140a4
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
int FUN_8c2140a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2140a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  
  puVar1 = ((undefined1 *)(fr0_ - 0x20));
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0107a0(0x1c,((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(unsigned)0x8c26d748),vr7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0db0) = *(le<undefined4>* )(unsigned)(puVar1 + ar4 * 4);
  return ar4 * 4;
}

__asm__(".globl FUN_8c2140a4\n.set FUN_8c2140a4, FUN_8c2140a4_def\n");

}
//@unit 8c2140c6
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
uint FUN_8c2140c6_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2140c6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0107a0(0x1c,((le<uint>* )(fr0_ - 0x20)),((undefined1 *)(unsigned)0x8c26d764),vr7));
  if (ar5 == 0) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0db0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0db0) & ~((le<uint>* )(fr0_ - 0x20))[ar4];
  }
  else {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0db0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0db0) | ((le<uint>* )(fr0_ - 0x20))[ar4];
  }
  return (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0db0);
}

__asm__(".globl FUN_8c2140c6\n.set FUN_8c2140c6, FUN_8c2140c6_def\n");

}
//@unit 8c2140fe
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2140fe_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2140fe");
  return (unsigned)sh4_interp(0x8c2140fe, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2140fe\n.set FUN_8c2140fe, FUN_8c2140fe_def\n");
}
//@unit 8c21410c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21410c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21410c");
  return (unsigned)sh4_interp(0x8c21410c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21410c\n.set FUN_8c21410c, FUN_8c21410c_def\n");
}
//@unit 8c214158
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c214158_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c214158");
  return (unsigned)sh4_interp(0x8c214158, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c214158\n.set FUN_8c214158, FUN_8c214158_def\n");
}
//@unit 8c21415c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21415c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21415c");
  return (unsigned)sh4_interp(0x8c21415c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21415c\n.set FUN_8c21415c, FUN_8c21415c_def\n");
}
//@unit 8c21418e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21418e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21418e");
  return (unsigned)sh4_interp(0x8c21418e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21418e\n.set FUN_8c21418e, FUN_8c21418e_def\n");
}
//@unit 8c2141a6
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
undefined4 FUN_8c2141a6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2141a6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  puVar2 = ((void *)(unsigned)0x8c21279c);
  puVar1 = ((void *)(unsigned)0x8c212740);
  uVar5 = *(le<uint>* )(unsigned)(0x8c4c0d60 + 0x50);
  iVar3 = 0x8c4c0dc0;
  iVar4 = 0x8c4c0d60;
  while( true ) {
    if ((uVar5 & 1) != 0) {
      if ((uVar5 >> 1 & 1) == 0) {
        in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(0,iVar4,iVar3,vr7));
      }
      else {
        in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(0,iVar4,iVar3,vr7));
      }
    }
    if ((uVar5 >> 2 & 1) != 0) break;
    iVar4 = iVar4 + 0xc;
    uVar5 = uVar5 >> 3;
    iVar3 = iVar3 + 0x20;
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c2141a6\n.set FUN_8c2141a6, FUN_8c2141a6_def\n");

}
//@unit 8c2141ba
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
undefined4 FUN_8c2141ba_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2141ba");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  uint unaff_r11 = 0;
  int a6;
  le<uint>* unaff_r14 = 0;
  uint uVar3;
  
  puVar2 = ((void *)(unsigned)0x8c21279c);
  puVar1 = ((void *)(unsigned)0x8c212740);
  uVar3 = *unaff_r14;
  a6 = 0x8c4c0dc0;
  while( true ) {
    if ((uVar3 & unaff_r11) != 0) {
      if ((uVar3 >> 1 & 1) == 0) {
        in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(0,ar4,a6,ar7));
      }
      else {
        in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(0,ar4,a6,ar7));
      }
    }
    if ((uVar3 >> 2 & 1) != 0) break;
    ar4 = ar4 + 0xc;
    uVar3 = uVar3 >> 3;
    a6 = a6 + 0x20;
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c2141ba\n.set FUN_8c2141ba, FUN_8c2141ba_def\n");

}
//@unit 8c21423c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21423c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21423c");
  return (unsigned)sh4_interp(0x8c21423c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21423c\n.set FUN_8c21423c, FUN_8c21423c_def\n");
}
//@unit 8c214358
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c214358_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c214358");
  return (unsigned)sh4_interp(0x8c214358, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c214358\n.set FUN_8c214358, FUN_8c214358_def\n");
}
//@unit 8c214554
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c214554_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c214554");
  return (unsigned)sh4_interp(0x8c214554, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c214554\n.set FUN_8c214554, FUN_8c214554_def\n");
}
//@unit 8c21496c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21496c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21496c");
  return (unsigned)sh4_interp(0x8c21496c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21496c\n.set FUN_8c21496c, FUN_8c21496c_def\n");
}
//@unit 8c214aec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c214aec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c214aec");
  return (unsigned)sh4_interp(0x8c214aec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c214aec\n.set FUN_8c214aec, FUN_8c214aec_def\n");
}
//@unit 8c214d6c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c214d6c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c214d6c");
  return (unsigned)sh4_interp(0x8c214d6c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c214d6c\n.set FUN_8c214d6c, FUN_8c214d6c_def\n");
}
//@unit 8c215250
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c215250_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c215250");
  return (unsigned)sh4_interp(0x8c215250, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c215250\n.set FUN_8c215250, FUN_8c215250_def\n");
}
//@unit 8c215374
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c215374_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c215374");
  return (unsigned)sh4_interp(0x8c215374, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c215374\n.set FUN_8c215374, FUN_8c215374_def\n");
}
//@unit 8c2154dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2154dc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2154dc");
  return (unsigned)sh4_interp(0x8c2154dc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2154dc\n.set FUN_8c2154dc, FUN_8c2154dc_def\n");
}
//@unit 8c215674
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c215674_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c215674");
  return (unsigned)sh4_interp(0x8c215674, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c215674\n.set FUN_8c215674, FUN_8c215674_def\n");
}
//@unit 8c2157c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2157c8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2157c8");
  return (unsigned)sh4_interp(0x8c2157c8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2157c8\n.set FUN_8c2157c8, FUN_8c2157c8_def\n");
}
//@unit 8c215988
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c215988_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c215988");
  return (unsigned)sh4_interp(0x8c215988, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c215988\n.set FUN_8c215988, FUN_8c215988_def\n");
}
//@unit 8c215b74
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c215b74_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c215b74");
  return (unsigned)sh4_interp(0x8c215b74, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c215b74\n.set FUN_8c215b74, FUN_8c215b74_def\n");
}
//@unit 8c215c48
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c215c48_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c215c48");
  return (unsigned)sh4_interp(0x8c215c48, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c215c48\n.set FUN_8c215c48, FUN_8c215c48_def\n");
}
//@unit 8c215c4a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c215c4a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c215c4a");
  return (unsigned)sh4_interp(0x8c215c4a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c215c4a\n.set FUN_8c215c4a, FUN_8c215c4a_def\n");
}
//@unit 8c215e10
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c215e10_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c215e10");
  return (unsigned)sh4_interp(0x8c215e10, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c215e10\n.set FUN_8c215e10, FUN_8c215e10_def\n");
}
//@unit 8c2162bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2162bc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2162bc");
  return (unsigned)sh4_interp(0x8c2162bc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2162bc\n.set FUN_8c2162bc, FUN_8c2162bc_def\n");
}
//@unit 8c2163d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2163d4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2163d4");
  return (unsigned)sh4_interp(0x8c2163d4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2163d4\n.set FUN_8c2163d4, FUN_8c2163d4_def\n");
}
//@unit 8c2166e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2166e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2166e8");
  return (unsigned)sh4_interp(0x8c2166e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2166e8\n.set FUN_8c2166e8, FUN_8c2166e8_def\n");
}
//@unit 8c216b84
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c216b84_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c216b84");
  return (unsigned)sh4_interp(0x8c216b84, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c216b84\n.set FUN_8c216b84, FUN_8c216b84_def\n");
}
//@unit 8c216ed0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c216ed0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c216ed0");
  return (unsigned)sh4_interp(0x8c216ed0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c216ed0\n.set FUN_8c216ed0, FUN_8c216ed0_def\n");
}
//@unit 8c216ed2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c216ed2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c216ed2");
  return (unsigned)sh4_interp(0x8c216ed2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c216ed2\n.set FUN_8c216ed2, FUN_8c216ed2_def\n");
}
//@unit 8c2170f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2170f4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2170f4");
  return (unsigned)sh4_interp(0x8c2170f4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2170f4\n.set FUN_8c2170f4, FUN_8c2170f4_def\n");
}
//@unit 8c217618
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c217618_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c217618");
  return (unsigned)sh4_interp(0x8c217618, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c217618\n.set FUN_8c217618, FUN_8c217618_def\n");
}
//@unit 8c21768c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21768c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21768c");
  return (unsigned)sh4_interp(0x8c21768c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21768c\n.set FUN_8c21768c, FUN_8c21768c_def\n");
}
//@unit 8c217744
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c217744_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c217744");
  return (unsigned)sh4_interp(0x8c217744, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c217744\n.set FUN_8c217744, FUN_8c217744_def\n");
}
//@unit 8c2177b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2177b8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2177b8");
  return (unsigned)sh4_interp(0x8c2177b8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2177b8\n.set FUN_8c2177b8, FUN_8c2177b8_def\n");
}
//@unit 8c21782c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21782c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21782c");
  return (unsigned)sh4_interp(0x8c21782c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21782c\n.set FUN_8c21782c, FUN_8c21782c_def\n");
}
//@unit 8c2178a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2178a0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2178a0");
  return (unsigned)sh4_interp(0x8c2178a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2178a0\n.set FUN_8c2178a0, FUN_8c2178a0_def\n");
}
//@unit 8c217924
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c217924_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c217924");
  return (unsigned)sh4_interp(0x8c217924, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c217924\n.set FUN_8c217924, FUN_8c217924_def\n");
}
//@unit 8c2179e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2179e4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2179e4");
  return (unsigned)sh4_interp(0x8c2179e4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2179e4\n.set FUN_8c2179e4, FUN_8c2179e4_def\n");
}
//@unit 8c217aa4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c217aa4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c217aa4");
  return (unsigned)sh4_interp(0x8c217aa4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c217aa4\n.set FUN_8c217aa4, FUN_8c217aa4_def\n");
}
//@unit 8c217b18
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c217b18_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c217b18");
  return (unsigned)sh4_interp(0x8c217b18, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c217b18\n.set FUN_8c217b18, FUN_8c217b18_def\n");
}
//@unit 8c217c20
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c217c20_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c217c20");
  return (unsigned)sh4_interp(0x8c217c20, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c217c20\n.set FUN_8c217c20, FUN_8c217c20_def\n");
}
//@unit 8c217d1c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c217d1c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c217d1c");
  return (unsigned)sh4_interp(0x8c217d1c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c217d1c\n.set FUN_8c217d1c, FUN_8c217d1c_def\n");
}
//@unit 8c217e18
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c217e18_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c217e18");
  return (unsigned)sh4_interp(0x8c217e18, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c217e18\n.set FUN_8c217e18, FUN_8c217e18_def\n");
}
//@unit 8c217ebc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c217ebc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c217ebc");
  return (unsigned)sh4_interp(0x8c217ebc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c217ebc\n.set FUN_8c217ebc, FUN_8c217ebc_def\n");
}
//@unit 8c217ef4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c217ef4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c217ef4");
  return (unsigned)sh4_interp(0x8c217ef4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c217ef4\n.set FUN_8c217ef4, FUN_8c217ef4_def\n");
}
//@unit 8c217f02
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c217f02_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c217f02");
  return (unsigned)sh4_interp(0x8c217f02, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c217f02\n.set FUN_8c217f02, FUN_8c217f02_def\n");
}
//@unit 8c217f12
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c217f12_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c217f12");
  return (unsigned)sh4_interp(0x8c217f12, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c217f12\n.set FUN_8c217f12, FUN_8c217f12_def\n");
}
//@unit 8c21849c
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
uint FUN_8c21849c_def(le<short>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21849c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  short sVar2;
  le<int>* piVar3;
  int iVar4;
  le<undefined4>* puVar5;
  uint uVar6;
  le<uint>* puVar7;
  le<uint>* puVar8;
  le<int>* piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint ar5_00;
  uint unaff_r12 = 0;
  int iVar13;
  
  iVar4 = 0x8c4ab158;
  piVar3 = 0x8c4c0fa0;
  ar5_00 = ar5;
  while( true ) {
    puVar5 = 0x8c4c0fa4;
    uVar12 = (uint)*ar4;
    if (uVar12 == (int)0xff) break;
    uVar1 = ar4[1];
    sVar2 = ar4[2];
    iVar13 = (int)ar4[3];
    if ((0x8000 & uVar12) == 0) {
      *piVar3 = 0;
      *puVar5 = 0;
    }
    uVar6 = 0xe0000000;
    uVar10 = 0xffff7fff;
    *(le<int>* )(unsigned)(iVar4 + 0x14) = iVar13;
    puVar7 = 0xff00003c;
    unaff_r12 = uVar12 & uVar10;
    *(le<unsigned>* )(unsigned)(iVar4 + 0x18) = ar4 + 4;
    uVar12 = 0x3ffffff;
    uVar10 = sVar2 * 0x10 + ar5;
    *(le<uint>* )(unsigned)(iVar4 + 0x1c) = uVar10;
    puVar8 = 0xff000038;
    *(le<uint>* )(unsigned)(iVar4 + 0x20) = uVar12 & uVar10 | uVar6;
    piVar9 = 0x8c4aa518;
    uVar12 = uVar10 >> 0x18 & 0x1c;
    *puVar7 = uVar12;
    *puVar8 = uVar12;
    *piVar9 = *piVar9 + iVar13;
    switch(unaff_r12 & 0xff) {
    case 0x20:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c217618(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    case 0x21:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21768c(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    case 0x22:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c217744(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    case 0x23:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21782c(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2177b8(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    case 0x28:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2178a0(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    case 0x29:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c217924(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    case 0x2a:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c217aa4(0x8c4ab158,ar5_00,ar6,ar7));
      unaff_r12 = 0x23;
      break;
    case 0x2b:
    case 0x2d:
    case 0x2e:
    case 0x2f:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2179e4(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    case 0x2c:
      ar5_00 = unaff_r12;
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c217b18(0x8c4ab158,unaff_r12,ar6,ar7));
      break;
    case 0x30:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c217c20(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    case 0x31:
    case 0x32:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c217d1c(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    default:
      iVar11 = 0;
    }
    uVar12 = 0xff00;
    *piVar3 = *piVar3 + iVar11;
    if (((uVar12 & unaff_r12) == (int)0x200) || ((unaff_r12 & 0xff) != 0x2c)) {
      *(le<undefined4>* )(unsigned)0x8c4c0fa4 = *(le<undefined4>* )(unsigned)0x8c4c0fa4 + iVar13;
    }
    ar4 = ar4 + 4 + (uint)uVar1 * 2 + -2;
  }
  return unaff_r12 = 0;
}

__asm__(".globl FUN_8c21849c\n.set FUN_8c21849c, FUN_8c21849c_def\n");

}
//@unit 8c21869c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21869c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21869c");
  return (unsigned)sh4_interp(0x8c21869c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21869c\n.set FUN_8c21869c, FUN_8c21869c_def\n");
}
//@unit 8c2186a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2186a0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2186a0");
  return (unsigned)sh4_interp(0x8c2186a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2186a0\n.set FUN_8c2186a0, FUN_8c2186a0_def\n");
}
//@unit 8c2186f8
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
undefined4 FUN_8c2186f8_def(le<uint>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2186f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  le<uint>* puVar2;
  uint unaff_r13 = 0;
  uint uVar3;
  
  puVar2 = ar4;
  do {
    uVar3 = *puVar2;
    if ((uVar3 & 7) == 7) {
      uVar1 = 7;
      if ((uVar3 & 8) == 0) {
        ar4 = (le<uint>* )(unsigned)puVar2[1];
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21869c(ar4,ar5,ar6,ar7));
      }
      if ((uVar3 & 0x10) == 0) {
        ar4 = (le<uint>* )(unsigned)puVar2[0xb];
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2186f8(ar4,ar5,ar6,ar7));
      }
    }
    else {
      uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar3 & 7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2563ac(ar4,ar5,ar6,ar7); });
      if ((uVar3 & 1) == 0) {
        ar4 = puVar2 + 2;
        uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_25b638(ar4,ar5,ar6,ar7); });
      }
      if ((uVar3 & 2) == 0) {
        unaff_r13 = uVar3 & 0x20;
        ar4 = puVar2 + 5;
        ar5 = unaff_r13;
        uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2569e0(ar4,unaff_r13,ar6,ar7); });
      }
      if ((uVar3 & 4) == 0) {
        ar4 = puVar2 + 8;
        ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c257098(ar4,ar5,ar6,ar7); });
      }
      if ((uVar3 & 8) == 0) {
        ar4 = (le<uint>* )(unsigned)puVar2[1];
        unaff_r13 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21869c(ar4,ar5,ar6,ar7));
      }
      if (((uVar3 & 0x10) == 0) && (((uVar3 & 0x100) == 0 || (unaff_r13 == 0)))) {
        ar4 = (le<uint>* )(unsigned)puVar2[0xb];
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2186f8(ar4,ar5,ar6,ar7));
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256254(ar4,ar5,ar6,ar7));
    }
    puVar2 = (le<uint>* )(unsigned)puVar2[0xc];
  } while (puVar2 != (le<uint>* )(unsigned)0x0);
  return uVar1;
}

__asm__(".globl FUN_8c2186f8\n.set FUN_8c2186f8, FUN_8c2186f8_def\n");

}
//@unit 8c21870e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21870e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21870e");
  return (unsigned)sh4_interp(0x8c21870e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21870e\n.set FUN_8c21870e, FUN_8c21870e_def\n");
}
//@unit 8c2187ba
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
undefined4 FUN_8c2187ba_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2187ba");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c236454(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21869c(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2364b2(vr4,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl FUN_8c2187ba\n.set FUN_8c2187ba, FUN_8c2187ba_def\n");

}
//@unit 8c2187ce
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
undefined4 FUN_8c2187ce_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2187ce");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c236454(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2186f8(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2364b2(vr4,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl FUN_8c2187ce\n.set FUN_8c2187ce, FUN_8c2187ce_def\n");

}
//@unit 8c218804
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c218804_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c218804");
  return (unsigned)sh4_interp(0x8c218804, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c218804\n.set FUN_8c218804, FUN_8c218804_def\n");
}
//@unit 8c218c82
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
undefined4 FUN_8c218c82_def(le<short>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c218c82");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  ushort uVar1;
  short sVar2;
  le<int>* piVar3;
  le<int>* piVar4;
  le<int>* piVar5;
  le<uint>* ar6_00;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  le<uint>* ar5_00;
  int iVar10;
  uint uVar11;
  
  do {
    piVar4 = 0x8c4c0fa4;
    piVar3 = 0x8c4c0fa0;
    uVar11 = (uint)*ar4;
    if (uVar11 == (int)0xff) {
      return 0;
    }
    uVar1 = ar4[1];
    sVar2 = ar4[2];
    iVar10 = (int)ar4[3];
    if ((uVar11 & 0x8000) == 0) {
      *(le<undefined4>* )(unsigned)0x8c4c0fa0 = 0;
      *piVar4 = 0;
    }
    uVar9 = 0xe0000000;
    uVar8 = 0x3ffffff;
    piVar5 = 0x8c4aa2b0;
    uVar11 = uVar11 & 0xffff7fff;
    *(le<undefined4>* )(unsigned)0x8c4aa2b0 = iVar10;
    piVar5[1] = (int)(ar4 + 4);
    ar6_00 = 0xff000038;
    uVar7 = sVar2 * 0x20 + ar5;
    piVar5[2] = uVar7;
    piVar5[3] = uVar7 & uVar8 | uVar9;
    uVar8 = uVar7 >> 0x18 & 0x1c;
    ar5_00 = ar6_00 + 1;
    *ar5_00 = uVar8;
    *ar6_00 = uVar8;
    *(le<undefined4>* )(unsigned)0x8c4aa518 = *(le<undefined4>* )(unsigned)0x8c4aa518 + iVar10;
    uVar8 = uVar11 & 0xff;
    if (*(le<undefined4>* )(unsigned)0x8c4aa554 == 0) {
      if (uVar8 == 0x29) {
        iVar6 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c215250(0x8c4aa2b0,ar5_00,ar6_00,0x1c));
      }
      else if (uVar8 == 0x2c) {
        iVar6 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2157c8(0x8c4aa2b0,uVar11,ar6_00,0x1c));
      }
      else {
        if (uVar8 != 0x2a) {
          return 0xffffffff;
        }
        iVar6 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c215374(0x8c4aa2b0,ar5_00,ar6_00,0x1c));
      }
    }
    else if (uVar8 == 0x29) {
      iVar6 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c215674(0x8c4aa2b0,ar5_00,ar6_00,0x1c));
    }
    else if (uVar8 == 0x2c) {
      iVar6 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c215988(0x8c4aa2b0,uVar11,ar6_00,0x1c));
    }
    else {
      if (uVar8 != 0x2a) {
        return 0xffffffff;
      }
      iVar6 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2154dc(0x8c4aa2b0,ar5_00,ar6_00,0x1c));
    }
    uVar9 = (uint)0x200;
    uVar11 = uVar11 & 0xff00;
    *piVar3 = *piVar3 + iVar6;
    if ((uVar11 == uVar9) || (uVar8 != 0x2c)) {
      *piVar4 = *piVar4 + iVar10;
    }
    ar4 = ar4 + 4 + (uint)uVar1 * 2 + -2;
  } while( true );
}

__asm__(".globl FUN_8c218c82\n.set FUN_8c218c82, FUN_8c218c82_def\n");

}
//@unit 8c218e00
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c218e00_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c218e00");
  return (unsigned)sh4_interp(0x8c218e00, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c218e00\n.set FUN_8c218e00, FUN_8c218e00_def\n");
}
//@unit 8c218e8a
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
undefined4 FUN_8c218e8a_def(le<uint>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c218e8a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  le<uint>* puVar2;
  uint unaff_r13 = 0;
  uint uVar3;
  
  puVar2 = ar4;
  do {
    uVar3 = *puVar2;
    if ((uVar3 & 7) == 7) {
      uVar1 = 7;
      if ((uVar3 & 8) == 0) {
        ar4 = (le<uint>* )(unsigned)puVar2[1];
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c218e00(ar4,ar5,ar6,ar7));
      }
      if ((uVar3 & 0x10) == 0) {
        ar4 = (le<uint>* )(unsigned)puVar2[0xb];
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c218e8a(ar4,ar5,ar6,ar7));
      }
    }
    else {
      uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar3 & 7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2563ac(ar4,ar5,ar6,ar7); });
      if ((uVar3 & 1) == 0) {
        ar4 = puVar2 + 2;
        uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_25b638(ar4,ar5,ar6,ar7); });
      }
      if ((uVar3 & 2) == 0) {
        unaff_r13 = uVar3 & 0x20;
        ar4 = puVar2 + 5;
        ar5 = unaff_r13;
        uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2569e0(ar4,unaff_r13,ar6,ar7); });
      }
      if ((uVar3 & 4) == 0) {
        ar4 = puVar2 + 8;
        ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c257098(ar4,ar5,ar6,ar7); });
      }
      if ((uVar3 & 8) == 0) {
        ar4 = (le<uint>* )(unsigned)puVar2[1];
        unaff_r13 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c218e00(ar4,ar5,ar6,ar7));
      }
      if (((uVar3 & 0x10) == 0) && (((uVar3 & 0x100) == 0 || (unaff_r13 == 0)))) {
        ar4 = (le<uint>* )(unsigned)puVar2[0xb];
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c218e8a(ar4,ar5,ar6,ar7));
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256254(ar4,ar5,ar6,ar7));
    }
    puVar2 = (le<uint>* )(unsigned)puVar2[0xc];
  } while (puVar2 != (le<uint>* )(unsigned)0x0);
  return uVar1;
}

__asm__(".globl FUN_8c218e8a\n.set FUN_8c218e8a, FUN_8c218e8a_def\n");

}
//@unit 8c218ea0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c218ea0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c218ea0");
  return (unsigned)sh4_interp(0x8c218ea0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c218ea0\n.set FUN_8c218ea0, FUN_8c218ea0_def\n");
}
//@unit 8c218f56
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c218f56_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c218f56");
  return (unsigned)sh4_interp(0x8c218f56, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c218f56\n.set FUN_8c218f56, FUN_8c218f56_def\n");
}
//@unit 8c218f96
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c218f96_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c218f96");
  return (unsigned)sh4_interp(0x8c218f96, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c218f96\n.set FUN_8c218f96, FUN_8c218f96_def\n");
}
//@unit 8c218fdc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c218fdc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c218fdc");
  return (unsigned)sh4_interp(0x8c218fdc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c218fdc\n.set FUN_8c218fdc, FUN_8c218fdc_def\n");
}
//@unit 8c219038
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c219038_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c219038");
  return (unsigned)sh4_interp(0x8c219038, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c219038\n.set FUN_8c219038, FUN_8c219038_def\n");
}
//@unit 8c219070
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c219070_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c219070");
  return (unsigned)sh4_interp(0x8c219070, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c219070\n.set FUN_8c219070, FUN_8c219070_def\n");
}
//@unit 8c21907e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21907e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21907e");
  return (unsigned)sh4_interp(0x8c21907e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21907e\n.set FUN_8c21907e, FUN_8c21907e_def\n");
}
//@unit 8c21908e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21908e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21908e");
  return (unsigned)sh4_interp(0x8c21908e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21908e\n.set FUN_8c21908e, FUN_8c21908e_def\n");
}
//@unit 8c21982e
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
undefined * FUN_8c21982e_def(le<short>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21982e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined * ain0 = (undefined *)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  uint ar5_00;
  le<short>* psVar3;
  undefined *puVar4;
  int iVar5;
  uint ar5_01;
  uint uVar6;
  
  ar5_00 = ar5;
  while( true ) {
    uVar6 = (uint)*ar4;
    if (uVar6 == 0xff) break;
    uVar1 = ar4[1];
    iVar5 = (int)ar4[3];
    psVar3 = ar4 + 4;
    if ((uVar6 & 0x8000) == 0) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0fa0) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0fa4) = 0;
    }
    ar5_01 = uVar6 & 0xffff7fff;
    puVar4 = (undefined *)(unsigned)(uVar6 & 0xff);
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab1b4) = ar4[2] * 0x20 + ar5;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab1b8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab1b4) & 0x3ffffff | 0xe0000000;
    (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab1b4) >> 0x18 & 0x1c;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa518) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa518) + iVar5;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab1ac) = iVar5;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab1b0) = psVar3;
    (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff00003c) = (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038);
    if (puVar4 == (undefined *)(unsigned)0x2c) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c232cd0(((undefined1 *)(unsigned)0x8c4ab198),ar5_01,ar6,ar7));
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)((&(*(le<undefined4>* )(unsigned)(unsigned)0x8c2759f0))[(int)(puVar4 + -0x20) * 2])))
                        (((undefined1 *)(unsigned)0x8c4ab198),ar5_00,ar6,ar7));
      ar5_01 = ar5_00;
    }
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa2f0) = *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c2759f4) + (int)(puVar4 + -0x20) * 8);
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0fa0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0fa0) + iVar2;
    ain0 = ((undefined1 *)(unsigned)0x8c2759f4);
    if (((uVar6 & 0x7f00) == 0x200) || (ain0 = puVar4, puVar4 != (undefined *)(unsigned)0x2c)) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0fa4) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0fa4) + iVar5;
    }
    ar4 = psVar3 + (uint)uVar1 * 2 + -2;
    ar5_00 = ar5_01;
  }
  return ain0;
}

__asm__(".globl FUN_8c21982e\n.set FUN_8c21982e, FUN_8c21982e_def\n");

}
//@unit 8c219954
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c219954_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c219954");
  return (unsigned)sh4_interp(0x8c219954, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c219954\n.set FUN_8c219954, FUN_8c219954_def\n");
}
//@unit 8c219962
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c219962_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c219962");
  return (unsigned)sh4_interp(0x8c219962, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c219962\n.set FUN_8c219962, FUN_8c219962_def\n");
}
//@unit 8c2199aa
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
undefined4 FUN_8c2199aa_def(le<uint>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2199aa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  uint unaff_r13 = 0;
  uint uVar3;
  
  uVar2 = (uint)0x100;
  do {
    uVar3 = *ar4;
    if ((uVar3 & 7) == 7) {
      uVar1 = 7;
      if ((uVar3 & 8) == 0) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219954(ar4[1],ar5,ar6,ar7));
      }
      if ((uVar3 & 0x10) == 0) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2199aa((le<uint>* )(unsigned)(uint)ar4[0xb],ar5,ar6,ar7));
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2563ac(vr4,vr5,vr6,vr7));
      if ((uVar3 & 1) == 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), noop_25b638(ar4 + 2,vr5,vr6,vr7));
      }
      if ((uVar3 & 2) == 0) {
        unaff_r13 = uVar3 & 0x20;
        ar5 = unaff_r13;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2569e0(ar4 + 5,vr5,vr6,vr7));
      }
      if ((uVar3 & 4) == 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c257098(ar4 + 8,vr5,vr6,vr7));
      }
      if ((uVar3 & 8) == 0) {
        unaff_r13 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219954(ar4[1],ar5,ar6,ar7));
      }
      if (((uVar3 & 0x10) == 0) && (((uVar3 & uVar2) == 0 || (unaff_r13 == 0)))) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2199aa((le<uint>* )(unsigned)(uint)ar4[0xb],ar5,ar6,ar7));
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256254(vr4,vr5,vr6,vr7));
    }
    ar4 = (le<uint>* )(unsigned)(uint)ar4[0xc];
  } while (ar4 != (le<uint>* )(unsigned)0x0);
  return uVar1;
}

__asm__(".globl FUN_8c2199aa\n.set FUN_8c2199aa, FUN_8c2199aa_def\n");

}
//@unit 8c2199c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2199c0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2199c0");
  return (unsigned)sh4_interp(0x8c2199c0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2199c0\n.set FUN_8c2199c0, FUN_8c2199c0_def\n");
}
//@unit 8c219a86
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
undefined4 FUN_8c219a86_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c219a86");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c236454(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219954(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2364b2(vr4,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl FUN_8c219a86\n.set FUN_8c219a86, FUN_8c219a86_def\n");

}
//@unit 8c219a9a
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
undefined4 FUN_8c219a9a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c219a9a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c236454(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2199aa(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2364b2(vr4,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl FUN_8c219a9a\n.set FUN_8c219a9a, FUN_8c219a9a_def\n");

}
//@unit 8c219ad0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c219ad0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c219ad0");
  return (unsigned)sh4_interp(0x8c219ad0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c219ad0\n.set FUN_8c219ad0, FUN_8c219ad0_def\n");
}
//@unit 8c21a4f6
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
undefined4 FUN_8c21a4f6_def(le<short>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21a4f6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  ushort uVar1;
  short sVar2;
  le<int>* piVar3;
  le<int>* piVar4;
  le<int>* piVar5;
  le<uint>* ar6_00;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  le<uint>* ar5_00;
  int iVar10;
  uint uVar11;
  
  do {
    piVar4 = 0x8c4c0fa4;
    piVar3 = 0x8c4c0fa0;
    uVar11 = (uint)*ar4;
    if (uVar11 == (int)0xff) {
      return 0;
    }
    uVar1 = ar4[1];
    sVar2 = ar4[2];
    iVar10 = (int)ar4[3];
    if ((uVar11 & 0x8000) == 0) {
      *(le<undefined4>* )(unsigned)0x8c4c0fa0 = 0;
      *piVar4 = 0;
    }
    uVar9 = 0xe0000000;
    uVar8 = 0x3ffffff;
    piVar5 = 0x8c4aa2f8;
    uVar11 = uVar11 & 0xffff7fff;
    *(le<undefined4>* )(unsigned)0x8c4aa2f8 = iVar10;
    piVar5[1] = (int)(ar4 + 4);
    ar6_00 = 0xff000038;
    uVar7 = sVar2 * 0x40 + ar5;
    piVar5[2] = uVar7;
    piVar5[3] = uVar7 & uVar8 | uVar9;
    uVar8 = uVar7 >> 0x18 & 0x1c;
    ar5_00 = ar6_00 + 1;
    *ar5_00 = uVar8;
    *ar6_00 = uVar8;
    *(le<undefined4>* )(unsigned)0x8c4aa518 = *(le<undefined4>* )(unsigned)0x8c4aa518 + iVar10;
    uVar8 = uVar11 & 0xff;
    if (*(le<undefined4>* )(unsigned)0x8c4aa554 == 0) {
      if (uVar8 == 0x29) {
        iVar6 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c226980(0x8c4aa2f8,ar5_00,ar6_00,0x1c));
      }
      else if (uVar8 == 0x2c) {
        iVar6 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c226f70(0x8c4aa2f8,uVar11,ar6_00,0x1c));
      }
      else {
        if (uVar8 != 0x2a) {
          return 0xffffffff;
        }
        iVar6 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c226ac0(0x8c4aa2f8,ar5_00,ar6_00,0x1c));
      }
    }
    else if (uVar8 == 0x29) {
      iVar6 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c226dfc(0x8c4aa2f8,ar5_00,ar6_00,0x1c));
    }
    else if (uVar8 == 0x2c) {
      iVar6 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c227144(0x8c4aa2f8,uVar11,ar6_00,0x1c));
    }
    else {
      if (uVar8 != 0x2a) {
        return 0xffffffff;
      }
      iVar6 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c226c44(0x8c4aa2f8,ar5_00,ar6_00,0x1c));
    }
    uVar9 = (uint)0x200;
    uVar11 = uVar11 & 0xff00;
    *piVar3 = *piVar3 + iVar6;
    if ((uVar11 == uVar9) || (uVar8 != 0x2c)) {
      *piVar4 = *piVar4 + iVar10;
    }
    ar4 = ar4 + 4 + (uint)uVar1 * 2 + -2;
  } while( true );
}

__asm__(".globl FUN_8c21a4f6\n.set FUN_8c21a4f6, FUN_8c21a4f6_def\n");

}
//@unit 8c21a678
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21a678_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21a678");
  return (unsigned)sh4_interp(0x8c21a678, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21a678\n.set FUN_8c21a678, FUN_8c21a678_def\n");
}
//@unit 8c21a702
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
undefined4 FUN_8c21a702_def(le<uint>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21a702");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  le<uint>* puVar2;
  uint unaff_r13 = 0;
  uint uVar3;
  
  puVar2 = ar4;
  do {
    uVar3 = *puVar2;
    if ((uVar3 & 7) == 7) {
      uVar1 = 7;
      if ((uVar3 & 8) == 0) {
        ar4 = (le<uint>* )(unsigned)puVar2[1];
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21a678(ar4,ar5,ar6,ar7));
      }
      if ((uVar3 & 0x10) == 0) {
        ar4 = (le<uint>* )(unsigned)puVar2[0xb];
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21a702(ar4,ar5,ar6,ar7));
      }
    }
    else {
      uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar3 & 7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2563ac(ar4,ar5,ar6,ar7); });
      if ((uVar3 & 1) == 0) {
        ar4 = puVar2 + 2;
        uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_25b638(ar4,ar5,ar6,ar7); });
      }
      if ((uVar3 & 2) == 0) {
        unaff_r13 = uVar3 & 0x20;
        ar4 = puVar2 + 5;
        ar5 = unaff_r13;
        uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2569e0(ar4,unaff_r13,ar6,ar7); });
      }
      if ((uVar3 & 4) == 0) {
        ar4 = puVar2 + 8;
        ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c257098(ar4,ar5,ar6,ar7); });
      }
      if ((uVar3 & 8) == 0) {
        ar4 = (le<uint>* )(unsigned)puVar2[1];
        unaff_r13 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21a678(ar4,ar5,ar6,ar7));
      }
      if (((uVar3 & 0x10) == 0) && (((uVar3 & 0x100) == 0 || (unaff_r13 == 0)))) {
        ar4 = (le<uint>* )(unsigned)puVar2[0xb];
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21a702(ar4,ar5,ar6,ar7));
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256254(ar4,ar5,ar6,ar7));
    }
    puVar2 = (le<uint>* )(unsigned)puVar2[0xc];
  } while (puVar2 != (le<uint>* )(unsigned)0x0);
  return uVar1;
}

__asm__(".globl FUN_8c21a702\n.set FUN_8c21a702, FUN_8c21a702_def\n");

}
//@unit 8c21a718
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21a718_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21a718");
  return (unsigned)sh4_interp(0x8c21a718, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21a718\n.set FUN_8c21a718, FUN_8c21a718_def\n");
}
//@unit 8c21a7ce
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21a7ce_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21a7ce");
  return (unsigned)sh4_interp(0x8c21a7ce, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21a7ce\n.set FUN_8c21a7ce, FUN_8c21a7ce_def\n");
}
//@unit 8c21a80e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21a80e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21a80e");
  return (unsigned)sh4_interp(0x8c21a80e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21a80e\n.set FUN_8c21a80e, FUN_8c21a80e_def\n");
}
//@unit 8c21a854
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21a854_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21a854");
  return (unsigned)sh4_interp(0x8c21a854, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21a854\n.set FUN_8c21a854, FUN_8c21a854_def\n");
}
//@unit 8c21a8b0
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
undefined4 FUN_8c21a8b0_def(le<uint>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21a8b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar3 = ((void *)(unsigned)0x8c2563ac);
  puVar2 = ((void *)(unsigned)0x8c2569e0);
  puVar1 = ((void *)(unsigned)0x8c257098);
  uVar5 = 0x20;
  do {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(uVar5,vr5,vr6,vr7));
    if ((*ar4 & 0x40) == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<undefined4>* )(unsigned)0x8c4aa340)))(ar4,vr5,vr6,vr7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), noop_25b638(ar4 + 2,vr5,vr6,vr7));
      ar5 = *ar4 & 0x20;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4 + 5,vr5,vr6,vr7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 8,vr5,vr6,vr7));
    }
    if ((code *)*(le<undefined4>* )(unsigned)0x8c4aa358 != (code *)0x0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<undefined4>* )(unsigned)0x8c4aa358)))(ar4,vr5,vr6,vr7));
    }
    if ((ar4[1] != 0) && ((*ar4 & 8) == 0)) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<undefined4>* )(unsigned)0x8c4aa368)))(ar4[1],vr5,vr6,vr7));
    }
    if (ar4[0xb] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21a8b0((le<uint>* )(unsigned)(uint)ar4[0xb],ar5,ar6,ar7));
    }
    uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256254(vr4,vr5,vr6,vr7));
    ar4 = (le<uint>* )(unsigned)(uint)ar4[0xc];
  } while (ar4 != (le<uint>* )(unsigned)0x0);
  return uVar4;
}

__asm__(".globl FUN_8c21a8b0\n.set FUN_8c21a8b0, FUN_8c21a8b0_def\n");

}
//@unit 8c21a8be
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
undefined4 FUN_8c21a8be_def(le<uint>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21a8be");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint unaff_r11 = 0;
  uint unaff_r12 = 0;
  le<uint>* unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  do {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2563ac(ar4,ar5,ar6,ar7); });
    if ((*unaff_r14 & unaff_r11) == 0) {
      ar4 = unaff_r14;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4aa340)))(unaff_r14,ar5,ar6,ar7));
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_25b638(unaff_r14 + 2,ar5,ar6,ar7); });
      ar5 = *unaff_r14 & unaff_r12;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2569e0(unaff_r14 + 5,ar5,ar6,ar7));
      ar4 = unaff_r14 + 8;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c257098(ar4,ar5,ar6,ar7));
    }
    if (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa358) != (code *)0x0) {
      ar4 = unaff_r14;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4aa358)))(unaff_r14,ar5,ar6,ar7));
    }
    if ((unaff_r14[1] != 0) && ((*unaff_r14 & 8) == 0)) {
      ar4 = (le<uint>* )(unsigned)unaff_r14[1];
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4aa368)))(ar4,ar5,ar6,ar7));
    }
    if (unaff_r14[0xb] != 0) {
      ar4 = (le<uint>* )(unsigned)unaff_r14[0xb];
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21a8b0(ar4,ar5,ar6,ar7));
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256254(ar4,ar5,ar6,ar7));
    unaff_r14 = (le<uint>* )(unsigned)unaff_r14[0xc];
  } while (unaff_r14 != (le<uint>* )(unsigned)0x0);
  return uVar1;
}

__asm__(".globl FUN_8c21a8be\n.set FUN_8c21a8be, FUN_8c21a8be_def\n");

}
//@unit 8c21a942
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
undefined4 FUN_8c21a942_def(le<uint>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21a942");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  puVar2 = ((void *)(unsigned)0x8c2563ac);
  puVar1 = ((void *)(unsigned)0x8c2569e0);
  puVar5 = ((undefined1 *)(unsigned)0x8c4aad80);
  uVar4 = (uint)0x80;
  do {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(puVar5,vr5,vr6,vr7));
    if ((*ar4 & 0x40) == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<undefined4>* )(unsigned)0x8c4aa340)))(ar4,vr5,vr6,vr7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), noop_25b638(ar4 + 2,vr5,vr6,vr7));
      ar5 = *ar4 & 0x20;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 5,vr5,vr6,vr7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c257098(ar4 + 8,vr5,vr6,vr7));
    }
    if ((code *)*(le<undefined4>* )(unsigned)0x8c4aa358 != (code *)0x0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<undefined4>* )(unsigned)0x8c4aa358)))(ar4,vr5,vr6,vr7));
    }
    if ((*ar4 & uVar4) == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<undefined4>* )(unsigned)0x8c4aa36c)))(ar4,vr5,vr6,vr7));
    }
    else if ((ar4[1] != 0) && ((*ar4 & 8) == 0)) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<undefined4>* )(unsigned)0x8c4aa368)))(ar4[1],vr5,vr6,vr7));
    }
    if (ar4[0xb] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21a942((le<uint>* )(unsigned)(uint)ar4[0xb],ar5,ar6,ar7));
    }
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256254(vr4,vr5,vr6,vr7));
    ar4 = (le<uint>* )(unsigned)(uint)ar4[0xc];
  } while (ar4 != (le<uint>* )(unsigned)0x0);
  return uVar3;
}

__asm__(".globl FUN_8c21a942\n.set FUN_8c21a942, FUN_8c21a942_def\n");

}
//@unit 8c21a952
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
undefined4 FUN_8c21a952_def(le<uint>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21a952");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint unaff_r10 = 0;
  uint unaff_r11 = 0;
  le<uint>* unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  do {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2563ac(ar4,ar5,ar6,ar7); });
    if ((*unaff_r14 & unaff_r10) == 0) {
      ar4 = unaff_r14;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4aa340)))(unaff_r14,ar5,ar6,ar7));
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_25b638(unaff_r14 + 2,ar5,ar6,ar7); });
      ar5 = *unaff_r14 & unaff_r11;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2569e0(unaff_r14 + 5,ar5,ar6,ar7));
      ar4 = unaff_r14 + 8;
      ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c257098(ar4,ar5,ar6,ar7); });
    }
    if (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa358) != (code *)0x0) {
      ar4 = unaff_r14;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4aa358)))(unaff_r14,ar5,ar6,ar7));
    }
    if ((*unaff_r14 & 0x80) == 0) {
      ar4 = unaff_r14;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4aa36c)))(unaff_r14,ar5,ar6,ar7));
    }
    else if ((unaff_r14[1] != 0) && ((*unaff_r14 & 8) == 0)) {
      ar4 = (le<uint>* )(unsigned)unaff_r14[1];
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4aa368)))(ar4,ar5,ar6,ar7));
    }
    if (unaff_r14[0xb] != 0) {
      ar4 = (le<uint>* )(unsigned)unaff_r14[0xb];
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21a942(ar4,ar5,ar6,ar7));
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256254(ar4,ar5,ar6,ar7));
    unaff_r14 = (le<uint>* )(unsigned)unaff_r14[0xc];
  } while (unaff_r14 != (le<uint>* )(unsigned)0x0);
  return uVar1;
}

__asm__(".globl FUN_8c21a952\n.set FUN_8c21a952, FUN_8c21a952_def\n");

}
//@unit 8c21aa1e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21aa1e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21aa1e");
  return (unsigned)sh4_interp(0x8c21aa1e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21aa1e\n.set FUN_8c21aa1e, FUN_8c21aa1e_def\n");
}
//@unit 8c21ab7a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21ab7a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21ab7a");
  return (unsigned)sh4_interp(0x8c21ab7a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21ab7a\n.set FUN_8c21ab7a, FUN_8c21ab7a_def\n");
}
//@unit 8c21adb4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21adb4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21adb4");
  return (unsigned)sh4_interp(0x8c21adb4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21adb4\n.set FUN_8c21adb4, FUN_8c21adb4_def\n");
}
//@unit 8c21af26
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21af26_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21af26");
  return (unsigned)sh4_interp(0x8c21af26, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21af26\n.set FUN_8c21af26, FUN_8c21af26_def\n");
}
//@unit 8c21af36
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21af36_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21af36");
  return (unsigned)sh4_interp(0x8c21af36, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21af36\n.set FUN_8c21af36, FUN_8c21af36_def\n");
}
//@unit 8c21b170
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21b170_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21b170");
  return (unsigned)sh4_interp(0x8c21b170, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21b170\n.set FUN_8c21b170, FUN_8c21b170_def\n");
}
//@unit 8c21b2f2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21b2f2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21b2f2");
  return (unsigned)sh4_interp(0x8c21b2f2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21b2f2\n.set FUN_8c21b2f2, FUN_8c21b2f2_def\n");
}
//@unit 8c21b52c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21b52c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21b52c");
  return (unsigned)sh4_interp(0x8c21b52c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21b52c\n.set FUN_8c21b52c, FUN_8c21b52c_def\n");
}
//@unit 8c21b6ae
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21b6ae_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21b6ae");
  return (unsigned)sh4_interp(0x8c21b6ae, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21b6ae\n.set FUN_8c21b6ae, FUN_8c21b6ae_def\n");
}
//@unit 8c21b908
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
undefined4 FUN_8c21b908_def(le<uint>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21b908");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  puVar3 = ((void *)(unsigned)0x8c2563ac);
  puVar2 = ((void *)(unsigned)0x8c2569e0);
  puVar1 = ((void *)(unsigned)0x8c257098);
  puVar5 = ((undefined1 *)(unsigned)0x8c4aad80);
  do {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(puVar5,vr5,vr6,vr7));
    if ((*ar4 & 0x40) == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<undefined4>* )(unsigned)0x8c4aa340)))(ar4,vr5,vr6,vr7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), noop_25b638(ar4 + 2,vr5,vr6,vr7));
      ar5 = *ar4 & 0x20;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4 + 5,vr5,vr6,vr7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 8,vr5,vr6,vr7));
    }
    if ((code *)*(le<undefined4>* )(unsigned)0x8c4aa358 != (code *)0x0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<undefined4>* )(unsigned)0x8c4aa358)))(ar4,vr5,vr6,vr7));
    }
    if ((ar4[1] != 0) && ((*ar4 & 8) == 0)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219954(ar4[1],vr5,vr6,vr7));
    }
    if (ar4[0xb] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21b908((le<uint>* )(unsigned)(uint)ar4[0xb],ar5,ar6,ar7));
    }
    uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256254(vr4,vr5,vr6,vr7));
    ar4 = (le<uint>* )(unsigned)(uint)ar4[0xc];
  } while (ar4 != (le<uint>* )(unsigned)0x0);
  return uVar4;
}

__asm__(".globl FUN_8c21b908\n.set FUN_8c21b908, FUN_8c21b908_def\n");

}
//@unit 8c21b916
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
undefined4 FUN_8c21b916_def(le<uint>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21b916");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint unaff_r11 = 0;
  uint unaff_r12 = 0;
  le<uint>* unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  do {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2563ac(ar4,ar5,ar6,ar7); });
    if ((*unaff_r14 & unaff_r11) == 0) {
      ar4 = unaff_r14;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4aa340)))(unaff_r14,ar5,ar6,ar7));
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_25b638(unaff_r14 + 2,ar5,ar6,ar7); });
      ar5 = *unaff_r14 & unaff_r12;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2569e0(unaff_r14 + 5,ar5,ar6,ar7));
      ar4 = unaff_r14 + 8;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c257098(ar4,ar5,ar6,ar7));
    }
    if (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa358) != (code *)0x0) {
      ar4 = unaff_r14;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4aa358)))(unaff_r14,ar5,ar6,ar7));
    }
    if ((unaff_r14[1] != 0) && ((*unaff_r14 & 8) == 0)) {
      ar4 = (le<uint>* )(unsigned)unaff_r14[1];
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219954(ar4,ar5,ar6,ar7));
    }
    if (unaff_r14[0xb] != 0) {
      ar4 = (le<uint>* )(unsigned)unaff_r14[0xb];
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21b908(ar4,ar5,ar6,ar7));
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256254(ar4,ar5,ar6,ar7));
    unaff_r14 = (le<uint>* )(unsigned)unaff_r14[0xc];
  } while (unaff_r14 != (le<uint>* )(unsigned)0x0);
  return uVar1;
}

__asm__(".globl FUN_8c21b916\n.set FUN_8c21b916, FUN_8c21b916_def\n");

}
//@unit 8c21b998
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
undefined4 FUN_8c21b998_def(le<uint>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21b998");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  puVar2 = ((void *)(unsigned)0x8c2563ac);
  puVar1 = ((void *)(unsigned)0x8c2569e0);
  uVar5 = 0x80;
  uVar4 = (uint)0x80;
  do {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(uVar5,vr5,vr6,vr7));
    if ((*ar4 & 0x40) == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<undefined4>* )(unsigned)0x8c4aa340)))(ar4,vr5,vr6,vr7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), noop_25b638(ar4 + 2,vr5,vr6,vr7));
      ar5 = *ar4 & 0x20;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 5,vr5,vr6,vr7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c257098(ar4 + 8,vr5,vr6,vr7));
    }
    if ((code *)*(le<undefined4>* )(unsigned)0x8c4aa358 != (code *)0x0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<undefined4>* )(unsigned)0x8c4aa358)))(ar4,vr5,vr6,vr7));
    }
    if ((*ar4 & uVar4) == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<undefined4>* )(unsigned)0x8c4aa36c)))(ar4,vr5,vr6,vr7));
    }
    else if ((ar4[1] != 0) && ((*ar4 & 8) == 0)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219954(ar4[1],vr5,vr6,vr7));
    }
    if (ar4[0xb] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21b998((le<uint>* )(unsigned)(uint)ar4[0xb],ar5,ar6,ar7));
    }
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256254(vr4,vr5,vr6,vr7));
    ar4 = (le<uint>* )(unsigned)(uint)ar4[0xc];
  } while (ar4 != (le<uint>* )(unsigned)0x0);
  return uVar3;
}

__asm__(".globl FUN_8c21b998\n.set FUN_8c21b998, FUN_8c21b998_def\n");

}
//@unit 8c21b9a8
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
undefined4 FUN_8c21b9a8_def(le<uint>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21b9a8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint unaff_r10 = 0;
  uint unaff_r11 = 0;
  le<uint>* unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  do {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2563ac(ar4,ar5,ar6,ar7); });
    if ((*unaff_r14 & unaff_r10) == 0) {
      ar4 = unaff_r14;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4aa340)))(unaff_r14,ar5,ar6,ar7));
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_25b638(unaff_r14 + 2,ar5,ar6,ar7); });
      ar5 = *unaff_r14 & unaff_r11;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2569e0(unaff_r14 + 5,ar5,ar6,ar7));
      ar4 = unaff_r14 + 8;
      ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c257098(ar4,ar5,ar6,ar7); });
    }
    if (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa358) != (code *)0x0) {
      ar4 = unaff_r14;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4aa358)))(unaff_r14,ar5,ar6,ar7));
    }
    if ((*unaff_r14 & 0x80) == 0) {
      ar4 = unaff_r14;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4aa36c)))(unaff_r14,ar5,ar6,ar7));
    }
    else if ((unaff_r14[1] != 0) && ((*unaff_r14 & 8) == 0)) {
      ar4 = (le<uint>* )(unsigned)unaff_r14[1];
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219954(ar4,ar5,ar6,ar7));
    }
    if (unaff_r14[0xb] != 0) {
      ar4 = (le<uint>* )(unsigned)unaff_r14[0xb];
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21b998(ar4,ar5,ar6,ar7));
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256254(ar4,ar5,ar6,ar7));
    unaff_r14 = (le<uint>* )(unsigned)unaff_r14[0xc];
  } while (unaff_r14 != (le<uint>* )(unsigned)0x0);
  return uVar1;
}

__asm__(".globl FUN_8c21b9a8\n.set FUN_8c21b9a8, FUN_8c21b9a8_def\n");

}
//@unit 8c21ba62
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21ba62_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21ba62");
  return (unsigned)sh4_interp(0x8c21ba62, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21ba62\n.set FUN_8c21ba62, FUN_8c21ba62_def\n");
}
//@unit 8c21ba6a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21ba6a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21ba6a");
  return (unsigned)sh4_interp(0x8c21ba6a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21ba6a\n.set FUN_8c21ba6a, FUN_8c21ba6a_def\n");
}
//@unit 8c21bbb0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21bbb0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21bbb0");
  return (unsigned)sh4_interp(0x8c21bbb0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21bbb0\n.set FUN_8c21bbb0, FUN_8c21bbb0_def\n");
}
//@unit 8c21bbba
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21bbba_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21bbba");
  return (unsigned)sh4_interp(0x8c21bbba, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21bbba\n.set FUN_8c21bbba, FUN_8c21bbba_def\n");
}
//@unit 8c21bdd6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21bdd6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21bdd6");
  return (unsigned)sh4_interp(0x8c21bdd6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21bdd6\n.set FUN_8c21bdd6, FUN_8c21bdd6_def\n");
}
//@unit 8c21bf44
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21bf44_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21bf44");
  return (unsigned)sh4_interp(0x8c21bf44, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21bf44\n.set FUN_8c21bf44, FUN_8c21bf44_def\n");
}
//@unit 8c21c1b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21c1b0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21c1b0");
  return (unsigned)sh4_interp(0x8c21c1b0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21c1b0\n.set FUN_8c21c1b0, FUN_8c21c1b0_def\n");
}
//@unit 8c21c2ea
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21c2ea_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21c2ea");
  return (unsigned)sh4_interp(0x8c21c2ea, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21c2ea\n.set FUN_8c21c2ea, FUN_8c21c2ea_def\n");
}
//@unit 8c21c398
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21c398_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21c398");
  return (unsigned)sh4_interp(0x8c21c398, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21c398\n.set FUN_8c21c398, FUN_8c21c398_def\n");
}
//@unit 8c21c47c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21c47c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21c47c");
  return (unsigned)sh4_interp(0x8c21c47c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21c47c\n.set FUN_8c21c47c, FUN_8c21c47c_def\n");
}
//@unit 8c21c5ca
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21c5ca_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21c5ca");
  return (unsigned)sh4_interp(0x8c21c5ca, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21c5ca\n.set FUN_8c21c5ca, FUN_8c21c5ca_def\n");
}
//@unit 8c21c774
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21c774_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21c774");
  return (unsigned)sh4_interp(0x8c21c774, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21c774\n.set FUN_8c21c774, FUN_8c21c774_def\n");
}
//@unit 8c21caa0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21caa0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21caa0");
  return (unsigned)sh4_interp(0x8c21caa0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21caa0\n.set FUN_8c21caa0, FUN_8c21caa0_def\n");
}
//@unit 8c21ce02
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21ce02_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21ce02");
  return (unsigned)sh4_interp(0x8c21ce02, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21ce02\n.set FUN_8c21ce02, FUN_8c21ce02_def\n");
}
//@unit 8c21ce92
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21ce92_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21ce92");
  return (unsigned)sh4_interp(0x8c21ce92, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21ce92\n.set FUN_8c21ce92, FUN_8c21ce92_def\n");
}
//@unit 8c21cf22
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21cf22_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21cf22");
  return (unsigned)sh4_interp(0x8c21cf22, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21cf22\n.set FUN_8c21cf22, FUN_8c21cf22_def\n");
}
//@unit 8c21cfd8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21cfd8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21cfd8");
  return (unsigned)sh4_interp(0x8c21cfd8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21cfd8\n.set FUN_8c21cfd8, FUN_8c21cfd8_def\n");
}
//@unit 8c21d06c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21d06c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21d06c");
  return (unsigned)sh4_interp(0x8c21d06c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21d06c\n.set FUN_8c21d06c, FUN_8c21d06c_def\n");
}
//@unit 8c21d108
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
undefined4 FUN_8c21d108_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21d108");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_25b638(ar4 + 8,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c21d108\n.set FUN_8c21d108, FUN_8c21d108_def\n");

}
//@unit 8c21d112
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
undefined4 FUN_8c21d112_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21d112");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2569e0(ar4 + 0x14,0,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c21d112\n.set FUN_8c21d112, FUN_8c21d112_def\n");

}
//@unit 8c21d11e
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
undefined4 FUN_8c21d11e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21d11e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2569e0(ar4 + 0x14,1,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c21d11e\n.set FUN_8c21d11e, FUN_8c21d11e_def\n");

}
//@unit 8c21d13c
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
undefined4 FUN_8c21d13c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21d13c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c257098(ar4 + 0x20,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c21d13c\n.set FUN_8c21d13c, FUN_8c21d13c_def\n");

}
//@unit 8c21d148
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21d148_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21d148");
  return (unsigned)sh4_interp(0x8c21d148, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21d148\n.set FUN_8c21d148, FUN_8c21d148_def\n");
}
//@unit 8c21d174
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21d174_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21d174");
  return (unsigned)sh4_interp(0x8c21d174, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21d174\n.set FUN_8c21d174, FUN_8c21d174_def\n");
}
//@unit 8c21d1b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21d1b4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21d1b4");
  return (unsigned)sh4_interp(0x8c21d1b4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21d1b4\n.set FUN_8c21d1b4, FUN_8c21d1b4_def\n");
}
//@unit 8c21d1f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21d1f4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21d1f4");
  return (unsigned)sh4_interp(0x8c21d1f4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21d1f4\n.set FUN_8c21d1f4, FUN_8c21d1f4_def\n");
}
//@unit 8c21d234
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21d234_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21d234");
  return (unsigned)sh4_interp(0x8c21d234, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21d234\n.set FUN_8c21d234, FUN_8c21d234_def\n");
}
//@unit 8c21d29c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21d29c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21d29c");
  return (unsigned)sh4_interp(0x8c21d29c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21d29c\n.set FUN_8c21d29c, FUN_8c21d29c_def\n");
}
//@unit 8c21d3e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21d3e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21d3e8");
  return (unsigned)sh4_interp(0x8c21d3e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21d3e8\n.set FUN_8c21d3e8, FUN_8c21d3e8_def\n");
}
//@unit 8c21d7d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21d7d4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21d7d4");
  return (unsigned)sh4_interp(0x8c21d7d4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21d7d4\n.set FUN_8c21d7d4, FUN_8c21d7d4_def\n");
}
//@unit 8c21da20
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
int FUN_8c21da20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21da20");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  le<undefined4>* puVar2;
  le<ushort>* puVar3;
  le<undefined4>* puVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  
  puVar4 = 0x8c4aa380;
  puVar3 = 0x8c4aad86;
  puVar2 = 0x8c4aa378;
  puVar1 = 0x8c4aa37c;
  uVar5 = ar4 - 0x22;
  if (0xd < uVar5) {
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 0;
    *puVar2 = 0xffffffff;
    *puVar1 = 0xffffffff;
    *puVar4 = 0xffffffff;
    *puVar3 = 0;
    return uVar5;
  }
  iVar6 = (int)(short)(&(*(undefined1 *)(unsigned)0x8c21da64))[uVar5];
  switch(uVar5) {
  case 0:
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 3;
    *puVar2 = 2;
    *puVar1 = 0xffffffff;
    *puVar4 = 0xffffffff;
    break;
  case 1:
    uVar7 = (ushort)0xffdf;
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 4;
    *puVar2 = 2;
    *puVar1 = 0xffffffff;
    *puVar4 = 5;
    goto LAB_8c21dad2;
  default:
    iVar6 = 4;
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 4;
    *puVar2 = 2;
    *puVar1 = 0xffffffff;
    *puVar4 = 5;
    break;
  case 7:
    iVar6 = 6;
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 6;
    *puVar2 = 2;
    *puVar1 = 5;
    *puVar4 = 0xffffffff;
    goto LAB_8c21dad0;
  case 8:
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 7;
    *puVar2 = 2;
    *puVar1 = 5;
    *puVar4 = 8;
    return iVar6;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 7;
    *puVar2 = 2;
    *puVar1 = 5;
    *puVar4 = 8;
LAB_8c21dad0:
    uVar7 = (ushort)0xbfff;
    goto LAB_8c21dad2;
  }
  uVar7 = (ushort)0xbfdf;
LAB_8c21dad2:
  *puVar3 = *puVar3 & uVar7;
  return iVar6;
}

__asm__(".globl FUN_8c21da20\n.set FUN_8c21da20, FUN_8c21da20_def\n");

}
//@unit 8c21daf2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21daf2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21daf2");
  return (unsigned)sh4_interp(0x8c21daf2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21daf2\n.set FUN_8c21daf2, FUN_8c21daf2_def\n");
}
//@unit 8c21e4f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21e4f8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21e4f8");
  return (unsigned)sh4_interp(0x8c21e4f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21e4f8\n.set FUN_8c21e4f8, FUN_8c21e4f8_def\n");
}
//@unit 8c21ee54
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
le<undefined4>*  FUN_8c21ee54_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21ee54");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  le<ushort>* puVar2;
  le<undefined4>* puVar3;
  le<undefined4>* puVar4;
  undefined4 uVar5;
  
  puVar4 = 0x8c4aa380;
  puVar3 = 0x8c4aa37c;
  puVar2 = 0x8c4aad86;
  puVar1 = 0x8c4aa378;
  if (ar4 == (le<undefined4>* )(unsigned)0x29) {
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 6;
    *puVar1 = 2;
    *puVar3 = 5;
    uVar5 = 0xbfff;
    *(le<undefined4>* )(unsigned)0x8c4aa380 = 0xffffffff;
    *puVar2 = *puVar2 & (ushort)uVar5;
    ar4 = puVar3;
  }
  else {
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 0;
    *puVar1 = 0xffffffff;
    *puVar3 = 0xffffffff;
    *puVar4 = 0xffffffff;
    *puVar2 = 0;
  }
  return ar4;
}

__asm__(".globl FUN_8c21ee54\n.set FUN_8c21ee54, FUN_8c21ee54_def\n");

}
//@unit 8c21ee94
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21ee94_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21ee94");
  return (unsigned)sh4_interp(0x8c21ee94, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21ee94\n.set FUN_8c21ee94, FUN_8c21ee94_def\n");
}
//@unit 8c21f200
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21f200_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21f200");
  return (unsigned)sh4_interp(0x8c21f200, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21f200\n.set FUN_8c21f200, FUN_8c21f200_def\n");
}
//@unit 8c21f27c
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
undefined4 FUN_8c21f27c_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21f27c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* a7;
  le<undefined4>* a5;
  
  a7 = 0x8c4aa360;
  if (ar5 == 0) {
    *(le<undefined4>* )(unsigned)0x8c4aa360 = *(le<undefined4>* )(unsigned)0x8c4ab0c4;
  }
  else {
    *(le<undefined4>* )(unsigned)0x8c4aa360 = ar5;
  }
  a5 = 0x8c4aa370;
  if (ar6 == 0) {
    *(le<undefined4>* )(unsigned)0x8c4aa370 = ((void *)(unsigned)0x8c21fca8);
  }
  else {
    *(le<undefined4>* )(unsigned)0x8c4aa370 = ((void *)(unsigned)0x8c21f2ae);
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<undefined4>* )(unsigned)0x8c4aa36c)))(ar4,a5,ar6,a7));
  return *(le<undefined4>* )(unsigned)0x8c4aa364;
}

__asm__(".globl FUN_8c21f27c\n.set FUN_8c21f27c, FUN_8c21f27c_def\n");

}
//@unit 8c21f2ae
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21f2ae_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21f2ae");
  return (unsigned)sh4_interp(0x8c21f2ae, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21f2ae\n.set FUN_8c21f2ae, FUN_8c21f2ae_def\n");
}
//@unit 8c21fca8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c21fca8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c21fca8");
  return (unsigned)sh4_interp(0x8c21fca8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c21fca8\n.set FUN_8c21fca8, FUN_8c21fca8_def\n");
}
