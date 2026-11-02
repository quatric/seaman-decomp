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
undefined4 FUN_8c237964_def(le<int>* ar4,int ar5,undefined4 ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c237964");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 372; for (int i_ = 0; i_ < 372; i_++) z_[i_] = 0; }
  uint uVar1;
  le<int>* ar5_00;
  le<int>* piVar2;
  le<int>* piVar3;
  int iVar4;
  undefined1 *puVar5;
  le<int>* piVar6;
  undefined *ar6_00;
  undefined4 uVar7;
  
  (*(le<int>* )(fr0_ - 0x12c)) = 0;
  (*(le<uint>* )(fr0_ - 0x134)) = 0xffffffff;
  (*(le<unsigned>* )(fr0_ - 0x18) = (unsigned)(unsigned long)((le<int>* )(unsigned)(ar5 * 0xc + *ar4)));
  (*(le<unsigned>* )(fr0_ - 0x10) = (unsigned)(unsigned long)(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18)) + 2));
  (*(le<int>* )(fr0_ - 0xc)) = ar5;
  (*(le<unsigned>* )(fr0_ - 0x8) = (unsigned)(unsigned long)(ar4));
  if (((((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18))[1] & 0x10000U) != 0) && (ar5 != 0)) {
    (*(le<int>* )(fr0_ - 0x1c)) = (ar5 + -1) * 0xc + *ar4;
    (*(le<unsigned>* )(fr0_ - 0x14) = (unsigned)(unsigned long)((le<int>* )(unsigned)((*(le<int>* )(fr0_ - 0x1c)) + 8)));
    (*(le<uint>* )(fr0_ - 0x134)) = (uint)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18))[2] >> 0x1a;
    (*(le<int>* )(fr0_ - 0x124)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a536(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),ar7));
    if ((((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c277b08)[(*(le<int>* )(fr0_ - 0x124)) * 0x11 + 4] & 1U) == 0) {
      uVar7 = 2;
    }
    else {
      uVar7 = 3;
    }
    iVar4 = (int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 0x14;
    ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),iVar4,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),uVar7); });
    *(le<undefined2>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = 0;
    (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c2571fe(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),iVar4,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),uVar7));
    return 1;
  }
  ar6_00 = ((undefined1 *)(unsigned)0x8c26d960);
  iVar4 = *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18));
  (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a174(((le<int>* )(fr0_ - 0x120)),iVar4,((undefined1 *)(unsigned)0x8c26d960),ar7));
  piVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c);
  if ((*(le<uint>* )(unsigned)((*(le<int>* )(fr0_ - 0xc)) * 0xc + *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x8)) + 4) & 0x800000) == 0) {
    if ((*(le<uint>* )(unsigned)((*(le<int>* )(fr0_ - 0xc)) * 0xc + *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x8)) + 4) & 0x1000000) == 0) {
      (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259be8(((le<int>* )(fr0_ - 0x120)),iVar4,ar6_00,ar7));
      if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c23c814(((undefined1 *)(fr0_ - 0x168)),((undefined1 *)(unsigned)0x8c4ab10c),0x28,ar7));
        ({ unsigned long t0_ = (unsigned long)(0xffffffff); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),((undefined1 *)(fr0_ - 0x16c)),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),0); });
        *(le<short>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
        *(le<undefined2>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x40) = 0;
        return 0xffffffff;
      }
      (*(le<int>* )(fr0_ - 0x12c)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a216(((le<int>*  *)(fr0_ - 0x130)),iVar4,ar6_00,ar7));
      if ((*(le<int>* )(fr0_ - 0x12c)) < 0) {
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c23c814(((undefined1 *)(fr0_ - 0x168)),((undefined1 *)(unsigned)0x8c4ab10c),0x28,ar7));
        uVar7 = 0;
        puVar5 = ((undefined1 *)(fr0_ - 0x16c));
        piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10));
        ({ unsigned long t0_ = (unsigned long)(0xffffffff); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),puVar5,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),0); });
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b4) = -(*(le<int>* )(fr0_ - 0x12c));
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar6,puVar5,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),uVar7));
        return 0xffffffff;
      }
      piVar3 = (le<int>*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c277b08));
      piVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c);
      piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
      (*(le<int>* )(fr0_ - 0x124)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a536(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),ar7));
      if ((*(le<int>* )(fr0_ - 0x12c)) == 1) {
        uVar1 = (uint)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18))[2] >> 0x1a;
        (*(le<uint>* )(fr0_ - 0x134)) = uVar1;
        if ((*(le<int>* )(fr0_ - 0x124)) < 0) {
          (*(le<int>* )(fr0_ - 0x138)) = 2;
        }
        else {
          piVar3 = (le<int>*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c277b08));
          piVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c);
          piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          (*(le<int>* )(fr0_ - 0x128)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a5c0(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),uVar1));
          ar7 = uVar1;
          if ((*(le<int>* )(fr0_ - 0x128)) < 0) {
            (*(le<int>* )(fr0_ - 0x138)) = 0;
          }
          else {
            (*(le<int>* )(fr0_ - 0x138)) = 1;
          }
        }
      }
      else if ((*(le<int>* )(fr0_ - 0x124)) < 0) {
        (*(le<int>* )(fr0_ - 0x138)) = 2;
      }
      else {
        (*(le<int>* )(fr0_ - 0x138)) = 1;
      }
    }
    else {
      piVar2 = (le<int>* )(unsigned)(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18))[2] & 0x3ffffff);
      (*(le<uint>* )(fr0_ - 0x134)) = (uint)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18))[2] >> 0x1a;
      (*(le<unsigned>* )(fr0_ - 0x130) = (unsigned)(unsigned long)(piVar2));
      (*(le<int>* )(fr0_ - 0x124)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a536(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),piVar2,ar7));
      if ((*(le<int>* )(fr0_ - 0x124)) < 0) {
        (*(le<int>* )(fr0_ - 0x138)) = 2;
      }
      else {
        piVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c);
        piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        ar7 = (*(le<uint>* )(fr0_ - 0x134));
        (*(le<int>* )(fr0_ - 0x128)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a5c0(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),(*(le<uint>* )(fr0_ - 0x134))));
        if ((*(le<int>* )(fr0_ - 0x128)) < 0) {
          (*(le<int>* )(fr0_ - 0x138)) = 0;
        }
        else {
          (*(le<int>* )(fr0_ - 0x138)) = 1;
        }
      }
      (*(le<int>* )(fr0_ - 0x12c)) = 1;
      piVar3 = ((le<int>* )(fr0_ - 0x120));
      (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259be8(piVar3,piVar6,piVar2,ar7));
      if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c23c814(((undefined1 *)(fr0_ - 0x168)),((undefined1 *)(unsigned)0x8c4ab10c),0x28,ar7));
        ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),((undefined1 *)(fr0_ - 0x16c)),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),0); });
        *(le<short>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
        *(le<undefined2>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x40) = 0;
        return 0xffffffff;
      }
    }
  }
  else {
    piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(fr0_ - 0xc)) * 0xc + *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x8)) + 8));
    (*(le<unsigned>* )(fr0_ - 0x130) = (unsigned)(unsigned long)(piVar2));
    (*(le<int>* )(fr0_ - 0x124)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a536(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),piVar2,ar7));
    if ((*(le<int>* )(fr0_ - 0x124)) < 0) {
      (*(le<int>* )(fr0_ - 0x138)) = 2;
    }
    else {
      (*(le<int>* )(fr0_ - 0x138)) = 1;
    }
    piVar3 = ((le<int>* )(fr0_ - 0x120));
    (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259be8(piVar3,piVar6,piVar2,ar7));
    if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
      (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c23c814(((undefined1 *)(fr0_ - 0x168)),((undefined1 *)(unsigned)0x8c4ab10c),0x28,ar7));
      ({ unsigned long t0_ = (unsigned long)(0xffffffff); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),((undefined1 *)(fr0_ - 0x16c)),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),0); });
      *(le<short>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
      *(le<undefined2>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x40) = 0;
      return 0xffffffff;
    }
  }
  if ((*(le<int>* )(fr0_ - 0x138)) == 0) {
    (*(le<unsigned>* )(fr0_ - 0x14) = (unsigned)(unsigned long)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c277b08) + (*(le<int>* )(fr0_ - 0x124)) * 0x11));
    if ((((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] & 2U) == 0) {
      uVar1 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18))[1] & 0xa0000000;
      if ((uVar1 == 0) || (uVar1 == 0x20000000)) {
        (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a914(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18)),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 5,piVar2,ar7));
        if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
          uVar7 = 1;
          piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 5;
          piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10));
          piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),piVar3,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),1); });
          *(le<short>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = (*(le<int>* )(fr0_ - 0xc));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar6,piVar3,piVar2,uVar7));
          return 0xffffffff;
        }
        ar7 = 1;
        ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 5,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),1); });
        piVar6 = (le<int>* )(unsigned)0x2;
        *(le<undefined2>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = 0;
        piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x14));
        piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x170))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 372)); FUN_8c25a608(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),2,piVar2,ar7); });
        ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] | 8;
      }
      else if (uVar1 == 0x80000000) {
        ar7 = 1;
        piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 5;
        piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10));
        piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),piVar6,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),1); });
        *(le<undefined2>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = 0;
      }
    }
    else {
      uVar1 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18))[1] & 0xa0000000;
      if (uVar1 == 0) {
        ar7 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4];
        piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 5;
        piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),piVar6,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),ar7); });
        *(le<short>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x40) = (short)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[0x10];
        *(le<undefined2>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = 0;
        piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x170))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 372)); FUN_8c25a6ea(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),piVar6,piVar2,ar7); });
      }
      else if (uVar1 == 0x80000000) {
        if ((((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] & 1U) == 0) {
          (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a838(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18)),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 5,piVar2,ar7));
          if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
            uVar7 = 2;
            piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 5;
            piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10));
            piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
            ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),piVar3,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),2); });
            *(le<short>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x40) = (short)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[0x10];
            *(le<short>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = (*(le<int>* )(fr0_ - 0xc));
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
            (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar6,piVar3,piVar2,uVar7));
            return 0xffffffff;
          }
          ar7 = 2;
          ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 5,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),2); });
          piVar6 = (le<int>* )(unsigned)0x1;
          *(le<short>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x40) = (short)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[0x10];
          *(le<undefined2>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = 0;
          piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x14));
          piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x170))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 372)); FUN_8c25a608(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),1,piVar2,ar7); });
        }
        else {
          ar7 = 3;
          piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 5;
          piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10));
          piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),piVar6,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),3); });
          *(le<short>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x40) = (short)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[0x10];
          *(le<undefined2>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = 0;
        }
      }
      else if (uVar1 == 0x20000000) {
        if ((((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] & 1U) == 0) {
          (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a838(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18)),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 5,piVar2,ar7));
          if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
            uVar7 = 2;
            piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 5;
            piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10));
            piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
            ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),piVar3,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),2); });
            *(le<short>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x40) = (short)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[0x10];
            *(le<short>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = (*(le<int>* )(fr0_ - 0xc));
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
            (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar6,piVar3,piVar2,uVar7));
            return 0xffffffff;
          }
          ar7 = 2;
          ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 5,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),2); });
          piVar6 = (le<int>* )(unsigned)0x3;
          *(le<short>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x40) = (short)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[0x10];
          *(le<undefined2>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = 0;
          piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x14));
          piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x170))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 372)); FUN_8c25a608(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),3,piVar2,ar7); });
        }
        else {
          ar7 = 3;
          piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 5;
          piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),piVar6,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),3); });
          *(le<short>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x40) = (short)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[0x10];
          *(le<undefined2>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = 0;
          piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x170))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 372)); FUN_8c25a6ea(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),piVar6,piVar2,ar7); });
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar3,piVar6,piVar2,ar7));
    return 1;
  }
  if ((*(le<int>* )(fr0_ - 0x138)) != 1) {
    if ((*(le<int>* )(fr0_ - 0x138)) != 2) {
      return 1;
    }
    piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
    ar5_00 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a710(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),piVar6,piVar2,ar7));
    uVar1 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18))[1] & 0xa0000000;
    if (uVar1 == 0) {
      piVar6 = ar5_00;
      (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a770(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18)),ar5_00,piVar2,ar7));
      if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
        uVar7 = 0;
        piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10));
        piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),piVar6,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),0); });
        *(le<short>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
        *(le<undefined2>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x40) = 0;
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = (*(le<int>* )(fr0_ - 0xc));
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar2,piVar6,piVar3,uVar7));
        return 0xffffffff;
      }
      ar7 = 2;
      piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10));
      piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
      ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),piVar6,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),2); });
      *(le<undefined2>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = 0;
      if ((*(le<int>* )(fr0_ - 0x12c)) != 0) {
        *(le<uint>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x10) = *(le<uint>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x10) | 8;
      }
    }
    else if (uVar1 == 0x80000000) {
      piVar6 = ar5_00;
      (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a838(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18)),ar5_00,piVar2,ar7));
      if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
        uVar7 = 0;
        piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10));
        piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),piVar6,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),0); });
        *(le<short>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = (*(le<int>* )(fr0_ - 0xc));
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar2,piVar6,piVar3,uVar7));
        return 0xffffffff;
      }
      ar7 = 1;
      piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10));
      piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
      ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),piVar6,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),1); });
      *(le<undefined2>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = 0;
    }
    else if (uVar1 == 0x20000000) {
      (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a838(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18)),ar5_00,piVar2,ar7));
      if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
        uVar7 = 0;
        puVar5 = ((undefined1 *)(fr0_ - 0x16c));
        piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10));
        piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),puVar5,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),0); });
        *(le<short>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
        *(le<undefined2>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x40) = 0;
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = (*(le<int>* )(fr0_ - 0xc));
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar6,puVar5,piVar2,uVar7));
        return 0xffffffff;
      }
      piVar6 = ar5_00;
      (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a914(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18)),ar5_00,piVar2,ar7));
      if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
        uVar7 = 1;
        piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10));
        piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),piVar6,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),1); });
        *(le<short>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = (*(le<int>* )(fr0_ - 0xc));
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar2,piVar6,piVar3,uVar7));
        return 0xffffffff;
      }
      ar7 = 3;
      piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10));
      piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
      ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)),piVar6,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),3); });
      *(le<undefined2>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x42) = 0;
      if ((*(le<int>* )(fr0_ - 0x12c)) != 0) {
        *(le<uint>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x10) = *(le<uint>* )(unsigned)(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 0x10) | 8;
      }
    }
    goto LAB_8c23878e;
  }
  (*(le<unsigned>* )(fr0_ - 0x14) = (unsigned)(unsigned long)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c277b08) + (*(le<int>* )(fr0_ - 0x124)) * 0x11));
  ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18))[2] = (int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14));
  uVar1 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18))[1] & 0xa0000000;
  if (uVar1 == 0) {
    if ((((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] & 2U) == 0) {
      piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 5;
      piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18));
      (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a914(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18)),piVar6,piVar2,ar7));
      if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
        *(le<short>* )(unsigned)((int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = (*(le<int>* )(fr0_ - 0xc));
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar3,piVar6,piVar2,ar7));
        return 0xffffffff;
      }
      *(le<undefined2>* )(unsigned)((int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 0x42) = 0;
      if ((*(le<int>* )(fr0_ - 0x12c)) == 0) {
        piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14));
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c2571fe(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)),piVar6,piVar2,ar7));
        ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] | 2;
        *(le<short>* )(unsigned)(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 0x10) = (short)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[0x10] + 1;
      }
      else {
        piVar6 = (le<int>* )(unsigned)0x2;
        piVar2 = (le<int>* )(unsigned)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[5];
        piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x170))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 372)); FUN_8c25a608(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),2,piVar2,ar7); });
        ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] | 8;
      }
      goto LAB_8c23878e;
    }
    if ((*(le<int>* )(fr0_ - 0x12c)) == 0) {
      *(le<short>* )(unsigned)(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 0x10) = (short)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[0x10] + 1;
      goto LAB_8c23878e;
    }
