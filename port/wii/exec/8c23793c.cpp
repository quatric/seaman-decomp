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
undefined4 FUN_8c23793c_def(le<int>* ar4,int ar5,undefined4 ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c23793c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 376; for (int i_ = 0; i_ < 376; i_++) z_[i_] = 0; }
  le<int>* ar5_00;
  int iVar1;
  uint uVar2;
  le<int>* ar6_00;
  le<int>* piVar3;
  le<int>* ar4_00;
  int iVar4;
  undefined1 *puVar5;
  le<int>* piVar6;
  le<le<int>*>* ar5_01;
  int ar5_02;
  int ar5_03;
  undefined *ar6_01;
  le<int>* piVar7;
  uint ar6_02;
  undefined4 ar6_03;
  undefined4 uVar8;
  uint uVar9;
  le<undefined4>* ar4_01;
  le<uint>* ar5_04;
  
  switch((*(le<uint>* )(unsigned)(ar5 * 0xc + *ar4 + 4) & 0x40000000) != 0) {
  case false:
    (*(le<int>* )(fr0_ - 0x12c)) = 0;
    (*(le<uint>* )(fr0_ - 0x134)) = 0xffffffff;
    piVar3 = (le<int>* )(unsigned)(ar5 * 0xc + *ar4);
    piVar7 = piVar3 + 2;
    if (((piVar3[1] & 0x10000U) != 0) && (ar5 != 0)) {
      iVar1 = *ar4;
      (*(le<uint>* )(fr0_ - 0x134)) = (uint)piVar3[2] >> 0x1a;
      (*(le<int>* )(fr0_ - 0x124)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a536((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),ar7));
      if ((*(le<uint>* )(unsigned)((*(le<int>* )(fr0_ - 0x124)) * 0x44 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + 0x10) & 1) == 0) {
        uVar8 = 2;
      }
      else {
        uVar8 = 3;
      }
      iVar1 = (ar5 + -1) * 0xc + iVar1 + 0x1c;
      ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,iVar1,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),uVar8); });
      *(le<undefined2>* )(unsigned)(*piVar7 + 0x42) = 0;
      (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c2571fe(*piVar7,iVar1,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),uVar8));
      return 1;
    }
    ar6_01 = ((undefined1 *)(unsigned)0x8c26d960);
    iVar1 = *piVar3;
    (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a174(((le<int>* )(fr0_ - 0x120)),iVar1,((undefined1 *)(unsigned)0x8c26d960),ar7));
    piVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c);
    if ((*(le<uint>* )(unsigned)(ar5 * 0xc + *ar4 + 4) & 0x800000) == 0) {
      if ((*(le<uint>* )(unsigned)(ar5 * 0xc + *ar4 + 4) & 0x1000000) == 0) {
        (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c259be8(((le<int>* )(fr0_ - 0x120)),iVar1,ar6_01,ar7));
        if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
          (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c23c814(((undefined1 *)(fr0_ - 0x168)),((undefined1 *)(unsigned)0x8c4ab10c),0x28,ar7));
          ({ unsigned long t0_ = (unsigned long)(0xffffffff); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,((undefined1 *)(fr0_ - 0x16c)),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),0); });
          *(le<short>* )(unsigned)(*piVar7 + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
          *(le<undefined2>* )(unsigned)(*piVar7 + 0x40) = 0;
          return 0xffffffff;
        }
        (*(le<int>* )(fr0_ - 0x12c)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a216(((le<int>*  *)(fr0_ - 0x130)),iVar1,ar6_01,ar7));
        if ((*(le<int>* )(fr0_ - 0x12c)) < 0) {
          (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c23c814(((undefined1 *)(fr0_ - 0x168)),((undefined1 *)(unsigned)0x8c4ab10c),0x28,ar7));
          uVar8 = 0;
          puVar5 = ((undefined1 *)(fr0_ - 0x16c));
          ({ unsigned long t0_ = (unsigned long)(0xffffffff); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,puVar5,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),0); });
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b4) = -(*(le<int>* )(fr0_ - 0x12c));
          (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c259c40(piVar7,puVar5,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),uVar8));
          return 0xffffffff;
        }
        ar4_00 = (le<int>* )(unsigned)(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08);
        piVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c);
        ar6_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        (*(le<int>* )(fr0_ - 0x124)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a536((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),ar7));
        if ((*(le<int>* )(fr0_ - 0x12c)) == 1) {
          uVar9 = (uint)piVar3[2] >> 0x1a;
          (*(le<uint>* )(fr0_ - 0x134)) = uVar9;
          if ((*(le<int>* )(fr0_ - 0x124)) < 0) {
            (*(le<int>* )(fr0_ - 0x138)) = 2;
          }
          else {
            ar4_00 = (le<int>* )(unsigned)(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08);
            piVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c);
            ar6_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
            (*(le<int>* )(fr0_ - 0x128)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a5c0((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),uVar9));
            ar7 = uVar9;
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
        ar6_00 = (le<int>* )(unsigned)(piVar3[2] & 0x3ffffff);
        (*(le<uint>* )(fr0_ - 0x134)) = (uint)piVar3[2] >> 0x1a;
        (*(le<unsigned>* )(fr0_ - 0x130) = (unsigned)(unsigned long)(ar6_00));
        (*(le<int>* )(fr0_ - 0x124)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a536((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),ar6_00,ar7));
        if ((*(le<int>* )(fr0_ - 0x124)) < 0) {
          (*(le<int>* )(fr0_ - 0x138)) = 2;
        }
        else {
          piVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c);
          ar6_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          ar7 = (*(le<uint>* )(fr0_ - 0x134));
          (*(le<int>* )(fr0_ - 0x128)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a5c0((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),(*(le<uint>* )(fr0_ - 0x134))));
          if ((*(le<int>* )(fr0_ - 0x128)) < 0) {
            (*(le<int>* )(fr0_ - 0x138)) = 0;
          }
          else {
            (*(le<int>* )(fr0_ - 0x138)) = 1;
          }
        }
        (*(le<int>* )(fr0_ - 0x12c)) = 1;
        ar4_00 = ((le<int>* )(fr0_ - 0x120));
        (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c259be8(ar4_00,piVar6,ar6_00,ar7));
        if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
          (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c23c814(((undefined1 *)(fr0_ - 0x168)),((undefined1 *)(unsigned)0x8c4ab10c),0x28,ar7));
          ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,((undefined1 *)(fr0_ - 0x16c)),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),0); });
          *(le<short>* )(unsigned)(*piVar7 + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
          *(le<undefined2>* )(unsigned)(*piVar7 + 0x40) = 0;
          return 0xffffffff;
        }
      }
    }
    else {
      ar6_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar5 * 0xc + *ar4 + 8));
      (*(le<unsigned>* )(fr0_ - 0x130) = (unsigned)(unsigned long)(ar6_00));
      (*(le<int>* )(fr0_ - 0x124)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a536((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),ar6_00,ar7));
      if ((*(le<int>* )(fr0_ - 0x124)) < 0) {
        (*(le<int>* )(fr0_ - 0x138)) = 2;
      }
      else {
        (*(le<int>* )(fr0_ - 0x138)) = 1;
      }
      ar4_00 = ((le<int>* )(fr0_ - 0x120));
      (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c259be8(ar4_00,piVar6,ar6_00,ar7));
      if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
        (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c23c814(((undefined1 *)(fr0_ - 0x168)),((undefined1 *)(unsigned)0x8c4ab10c),0x28,ar7));
        ({ unsigned long t0_ = (unsigned long)(0xffffffff); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,((undefined1 *)(fr0_ - 0x16c)),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),0); });
        *(le<short>* )(unsigned)(*piVar7 + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
        *(le<undefined2>* )(unsigned)(*piVar7 + 0x40) = 0;
        return 0xffffffff;
      }
    }
    if ((*(le<int>* )(fr0_ - 0x138)) == 0) {
      iVar1 = (*(le<int>* )(fr0_ - 0x124)) * 0x44 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08);
      if ((*(le<uint>* )(unsigned)(iVar1 + 0x10) & 2) == 0) {
        uVar9 = piVar3[1] & 0xa0000000;
        if ((uVar9 == 0) || (uVar9 == 0x20000000)) {
          (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a914(piVar3,iVar1 + 0x14,ar6_00,ar7));
          if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
            uVar8 = 1;
            iVar1 = iVar1 + 0x14;
            piVar3 = piVar7;
            piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
            ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,iVar1,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),1); });
            *(le<short>* )(unsigned)(*piVar7 + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = ar5;
            (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c259c40(piVar3,iVar1,piVar6,uVar8));
            return 0xffffffff;
          }
          ar7 = 1;
          ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,iVar1 + 0x14,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),1); });
          piVar6 = (le<int>* )(unsigned)0x2;
          *(le<undefined2>* )(unsigned)(*piVar7 + 0x42) = 0;
          ar6_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(*piVar7 + 0x14));
          ar4_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          ({ unsigned long ri0_ = (unsigned long)(0x40); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 376)); FUN_8c25a608(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),2,ar6_00,ar7); });
          *(le<uint>* )(unsigned)(iVar1 + 0x10) = *(le<uint>* )(unsigned)(iVar1 + 0x10) | 8;
        }
        else if (uVar9 == 0x80000000) {
          ar7 = 1;
          piVar6 = (le<int>* )(unsigned)(iVar1 + 0x14);
          ar4_00 = piVar7;
          ar6_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,piVar6,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),1); });
          *(le<undefined2>* )(unsigned)(*piVar7 + 0x42) = 0;
        }
      }
      else {
        uVar9 = piVar3[1] & 0xa0000000;
        if (uVar9 == 0) {
          ar7 = *(le<uint>* )(unsigned)(iVar1 + 0x10);
          piVar6 = (le<int>* )(unsigned)(iVar1 + 0x14);
          ar6_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,piVar6,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),ar7); });
          *(le<undefined2>* )(unsigned)(*piVar7 + 0x40) = *(le<undefined2>* )(unsigned)(iVar1 + 0x40);
          *(le<undefined2>* )(unsigned)(*piVar7 + 0x42) = 0;
          ar4_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          ({ unsigned long ri0_ = (unsigned long)(0x40); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 376)); FUN_8c25a6ea(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),piVar6,ar6_00,ar7); });
        }
        else if (uVar9 == 0x80000000) {
          if ((*(le<uint>* )(unsigned)(iVar1 + 0x10) & 1) == 0) {
            (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a838(piVar3,iVar1 + 0x14,ar6_00,ar7));
            if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
              uVar8 = 2;
              iVar4 = iVar1 + 0x14;
              piVar3 = piVar7;
              piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
              ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,iVar4,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),2); });
              *(le<undefined2>* )(unsigned)(*piVar7 + 0x40) = *(le<undefined2>* )(unsigned)(iVar1 + 0x40);
              *(le<short>* )(unsigned)(*piVar7 + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
              (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
              (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = ar5;
              (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c259c40(piVar3,iVar4,piVar6,uVar8));
              return 0xffffffff;
            }
            ar7 = 2;
            ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,iVar1 + 0x14,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),2); });
            piVar6 = (le<int>* )(unsigned)0x1;
            *(le<undefined2>* )(unsigned)(*piVar7 + 0x40) = *(le<undefined2>* )(unsigned)(iVar1 + 0x40);
            *(le<undefined2>* )(unsigned)(*piVar7 + 0x42) = 0;
            ar6_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(*piVar7 + 0x14));
            ar4_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
            ({ unsigned long ri0_ = (unsigned long)(0x40); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 376)); FUN_8c25a608(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),1,ar6_00,ar7); });
          }
          else {
            ar7 = 3;
            piVar6 = (le<int>* )(unsigned)(iVar1 + 0x14);
            ar4_00 = piVar7;
            ar6_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
            ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,piVar6,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),3); });
            *(le<undefined2>* )(unsigned)(*piVar7 + 0x40) = *(le<undefined2>* )(unsigned)(iVar1 + 0x40);
            *(le<undefined2>* )(unsigned)(*piVar7 + 0x42) = 0;
          }
        }
        else if (uVar9 == 0x20000000) {
          if ((*(le<uint>* )(unsigned)(iVar1 + 0x10) & 1) == 0) {
            (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a838(piVar3,iVar1 + 0x14,ar6_00,ar7));
            if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
              uVar8 = 2;
              iVar4 = iVar1 + 0x14;
              piVar3 = piVar7;
              piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
              ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,iVar4,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),2); });
              *(le<undefined2>* )(unsigned)(*piVar7 + 0x40) = *(le<undefined2>* )(unsigned)(iVar1 + 0x40);
              *(le<short>* )(unsigned)(*piVar7 + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
              (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
              (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = ar5;
              (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c259c40(piVar3,iVar4,piVar6,uVar8));
              return 0xffffffff;
            }
            ar7 = 2;
            ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,iVar1 + 0x14,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),2); });
            piVar6 = (le<int>* )(unsigned)0x3;
            *(le<undefined2>* )(unsigned)(*piVar7 + 0x40) = *(le<undefined2>* )(unsigned)(iVar1 + 0x40);
            *(le<undefined2>* )(unsigned)(*piVar7 + 0x42) = 0;
            ar6_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(*piVar7 + 0x14));
            ar4_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
            ({ unsigned long ri0_ = (unsigned long)(0x40); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 376)); FUN_8c25a608(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),3,ar6_00,ar7); });
          }
          else {
            ar7 = 3;
            piVar6 = (le<int>* )(unsigned)(iVar1 + 0x14);
            ar6_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
            ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,piVar6,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),3); });
            *(le<undefined2>* )(unsigned)(*piVar7 + 0x40) = *(le<undefined2>* )(unsigned)(iVar1 + 0x40);
            *(le<undefined2>* )(unsigned)(*piVar7 + 0x42) = 0;
            ar4_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
            ({ unsigned long ri0_ = (unsigned long)(0x40); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 376)); FUN_8c25a6ea(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),piVar6,ar6_00,ar7); });
          }
        }
      }
      (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c259c40(ar4_00,piVar6,ar6_00,ar7));
      return 1;
    }
    if ((*(le<int>* )(fr0_ - 0x138)) != 1) {
      if ((*(le<int>* )(fr0_ - 0x138)) != 2) {
        return 1;
      }
      ar4_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
      ar5_00 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a710(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),piVar6,ar6_00,ar7));
      uVar9 = piVar3[1] & 0xa0000000;
      if (uVar9 == 0) {
        (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a770(piVar3,ar5_00,ar6_00,ar7));
        if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
          uVar8 = 0;
          piVar3 = piVar7;
          piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,ar5_00,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),0); });
          *(le<short>* )(unsigned)(*piVar7 + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
          *(le<undefined2>* )(unsigned)(*piVar7 + 0x40) = 0;
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = ar5;
          (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c259c40(piVar3,ar5_00,piVar6,uVar8));
          return 0xffffffff;
        }
        ar7 = 2;
        ar4_00 = piVar7;
        ar6_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,ar5_00,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),2); });
        *(le<undefined2>* )(unsigned)(*piVar7 + 0x42) = 0;
        piVar6 = ar5_00;
        if ((*(le<int>* )(fr0_ - 0x12c)) != 0) {
          *(le<uint>* )(unsigned)(*piVar7 + 0x10) = *(le<uint>* )(unsigned)(*piVar7 + 0x10) | 8;
        }
      }
      else if (uVar9 == 0x80000000) {
        (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a838(piVar3,ar5_00,ar6_00,ar7));
        if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
          uVar8 = 0;
          piVar3 = piVar7;
          piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,ar5_00,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),0); });
          *(le<short>* )(unsigned)(*piVar7 + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = ar5;
          (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c259c40(piVar3,ar5_00,piVar6,uVar8));
          return 0xffffffff;
        }
        ar7 = 1;
        ar4_00 = piVar7;
        ar6_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,ar5_00,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),1); });
        *(le<undefined2>* )(unsigned)(*piVar7 + 0x42) = 0;
        piVar6 = ar5_00;
      }
      else if (uVar9 == 0x20000000) {
        (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a838(piVar3,ar5_00,ar6_00,ar7));
        if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
          uVar8 = 0;
          puVar5 = ((undefined1 *)(fr0_ - 0x16c));
          piVar3 = piVar7;
          piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,puVar5,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),0); });
          *(le<short>* )(unsigned)(*piVar7 + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
          *(le<undefined2>* )(unsigned)(*piVar7 + 0x40) = 0;
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = ar5;
          (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c259c40(piVar3,puVar5,piVar6,uVar8));
          return 0xffffffff;
        }
        (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a914(piVar3,ar5_00,ar6_00,ar7));
        if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
          uVar8 = 1;
          piVar3 = piVar7;
          piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,ar5_00,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),1); });
          *(le<short>* )(unsigned)(*piVar7 + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = ar5;
          (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c259c40(piVar3,ar5_00,piVar6,uVar8));
          return 0xffffffff;
        }
        ar7 = 3;
        ar4_00 = piVar7;
        ar6_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
        ({ unsigned long t0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x134))); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar7,ar5_00,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),3); });
        *(le<undefined2>* )(unsigned)(*piVar7 + 0x42) = 0;
        piVar6 = ar5_00;
        if ((*(le<int>* )(fr0_ - 0x12c)) != 0) {
          *(le<uint>* )(unsigned)(*piVar7 + 0x10) = *(le<uint>* )(unsigned)(*piVar7 + 0x10) | 8;
        }
      }
      goto LAB_8c23878e;
    }
    piVar7 = (le<int>* )(unsigned)((*(le<int>* )(fr0_ - 0x124)) * 0x44 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08));
    piVar3[2] = (int)piVar7;
    uVar9 = piVar3[1] & 0xa0000000;
    if (uVar9 == 0) {
      if ((piVar7[4] & 2U) == 0) {
        piVar6 = piVar7 + 5;
        (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a914(piVar3,piVar6,ar6_00,ar7));
        if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
          *(le<short>* )(unsigned)((int)piVar7 + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = ar5;
          (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c259c40(piVar3,piVar6,ar6_00,ar7));
          return 0xffffffff;
        }
        *(le<undefined2>* )(unsigned)((int)piVar7 + 0x42) = 0;
        if ((*(le<int>* )(fr0_ - 0x12c)) == 0) {
          ar4_00 = piVar7;
          (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c2571fe(piVar7,piVar6,ar6_00,ar7));
          piVar7[4] = piVar7[4] | 2;
          *(le<short>* )(unsigned)(piVar7 + 0x10) = (short)piVar7[0x10] + 1;
        }
        else {
          piVar6 = (le<int>* )(unsigned)0x2;
          ar6_00 = (le<int>* )(unsigned)piVar7[5];
          ar4_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          ({ unsigned long ri0_ = (unsigned long)(0x40); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 376)); FUN_8c25a608(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),2,ar6_00,ar7); });
          piVar7[4] = piVar7[4] | 8;
        }
        goto LAB_8c23878e;
      }
      if ((*(le<int>* )(fr0_ - 0x12c)) == 0) {
        *(le<short>* )(unsigned)(piVar7 + 0x10) = (short)piVar7[0x10] + 1;
        goto LAB_8c23878e;
      }
