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
undefined4 FUN_8c237964_def(int *ar4,int ar5,undefined4 ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c237964";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 372; for (int i_ = 0; i_ < 372; i_++) z_[i_] = 0; }
  uint uVar1;
  int *ar5_00;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined *ar6_00;
  undefined4 uVar7;
  
  (*(int *)(fr0_ - 0x12c)) = 0;
  (*(uint *)(fr0_ - 0x134)) = 0xffffffff;
  (*(unsigned *)(fr0_ - 0x18) = (unsigned)(unsigned long)((int *)(unsigned)(ar5 * 0xc + *ar4)));
  (*(unsigned *)(fr0_ - 0x10) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)) + 2));
  (*(int *)(fr0_ - 0xc)) = ar5;
  (*(unsigned *)(fr0_ - 0x8) = (unsigned)(unsigned long)(ar4));
  if (((((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18))[1] & 0x10000U) != 0) && (ar5 != 0)) {
    (*(int *)(fr0_ - 0x1c)) = (ar5 + -1) * 0xc + *ar4;
    (*(unsigned *)(fr0_ - 0x14) = (unsigned)(unsigned long)((int *)(unsigned)((*(int *)(fr0_ - 0x1c)) + 8)));
    (*(uint *)(fr0_ - 0x134)) = (uint)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18))[2] >> 0x1a;
    (*(int *)(fr0_ - 0x124)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a536(((undefined4 *)(unsigned long)*(unsigned *)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),ar7));
    if ((((undefined4 *)(unsigned long)*(unsigned *)0x8c277b08)[(*(int *)(fr0_ - 0x124)) * 0x11 + 4] & 1U) == 0) {
      uVar7 = 2;
    }
    else {
      uVar7 = 3;
    }
    iVar4 = (int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 0x14;
    ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),iVar4,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),uVar7); });
    *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = 0;
    (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c2571fe(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),iVar4,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),uVar7));
    return 1;
  }
  ar6_00 = ((undefined1 *)(unsigned)0x8c26d960);
  iVar4 = *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18));
  (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a174(((int *)(fr0_ - 0x120)),iVar4,((undefined1 *)(unsigned)0x8c26d960),ar7));
  piVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c);
  if ((*(uint *)(unsigned)((*(int *)(fr0_ - 0xc)) * 0xc + *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x8)) + 4) & 0x800000) == 0) {
    if ((*(uint *)(unsigned)((*(int *)(fr0_ - 0xc)) * 0xc + *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x8)) + 4) & 0x1000000) == 0) {
      (*(int *)(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259be8(((int *)(fr0_ - 0x120)),iVar4,ar6_00,ar7));
      if ((*(int *)(fr0_ - 0x20)) < 0) {
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c23c814(((undefined1 *)(fr0_ - 0x168)),((undefined1 *)(unsigned)0x8c4ab10c),0x28,ar7));
        ({ unsigned long t0_ = (unsigned long)(0xffffffff); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),((undefined1 *)(fr0_ - 0x16c)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),0); });
        *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = -(short)(*(int *)(fr0_ - 0x20));
        *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x40) = 0;
        return 0xffffffff;
      }
      (*(int *)(fr0_ - 0x12c)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a216(((int * *)(fr0_ - 0x130)),iVar4,ar6_00,ar7));
      if ((*(int *)(fr0_ - 0x12c)) < 0) {
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c23c814(((undefined1 *)(fr0_ - 0x168)),((undefined1 *)(unsigned)0x8c4ab10c),0x28,ar7));
        uVar7 = 0;
        puVar5 = ((undefined1 *)(fr0_ - 0x16c));
        piVar6 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10));
        ({ unsigned long t0_ = (unsigned long)(0xffffffff); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),puVar5,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),0); });
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b4) = -(*(int *)(fr0_ - 0x12c));
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar6,puVar5,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),uVar7));
        return 0xffffffff;
      }
      piVar3 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c277b08);
      piVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c);
      piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
      (*(int *)(fr0_ - 0x124)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a536(((undefined4 *)(unsigned long)*(unsigned *)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),ar7));
      if ((*(int *)(fr0_ - 0x12c)) == 1) {
        uVar1 = (uint)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18))[2] >> 0x1a;
        (*(uint *)(fr0_ - 0x134)) = uVar1;
        if ((*(int *)(fr0_ - 0x124)) < 0) {
          (*(int *)(fr0_ - 0x138)) = 2;
        }
        else {
          piVar3 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c277b08);
          piVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c);
          piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
          (*(int *)(fr0_ - 0x128)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a5c0(((undefined4 *)(unsigned long)*(unsigned *)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),uVar1));
          ar7 = uVar1;
          if ((*(int *)(fr0_ - 0x128)) < 0) {
            (*(int *)(fr0_ - 0x138)) = 0;
          }
          else {
            (*(int *)(fr0_ - 0x138)) = 1;
          }
        }
      }
      else if ((*(int *)(fr0_ - 0x124)) < 0) {
        (*(int *)(fr0_ - 0x138)) = 2;
      }
      else {
        (*(int *)(fr0_ - 0x138)) = 1;
      }
    }
    else {
      piVar2 = (int *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18))[2] & 0x3ffffff);
      (*(uint *)(fr0_ - 0x134)) = (uint)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18))[2] >> 0x1a;
      (*(unsigned *)(fr0_ - 0x130) = (unsigned)(unsigned long)(piVar2));
      (*(int *)(fr0_ - 0x124)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a536(((undefined4 *)(unsigned long)*(unsigned *)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),piVar2,ar7));
      if ((*(int *)(fr0_ - 0x124)) < 0) {
        (*(int *)(fr0_ - 0x138)) = 2;
      }
      else {
        piVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c);
        piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
        ar7 = (*(uint *)(fr0_ - 0x134));
        (*(int *)(fr0_ - 0x128)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a5c0(((undefined4 *)(unsigned long)*(unsigned *)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),(*(uint *)(fr0_ - 0x134))));
        if ((*(int *)(fr0_ - 0x128)) < 0) {
          (*(int *)(fr0_ - 0x138)) = 0;
        }
        else {
          (*(int *)(fr0_ - 0x138)) = 1;
        }
      }
      (*(int *)(fr0_ - 0x12c)) = 1;
      piVar3 = ((int *)(fr0_ - 0x120));
      (*(int *)(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259be8(piVar3,piVar6,piVar2,ar7));
      if ((*(int *)(fr0_ - 0x20)) < 0) {
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c23c814(((undefined1 *)(fr0_ - 0x168)),((undefined1 *)(unsigned)0x8c4ab10c),0x28,ar7));
        ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),((undefined1 *)(fr0_ - 0x16c)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),0); });
        *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = -(short)(*(int *)(fr0_ - 0x20));
        *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x40) = 0;
        return 0xffffffff;
      }
    }
  }
  else {
    piVar2 = ((int *)(unsigned long)*(unsigned *)(unsigned)((*(int *)(fr0_ - 0xc)) * 0xc + *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x8)) + 8));
    (*(unsigned *)(fr0_ - 0x130) = (unsigned)(unsigned long)(piVar2));
    (*(int *)(fr0_ - 0x124)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a536(((undefined4 *)(unsigned long)*(unsigned *)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),piVar2,ar7));
    if ((*(int *)(fr0_ - 0x124)) < 0) {
      (*(int *)(fr0_ - 0x138)) = 2;
    }
    else {
      (*(int *)(fr0_ - 0x138)) = 1;
    }
    piVar3 = ((int *)(fr0_ - 0x120));
    (*(int *)(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259be8(piVar3,piVar6,piVar2,ar7));
    if ((*(int *)(fr0_ - 0x20)) < 0) {
      (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c23c814(((undefined1 *)(fr0_ - 0x168)),((undefined1 *)(unsigned)0x8c4ab10c),0x28,ar7));
      ({ unsigned long t0_ = (unsigned long)(0xffffffff); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),((undefined1 *)(fr0_ - 0x16c)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),0); });
      *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = -(short)(*(int *)(fr0_ - 0x20));
      *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x40) = 0;
      return 0xffffffff;
    }
  }
  if ((*(int *)(fr0_ - 0x138)) == 0) {
    (*(unsigned *)(fr0_ - 0x14) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c277b08) + (*(int *)(fr0_ - 0x124)) * 0x11));
    if ((((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] & 2U) == 0) {
      uVar1 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18))[1] & 0xa0000000;
      if ((uVar1 == 0) || (uVar1 == 0x20000000)) {
        (*(int *)(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a914(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 5,piVar2,ar7));
        if ((*(int *)(fr0_ - 0x20)) < 0) {
          uVar7 = 1;
          piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 5;
          piVar6 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10));
          piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
          ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),piVar3,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),1); });
          *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = -(short)(*(int *)(fr0_ - 0x20));
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0xc));
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
          (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar6,piVar3,piVar2,uVar7));
          return 0xffffffff;
        }
        ar7 = 1;
        ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 5,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),1); });
        piVar6 = (int *)(unsigned)0x2;
        *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = 0;
        piVar2 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x14));
        piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x170))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 372)); FUN_8c25a608(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),2,piVar2,ar7); });
        ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] | 8;
      }
      else if (uVar1 == 0x80000000) {
        ar7 = 1;
        piVar6 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 5;
        piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10));
        piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
        ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),piVar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),1); });
        *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = 0;
      }
    }
    else {
      uVar1 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18))[1] & 0xa0000000;
      if (uVar1 == 0) {
        ar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4];
        piVar6 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 5;
        piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
        ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),piVar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),ar7); });
        *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x40) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[0x10];
        *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = 0;
        piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x170))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 372)); FUN_8c25a6ea(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),piVar6,piVar2,ar7); });
      }
      else if (uVar1 == 0x80000000) {
        if ((((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] & 1U) == 0) {
          (*(int *)(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a838(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 5,piVar2,ar7));
          if ((*(int *)(fr0_ - 0x20)) < 0) {
            uVar7 = 2;
            piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 5;
            piVar6 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10));
            piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
            ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),piVar3,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),2); });
            *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x40) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[0x10];
            *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = -(short)(*(int *)(fr0_ - 0x20));
            (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0xc));
            (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
            (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar6,piVar3,piVar2,uVar7));
            return 0xffffffff;
          }
          ar7 = 2;
          ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 5,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),2); });
          piVar6 = (int *)(unsigned)0x1;
          *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x40) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[0x10];
          *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = 0;
          piVar2 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x14));
          piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x170))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 372)); FUN_8c25a608(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),1,piVar2,ar7); });
        }
        else {
          ar7 = 3;
          piVar6 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 5;
          piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10));
          piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
          ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),piVar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),3); });
          *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x40) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[0x10];
          *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = 0;
        }
      }
      else if (uVar1 == 0x20000000) {
        if ((((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] & 1U) == 0) {
          (*(int *)(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a838(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 5,piVar2,ar7));
          if ((*(int *)(fr0_ - 0x20)) < 0) {
            uVar7 = 2;
            piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 5;
            piVar6 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10));
            piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
            ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),piVar3,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),2); });
            *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x40) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[0x10];
            *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = -(short)(*(int *)(fr0_ - 0x20));
            (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0xc));
            (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
            (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar6,piVar3,piVar2,uVar7));
            return 0xffffffff;
          }
          ar7 = 2;
          ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 5,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),2); });
          piVar6 = (int *)(unsigned)0x3;
          *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x40) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[0x10];
          *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = 0;
          piVar2 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x14));
          piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x170))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 372)); FUN_8c25a608(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),3,piVar2,ar7); });
        }
        else {
          ar7 = 3;
          piVar6 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 5;
          piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
          ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),piVar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),3); });
          *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x40) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[0x10];
          *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = 0;
          piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x170))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 372)); FUN_8c25a6ea(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),piVar6,piVar2,ar7); });
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar3,piVar6,piVar2,ar7));
    return 1;
  }
  if ((*(int *)(fr0_ - 0x138)) != 1) {
    if ((*(int *)(fr0_ - 0x138)) != 2) {
      return 1;
    }
    piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
    ar5_00 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a710(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),piVar6,piVar2,ar7));
    uVar1 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18))[1] & 0xa0000000;
    if (uVar1 == 0) {
      piVar6 = ar5_00;
      (*(int *)(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a770(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)),ar5_00,piVar2,ar7));
      if ((*(int *)(fr0_ - 0x20)) < 0) {
        uVar7 = 0;
        piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10));
        piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
        ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),piVar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),0); });
        *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = -(short)(*(int *)(fr0_ - 0x20));
        *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x40) = 0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0xc));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar2,piVar6,piVar3,uVar7));
        return 0xffffffff;
      }
      ar7 = 2;
      piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10));
      piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
      ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),piVar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),2); });
      *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = 0;
      if ((*(int *)(fr0_ - 0x12c)) != 0) {
        *(uint *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x10) = *(uint *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x10) | 8;
      }
    }
    else if (uVar1 == 0x80000000) {
      piVar6 = ar5_00;
      (*(int *)(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a838(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)),ar5_00,piVar2,ar7));
      if ((*(int *)(fr0_ - 0x20)) < 0) {
        uVar7 = 0;
        piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10));
        piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
        ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),piVar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),0); });
        *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = -(short)(*(int *)(fr0_ - 0x20));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0xc));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar2,piVar6,piVar3,uVar7));
        return 0xffffffff;
      }
      ar7 = 1;
      piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10));
      piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
      ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),piVar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),1); });
      *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = 0;
    }
    else if (uVar1 == 0x20000000) {
      (*(int *)(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a838(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)),ar5_00,piVar2,ar7));
      if ((*(int *)(fr0_ - 0x20)) < 0) {
        uVar7 = 0;
        puVar5 = ((undefined1 *)(fr0_ - 0x16c));
        piVar6 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10));
        piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
        ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),puVar5,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),0); });
        *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = -(short)(*(int *)(fr0_ - 0x20));
        *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x40) = 0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0xc));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar6,puVar5,piVar2,uVar7));
        return 0xffffffff;
      }
      piVar6 = ar5_00;
      (*(int *)(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a914(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)),ar5_00,piVar2,ar7));
      if ((*(int *)(fr0_ - 0x20)) < 0) {
        uVar7 = 1;
        piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10));
        piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
        ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),piVar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),1); });
        *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = -(short)(*(int *)(fr0_ - 0x20));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0xc));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar2,piVar6,piVar3,uVar7));
        return 0xffffffff;
      }
      ar7 = 3;
      piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10));
      piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
      ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 372)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),piVar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),3); });
      *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x42) = 0;
      if ((*(int *)(fr0_ - 0x12c)) != 0) {
        *(uint *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x10) = *(uint *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) + 0x10) | 8;
      }
    }
    goto LAB_8c23878e;
  }
  (*(unsigned *)(fr0_ - 0x14) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c277b08) + (*(int *)(fr0_ - 0x124)) * 0x11));
  ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18))[2] = (int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14));
  uVar1 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18))[1] & 0xa0000000;
  if (uVar1 == 0) {
    if ((((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] & 2U) == 0) {
      piVar6 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 5;
      piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18));
      (*(int *)(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a914(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)),piVar6,piVar2,ar7));
      if ((*(int *)(fr0_ - 0x20)) < 0) {
        *(short *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 0x42) = -(short)(*(int *)(fr0_ - 0x20));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0xc));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar3,piVar6,piVar2,ar7));
        return 0xffffffff;
      }
      *(undefined2 *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 0x42) = 0;
      if ((*(int *)(fr0_ - 0x12c)) == 0) {
        piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14));
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c2571fe(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)),piVar6,piVar2,ar7));
        ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] | 2;
        *(short *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 0x10) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[0x10] + 1;
      }
      else {
        piVar6 = (int *)(unsigned)0x2;
        piVar2 = (int *)(unsigned)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[5];
        piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x170))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 372)); FUN_8c25a608(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),2,piVar2,ar7); });
        ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] | 8;
      }
      goto LAB_8c23878e;
    }
    if ((*(int *)(fr0_ - 0x12c)) == 0) {
      *(short *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 0x10) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[0x10] + 1;
      goto LAB_8c23878e;
    }
