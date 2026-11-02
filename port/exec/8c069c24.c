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
undefined4 FUN_8c069c24_def(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c069c24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 476; for (int i_ = 0; i_ < 476; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar5;
  int iVar6;
  int *ar5_00;
  int *ar6_00;
  int *ar7_00;
  undefined4 unaff_r8 = 0;
  int iVar7;
  int iVar8;
  int unaff_r14 = 0;
  float fVar9;
  ulonglong in_dr0 = 0;
  ulonglong uVar10;
  double dVar11;
  undefined8 in_xd0 = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined4 *puVar4;
  
  iVar8 = -1;
  puVar1 = (undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x128);
  iVar5 = 0x12;
  puVar3 = (undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c137120));
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1d8))+0)) = ar5;
  do {
    puVar4 = puVar3 + 1;
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar1[1] = *puVar4;
    puVar1 = puVar1 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = ar6;
  if ((int)(*(undefined8 *)(fr0_ - 0x1d8)) == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), rand(0,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x114) = uVar2;
    ar5 = 7;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                      (*(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x114),7,iVar5,ar7));
    *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xb0) = uVar2;
    unaff_r14 = *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xb0);
    iVar7 = 7;
    do {
      *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xac) = unaff_r14;
      if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xac) * 8 + 0x8c2809b8 + 4) == 0) {
        iVar7 = iVar7 + -1;
        unaff_r14 = unaff_r14 + 1;
      }
      else {
        *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xa8) = unaff_r14;
        (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b410))))
                  (*(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xa8) * 8 + 0x8c2809b8 + 4)
                   ,ar5,iVar5,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x110) = (int)(in_dr0 >> 0x20);
          uVar10 = (ulonglong)*(uint *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x110);
        }
        else {
          *(ulonglong *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x110) = in_dr0;
          in_xd0 = *(undefined8 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x110);
          uVar10 = in_dr0;
        }
        in_dr0 = uVar10 & 0xffffffff;
        if ((float)uVar10 == 0.0) {
          if (ar6 == 0) {
            *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xa4) = unaff_r14;
            uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b3f4))))
                              (*(undefined4 *)(unsigned)
                                (*(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xa4) * 8 + 0x8c2809b8 + 4),
                               ar5,iVar5,ar7));
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x10c) = uVar2;
            *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xa0) = unaff_r14;
            iVar8 = *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xa0) * 8 + 0x8c2809b8;
            uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b3f4))))
                              (*(undefined4 *)(unsigned)(iVar8 + 4),iVar8,iVar5,ar7));
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x108) = uVar2;
            *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x9c) = unaff_r14;
            uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                              (*(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x10c),4,iVar5,ar7));
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x98) = uVar2;
            uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                              (*(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x108),4,iVar5,ar7));
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x90) = uVar2;
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x94) =
                 *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x90);
            iVar5 = *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x94) * 2 + 3;
            ar5 = *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x98);
            uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b29c))))
                              (*(undefined4 *)(unsigned)
                                (*(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x9c) * 8 + 0x8c2809b8 + 4),
                               ar5,iVar5,ar7));
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x104) = uVar2;
            iVar8 = *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x104);
          }
          else {
            *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x8c) = unaff_r14;
            uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b3f4))))
                              (*(undefined4 *)(unsigned)
                                (*(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x8c) * 8 + 0x8c2809b8 + 4),
                               ar5,iVar5,ar7));
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x100) = uVar2;
            *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x88) = unaff_r14;
            uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                              (*(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x100),4,iVar5,ar7));
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x80) = uVar2;
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x84) =
                 *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x80);
            ar5 = *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x84) * 2 + 3;
            uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b35c))))
                              (*(undefined4 *)(unsigned)
                                (*(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x88) * 8 + 0x8c2809b8 + 4),
                               ar5,iVar5,ar7));
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xfc) = uVar2;
            iVar8 = *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xfc);
          }
        }
        if (iVar8 == -1) {
          iVar7 = iVar7 + -1;
          unaff_r14 = unaff_r14 + 1;
        }
      }
      if (5 < unaff_r14) {
        unaff_r14 = 0;
      }
    } while ((-1 < iVar7) && (iVar8 == -1));
  }
  else if ((int)(*(undefined8 *)(fr0_ - 0x1d8)) == 1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), rand(0,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xf8) = uVar2;
    ar5 = 6;
    (*(int *)(fr0_ - 0x15c)) = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                           (*(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xf8),6,iVar5,ar7));
    iVar7 = 6;
    unaff_r14 = (*(int *)(fr0_ - 0x15c));
    do {
      (*(int *)(fr0_ - 0x160)) = unaff_r14;
      if (*(int *)(unsigned)(unaff_r14 * 8 + 0x8c2809fc + 4) == 0) {
        iVar7 = iVar7 + -1;
        unaff_r14 = unaff_r14 + 1;
      }
      else {
        (*(int *)(fr0_ - 0x164)) = unaff_r14;
        (vsp = ((unsigned long)(fr0_ - 476)), FUN_8c06b410(*(undefined4 *)(unsigned)(unaff_r14 * 8 + 0x8c2809fc + 4),ar5,iVar5,ar7))
        ;
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xf4) = (int)(in_dr0 >> 0x20);
          uVar10 = (ulonglong)*(uint *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xf4);
        }
        else {
          *(ulonglong *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xf4) = in_dr0;
          in_xd0 = *(undefined8 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xf4);
          uVar10 = in_dr0;
        }
        in_dr0 = uVar10 & 0xffffffff;
        if ((float)uVar10 == 0.0) {
          if (ar6 == 0) {
            (*(int *)(fr0_ - 0x168)) = unaff_r14;
            uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b3f4))))
                              (*(undefined4 *)(unsigned)(unaff_r14 * 8 + 0x8c2809fc + 4),ar5,iVar5,ar7));
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xf0) = uVar2;
            (*(int *)(fr0_ - 0x16c)) = unaff_r14;
            uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b3f4))))
                              (*(undefined4 *)(unsigned)(unaff_r14 * 8 + 0x8c2809fc + 4),ar5,iVar5,ar7));
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xec) = uVar2;
            (*(int *)(fr0_ - 0x170)) = unaff_r14;
            (*(int *)(fr0_ - 0x174)) = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                                   (*(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xf0),4,iVar5,ar7));
            (*(int *)(fr0_ - 0x17c)) = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                                   (*(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xec),4,iVar5,ar7));
            iVar5 = (*(int *)(fr0_ - 0x17c)) * 2 + 3;
            ar5 = (*(int *)(fr0_ - 0x174));
            (*(int *)(fr0_ - 0x178)) = (*(int *)(fr0_ - 0x17c));
            uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b29c))))
                              (*(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x170)) * 8 + 0x8c2809fc + 4),(*(int *)(fr0_ - 0x174)),iVar5,
                               ar7));
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xe8) = uVar2;
            iVar8 = *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xe8);
          }
          else {
            (*(int *)(fr0_ - 0x180)) = unaff_r14;
            uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b3f4))))
                              (*(undefined4 *)(unsigned)(unaff_r14 * 8 + 0x8c2809fc + 4),ar5,iVar5,ar7));
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xe4) = uVar2;
            (*(int *)(fr0_ - 0x184)) = unaff_r14;
            (*(int *)(fr0_ - 0x18c)) = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                                   (*(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xe4),4,iVar5,ar7));
            ar5 = (*(int *)(fr0_ - 0x18c)) * 2 + 3;
            (*(int *)(fr0_ - 0x188)) = (*(int *)(fr0_ - 0x18c));
            uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b35c))))
                              (*(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x184)) * 8 + 0x8c2809fc + 4),ar5,iVar5,ar7));
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xe0) = uVar2;
            iVar8 = *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xe0);
          }
        }
        if (iVar8 == -1) {
          iVar7 = iVar7 + -1;
          unaff_r14 = unaff_r14 + 1;
        }
      }
      if (5 < unaff_r14) {
        unaff_r14 = 0;
      }
    } while ((-1 < iVar7) && (iVar8 == -1));
  }
  else if ((int)(*(undefined8 *)(fr0_ - 0x1d8)) == 2) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), rand(0,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xdc) = uVar2;
    ar5 = 6;
    (*(int *)(fr0_ - 0x190)) = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                           (*(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xdc),6,iVar5,ar7));
    iVar7 = 6;
    unaff_r14 = (*(int *)(fr0_ - 0x190));
    do {
      (*(int *)(fr0_ - 0x194)) = unaff_r14;
      if (*(int *)(unsigned)(unaff_r14 * 8 + 0x8c280a38 + 4) == 0) {
        iVar7 = iVar7 + -1;
        unaff_r14 = unaff_r14 + 1;
      }
      else {
        (*(int *)(fr0_ - 0x198)) = unaff_r14;
        (vsp = ((unsigned long)(fr0_ - 476)), FUN_8c06b410(*(undefined4 *)(unsigned)(unaff_r14 * 8 + 0x8c280a38 + 4),ar5,iVar5,ar7))
        ;
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xd8) = (int)(in_dr0 >> 0x20);
          uVar10 = (ulonglong)*(uint *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xd8);
        }
        else {
          *(ulonglong *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xd8) = in_dr0;
          in_xd0 = *(undefined8 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xd8);
          uVar10 = in_dr0;
        }
        in_dr0 = uVar10 & 0xffffffff;
        if ((float)uVar10 == 0.0) {
          if (ar6 == 0) {
            (*(int *)(fr0_ - 0x19c)) = unaff_r14;
            uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b3f4))))
                              (*(undefined4 *)(unsigned)(unaff_r14 * 8 + 0x8c280a38 + 4),ar5,iVar5,ar7));
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xd4) = uVar2;
            (*(int *)(fr0_ - 0x1a0)) = unaff_r14;
            uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b3f4))))
                              (*(undefined4 *)(unsigned)(unaff_r14 * 8 + 0x8c280a38 + 4),ar5,iVar5,ar7));
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xd0) = uVar2;
            (*(int *)(fr0_ - 0x1a4)) = unaff_r14;
            (*(int *)(fr0_ - 0x1a8)) = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                                   (*(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xd4),4,iVar5,ar7));
            (*(int *)(fr0_ - 0x1b0)) = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                                   (*(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xd0),4,iVar5,ar7));
            iVar5 = (*(int *)(fr0_ - 0x1b0)) * 2 + 3;
            ar5 = (*(int *)(fr0_ - 0x1a8));
            (*(int *)(fr0_ - 0x1ac)) = (*(int *)(fr0_ - 0x1b0));
            uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b29c))))
                              (*(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x1a4)) * 8 + 0x8c280a38 + 4),(*(int *)(fr0_ - 0x1a8)),iVar5,
                               ar7));
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xcc) = uVar2;
            iVar8 = *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xcc);
          }
          else {
            (*(int *)(fr0_ - 0x1b4)) = unaff_r14;
            uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b3f4))))
                              (*(undefined4 *)(unsigned)(unaff_r14 * 8 + 0x8c280a38 + 4),ar5,iVar5,ar7));
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xc8) = uVar2;
            (*(int *)(fr0_ - 0x1b8)) = unaff_r14;
            (*(int *)(fr0_ - 0x1c0)) = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                                   (*(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xc8),4,iVar5,ar7));
            ar5 = (*(int *)(fr0_ - 0x1c0)) * 2 + 3;
            (*(int *)(fr0_ - 0x1bc)) = (*(int *)(fr0_ - 0x1c0));
            uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b35c))))
                              (*(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x1b8)) * 8 + 0x8c280a38 + 4),ar5,iVar5,ar7));
            *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xc4) = uVar2;
            iVar8 = *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xc4);
          }
        }
        if (iVar8 == -1) {
          iVar7 = iVar7 + -1;
          unaff_r14 = unaff_r14 + 1;
        }
      }
      if (5 < unaff_r14) {
        unaff_r14 = 0;
      }
    } while ((-1 < iVar7) && (iVar8 == -1));
  }
  if (iVar8 == -1) {
    uVar2 = 0;
  }
  else {
    iVar7 = unaff_r14;
    if ((int)(*(undefined8 *)(fr0_ - 0x1d8)) == 0) {
      unaff_r8 = *(undefined4 *)(unsigned)(unaff_r14 * 8 + 0x8c2809b8 + 4);
      ar5 = 0x8c2809b8;
      (*(int *)(fr0_ - 0x1c4)) = unaff_r14;
    }
    else if ((int)(*(undefined8 *)(fr0_ - 0x1d8)) == 1) {
      unaff_r8 = *(undefined4 *)(unsigned)(unaff_r14 * 8 + 0x8c2809fc + 4);
      iVar7 = unaff_r14 + 7;
      (*(int *)(fr0_ - 0x1c8)) = unaff_r14;
    }
    else if ((int)(*(undefined8 *)(fr0_ - 0x1d8)) == 2) {
      unaff_r8 = *(undefined4 *)(unsigned)(unaff_r14 * 8 + 0x8c280a38 + 4);
      iVar7 = unaff_r14 + 0xd;
      (*(int *)(fr0_ - 0x1cc)) = unaff_r14;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), FUN_8c06b420(unaff_r8,ar5,iVar5,ar7));
    *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xc0) = uVar2;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c015bb8))))
                      (*(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xc0),ar5,iVar5,ar7));
    *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xbc) = uVar2;
    iVar6 = *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xbc) + 0x2c);
    uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), get_field_210_06b3f4(unaff_r8,ar5,iVar5,ar7));
    *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xb8) = uVar2;
    *ar4 = *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xb8);
    ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x118); *(unsigned *)((((unsigned long)(fr0_ - 476)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 476)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02f670))))
              (unaff_r8,(int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x118,iVar5,ar7); });
    (vsp = ((unsigned long)(fr0_ - 476)), Vec3_assign(ar4 + 4,(int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x118,iVar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 476)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0x118,0xffffffff,iVar5,ar7));
    (*(int *)(fr0_ - 0x1d0)) = *ar4;
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1d8))+4)) = iVar8;
    ar4[1] = *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + iVar8 * 4 + *ar4 * 0x24 + 0x128);
    ar4[2] = iVar7;
    ar4[3] = iVar8;
    ar7_00 = ar4 + 0xe;
    ar6_00 = ar4 + 0xd;
    (vsp = ((unsigned long)(fr0_ - 476)), FUN_8c03f414(unaff_r8,ar4 + 0xc,ar6_00,ar7_00));
    if ((iVar8 < 9) && (-1 < iVar8)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 476)), (*(code *)xlat((unsigned long)(((code **)&(*(undefined1 *)(unsigned)0x8c06a404))[iVar8])))(vr4,vr5,vr6,vr7));
      return uVar2;
    }
    ar5_00 = (int *)(unsigned)(iVar6 + 8);
    if (in_FPSCR_SZ == '\0') {
      ar4[8] = *ar5_00;
      ar4[9] = *(int *)(unsigned)(iVar6 + 0xc);
      ar4[10] = *(int *)(unsigned)(iVar6 + 0x10);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 8) = *(undefined8 *)(unsigned)ar5_00;
      *(undefined8 *)(unsigned)(ar4 + 9) = *(undefined8 *)(unsigned)(iVar6 + 0xc);
      *(undefined8 *)(unsigned)(ar4 + 10) = *(undefined8 *)(unsigned)(iVar6 + 0x10);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = CONCAT44D((*(undefined1 *)(unsigned)0x8c06a4f4),(float)*(int *)(unsigned)(iVar6 + 0x14));
    }
    else {
      dVar11 = CONCAT44D((*(undefined1 *)(unsigned)0x8c06a4f8),(*(undefined1 *)(unsigned)0x8c06a4f4));
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = F32LO(dVar11) * F32HI(dVar11);
    }
    else {
      fVar9 = SUB84(dVar11 * dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = CONCAT44D((*(undefined1 *)(unsigned)0x8c06a4f8),fVar9);
    }
    else {
      dVar11 = CONCAT44D(((void *)(unsigned)0x8c06b400),(*(undefined1 *)(unsigned)0x8c06a4f8));
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = F32LO(dVar11) / F32HI(dVar11);
    }
    else {
      fVar9 = SUB84(dVar11 / dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      ar4[0xf] = (int)fVar9;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0xf) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = CONCAT44D((*(undefined1 *)(unsigned)0x8c06a4f4),(float)*(int *)(unsigned)(iVar6 + 0x18));
    }
    else {
      dVar11 = CONCAT44D((*(undefined1 *)(unsigned)0x8c06a4f8),(*(undefined1 *)(unsigned)0x8c06a4f4));
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = F32LO(dVar11) * F32HI(dVar11);
    }
    else {
      fVar9 = SUB84(dVar11 * dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = CONCAT44D((*(undefined1 *)(unsigned)0x8c06a4f8),fVar9);
    }
    else {
      dVar11 = CONCAT44D(((void *)(unsigned)0x8c06b400),(*(undefined1 *)(unsigned)0x8c06a4f8));
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = F32LO(dVar11) / F32HI(dVar11);
    }
    else {
      fVar9 = SUB84(dVar11 / dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      ar4[0x10] = (int)fVar9;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x10) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = CONCAT44D((*(undefined1 *)(unsigned)0x8c06a4f4),(float)*(int *)(unsigned)(iVar6 + 0x1c));
    }
    else {
      dVar11 = CONCAT44D((*(undefined1 *)(unsigned)0x8c06a4f8),(*(undefined1 *)(unsigned)0x8c06a4f4));
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = F32LO(dVar11) * F32HI(dVar11);
    }
    else {
      fVar9 = SUB84(dVar11 * dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = CONCAT44D((*(undefined1 *)(unsigned)0x8c06a4f8),fVar9);
    }
    else {
      dVar11 = CONCAT44D(((void *)(unsigned)0x8c06b400),(*(undefined1 *)(unsigned)0x8c06a4f8));
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = F32HI(dVar11);
      dVar11 = CONCAT44D(fVar9,F32LO(dVar11) / fVar9);
    }
    else {
      dVar11 = dVar11 / dVar11;
    }
    if (in_FPSCR_SZ == '\0') {
      ar4[0x11] = SUB84(dVar11,0);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x11) = in_xd0;
    }
    (vsp = ((unsigned long)(fr0_ - 476)), FUN_8c06b400(unaff_r8,ar5_00,ar6_00,ar7_00));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xb4) = (int)(D2U(dVar11) >> 0x20);
      ar4[0x12] = *(int *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xb4);
    }
    else {
      *(double *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xb4) = dVar11;
      *(undefined8 *)(unsigned)(ar4 + 0x12) = *(undefined8 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x1d8)) + 0xb4);
    }
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c069c24\n.set _FUN_8c069c24, _FUN_8c069c24_def\n");
