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
int FUN_8c0e3210_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e3210";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  double in_dr0 = 0;
  double dVar5;
  undefined4 in_fr3 = 0;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar4 = 0;
  uVar3 = 0x80;
  iVar1 = *(int *)(unsigned)(ar4 + 0x1024);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x13b24,0,ar6,ar7));
    uVar2 = 0;
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e015c(ar4 + 0x13b8c,0,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e31e8(ar5,uVar2,ar6,ar7));
    if (iVar1 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x1024) = 1;
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x43df8000;
        in_dr0 = CONCAT44D(0x43df8000,SUB84(in_dr0,0));
        *(undefined4 *)(unsigned)(ar4 + 0x1050) = 0x43df8000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x1048) = 0x105043df8000;
        in_dr0 = 8.86201702588265e-311;
        *(undefined8 *)(unsigned)(ar4 + 0x1050) = 0x105043df8000;
      }
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e319c(ar5,uVar2,ar6,ar7));
      if (iVar1 == 1) {
        iVar1 = *(int *)(unsigned)(ar4 + 0x1020);
        if (iVar1 == 0) {
          if (*(int *)(unsigned)(ar4 + 0x226f4) == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x1020) = 4;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x1020) = 3;
          }
        }
        else if (iVar1 == 3) {
          *(undefined4 *)(unsigned)(ar4 + 0x1020) = 0;
        }
        else if (iVar1 == 4) {
          *(undefined4 *)(unsigned)(ar4 + 0x1020) = 3;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x1024) = 1;
        if (cVar8 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x43df8000;
          in_dr0 = CONCAT44D(0x43df8000,SUB84(in_dr0,0));
          *(undefined4 *)(unsigned)(ar4 + 0x1050) = 0x43df8000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x1048) = 0x105043df8000;
          in_dr0 = 8.86201702588265e-311;
          *(undefined8 *)(unsigned)(ar4 + 0x1050) = 0x105043df8000;
        }
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e3150(ar5,uVar2,ar6,ar7));
        if (iVar1 == 1) {
          iVar1 = *(int *)(unsigned)(ar4 + 0x1020);
          if (iVar1 == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x1020) = 3;
          }
          else if (iVar1 == 3) {
            if (*(int *)(unsigned)(ar4 + 0x226f4) == 1) {
              *(undefined4 *)(unsigned)(ar4 + 0x1020) = 4;
            }
            else {
              *(undefined4 *)(unsigned)(ar4 + 0x1020) = 0;
            }
          }
          else if (iVar1 == 4) {
            *(undefined4 *)(unsigned)(ar4 + 0x1020) = 0;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x1024) = 1;
          if (cVar8 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x43df8000;
            in_dr0 = CONCAT44D(0x43df8000,SUB84(in_dr0,0));
            *(undefined4 *)(unsigned)(ar4 + 0x1050) = 0x43df8000;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x1048) = 0x105043df8000;
            in_dr0 = 8.86201702588265e-311;
            *(undefined8 *)(unsigned)(ar4 + 0x1050) = 0x105043df8000;
          }
        }
      }
    }
  }
  else {
    uVar2 = ar5;
    if (iVar1 == 1) {
      in_dr0 = CONCAT44D(0x43c58000,*(float *)(unsigned)(ar4 + 0x1048));
      if ((*(float *)(unsigned)(ar4 + 0x1048) == 395.0) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e30f0(ar5,ar5,ar6,ar7)), iVar1 == 1)
         ) {
        *(undefined4 *)(unsigned)(ar4 + 0x1024) = 2;
      }
    }
    else if (iVar1 == 2) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e319c(ar5,ar5,ar6,ar7));
      if (iVar1 == 1) {
        iVar1 = *(int *)(unsigned)(ar4 + 0x1020);
        if (iVar1 == 0) {
          if (*(int *)(unsigned)(ar4 + 0x226f4) == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x1020) = 4;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x1020) = 3;
          }
        }
        else if (iVar1 == 3) {
          *(undefined4 *)(unsigned)(ar4 + 0x1020) = 0;
        }
        else if (iVar1 == 4) {
          *(undefined4 *)(unsigned)(ar4 + 0x1020) = 3;
        }
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e3150(ar5,uVar2,ar6,ar7));
        if (iVar1 == 1) {
          iVar1 = *(int *)(unsigned)(ar4 + 0x1020);
          if (iVar1 == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x1020) = 3;
          }
          else if (iVar1 == 3) {
            if (*(int *)(unsigned)(ar4 + 0x226f4) == 1) {
              *(undefined4 *)(unsigned)(ar4 + 0x1020) = 4;
            }
            else {
              *(undefined4 *)(unsigned)(ar4 + 0x1020) = 0;
            }
          }
          else if (iVar1 == 4) {
            *(undefined4 *)(unsigned)(ar4 + 0x1020) = 0;
          }
        }
      }
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e30c8(ar5,uVar2,ar6,ar7));
  if (iVar1 == 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x1024) = 3;
  }
  if (*(int *)(unsigned)(ar4 + 0x1024) == 2) {
    if (*(int *)(unsigned)(ar4 + 0x1020) == 3) {
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x13b24,0,ar6,ar7));
      uVar2 = 0;
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e015c(ar4 + 0x13b8c,0,ar6,ar7));
    }
    if ((*(int *)(unsigned)(ar4 + 0x1020) == 3) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e30a0(ar5,uVar2,ar6,ar7)), iVar1 == 1)) {
      if ((*(int *)(unsigned)(ar4 + 0x22810) == 1) && (*(int *)(unsigned)(ar4 + 0x22814) == 1)) {
        *(undefined4 *)(unsigned)(ar4 + 0x22810) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x22814) = 1;
      }
      else if ((*(int *)(unsigned)(ar4 + 0x22810) == 0) && (*(int *)(unsigned)(ar4 + 0x22814) == 1)) {
        *(undefined4 *)(unsigned)(ar4 + 0x22810) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x22814) = 0;
      }
      else if ((*(int *)(unsigned)(ar4 + 0x22810) == 0) && (*(int *)(unsigned)(ar4 + 0x22814) == 0)) {
        *(undefined4 *)(unsigned)(ar4 + 0x22810) = 1;
        *(undefined4 *)(unsigned)(ar4 + 0x22814) = 1;
      }
      uVar4 = 0x80;
      uVar3 = 0xff;
      ((undefined4 *)(fr0_ - 0x18))[0] = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c02190c(0x8c2b59d0,uVar2,ar6,ar7));
      uVar2 = 3;
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0x18))[0],3,ar7));
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c021a8c(0x8c2b59d0,((undefined4 *)(fr0_ - 0x18)),uVar2,ar7));
    }
    else if (*(int *)(unsigned)(ar4 + 0x1020) == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e3078(ar5,uVar2,ar6,ar7));
      if (iVar1 == 1) {
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x13b24,1,ar6,ar7));
        uVar4 = 0x80;
        uVar3 = 0xff;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x13b24,0,ar6,ar7));
        uVar4 = 0;
        uVar3 = 0x80;
      }
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e015c(ar4 + 0x13b8c,0,ar6,ar7));
    }
    else if (*(int *)(unsigned)(ar4 + 0x1020) == 4) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e3050(ar5,uVar2,ar6,ar7));
      if (iVar1 == 1) {
        uVar2 = 1;
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e015c(ar4 + 0x13b8c,1,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c023040(ar4 + 0x22eb8,uVar2,ar6,ar7));
        if (cVar8 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
          dVar5 = CONCAT44D(0x3f400000,*(undefined4 *)(unsigned)(ar4 + 0x2300c));
        }
        else {
          dVar5 = 3.03505338272344e-309;
        }
        if (cVar7 == '\0') {
          bVar6 = F32HI(in_dr0) <
                  F32LO(dVar5) * F32HI(dVar5);
        }
        else {
          bVar6 = in_dr0 < dVar5 * dVar5;
        }
        uVar4 = 0x80;
        uVar3 = 0xff;
        if (bVar6) {
          (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d7508(ar4 + 0x22eb4,uVar2,ar6,ar7));
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e015c(ar4 + 0x13b8c,0,ar6,ar7));
        uVar4 = 0;
        uVar3 = 0x80;
      }
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x13b24,0,ar6,ar7));
    }
  }
  iVar1 = 0;
  if (*(int *)(unsigned)(ar4 + 0x1024) != 0) {
    *(undefined2 *)(unsigned)(ar4 + 0x105c) = uVar4;
    *(undefined2 *)(unsigned)(ar4 + 0x1060) = uVar4;
    *(undefined2 *)(unsigned)(ar4 + 0x1064) = uVar3;
    *(undefined2 *)(unsigned)(ar4 + 0x1068) = uVar3;
    iVar1 = *(int *)(unsigned)(ar4 + 0x1020);
    if (iVar1 == 0) {
      *(undefined2 *)(unsigned)(ar4 + 0x105e) = 0x40;
      *(undefined2 *)(unsigned)(ar4 + 0x1062) = 0x20;
      *(undefined2 *)(unsigned)(ar4 + 0x1066) = 0x20;
      iVar1 = 0x106a;
      *(undefined2 *)(unsigned)(ar4 + 0x106a) = 0x40;
    }
    else if (iVar1 == 3) {
      *(undefined2 *)(unsigned)(ar4 + 0x105e) = 0x20;
      *(undefined2 *)(unsigned)(ar4 + 0x1062) = 0;
      *(undefined2 *)(unsigned)(ar4 + 0x1066) = 0;
      iVar1 = 0x106a;
      *(undefined2 *)(unsigned)(ar4 + 0x106a) = 0x20;
    }
    else if (iVar1 == 4) {
      *(undefined2 *)(unsigned)(ar4 + 0x105e) = 0xa0;
      *(undefined2 *)(unsigned)(ar4 + 0x1062) = 0x80;
      *(undefined2 *)(unsigned)(ar4 + 0x1066) = 0x80;
      iVar1 = 0x106a;
      *(undefined2 *)(unsigned)(ar4 + 0x106a) = 0xa0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0e3210\n.set _FUN_8c0e3210, _FUN_8c0e3210_def\n");