LAB_8c238436:
      ar4_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
      ({ unsigned long ri0_ = (unsigned long)(0x40); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 376)); FUN_8c25a6ea(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),piVar6,ar6_00,ar7); });
    }
    else {
      if (uVar9 == 0x80000000) {
        if ((piVar7[4] & 1U) != 0) goto LAB_8c23878e;
        piVar6 = piVar7 + 5;
        (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a838(piVar3,piVar6,ar6_00,ar7));
        if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
          *(le<short>* )(unsigned)((int)piVar7 + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = ar5;
          (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c259c40(piVar3,piVar6,ar6_00,ar7));
          return 0xffffffff;
        }
        *(le<undefined2>* )(unsigned)((int)piVar7 + 0x42) = 0;
        if ((*(le<int>* )(fr0_ - 0x12c)) == 0) {
          piVar7[4] = piVar7[4] | 1;
          ar4_00 = piVar3;
          goto LAB_8c23878e;
        }
        ar6_00 = (le<int>* )(unsigned)piVar7[5];
        piVar6 = (le<int>* )(unsigned)0x1;
      }
      else {
        if (uVar9 != 0x20000000) goto LAB_8c23878e;
        if ((piVar7[4] & 2U) == 0) {
          piVar6 = piVar7 + 5;
          (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a914(piVar3,piVar6,ar6_00,ar7));
          if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
            *(le<short>* )(unsigned)((int)piVar7 + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = ar5;
            (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c259c40(piVar3,piVar6,ar6_00,ar7));
            return 0xffffffff;
          }
          *(le<undefined2>* )(unsigned)((int)piVar7 + 0x42) = 0;
          if ((*(le<int>* )(fr0_ - 0x12c)) == 0) {
            ar4_00 = piVar7;
            (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c2571fe(piVar7,piVar6,ar6_00,ar7));
            piVar7[4] = piVar7[4] | 2;
            *(le<undefined2>* )(unsigned)(piVar7 + 0x10) = 1;
          }
          else {
            piVar6 = (le<int>* )(unsigned)0x2;
            ar6_00 = (le<int>* )(unsigned)piVar7[5];
            ar4_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
            ({ unsigned long ri0_ = (unsigned long)(0x40); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 376)); FUN_8c25a608(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),2,ar6_00,ar7); });
            piVar7[4] = piVar7[4] | 8;
          }
          goto LAB_8c23878e;
        }
        if ((piVar7[4] & 1U) != 0) {
          if ((*(le<int>* )(fr0_ - 0x12c)) == 0) {
            *(le<short>* )(unsigned)(piVar7 + 0x10) = (short)piVar7[0x10] + 1;
            goto LAB_8c23878e;
          }
          goto LAB_8c238436;
        }
        piVar6 = piVar7 + 5;
        (*(le<int>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a838(piVar3,piVar6,ar6_00,ar7));
        if ((*(le<int>* )(fr0_ - 0x20)) < 0) {
          *(le<short>* )(unsigned)((int)piVar7 + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x20));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = ar5;
          (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c259c40(piVar3,piVar6,ar6_00,ar7));
          return 0xffffffff;
        }
        *(le<undefined2>* )(unsigned)((int)piVar7 + 0x42) = 0;
        if ((*(le<int>* )(fr0_ - 0x12c)) == 0) {
          piVar7[4] = piVar7[4] | 1;
          *(le<short>* )(unsigned)(piVar7 + 0x10) = (short)piVar7[0x10] + 1;
          ar4_00 = piVar3;
          goto LAB_8c23878e;
        }
        piVar6 = (le<int>* )(unsigned)0x3;
        ar6_00 = (le<int>* )(unsigned)piVar7[5];
      }
      ar4_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130));
      ({ unsigned long ri0_ = (unsigned long)(0x40); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 376)); FUN_8c25a608(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x130)),piVar6,ar6_00,ar7); });
    }