LAB_8c238436:
    piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x170))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 372)); FUN_8c25a6ea(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),piVar6,piVar2,ar7); });
  }
  else {
    if (uVar1 == 0x80000000) {
      if ((((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] & 1U) != 0) goto LAB_8c23878e;
      piVar6 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 5;
      piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18));
      (*(int *)(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a838(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)),piVar6,piVar2,ar7));
      if ((*(int *)(fr0_ - 0x20)) < 0) {
        *(short *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 0x42) = -(short)(*(int *)(fr0_ - 0x20));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0xc));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar3,piVar6,piVar2,ar7));
        return 0xffffffff;
      }
      *(undefined2 *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 0x42) = 0;
      if ((*(int *)(fr0_ - 0x12c)) == 0) {
        ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] | 1;
        goto LAB_8c23878e;
      }
      piVar2 = (int *)(unsigned)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[5];
      piVar6 = (int *)(unsigned)0x1;
    }
    else {
      if (uVar1 != 0x20000000) goto LAB_8c23878e;
      if ((((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] & 2U) == 0) {
        piVar6 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 5;
        piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18));
        (*(int *)(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a914(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)),piVar6,piVar2,ar7));
        if ((*(int *)(fr0_ - 0x20)) < 0) {
          *(short *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 0x42) = -(short)(*(int *)(fr0_ - 0x20));
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0xc));
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
          (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar3,piVar6,piVar2,ar7));
          return 0xffffffff;
        }
        *(undefined2 *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 0x42) = 0;
        if ((*(int *)(fr0_ - 0x12c)) == 0) {
          piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14));
          (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c2571fe(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)),piVar6,piVar2,ar7));
          ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] | 2;
          *(undefined2 *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 0x10) = 1;
        }
        else {
          piVar6 = (int *)(unsigned)0x2;
          piVar2 = (int *)(unsigned)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[5];
          piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x170))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 372)); FUN_8c25a608(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),2,piVar2,ar7); });
          ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] | 8;
        }
        goto LAB_8c23878e;
      }
      if ((((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] & 1U) != 0) {
        if ((*(int *)(fr0_ - 0x12c)) == 0) {
          *(short *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 0x10) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[0x10] + 1;
          goto LAB_8c23878e;
        }
        goto LAB_8c238436;
      }
      piVar6 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 5;
      piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18));
      (*(int *)(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c25a838(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)),piVar6,piVar2,ar7));
      if ((*(int *)(fr0_ - 0x20)) < 0) {
        *(short *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 0x42) = -(short)(*(int *)(fr0_ - 0x20));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0xc));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
        (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar3,piVar6,piVar2,ar7));
        return 0xffffffff;
      }
      *(undefined2 *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 0x42) = 0;
      if ((*(int *)(fr0_ - 0x12c)) == 0) {
        ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[4] | 1;
        *(short *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 0x10) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[0x10] + 1;
        goto LAB_8c23878e;
      }
      piVar6 = (int *)(unsigned)0x3;
      piVar2 = (int *)(unsigned)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14))[5];
    }
    piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130));
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x170))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 372)); FUN_8c25a608(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x130)),piVar6,piVar2,ar7); });
  }
LAB_8c23878e:
  (vsp = ((unsigned long)(fr0_ - 372)), FUN_8c259c40(piVar3,piVar6,piVar2,ar7));
  return 1;
}

__asm__(".globl _FUN_8c237964\n.set _FUN_8c237964, _FUN_8c237964_def\n");