LAB_8c238436:
    piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x170))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 372)); FUN_8c25a6ea(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),piVar6,piVar2,ar7); });
  }
  else {
    if (uVar1 == 0x80000000) {
      if ((((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] & 1U) != 0) goto LAB_8c23878e;
      piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 5;
      piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18));
      (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a838(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18)),piVar6,piVar2,ar7));
      if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
        *(le<short>* )(unsigned)((int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = (*(le<int>* )(fr0_ - 0xc));
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar3,piVar6,piVar2,ar7));
        return 0xffffffff;
      }
      *(le<undefined2>* )(unsigned)((int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 0x42) = 0;
      if ((*(le<int>* )(fr0_ - 0x12c)) == 0) {
        ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] | 1;
        goto LAB_8c23878e;
      }
      piVar2 = (le<int>* )(unsigned)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[5];
      piVar6 = (le<int>* )(unsigned)0x1;
    }
    else {
      if (uVar1 != 0x20000000) goto LAB_8c23878e;
      if ((((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] & 2U) == 0) {
        piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 5;
        piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18));
        (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a914(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18)),piVar6,piVar2,ar7));
        if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
          *(le<short>* )(unsigned)((int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = (*(le<int>* )(fr0_ - 0xc));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar3,piVar6,piVar2,ar7));
          return 0xffffffff;
        }
        *(le<undefined2>* )(unsigned)((int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 0x42) = 0;
        if ((*(le<int>* )(fr0_ - 0x12c)) == 0) {
          piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14));
          (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c2571fe(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)),piVar6,piVar2,ar7));
          ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] | 2;
          *(le<undefined2>* )(unsigned)(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 0x10) = 1;
        }
        else {
          piVar6 = (le<int>* )(unsigned)0x2;
          piVar2 = (le<int>* )(unsigned)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[5];
          piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x170))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 372)); FUN_8c25a608(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),2,piVar2,ar7); });
          ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] | 8;
        }
        goto LAB_8c23878e;
      }
      if ((((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] & 1U) != 0) {
        if ((*(le<int>* )(fr0_ - 0x12c)) == 0) {
          *(le<short>* )(unsigned)(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 0x10) = (short)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[0x10] + 1;
          goto LAB_8c23878e;
        }
        goto LAB_8c238436;
      }
      piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 5;
      piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18));
      (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a838(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18)),piVar6,piVar2,ar7));
      if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
        *(le<short>* )(unsigned)((int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = (*(le<int>* )(fr0_ - 0xc));
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar3,piVar6,piVar2,ar7));
        return 0xffffffff;
      }
      *(le<undefined2>* )(unsigned)((int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 0x42) = 0;
      if ((*(le<int>* )(fr0_ - 0x12c)) == 0) {
        ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[4] | 1;
        *(le<short>* )(unsigned)(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 0x10) = (short)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[0x10] + 1;
        goto LAB_8c23878e;
      }
      piVar6 = (le<int>* )(unsigned)0x3;
      piVar2 = (le<int>* )(unsigned)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x14))[5];
    }
    piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x170))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 372)); FUN_8c25a608(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),piVar6,piVar2,ar7); });
  }
LAB_8c23878e:
  (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar3,piVar6,piVar2,ar7));
  return 1;
}

__asm__(".globl FUN_8c237964\n.set FUN_8c237964, FUN_8c237964_def\n");

}