LAB_8c23878e:
    (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c259c40(ar4_00,piVar6,ar6_00,ar7));
    return 1;
  }
  ar5_01 = (le<le<int>*>*)(((le<int>*  *)(fr0_ - 0x3c)));
  ar4_01 = (le<undefined4>* )(unsigned)(*ar4 + ar5 * 0xc);
  uVar9 = 0xffffffff;
  piVar3 = (le<int>*)(ar4_01 + 2);
  (*(le<int>* )(fr0_ - 0x34)) = ar5;
  if (((ar4_01[1] & 0x10000) != 0) && (ar5 != 0)) {
    iVar4 = *ar4;
    uVar9 = ar4_01[2];
    iVar1 = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a536((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),ar7));
    if ((*(le<uint>* )(unsigned)(iVar1 * 0x44 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + 0x10) & 1) == 0) {
      uVar8 = 2;
    }
    else {
      uVar8 = 3;
    }
    iVar1 = iVar4 + (ar5 + -1) * 0xc + 0x1c;
    ({ unsigned long t0_ = (unsigned long)(uVar9 >> 0x1a); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar3,iVar1,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),uVar8); });
    *(le<undefined2>* )(unsigned)(*piVar3 + 0x42) = 0;
    (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c2571fe(*piVar3,iVar1,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),uVar8));
    goto LAB_8c238e44;
  }
  if ((ar4_01[1] & 0x800000) == 0) {
    if ((*(le<uint>* )(unsigned)(ar5 * 0xc + *ar4 + 4) & 0x1000000) != 0) {
      (*(le<unsigned>* )(fr0_ - 0x3c) = (unsigned)(unsigned long)((le<int>* )(unsigned)(ar4_01[2] & 0x3ffffff)));
      uVar9 = (uint)ar4_01[2] >> 0x1a;
      (*(le<int>* )(fr0_ - 0x38)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a536((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),ar7));
      ar5_04 = (le<uint>* )(unsigned)*ar4_01;
      piVar7 = (le<int>* )(unsigned)*ar5_04;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25abf0(&(*(le<uint>* )(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x30)),piVar7,ar7));
      if (uVar2 != 0) {
        *ar5_04 = uVar2;
        ar5_04[4] = (uint)(*(le<ushort>* )(fr0_ - 0x24));
        ar5_04[5] = (uint)(*(le<ushort>* )(fr0_ - 0x22));
        ar5_04[1] = (*(le<uint>* )(fr0_ - 0x28)) << 0x10;
      }
      if ((*(le<int>* )(fr0_ - 0x38)) < 0) {
        iVar1 = 2;
      }
      else {
        piVar7 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c));
        ar7 = uVar9;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a5c0((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),uVar9));
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = 1;
        }
      }
      iVar4 = 1;
      goto LAB_8c238a34;
    }
    ar5_04 = (le<uint>* )(unsigned)*ar4_01;
    ar6_02 = *ar5_04;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25abf0(&(*(le<uint>* )(fr0_ - 0x28)),((le<int>*  *)(fr0_ - 0x3c)),ar6_02,ar7));
    if (uVar2 != 0) {
      *ar5_04 = uVar2;
      ar5_04[4] = (uint)(*(le<ushort>* )(fr0_ - 0x24));
      ar5_04[5] = (uint)(*(le<ushort>* )(fr0_ - 0x22));
      ar5_04[1] = (*(le<uint>* )(fr0_ - 0x28)) << 0x10;
    }
    if (((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)) == (le<int>* )(unsigned)0xffffffff) {
      while (piVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c), piVar7 = (le<int>* )(unsigned)(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b18),
            (*(le<int>* )(fr0_ - 0x38)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a536((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b18),ar7)), (*(le<int>* )(fr0_ - 0x38)) != -1) {
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b18) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b18) - 1;
      }
      (*(le<unsigned>* )(fr0_ - 0x3c) = (unsigned)(unsigned long)((le<int>* )(unsigned)(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b18)));
      iVar4 = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a1ee((*(le<uint>* )(fr0_ - 0x28)) & 0xff00,piVar6,piVar7,ar7));
      if (iVar4 == 1) {
        uVar9 = (uint)ar4_01[2] >> 0x1a;
      }
