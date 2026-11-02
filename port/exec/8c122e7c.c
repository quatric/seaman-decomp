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
int FUN_8c122e7c_def(undefined4 *ar4,int *ar5,undefined4 ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c122e7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  uint *puVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  ushort *a6;
  undefined4 *puVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 *puVar19;
  int *piVar20;
  int ar5_00;
  
  (*(int * *)(fr0_ - 0x48)) = (int *)(unsigned)*ar4;
  ar5_00 = *(*(int * *)(fr0_ - 0x48));
  (*(int * *)(fr0_ - 0x40)) = (int *)(unsigned)(0xb4 + ar5_00);
  (*(uint *)(fr0_ - 0x30)) = (int)(*(int * *)(fr0_ - 0x40)) + *(int *)(unsigned)(0xa4 + ar5_00) * 2 + 3U & 0xfffffffc;
  iVar9 = *(int *)(unsigned)(0x88 + ar5_00);
  (*(int * *)(fr0_ - 0x34)) = (int *)(unsigned)((iVar9 + 1) * 4 + (*(uint *)(fr0_ - 0x30)));
  (*(undefined4 * *)(fr0_ - 0x4c)) = (undefined4 *)(unsigned)((int)(*(int * *)(fr0_ - 0x34)) + (*(int *)(unsigned)(0x90 + ar5_00) + 1) * 4);
  iVar6 = *(int *)(unsigned)(0xa8 + -0x1c + ar5_00);
  iVar11 = (*(int *)(unsigned)(0xa8 + ar5_00) * 2 + (int)(*(undefined4 * *)(fr0_ - 0x4c)) + 3U & 0xfffffffc) +
           (iVar6 + 1) * 4;
  iVar6 = iVar6 + iVar9;
  (*(int *)(fr0_ - 0x44)) = (*(int *)(unsigned)(0x94 + ar5_00) + 1) * 4 + iVar11;
  iVar18 = iVar6 + 1;
  piVar20 = (int *)(unsigned)(iVar6 * 2 + (*(int *)(fr0_ - 0x44)) + 3U & 0xfffffffc);
  (*(int *)(fr0_ - 0x5c)) = 0;
  (*(int *)(fr0_ - 0x50)) = *ar5;
  puVar17 = (undefined4 *)(unsigned)(iVar9 + ar7 + 0x80000000);
  (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x50)) + 4);
  (*(undefined4 *)(fr0_ - 0x24)) = 0;
  if ((ar7 < 0x80000000) || (*(uint *)(unsigned)(0x8c + ar5_00) <= ar7 + 0x80000000)) {
LAB_8c123014:
    iVar9 = (int)0x8c;
  }
  else {
    iVar6 = ar7 - 0x80000000;
    if ((*(int * *)(fr0_ - 0x48))[1] == 0) {
      puVar13 = &(*(undefined4 *)(fr0_ - 0x38));
      iVar9 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c10ca58(ar5,ar6,&(*(undefined4 *)(fr0_ - 0x54)),puVar13));
      if (iVar9 == 0) {
        puVar19 = (undefined4 *)(unsigned)(s0 + (int)puVar17);
        puVar4 = (ushort *)(unsigned)((int)puVar17 * 2 + (*(int *)(fr0_ - 0x44)));
        for (puVar5 = puVar17; puVar5 < puVar19; puVar5 = (undefined4 *)(unsigned)((int)puVar5 + 1)) {
          uVar12 = (uint)(*puVar4 >> 8);
          iVar9 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c10cb4c((*(undefined4 *)(fr0_ - 0x54)),(*(undefined4 *)(fr0_ - 0x38)),uVar12,puVar13));
          if (iVar9 == 0) {
            (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x50)) + 0xc))))((*(undefined4 *)(fr0_ - 0x54)),&(*(undefined4 *)(fr0_ - 0x28)),uVar12,puVar13));
            goto LAB_8c123014;
          }
          puVar4 = puVar4 + 1;
        }
        puVar4 = (ushort *)(unsigned)((int)puVar17 * 2 + (*(int *)(fr0_ - 0x44)));
        for (puVar5 = puVar17; puVar5 < puVar19; puVar5 = (undefined4 *)(unsigned)((int)puVar5 + 1)) {
          if ((*puVar4 & 0x40) != 0) {
            (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x50)) + 0xc))))((*(undefined4 *)(fr0_ - 0x54)),&(*(undefined4 *)(fr0_ - 0x28)),0x40,puVar13));
            goto LAB_8c123014;
          }
          puVar4 = puVar4 + 1;
        }
        (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x50)) + 0xc))))((*(undefined4 *)(fr0_ - 0x54)),&(*(undefined4 *)(fr0_ - 0x28)),0x40,puVar13));
        (*(int *)(fr0_ - 0x2c)) = iVar6 * 4;
        uVar12 = 0;
        iVar9 = (*(int *)(unsigned)(iVar11 + (iVar6 + 1) * 4) - *(int *)(unsigned)(iVar11 + (*(int *)(fr0_ - 0x2c)))) * 2;
        if (*(int *)(unsigned)(0x98 + ar5_00) != 0) {
          do {
            if ((puVar17 <= (undefined4 *)(unsigned)piVar20[iVar18 + uVar12]) &&
               ((undefined4 *)(unsigned)piVar20[iVar18 + uVar12] < puVar19)) {
              (*(int *)(fr0_ - 0x5c)) = (*(int *)(fr0_ - 0x5c)) + 1;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)(unsigned)(0x98 + ar5_00));
        }
        puVar10 = (uint *)(unsigned)(piVar20 + (int)puVar17 + 1);
        puVar1 = (uint *)(unsigned)(piVar20 + (int)puVar17);
        for (puVar5 = puVar17; puVar5 < puVar19; puVar5 = (undefined4 *)(unsigned)((int)puVar5 + 1)) {
          uVar12 = *puVar1;
          if (uVar12 < *puVar10) {
            do {
              puVar13 = (undefined4 *)(unsigned)piVar20[uVar12];
              if ((puVar13 < puVar17) || (puVar19 <= puVar13)) {
                (*(int *)(fr0_ - 0x5c)) = (*(int *)(fr0_ - 0x5c)) + 1;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < *puVar10);
          }
          puVar10 = puVar10 + 1;
          puVar1 = puVar1 + 1;
        }
        iVar2 = (int)0xa8;
        uVar12 = (uint)(s0 * iVar9) >> 1;
        uVar7 = *(int *)(unsigned)(iVar2 + -0x20 + ar5_00) + *(int *)(unsigned)(iVar2 + -0x1c + ar5_00);
        (*(int *)(fr0_ - 0x3c)) = (*(int *)(unsigned)(ar5_00 + 4) - (iVar9 + 0xe) * s0) + (*(int *)(fr0_ - 0x5c)) * -4 +
                    ((*(uint *)(unsigned)(iVar2 + ar5_00) & 1) + (uVar7 & 1)) * -2 +
                    ((*(uint *)(unsigned)(iVar2 + ar5_00) - uVar12 & 1) + (uVar7 - s0 & 1)) * 2;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x50)) + 8))))((*(int *)(fr0_ - 0x3c)),&(*(undefined4 *)(fr0_ - 0x28)),puVar5,puVar13));
        if (iVar2 == 0) {
          iVar9 = 1;
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 104)), memmove(iVar2,ar5_00,(int)0xb4,puVar13));
          iVar9 = (int)0xb4;
          (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
                    (iVar2 + iVar9,(*(int * *)(fr0_ - 0x40)),*(int *)(unsigned)(0xa4 + ar5_00) << 1,puVar13));
          uVar7 = iVar2 + iVar9 + *(int *)(unsigned)(0xa4 + ar5_00) * 2 + 3U & 0xfffffffc;
          (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
                    (uVar7,(*(uint *)(fr0_ - 0x30)),(*(int *)(unsigned)(0x88 + ar5_00) + 1) * 4,puVar13));
          iVar9 = uVar7 + (*(int *)(unsigned)(0x88 + ar5_00) + 1) * 4;
          (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
                    (iVar9,(*(int * *)(fr0_ - 0x34)),(*(int *)(unsigned)(0x90 + ar5_00) + 1) * 4,puVar13));
          iVar9 = iVar9 + (*(int *)(unsigned)(0x90 + ar5_00) + 1) * 4;
          (*(int * *)(fr0_ - 0x40)) = (int *)(unsigned)((*(int *)(fr0_ - 0x2c)) + iVar11);
          (vsp = ((unsigned long)(fr0_ - 104)), memmove(iVar9,(*(undefined4 * *)(fr0_ - 0x4c)),*(*(int * *)(fr0_ - 0x40)) << 1,puVar13));
          iVar9 = iVar9 + *(*(int * *)(fr0_ - 0x40)) * 2;
          (*(int * *)(fr0_ - 0x34)) = (int *)(unsigned)((iVar6 + s0) * 4 + iVar11);
          (*(uint *)(fr0_ - 0x30)) = *(*(int * *)(fr0_ - 0x34));
          (*(int * *)(fr0_ - 0x40)) = (int *)(unsigned)(iVar6 + s0);
          (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
                    (iVar9,(*(uint *)(fr0_ - 0x30)) * 2 + (int)(*(undefined4 * *)(fr0_ - 0x4c)),
                     (*(int *)(unsigned)(iVar11 + *(int *)(unsigned)(0x94 + ar5_00) * 4) - (*(uint *)(fr0_ - 0x30))) * 2,
                     puVar13));
          uVar7 = 0;
          iVar6 = (int)0x8c;
          piVar15 = (int *)(unsigned)(iVar9 + (*(int *)(unsigned)(iVar11 + *(int *)(unsigned)(0x94 + ar5_00) * 4) -
                                    *(*(int * *)(fr0_ - 0x34))) * 2 + 3U & 0xfffffffc);
          if (*(int *)(unsigned)(iVar6 + ar5_00) - s0 != -1) {
            do {
              iVar9 = (*(int *)(unsigned)(iVar6 + ar5_00) - s0) + uVar7;
              uVar7 = uVar7 + 1;
              *piVar15 = iVar9 + 1;
              piVar15 = piVar15 + 1;
            } while (uVar7 < (*(int *)(unsigned)(iVar6 + ar5_00) - s0) + 1U);
          }
          (vsp = ((unsigned long)(fr0_ - 104)), memmove(piVar15,iVar11,(*(int *)(fr0_ - 0x2c)),puVar13));
          piVar15 = (int *)(unsigned)((int)piVar15 + (*(int *)(fr0_ - 0x2c)));
          piVar8 = (*(int * *)(fr0_ - 0x40));
          if ((*(int * *)(fr0_ - 0x40)) < *(int *)(unsigned)(0x94 + ar5_00) + 1U) {
            do {
              iVar9 = (int)piVar8 * 4;
              piVar8 = (int *)(unsigned)((int)piVar8 + 1);
              iVar6 = (int)0x94;
              *piVar15 = *(int *)(unsigned)(iVar11 + iVar9) - uVar12;
              piVar15 = piVar15 + 1;
            } while (piVar8 < *(int *)(unsigned)(iVar6 + ar5_00) + 1U);
          }
          iVar11 = (int)puVar17 * 2;
          (vsp = ((unsigned long)(fr0_ - 104)), memmove(piVar15,(*(int *)(fr0_ - 0x44)),iVar11,puVar13));
          (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
                    ((int)piVar15 + iVar11,s0 * 2 + iVar11 + (*(int *)(fr0_ - 0x44)),
                     (((*(int *)(unsigned)(0x8c + -4 + ar5_00) + *(int *)(unsigned)(0x8c + ar5_00)) -
                      (int)puVar17) - s0) * 2,puVar13));
          iVar9 = (int)0x8c;
          iVar6 = 0;
          piVar8 = piVar20 + 1;
          piVar14 = (int *)(unsigned)((int)piVar15 + iVar11 +
                            (((*(int *)(unsigned)(iVar9 + -4 + ar5_00) + *(int *)(unsigned)(iVar9 + ar5_00)) -
                             (int)puVar17) - s0) * 2 + 3U & 0xfffffffc);
          *piVar14 = *piVar20 - s0;
          piVar14 = piVar14 + 1;
          iVar9 = (*(int *)(unsigned)(iVar9 + -4 + ar5_00) + *(int *)(unsigned)(iVar9 + ar5_00)) - s0;
          (*(undefined4 * *)(fr0_ - 0x4c)) = (undefined4 *)(unsigned)0x0;
          piVar15 = piVar14;
          (*(int * *)(fr0_ - 0x64)) = piVar20;
          (*(int * *)(fr0_ - 0x60)) = piVar8;
          if (puVar17 != (undefined4 *)(unsigned)0x0) {
            do {
              uVar7 = *(*(int * *)(fr0_ - 0x64)) - *piVar20;
              if (uVar7 < (uint)(*piVar8 - *piVar20)) {
                do {
                  if ((undefined4 *)(unsigned)piVar20[iVar18 + uVar7] < puVar17) {
                    iVar11 = piVar20[iVar18 + uVar7];
LAB_8c1233aa:
                    piVar14[iVar9 + (uVar7 - iVar6)] = iVar11;
                  }
                  else {
                    if (puVar19 <= (undefined4 *)(unsigned)piVar20[iVar18 + uVar7]) {
                      iVar11 = piVar20[iVar18 + uVar7] - s0;
                      goto LAB_8c1233aa;
                    }
                    iVar6 = iVar6 + 1;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 < (uint)(*piVar8 - *piVar20));
              }
              piVar8 = piVar8 + 1;
              *piVar15 = (*(*(int * *)(fr0_ - 0x60)) - s0) - iVar6;
              piVar15 = piVar15 + 1;
              (*(undefined4 * *)(fr0_ - 0x4c)) = (undefined4 *)(unsigned)((int)(*(undefined4 * *)(fr0_ - 0x4c)) + 1);
              (*(int * *)(fr0_ - 0x60)) = (*(int * *)(fr0_ - 0x60)) + 1;
              (*(int * *)(fr0_ - 0x64)) = (*(int * *)(fr0_ - 0x64)) + 1;
            } while ((*(undefined4 * *)(fr0_ - 0x4c)) < puVar17);
          }
          piVar8 = piVar20 + (int)puVar17 + 1;
          piVar16 = piVar20 + (int)puVar17;
          for (puVar13 = puVar17; puVar13 < puVar19; puVar13 = (undefined4 *)(unsigned)((int)puVar13 + 1)) {
            iVar3 = *piVar16;
            piVar16 = piVar16 + 1;
            iVar11 = *piVar8;
            piVar8 = piVar8 + 1;
            iVar6 = iVar6 + (iVar11 - iVar3);
          }
          puVar13 = puVar19;
          if (puVar19 < (undefined4 *)(unsigned)
                        (*(int *)(unsigned)(0x8c + -4 + ar5_00) + *(int *)(unsigned)(0x8c + ar5_00))) {
            do {
              uVar7 = piVar20[(int)puVar13] - *piVar20;
              if (uVar7 < (uint)(piVar20[(int)puVar13 + 1] - *piVar20)) {
                do {
                  if ((undefined4 *)(unsigned)piVar20[iVar18 + uVar7] < puVar17) {
                    piVar14[iVar9 + (uVar7 - iVar6)] = piVar20[iVar18 + uVar7];
                  }
                  else if ((undefined4 *)(unsigned)piVar20[iVar18 + uVar7] < puVar19) {
                    iVar6 = iVar6 + 1;
                  }
                  else {
                    piVar14[iVar9 + (uVar7 - iVar6)] = piVar20[iVar18 + uVar7] - s0;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 < (uint)(piVar20[(int)puVar13 + 1] - *piVar20));
              }
              iVar11 = (int)puVar13 + 1;
              puVar13 = (undefined4 *)(unsigned)((int)puVar13 + 1);
              iVar3 = (int)0x8c;
              *piVar15 = (piVar20[iVar11] - s0) - iVar6;
              piVar15 = piVar15 + 1;
            } while (puVar13 < (undefined4 *)(unsigned)
                               (*(int *)(unsigned)(iVar3 + -4 + ar5_00) + *(int *)(unsigned)(iVar3 + ar5_00)));
          }
          iVar9 = (int)0x8c;
          *(int *)(unsigned)(iVar2 + 4) = (*(int *)(fr0_ - 0x3c));
          *(int *)(unsigned)(iVar9 + iVar2) = *(int *)(unsigned)(iVar9 + iVar2) - s0;
          *(int *)(unsigned)(iVar9 + 8 + iVar2) = *(int *)(unsigned)(iVar9 + 8 + iVar2) - s0;
          *(int *)(unsigned)(iVar9 + 0xc + iVar2) = *(int *)(unsigned)(iVar9 + 0xc + iVar2) - iVar6;
          puVar4 = (ushort *)(unsigned)((int)puVar17 * 2 + (*(int *)(fr0_ - 0x44)));
          a6 = puVar4;
          while (puVar17 < puVar19) {
            if ((*a6 & 1) != 0) {
              *(int *)(unsigned)(0x9c + iVar2) = *(int *)(unsigned)(0x9c + iVar2) + -1;
            }
            puVar17 = (undefined4 *)(unsigned)((int)puVar17 + 1);
            if ((*puVar4 & 2) != 0) {
              *(int *)(unsigned)(0xa0 + iVar2) = *(int *)(unsigned)(0xa0 + iVar2) + -1;
            }
            puVar4 = puVar4 + 1;
            a6 = a6 + 1;
          }
          *(uint *)(unsigned)(0xa8 + iVar2) = *(int *)(unsigned)(0xa8 + iVar2) - uVar12;
          if ((*(int * *)(fr0_ - 0x48))[2] != 0) {
            (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x50)) + 0xc))))(*(*(int * *)(fr0_ - 0x48)),&(*(undefined4 *)(fr0_ - 0x28)),a6,2));
          }
          iVar9 = 0;
          *(*(int * *)(fr0_ - 0x48)) = iVar2;
          (*(int * *)(fr0_ - 0x48))[2] = 1;
        }
      }
    }
    else {
      iVar9 = 5;
    }
  }
  return iVar9;
}

__asm__(".globl _FUN_8c122e7c\n.set _FUN_8c122e7c, _FUN_8c122e7c_def\n");
