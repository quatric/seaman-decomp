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
uint FUN_8c101e1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101e1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 204; for (int i_ = 0; i_ < 204; i_++) z_[i_] = 0; }
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int ar6_00;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), sh4_tmu_1f88e6(ar4,((void *)(unsigned)0x8c1f88e6),ar6,ar7));
  *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x9c) = uVar3;
  ar6_00 = *(int *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x9c);
  *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa8) = 0;
  bVar1 = false;
  bVar2 = false;
  *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa4) = 0;
  if (0x10 < *(uint *)(unsigned)(0xc4 + ar4)) {
    *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x80) = *(undefined4 *)(unsigned)(ar4 + 100);
    iVar7 = *(undefined4 *)(unsigned)0x8c4413c0;
    iVar5 = *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c12682c)) + *(int *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x80) * 4);
    uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c101de0(ar4,*(undefined4 *)(unsigned)(ar4 + 0x60),ar6_00,ar7));
    *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x98) = uVar3;
    if ((*(int *)(unsigned)(ar4 + 0x6c) == 0) ||
       ((uint)(iVar7 * iVar5) <= *(uint *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x98))) {
      (*(int *)(fr0_ - 0x50)) = *(int *)(unsigned)(ar4 + 100);
      (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0219b8))))
                (0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x68),
                 *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c126764)) + (*(int *)(fr0_ - 0x50)) * 4),ar7));
      if (*(int *)(unsigned)(ar4 + 100) == 0) {
        *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa4) = 1;
      }
      iVar5 = *(int *)(unsigned)(ar4 + 100);
      if ((iVar5 == 0) || (*(int *)(unsigned)(ar4 + 100) == 0x1a)) {
        bVar1 = true;
      }
      if ((*(int *)(unsigned)(ar4 + 100) == 0xe) || (*(int *)(unsigned)(ar4 + 100) == 0x28)) {
        bVar2 = true;
      }
      if ((bVar1) || (bVar2)) {
        *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa8) = 1;
      }
      *(int *)(unsigned)(ar4 + 0x60) = ar6_00;
      *(int *)(unsigned)(ar4 + 100) = *(int *)(unsigned)(ar4 + 100) + 1;
      (*(int *)(fr0_ - 0x54)) = ar4;
      (*(undefined4 *)(fr0_ - 0x58)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                            (*(undefined4 *)(unsigned)(ar4 + 100),0x32,iVar5,ar7));
      *(undefined4 *)(unsigned)(ar4 + 100) = (*(undefined4 *)(fr0_ - 0x58));
      *(undefined4 *)(unsigned)(ar4 + 0x6c) = 1;
    }
  }
  (*(int *)(fr0_ - 0x5c)) = *(int *)(unsigned)(ar4 + 0x54);
  iVar7 = *(undefined4 *)(unsigned)0x8c4413c0;
  iVar5 = *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c126724)) + (*(int *)(fr0_ - 0x5c)) * 4);
  uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c101de0(ar4,*(undefined4 *)(unsigned)(ar4 + 0x50),ar6_00,ar7));
  *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x94) = uVar3;
  if (((*(int *)(unsigned)(ar4 + 0x5c) == 0) ||
      ((uint)(iVar7 * iVar5) <= *(uint *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x94))) ||
     (*(int *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa8) == 1)) {
    if (*(int *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa8) == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x54) = 0;
    }
    (*(int *)(fr0_ - 0x60)) = *(int *)(unsigned)(ar4 + 0x54);
    (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0219b8))))
              (0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x58),
               *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1266e4)) + (*(int *)(fr0_ - 0x60)) * 4),ar7));
    *(int *)(unsigned)(ar4 + 0x50) = ar6_00;
    (*(int *)(fr0_ - 0x64)) = ar4;
    *(int *)(unsigned)(ar4 + 0x54) = *(int *)(unsigned)(ar4 + 0x54) + 1;
    *(uint *)(unsigned)(ar4 + 0x54) = *(uint *)(unsigned)(ar4 + 0x54) & 0xf;
    *(undefined4 *)(unsigned)(ar4 + 0x5c) = 1;
  }
  if (0x20 < *(uint *)(unsigned)(0xc4 + ar4)) {
    if (*(int *)(unsigned)(ar4 + 0x3c) == 0) {
      if (*(int *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa4) == 1) {
        (*(int *)(fr0_ - 0x68)) = *(int *)(unsigned)(ar4 + 0x34);
        uVar3 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1268f4)) + (*(int *)(fr0_ - 0x68)) * 4);
        (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x38),uVar3,ar7));
        *(int *)(unsigned)(ar4 + 0x30) = ar6_00;
        *(int *)(unsigned)(ar4 + 0x34) = *(int *)(unsigned)(ar4 + 0x34) + 1;
        (*(int *)(fr0_ - 0x6c)) = ar4;
        (*(undefined4 *)(fr0_ - 0x70)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                              (*(undefined4 *)(unsigned)(ar4 + 0x34),0x19,uVar3,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x34) = (*(undefined4 *)(fr0_ - 0x70));
        *(undefined4 *)(unsigned)(ar4 + 0x3c) = 1;
      }
    }
    else {
      (*(int *)(fr0_ - 0x74)) = *(int *)(unsigned)(ar4 + 0x34);
      iVar7 = *(undefined4 *)(unsigned)0x8c4413c0;
      iVar5 = *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c126958)) + (*(int *)(fr0_ - 0x74)) * 4);
      uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c101de0(ar4,*(undefined4 *)(unsigned)(ar4 + 0x30),ar6_00,ar7));
      *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x90) = uVar3;
      if ((((uint)(iVar7 * iVar5) <= *(uint *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x90)) || (bVar1)) ||
         (bVar2)) {
        if ((bVar1) || (bVar2)) {
          *(undefined4 *)(unsigned)(ar4 + 0x34) = 0;
        }
        (*(int *)(fr0_ - 0x78)) = *(int *)(unsigned)(ar4 + 0x34);
        uVar3 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1268f4)) + (*(int *)(fr0_ - 0x78)) * 4);
        (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x38),uVar3,ar7));
        *(int *)(unsigned)(ar4 + 0x30) = ar6_00;
        *(int *)(unsigned)(ar4 + 0x34) = *(int *)(unsigned)(ar4 + 0x34) + 1;
        (*(int *)(fr0_ - 0x7c)) = ar4;
        (*(undefined4 *)(fr0_ - 0x80)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                              (*(undefined4 *)(unsigned)(ar4 + 0x34),0x19,uVar3,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x34) = (*(undefined4 *)(fr0_ - 0x80));
      }
    }
  }
  *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa0) = 1;
  if (*(uint *)(unsigned)(0xc4 + ar4) < 0x41) {
    *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa0) = 0;
  }
  if (0xa2be8 < *(uint *)(unsigned)(0xbc + ar4)) {
    *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa0) = 0;
  }
  if (*(uint *)(unsigned)(0xbc + ar4) < 0x82334) {
    *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa0) = 0;
  }
  if (*(int *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa0) == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 0;
  }
  if (*(int *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa0) == 1) {
    if (*(int *)(unsigned)(ar4 + 0x4c) == 0) {
      if (*(int *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa4) == 1) {
        (*(int *)(fr0_ - 0x84)) = *(int *)(unsigned)(ar4 + 0x44);
        uVar3 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1269bc)) + (*(int *)(fr0_ - 0x84)) * 4);
        (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x48),uVar3,ar7));
        *(int *)(unsigned)(ar4 + 0x40) = ar6_00;
        *(int *)(unsigned)(ar4 + 0x44) = *(int *)(unsigned)(ar4 + 0x44) + 1;
        (*(int *)(fr0_ - 0x88)) = ar4;
        (*(undefined4 *)(fr0_ - 0x8c)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                              (*(undefined4 *)(unsigned)(ar4 + 0x44),0x1c,uVar3,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x44) = (*(undefined4 *)(fr0_ - 0x8c));
        *(undefined4 *)(unsigned)(ar4 + 0x4c) = 1;
      }
    }
    else {
      (*(int *)(fr0_ - 0x90)) = *(int *)(unsigned)(ar4 + 0x44);
      iVar7 = *(undefined4 *)(unsigned)0x8c4413c0;
      iVar5 = *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c126a2c)) + (*(int *)(fr0_ - 0x90)) * 4);
      uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c101de0(ar4,*(undefined4 *)(unsigned)(ar4 + 0x40),ar6_00,ar7));
      *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x8c) = uVar3;
      if ((uint)(iVar7 * iVar5) <= *(uint *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x8c)) {
        if (*(int *)(unsigned)(ar4 + 0x44) == 0) {
          if (bVar1) {
            (*(int *)(fr0_ - 0x94)) = *(int *)(unsigned)(ar4 + 0x44);
            uVar3 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1269bc)) + (*(int *)(fr0_ - 0x94)) * 4);
            (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x48),uVar3,ar7));
            *(int *)(unsigned)(ar4 + 0x40) = ar6_00;
            *(int *)(unsigned)(ar4 + 0x44) = *(int *)(unsigned)(ar4 + 0x44) + 1;
            (*(int *)(fr0_ - 0x98)) = ar4;
            (*(undefined4 *)(fr0_ - 0x9c)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                                  (*(undefined4 *)(unsigned)(ar4 + 0x44),0x1c,uVar3,ar7));
            *(undefined4 *)(unsigned)(ar4 + 0x44) = (*(undefined4 *)(fr0_ - 0x9c));
          }
        }
        else if (*(int *)(unsigned)(ar4 + 0x44) == 7) {
          if (bVar2) {
            (*(int *)(fr0_ - 0xa0)) = *(int *)(unsigned)(ar4 + 0x44);
            uVar3 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1269bc)) + (*(int *)(fr0_ - 0xa0)) * 4);
            (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x48),uVar3,ar7));
            *(int *)(unsigned)(ar4 + 0x40) = ar6_00;
            *(int *)(unsigned)(ar4 + 0x44) = *(int *)(unsigned)(ar4 + 0x44) + 1;
            (*(int *)(fr0_ - 0xa4)) = ar4;
            (*(undefined4 *)(fr0_ - 0xa8)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                                  (*(undefined4 *)(unsigned)(ar4 + 0x44),0x1c,uVar3,ar7));
            *(undefined4 *)(unsigned)(ar4 + 0x44) = (*(undefined4 *)(fr0_ - 0xa8));
          }
        }
        else if (*(int *)(unsigned)(ar4 + 0x44) == 0xe) {
          if (bVar1) {
            (*(int *)(fr0_ - 0xac)) = *(int *)(unsigned)(ar4 + 0x44);
            uVar3 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1269bc)) + (*(int *)(fr0_ - 0xac)) * 4);
            (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x48),uVar3,ar7));
            *(int *)(unsigned)(ar4 + 0x40) = ar6_00;
            *(int *)(unsigned)(ar4 + 0x44) = *(int *)(unsigned)(ar4 + 0x44) + 1;
            (*(int *)(fr0_ - 0xb0)) = ar4;
            (*(undefined4 *)(fr0_ - 0xb4)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                                  (*(undefined4 *)(unsigned)(ar4 + 0x44),0x1c,uVar3,ar7));
            *(undefined4 *)(unsigned)(ar4 + 0x44) = (*(undefined4 *)(fr0_ - 0xb4));
          }
        }
        else if (*(int *)(unsigned)(ar4 + 0x44) == 0x15) {
          if (bVar2) {
            (*(int *)(fr0_ - 0xb8)) = *(int *)(unsigned)(ar4 + 0x44);
            uVar3 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1269bc)) + (*(int *)(fr0_ - 0xb8)) * 4);
            (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x48),uVar3,ar7));
            *(int *)(unsigned)(ar4 + 0x40) = ar6_00;
            *(int *)(unsigned)(ar4 + 0x44) = *(int *)(unsigned)(ar4 + 0x44) + 1;
            (*(int *)(fr0_ - 0xbc)) = ar4;
            ((uint *)(fr0_ - 0xcc))[3] =
                 (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                           (*(undefined4 *)(unsigned)(ar4 + 0x44),0x1c,uVar3,ar7));
            *(uint *)(unsigned)(ar4 + 0x44) = ((uint *)(fr0_ - 0xcc))[3];
          }
        }
        else {
          ((uint *)(fr0_ - 0xcc))[2] = *(int *)(unsigned)(ar4 + 0x44);
          uVar3 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1269bc)) + ((uint *)(fr0_ - 0xcc))[2] * 4);
          (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x48),uVar3,ar7));
          *(int *)(unsigned)(ar4 + 0x40) = ar6_00;
          *(int *)(unsigned)(ar4 + 0x44) = *(int *)(unsigned)(ar4 + 0x44) + 1;
          ((uint *)(fr0_ - 0xcc))[1] = ar4;
          ((uint *)(fr0_ - 0xcc))[0] =
               (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                         (*(undefined4 *)(unsigned)(ar4 + 0x44),0x1c,uVar3,ar7));
          *(uint *)(unsigned)(ar4 + 0x44) = ((uint *)(fr0_ - 0xcc))[0];
        }
      }
    }
  }
  uVar6 = (uint)(0x70 < *(uint *)(unsigned)(0xc4 + ar4));
  if (0xc349c < *(uint *)(unsigned)(0xbc + ar4)) {
    uVar6 = 0;
  }
  if (*(uint *)(unsigned)(0xbc + ar4) < 0x82334) {
    uVar6 = 0;
  }
  if (*(int *)(unsigned)(0x88 + ar4) != -1) {
    uVar6 = 0;
  }
  if (*(int *)(unsigned)(ar4 + 0x44) != 0) {
    uVar6 = 0;
  }
  if (ar6_00 == *(int *)(unsigned)(ar4 + 0x40)) {
    uVar6 = 0;
  }
  if (uVar6 == 1) {
    iVar7 = *(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c126a9c));
    iVar4 = *(undefined4 *)(unsigned)0x8c4413c0;
    iVar5 = ar6_00;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c101de0(ar4,*(undefined4 *)(unsigned)(0x80 + ar4),ar6_00,ar7));
    *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x88) = uVar3;
    uVar6 = *(uint *)(unsigned)(0x8c + ar4);
    if (((uVar6 == 0) || ((uint)(iVar7 * iVar4) <= *(uint *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x88))) &&
       (uVar6 = *(uint *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa4), uVar6 == 1)) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021b10))))
                        (0x8c2b59d0,(&(*(undefined1 *)(unsigned)0x8c142194)),iVar5,ar7));
      *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x84) = uVar3;
      *(undefined4 *)(unsigned)(0x88 + ar4) = *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x84);
      *(int *)(unsigned)(0x80 + ar4) = ar6_00;
      uVar6 = 0x8c;
      *(undefined4 *)(unsigned)(0x8c + ar4) = 1;
    }
  }
  return uVar6;
}

__asm__(".globl _FUN_8c101e1c\n.set _FUN_8c101e1c, _FUN_8c101e1c_def\n");