LAB_8c238a2e:
      iVar1 = 2;
      goto LAB_8c238a34;
    }
    iVar4 = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a1ee((*(le<uint>* )(fr0_ - 0x28)) & 0xff00,ar5_01,ar6_02,ar7));
    piVar7 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c));
    (*(le<int>* )(fr0_ - 0x38)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a536((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),ar7));
    if (iVar4 == 1) {
      uVar9 = (uint)ar4_01[2] >> 0x1a;
      if ((*(le<int>* )(fr0_ - 0x38)) < 0) goto LAB_8c238a2e;
      piVar7 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c));
      ar7 = uVar9;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a5c0((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),uVar9));
      if (-1 < iVar1) goto LAB_8c238a32;
      iVar1 = 0;
      goto LAB_8c238a34;
    }
    if (((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)) != (le<int>* )(unsigned)0xffffffff) {
      if ((*(le<int>* )(fr0_ - 0x38)) < 0) goto LAB_8c238a2e;
LAB_8c238a32:
      iVar1 = 1;
      goto LAB_8c238a34;
    }
    ({ unsigned long t0_ = (unsigned long)(0xffffffff); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar3,ar5_04,0xffffffff,0); });
    *(le<undefined2>* )(unsigned)(*piVar3 + 0x42) = 9;
    *(le<undefined2>* )(unsigned)(*piVar3 + 0x40) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b4) = 9;
