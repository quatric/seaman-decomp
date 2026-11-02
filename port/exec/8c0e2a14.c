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
int FUN_8c0e2a14_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e2a14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  double in_dr0 = 0;
  double dVar6;
  undefined4 in_fr3 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar5 = 0;
  uVar4 = 0x80;
  iVar1 = ar4[0x409];
  if (iVar1 == 0) {
    uVar3 = 0;
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x15c))))(ar4,uVar3,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e31e8(ar5,uVar3,ar6,ar7));
    if (iVar1 == 1) {
      ar4[0x409] = 1;
      piVar2 = ar4 + 0x412;
      if (cVar9 == '\0') {
        *piVar2 = 0x43df8000;
        in_dr0 = CONCAT44D(0x43df8000,SUB84(in_dr0,0));
        ar4[0x414] = 0x43df8000;
      }
      else {
        piVar2[0] = 0x43df8000;
        piVar2[1] = 0x1050;
        in_dr0 = 8.86201702588265e-311;
        ar4[0x414] = 0x43df8000;
        ar4[0x415] = 0x1050;
      }
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e319c(ar5,uVar3,ar6,ar7));
      if (iVar1 == 1) {
        iVar1 = ar4[0x408];
        if (iVar1 == 0) {
          ar4[0x408] = 1;
        }
        else if (iVar1 == 1) {
          ar4[0x408] = 3;
        }
        else if (iVar1 == 3) {
          ar4[0x408] = 0;
        }
        ar4[0x409] = 1;
        piVar2 = ar4 + 0x412;
        if (cVar9 == '\0') {
          *piVar2 = 0x43df8000;
          in_dr0 = CONCAT44D(0x43df8000,SUB84(in_dr0,0));
          ar4[0x414] = 0x43df8000;
        }
        else {
          piVar2[0] = 0x43df8000;
          piVar2[1] = 0x1050;
          in_dr0 = 8.86201702588265e-311;
          ar4[0x414] = 0x43df8000;
          ar4[0x415] = 0x1050;
        }
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e3150(ar5,uVar3,ar6,ar7));
        if (iVar1 == 1) {
          iVar1 = ar4[0x408];
          if (iVar1 == 0) {
            ar4[0x408] = 3;
          }
          else if (iVar1 == 1) {
            ar4[0x408] = 0;
          }
          else if (iVar1 == 3) {
            ar4[0x408] = 1;
          }
          ar4[0x409] = 1;
          piVar2 = ar4 + 0x412;
          if (cVar9 == '\0') {
            *piVar2 = 0x43df8000;
            in_dr0 = CONCAT44D(0x43df8000,SUB84(in_dr0,0));
            ar4[0x414] = 0x43df8000;
          }
          else {
            piVar2[0] = 0x43df8000;
            piVar2[1] = 0x1050;
            in_dr0 = 8.86201702588265e-311;
            ar4[0x414] = 0x43df8000;
            ar4[0x415] = 0x1050;
          }
        }
      }
    }
  }
  else {
    uVar3 = ar5;
    if (iVar1 == 1) {
      in_dr0 = CONCAT44D(0x43c58000,ar4[0x412]);
      if (((float)ar4[0x412] == 395.0) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e30f0(ar5,ar5,ar6,ar7)), iVar1 == 1)) {
        ar4[0x409] = 2;
      }
    }
    else if (iVar1 == 2) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e319c(ar5,ar5,ar6,ar7));
      if (iVar1 == 1) {
        iVar1 = ar4[0x408];
        if (iVar1 == 0) {
          ar4[0x408] = 1;
        }
        else if (iVar1 == 1) {
          ar4[0x408] = 3;
        }
        else if (iVar1 == 3) {
          ar4[0x408] = 0;
        }
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e3150(ar5,uVar3,ar6,ar7));
        if (iVar1 == 1) {
          iVar1 = ar4[0x408];
          if (iVar1 == 0) {
            ar4[0x408] = 3;
          }
          else if (iVar1 == 1) {
            ar4[0x408] = 0;
          }
          else if (iVar1 == 3) {
            ar4[0x408] = 1;
          }
        }
      }
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e30c8(ar5,uVar3,ar6,ar7));
  if (iVar1 == 1) {
    ar4[0x409] = 3;
  }
  if (ar4[0x409] == 2) {
    if (ar4[0x408] == 3) {
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x15c))))(ar4,uVar3,ar6,ar7));
    }
    if ((ar4[0x408] == 3) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e30a0(ar5,uVar3,ar6,ar7)), iVar1 == 1)) {
      if ((ar4[0x8a04] == 1) && (ar4[0x8a05] == 1)) {
        ar4[0x8a04] = 0;
        ar4[0x8a05] = 1;
      }
      else if ((ar4[0x8a04] == 0) && (ar4[0x8a05] == 1)) {
        ar4[0x8a04] = 0;
        ar4[0x8a05] = 0;
      }
      else if ((ar4[0x8a04] == 0) && (ar4[0x8a05] == 0)) {
        ar4[0x8a04] = 1;
        ar4[0x8a05] = 1;
      }
      if ((ar4[0x8a04] == 1) || (ar4[0x8a05] == 1)) {
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d4f3c(ar4 + 0x42b,uVar3,ar6,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d4f70(ar4 + 0x42b,uVar3,ar6,ar7));
      }
      uVar5 = 0x80;
      uVar4 = 0xff;
      ((undefined4 *)(fr0_ - 0x18))[0] = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c02190c(0x8c2b59d0,uVar3,ar6,ar7));
      uVar3 = 3;
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0x18))[0],3,ar7));
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c021a8c(0x8c2b59d0,((undefined4 *)(fr0_ - 0x18)),uVar3,ar7));
    }
    else if (ar4[0x408] == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e3078(ar5,uVar3,ar6,ar7));
      if (iVar1 == 1) {
        uVar3 = 1;
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x4ec9,1,ar6,ar7));
        uVar5 = 0x80;
        uVar4 = 0xff;
      }
      else {
        uVar3 = 0;
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7));
        uVar5 = 0;
        uVar4 = 0x80;
      }
      (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x15c))))(ar4,uVar3,ar6,ar7));
    }
    else if (ar4[0x408] == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e3050(ar5,uVar3,ar6,ar7));
      if (iVar1 == 1) {
        (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x158))))(ar4,uVar3,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c023040(ar4 + 0x8bae,uVar3,ar6,ar7));
        if (cVar9 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
          dVar6 = CONCAT44D(0x3f400000,ar4[0x8c03]);
        }
        else {
          dVar6 = 3.03505338272344e-309;
        }
        if (cVar8 == '\0') {
          bVar7 = F32HI(in_dr0) <
                  F32LO(dVar6) * F32HI(dVar6);
        }
        else {
          bVar7 = in_dr0 < dVar6 * dVar6;
        }
        uVar5 = 0x80;
        uVar4 = 0xff;
        if (bVar7) {
          (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d7508(ar4 + 0x8bad,uVar3,ar6,ar7));
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x15c))))(ar4,uVar3,ar6,ar7));
        uVar5 = 0;
        uVar4 = 0x80;
      }
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7));
    }
  }
  iVar1 = 0;
  if (ar4[0x409] != 0) {
    *(undefined2 *)(unsigned)(ar4 + 0x417) = uVar5;
    *(undefined2 *)(unsigned)(ar4 + 0x418) = uVar5;
    *(undefined2 *)(unsigned)(ar4 + 0x419) = uVar4;
    *(undefined2 *)(unsigned)(ar4 + 0x41a) = uVar4;
    iVar1 = ar4[0x408];
    if (iVar1 == 0) {
      *(undefined2 *)(unsigned)((int)ar4 + 0x105e) = 0x40;
      *(undefined2 *)(unsigned)((int)ar4 + 0x1062) = 0x20;
      *(undefined2 *)(unsigned)((int)ar4 + 0x1066) = 0x20;
      iVar1 = 0x106a;
      *(undefined2 *)(unsigned)((int)ar4 + 0x106a) = 0x40;
    }
    else if (iVar1 == 1) {
      *(undefined2 *)(unsigned)((int)ar4 + 0x105e) = 0x60;
      *(undefined2 *)(unsigned)((int)ar4 + 0x1062) = 0x40;
      *(undefined2 *)(unsigned)((int)ar4 + 0x1066) = 0x40;
      iVar1 = 0x106a;
      *(undefined2 *)(unsigned)((int)ar4 + 0x106a) = 0x60;
    }
    else if (iVar1 == 3) {
      *(undefined2 *)(unsigned)((int)ar4 + 0x105e) = 0x20;
      *(undefined2 *)(unsigned)((int)ar4 + 0x1062) = 0;
      *(undefined2 *)(unsigned)((int)ar4 + 0x1066) = 0;
      iVar1 = 0x106a;
      *(undefined2 *)(unsigned)((int)ar4 + 0x106a) = 0x20;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0e2a14\n.set _FUN_8c0e2a14, _FUN_8c0e2a14_def\n");
