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
undefined4 FUN_8c10b1ec_def(int *ar4,int *ar5,undefined4 *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c10b1ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int a4;
  int iVar11;
  int iVar12;
  int iVar13;
  
  (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
  (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
  (*(unsigned *)(fr0_ - 0x34) = (unsigned)(unsigned long)((undefined4 *)(unsigned)0x0));
  iVar13 = *ar5;
  (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(iVar13 + 4);
  (*(undefined4 *)(fr0_ - 0x24)) = 0;
  if (ar5[1] != 0) {
    (*(undefined4 *)(fr0_ - 0x24)) = *(undefined4 *)(unsigned)(ar5[1] + 8);
  }
  piVar5 = ar5;
  piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 100)), FUN_8c11eb6c(*(undefined4 *)(unsigned)(uint)ar5[1],ar5,ar6,ar7));
  a4 = *piVar3;
  iVar4 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c10afbe(a4,piVar5,ar6,ar7));
  uVar1 = 0x80;
  iVar6 = *ar4;
  (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)((undefined4 *)(unsigned)0x0));
  (*(unsigned *)(fr0_ - 0x44) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
  iVar12 = 0;
  (*(unsigned *)(fr0_ - 0x3c) = (unsigned)(unsigned long)(ar7));
  (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)((undefined4 *)(unsigned)(uint)ar4[1]));
  if (0 < iVar6) {
    do {
      (*(unsigned *)(fr0_ - 0x3c) = (unsigned)(unsigned long)((int *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x38))));
      (*(int *)(fr0_ - 0x64)) = 0;
      iVar11 = 0;
      (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)((int *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x38))[5]));
      if (0 < (int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))) {
        do {
          iVar9 = 0;
          iVar8 = *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x4c));
          ar6 = (undefined4 *)(unsigned)0x0;
          (*(int *)(fr0_ - 0x60)) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x4c))[3];
          if (0 < iVar8) {
            do {
              ar6 = (undefined4 *)(unsigned)((int)ar6 + 1);
              if ((*(ushort *)(unsigned)(iVar4 + *(int *)(unsigned)((*(int *)(fr0_ - 0x60)) + 8) * 2) & 0x80) == 0) {
                iVar9 = iVar9 + 1;
              }
              (*(int *)(fr0_ - 0x60)) = (*(int *)(fr0_ - 0x60)) + 0xc;
            } while ((int)ar6 < iVar8);
          }
          iVar12 = (iVar12 + iVar8) - iVar9;
          if (iVar9 == iVar8) {
            (*(int *)(fr0_ - 0x64)) = (*(int *)(fr0_ - 0x64)) + 1;
          }
          iVar11 = iVar11 + 1;
          (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x4c)) + 4));
        } while (iVar11 < (int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c)));
      }
      (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)((undefined4 *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c)) + ((int)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) - (*(int *)(fr0_ - 0x64))))));
      (*(unsigned *)(fr0_ - 0x44) = (unsigned)(unsigned long)((int *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x44)) + 1)));
      (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) + 6));
    } while ((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x44)) < iVar6);
  }
  piVar5 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 8))))(0xc,&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
  if (piVar5 != (int *)(unsigned)0x0) {
    if (iVar6 < 1) {
LAB_8c10b3fc:
      *piVar5 = *ar4;
      piVar5[1] = (int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c));
      (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
      (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(ar6));
      piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x30));
      (*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x34))));
      (*(unsigned *)(fr0_ - 0x44) = (unsigned)(unsigned long)((int *)(unsigned)(uint)ar4[1]));
      piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c));
      if (0 < iVar6) {
        do {
          (*(unsigned *)(fr0_ - 0x3c) = (unsigned)(unsigned long)(piVar2));
          (*(unsigned *)(fr0_ - 0x48) = (unsigned)(unsigned long)((int *)(unsigned)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x44))[5]));
          iVar12 = *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x44));
          *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c)) = iVar12;
          ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))[1] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x44))[1];
          ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))[2] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x44))[2];
          ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))[3] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x44))[3];
          ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))[4] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x44))[4];
          ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))[5] = (int)piVar3;
          (*(int *)(fr0_ - 0x60)) = 0;
          if (0 < iVar12) {
            do {
              puVar7 = (undefined4 *)(unsigned)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x48))[3];
              iVar8 = *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x48));
              *piVar3 = iVar8;
              piVar3[1] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x48))[1];
              piVar3[2] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x48))[2];
              piVar3[3] = (int)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x5c));
              iVar11 = 0;
              if (0 < iVar8) {
                do {
                  (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(puVar7));
                  uVar10 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[2];
                  if ((*(ushort *)(unsigned)(iVar4 + uVar10 * 2) & uVar1) == 0) {
                    *piVar3 = *piVar3 + -1;
                  }
                  else {
                    if (*(uint *)(unsigned)(0x88 + a4) <= uVar10) {
                      ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[2] = (uVar10 - *(int *)(unsigned)(0x88 + a4)) + 0x80000000;
                    }
                    *((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) = *((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58));
                    ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x5c))[1] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[1];
                    ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x5c))[2] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[2];
                    (*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) + 3));
                  }
                  iVar11 = iVar11 + 1;
                  puVar7 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 3;
                } while (iVar11 < iVar8);
              }
              if (*piVar3 == 0) {
                *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c)) = *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c)) + -1;
              }
              else {
                piVar3 = piVar3 + 4;
              }
              (*(int *)(fr0_ - 0x60)) = (*(int *)(fr0_ - 0x60)) + 1;
              (*(unsigned *)(fr0_ - 0x48) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x48)) + 4));
            } while ((*(int *)(fr0_ - 0x60)) < iVar12);
          }
          (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)((int *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x4c)) + 1)));
          (*(unsigned *)(fr0_ - 0x44) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x44)) + 6));
          piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c)) + 6;
        } while ((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x4c)) < iVar6);
      }
      uVar10 = (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5[1] + 0xc))))(piVar5,&(*(undefined4 *)(fr0_ - 0x28)),((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
      (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(piVar5,&(*(undefined4 *)(fr0_ - 0x28)),((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
      if (((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)) != (int *)(unsigned)0x0) {
        (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)),&(*(undefined4 *)(fr0_ - 0x28)),((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
      }
      if (((int *)(unsigned long)*(unsigned *)(fr0_ - 0x30)) != (int *)(unsigned)0x0) {
        (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x30)),&(*(undefined4 *)(fr0_ - 0x28)),((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
      }
      if (((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x34)) == (undefined4 *)(unsigned)0x0) {
        return uVar10 & 0xff;
      }
      (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x34)),&(*(undefined4 *)(fr0_ - 0x28)),((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
      return uVar10 & 0xff;
    }
    (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)((int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 8))))(iVar6 * 0x18,&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))))));
    if (((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)) == (int *)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(piVar5,&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
    }
    else {
      (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)((int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 8))))
                                    (((int)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 1) * 0x10,&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))))));
      if (((int *)(unsigned long)*(unsigned *)(fr0_ - 0x30)) == (int *)(unsigned)0x0) {
        (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(piVar5,&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
        (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)),&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
      }
      else {
        if ((iVar12 == 0) ||
           ((*(unsigned *)(fr0_ - 0x34) = (unsigned)(unsigned long)((undefined4 *)(unsigned)
                         (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 8))))(iVar12 * 0xc,&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c)))))),
           ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x34)) != (undefined4 *)(unsigned)0x0)) goto LAB_8c10b3fc;
        (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(piVar5,&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
        (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)),&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
        (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x30)),&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c10b1ec\n.set _FUN_8c10b1ec, _FUN_8c10b1ec_def\n");