LAB_8c238e20:
    uVar8 = 0xffffffff;
  }
  else {
    (*(le<unsigned>* )(fr0_ - 0x3c) = (unsigned)(unsigned long)((le<int>* )(unsigned)ar4_01[2]));
    ar5_04 = (le<uint>* )(unsigned)*ar4_01;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25abf0(&(*(le<uint>* )(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x30)),*ar5_04,ar7));
    if (uVar2 != 0) {
      *ar5_04 = uVar2;
      ar5_04[4] = (uint)(*(le<ushort>* )(fr0_ - 0x24));
      ar5_04[5] = (uint)(*(le<ushort>* )(fr0_ - 0x22));
      ar5_04[1] = (*(le<uint>* )(fr0_ - 0x28)) << 0x10;
    }
    piVar7 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c));
    (*(le<int>* )(fr0_ - 0x38)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a536((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),ar7));
    if ((*(le<int>* )(fr0_ - 0x38)) < 0) {
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
    iVar4 = 0;
LAB_8c238a34:
    ar5_02 = (*(le<int>* )(fr0_ - 0x38)) * 0x44 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08);
    if (iVar1 == 0) {
      if ((*(le<uint>* )(unsigned)(ar5_02 + 0x10) & 2) == 0) {
        uVar2 = ar4_01[1] & 0xa0000000;
        if ((uVar2 != 0) && (uVar2 != 0x20000000)) {
          if (uVar2 == 0x80000000) {
            ({ unsigned long t0_ = (unsigned long)(uVar9); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar3,ar5_02 + 0x14,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),1); });
LAB_8c238dc6:
            *(le<undefined2>* )(unsigned)(*piVar3 + 0x42) = 0;
          }
          goto LAB_8c238e44;
        }
        (*(le<int>* )(fr0_ - 0x2c)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a914(ar4_01,ar5_02 + 0x14,piVar7,ar7));
        if (-1 < (*(le<int>* )(fr0_ - 0x2c))) {
          ar7 = 1;
          ({ unsigned long t0_ = (unsigned long)(uVar9); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar3,ar5_02 + 0x14,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),1); });
          *(le<undefined2>* )(unsigned)(*piVar3 + 0x42) = 0;
          goto LAB_8c238d18;
        }
        ({ unsigned long t0_ = (unsigned long)(uVar9); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar3,ar5_02 + 0x14,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),1); });
LAB_8c238e0a:
        *(le<short>* )(unsigned)(*piVar3 + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x2c));
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = (*(le<int>* )(fr0_ - 0x34));
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c));
        goto LAB_8c238e20;
      }
      uVar2 = ar4_01[1] & 0xa0000000;
      if (uVar2 == 0) {
        ar7 = *(le<uint>* )(unsigned)(ar5_02 + 0x10);
LAB_8c238b9e:
        iVar1 = ar5_02 + 0x14;
        piVar7 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c));
        ({ unsigned long t0_ = (unsigned long)(uVar9); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar3,iVar1,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),ar7); });
        *(le<undefined2>* )(unsigned)(*piVar3 + 0x40) = *(le<undefined2>* )(unsigned)(ar5_02 + 0x40);
        uVar9 = 0x42;
        *(le<undefined2>* )(unsigned)(*piVar3 + 0x42) = 0;
LAB_8c238cee:
        ({ unsigned long ri0_ = (unsigned long)(uVar9); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 376)); FUN_8c25a6ea(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),iVar1,piVar7,ar7); });
      }
      else {
        if (uVar2 == 0x80000000) {
          if ((*(le<uint>* )(unsigned)(ar5_02 + 0x10) & 1) != 0) {
            ({ unsigned long t0_ = (unsigned long)(uVar9); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar3,ar5_02 + 0x14,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),3); });
            *(le<undefined2>* )(unsigned)(*piVar3 + 0x40) = *(le<undefined2>* )(unsigned)(ar5_02 + 0x40);
            goto LAB_8c238dc6;
          }
          (*(le<int>* )(fr0_ - 0x38)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a8c0(ar4_01,ar5_02 + 0x14,piVar7,ar7));
          if (-1 < (*(le<int>* )(fr0_ - 0x38))) {
            ar7 = 2;
            ({ unsigned long t0_ = (unsigned long)(uVar9); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar3,ar5_02 + 0x14,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),2); });
            *(le<undefined2>* )(unsigned)(*piVar3 + 0x40) = *(le<undefined2>* )(unsigned)(ar5_02 + 0x40);
            *(le<undefined2>* )(unsigned)(*piVar3 + 0x42) = 0;
            *(le<uint>* )(unsigned)(*piVar3 + 0x10) = *(le<uint>* )(unsigned)(*piVar3 + 0x10) & 0xfffffff7;
LAB_8c238c8e:
            ar6_03 = *(le<undefined4>* )(unsigned)(ar5_02 + 0x14);
            uVar8 = 1;
            goto LAB_8c238cd8;
          }
          ({ unsigned long t0_ = (unsigned long)(uVar9); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar3,ar5_02 + 0x14,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),2); });
          *(le<undefined2>* )(unsigned)(*piVar3 + 0x40) = *(le<undefined2>* )(unsigned)(ar5_02 + 0x40);
          *(le<short>* )(unsigned)(*piVar3 + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x38));
          *(le<uint>* )(unsigned)(*piVar3 + 0x10) = *(le<uint>* )(unsigned)(*piVar3 + 0x10) & 0xfffffff7;
LAB_8c238d7e:
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = (*(le<int>* )(fr0_ - 0x34));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c));
          goto LAB_8c238e20;
        }
        if (uVar2 == 0x20000000) {
          if ((*(le<uint>* )(unsigned)(ar5_02 + 0x10) & 1) != 0) {
            ar7 = 3;
            goto LAB_8c238b9e;
          }
          (*(le<int>* )(fr0_ - 0x2c)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a8c0(ar4_01,ar5_02 + 0x14,piVar7,ar7));
          if ((*(le<int>* )(fr0_ - 0x2c)) < 0) {
            ({ unsigned long t0_ = (unsigned long)(uVar9); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar3,ar5_02 + 0x14,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),2); });
            *(le<undefined2>* )(unsigned)(*piVar3 + 0x40) = *(le<undefined2>* )(unsigned)(ar5_02 + 0x40);
            goto LAB_8c238e0a;
          }
          ar7 = 2;
          ({ unsigned long t0_ = (unsigned long)(uVar9); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar3,ar5_02 + 0x14,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),2); });
          *(le<undefined2>* )(unsigned)(*piVar3 + 0x40) = *(le<undefined2>* )(unsigned)(ar5_02 + 0x40);
          *(le<undefined2>* )(unsigned)(*piVar3 + 0x42) = 0;
LAB_8c238cd4:
          ar6_03 = *(le<undefined4>* )(unsigned)(ar5_02 + 0x14);
          uVar8 = 3;
LAB_8c238cd8:
          ({ unsigned long ri0_ = (unsigned long)(0x42); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 376)); FUN_8c25a608(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),uVar8,ar6_03,ar7); });
        }
      }
    }
    else if (iVar1 == 1) {
      ar4_01[2] = ar5_02;
      uVar9 = ar4_01[1] & 0xa0000000;
      if (uVar9 == 0) {
        uVar9 = *(le<uint>* )(unsigned)(ar5_02 + 0x10);
        if ((uVar9 & 2) == 0) {
          ar5_03 = ar5_02 + 0x14;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a914(ar4_01,ar5_03,piVar7,ar7));
          if (iVar1 < 0) goto LAB_8c238d08;
          *(le<undefined2>* )(unsigned)(ar5_02 + 0x42) = 0;
          if (iVar4 != 0) {
LAB_8c238d18:
            ({ unsigned long ri0_ = (unsigned long)(0x42); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 376)); FUN_8c25a608(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),2,*(le<undefined4>* )(unsigned)(ar5_02 + 0x14),ar7); });
            *(le<uint>* )(unsigned)(ar5_02 + 0x10) = *(le<uint>* )(unsigned)(ar5_02 + 0x10) | 8;
            goto LAB_8c238e44;
          }
LAB_8c238d2a:
          (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c2571fe(ar5_02,ar5_03,piVar7,ar7));
          *(le<uint>* )(unsigned)(ar5_02 + 0x10) = *(le<uint>* )(unsigned)(ar5_02 + 0x10) | 2;
        }
        else {
joined_r0x8c238c46:
          iVar1 = ar5_02;
          if (iVar4 != 0) goto LAB_8c238cee;
        }
LAB_8c238d36:
        *(le<short>* )(unsigned)(ar5_02 + 0x40) = *(le<short>* )(unsigned)(ar5_02 + 0x40) + 1;
      }
      else if (uVar9 == 0x80000000) {
        if ((*(le<uint>* )(unsigned)(ar5_02 + 0x10) & 1) == 0) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a8c0(ar4_01,ar5_02 + 0x14,piVar7,ar7));
          if (iVar1 < 0) goto LAB_8c238d08;
          *(le<undefined2>* )(unsigned)(ar5_02 + 0x42) = 0;
          if (iVar4 != 0) goto LAB_8c238c8e;
          *(le<uint>* )(unsigned)(ar5_02 + 0x10) = *(le<uint>* )(unsigned)(ar5_02 + 0x10) | 1;
        }
      }
      else if (uVar9 == 0x20000000) {
        if ((*(le<uint>* )(unsigned)(ar5_02 + 0x10) & 2) == 0) {
          ar5_03 = ar5_02 + 0x14;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a914(ar4_01,ar5_03,piVar7,ar7));
          if (-1 < iVar1) {
            *(le<undefined2>* )(unsigned)(ar5_02 + 0x42) = 0;
            if (iVar4 == 0) goto LAB_8c238d2a;
            goto LAB_8c238d18;
          }
        }
        else {
          uVar9 = *(le<uint>* )(unsigned)(ar5_02 + 0x10);
          if ((uVar9 & 1) != 0) goto joined_r0x8c238c46;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a8c0(ar4_01,ar5_02 + 0x14,piVar7,ar7));
          if (-1 < iVar1) {
            *(le<undefined2>* )(unsigned)(ar5_02 + 0x42) = 0;
            if (iVar4 != 0) goto LAB_8c238cd4;
            *(le<uint>* )(unsigned)(ar5_02 + 0x10) = *(le<uint>* )(unsigned)(ar5_02 + 0x10) | 1;
            goto LAB_8c238d36;
          }
        }
LAB_8c238d08:
        *(le<short>* )(unsigned)(ar5_02 + 0x42) = -(short)iVar1;
        goto LAB_8c238d7e;
      }
    }
    else if (iVar1 == 2) {
      (*(le<int>* )(fr0_ - 0x38)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a710(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),ar5_02,piVar7,ar7));
      uVar8 = 0x2c;
      (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c23c814((*(le<int>* )(fr0_ - 0x38)),ar5_04,0x2c,ar7));
      uVar2 = ar4_01[1] & 0xa0000000;
      if (uVar2 == 0) {
        (*(le<int>* )(fr0_ - 0x2c)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a914(ar4_01,(*(le<int>* )(fr0_ - 0x38)),uVar8,ar7));
        if (-1 < (*(le<int>* )(fr0_ - 0x2c))) {
          ({ unsigned long t0_ = (unsigned long)(uVar9); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar3,(*(le<int>* )(fr0_ - 0x38)),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),2); });
          *(le<undefined2>* )(unsigned)(*piVar3 + 0x42) = 0;
joined_r0x8c238da2:
          if (iVar4 != 0) {
            *(le<uint>* )(unsigned)(*piVar3 + 0x10) = *(le<uint>* )(unsigned)(*piVar3 + 0x10) | 8;
          }
          goto LAB_8c238e44;
        }
      }
      else if (uVar2 == 0x80000000) {
        (*(le<int>* )(fr0_ - 0x2c)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a8c0(ar4_01,(*(le<int>* )(fr0_ - 0x38)),uVar8,ar7));
        if (-1 < (*(le<int>* )(fr0_ - 0x2c))) {
          ({ unsigned long t0_ = (unsigned long)(uVar9); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar3,(*(le<int>* )(fr0_ - 0x38)),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),1); });
          goto LAB_8c238dc6;
        }
      }
      else {
        if (uVar2 != 0x20000000) goto LAB_8c238e44;
        (*(le<int>* )(fr0_ - 0x2c)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a8c0(ar4_01,(*(le<int>* )(fr0_ - 0x38)),uVar8,ar7));
        if (-1 < (*(le<int>* )(fr0_ - 0x2c))) {
          (*(le<int>* )(fr0_ - 0x2c)) = (vsp = ((unsigned long)(fr0_ - 376)), FUN_8c25a914(ar4_01,(*(le<int>* )(fr0_ - 0x38)),uVar8,ar7));
          if ((*(le<int>* )(fr0_ - 0x2c)) < 0) {
            ({ unsigned long t0_ = (unsigned long)(uVar9); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar3,(*(le<int>* )(fr0_ - 0x38)),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),1); });
            goto LAB_8c238e0a;
          }
          ({ unsigned long t0_ = (unsigned long)(uVar9); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar3,(*(le<int>* )(fr0_ - 0x38)),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),3); });
          *(le<undefined2>* )(unsigned)(*piVar3 + 0x42) = 0;
          goto joined_r0x8c238da2;
        }
      }
      ({ unsigned long t0_ = (unsigned long)(uVar9); *(le<unsigned>* )((((unsigned long)(fr0_ - 376)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 376)) - 8); FUN_8c25a380(piVar3,(*(le<int>* )(fr0_ - 0x38)),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),0); });
      goto LAB_8c238e0a;
    }
LAB_8c238e44:
    uVar8 = 1;
  }
  return uVar8;
}

__asm__(".globl FUN_8c23793c\n.set FUN_8c23793c, FUN_8c23793c_def\n");

}
