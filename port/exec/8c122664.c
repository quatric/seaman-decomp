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
int FUN_8c122664_def(undefined4 *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c122664";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);
  int * s4 = (int *)(unsigned long)*(unsigned *)(vsp + 4);
  undefined4 * s8 = (undefined4 *)(unsigned long)*(unsigned *)(vsp + 8);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *ar6_00;
  int *piVar6;
  int iVar7;
  int *piVar8;
  ushort *puVar9;
  int *ar5_00;
  int *piVar10;
  int ar5_01;
  
  (*(int * *)(fr0_ - 0x3c)) = (int *)(unsigned)*ar4;
  ar5_01 = *(*(int * *)(fr0_ - 0x3c));
  (*(int * *)(fr0_ - 0x5c)) = (int *)(unsigned)(0xb4 + ar5_01);
  (*(int * *)(fr0_ - 0x48)) = (int *)(unsigned)((int)(*(int * *)(fr0_ - 0x5c)) + *(int *)(unsigned)(0xa4 + ar5_01) * 2 + 3U & 0xfffffffc);
  (*(int * *)(fr0_ - 0x58)) = (int *)(unsigned)((*(int *)(unsigned)(0x88 + ar5_01) + 1) * 4 + (int)(*(int * *)(fr0_ - 0x48)));
  (*(int * *)(fr0_ - 0x4c)) = (int *)(unsigned)((int)(*(int * *)(fr0_ - 0x58)) + (*(int *)(unsigned)(0x90 + ar5_01) + 1) * 4);
  (*(uint *)(fr0_ - 0x60)) = (int)(*(int * *)(fr0_ - 0x4c)) + *(int *)(unsigned)(0xa8 + ar5_01) * 2 + 3 & 0xfffffffc;
  iVar5 = *(int *)(unsigned)(0x8c + ar5_01) + *(int *)(unsigned)(0x88 + ar5_01);
  (*(int * *)(fr0_ - 0x44)) = (int *)(unsigned)((*(uint *)(fr0_ - 0x60)) + (*(int *)(unsigned)(0x8c + ar5_01) + 1) * 4);
  iVar7 = iVar5 + 1;
  (*(int *)(fr0_ - 0x34)) = 0;
  ar5_00 = (*(int * *)(fr0_ - 0x44)) + *(int *)(unsigned)(0x94 + ar5_01) + 1;
  piVar10 = (int *)(unsigned)((int)ar5_00 + iVar5 * 2 + 3 & 0xfffffffc);
  (*(int *)(fr0_ - 0x30)) = 0;
  (*(int *)(fr0_ - 0x40)) = *ar5;
  (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x40)) + 4);
  (*(undefined4 *)(fr0_ - 0x24)) = 0;
  iVar5 = 0;
  if ((*(int * *)(fr0_ - 0x3c))[1] == 0) {
    piVar8 = &(*(int *)(fr0_ - 0x54));
    (*(int * *)(fr0_ - 0x50)) = ar5;
    (*(int *)(fr0_ - 0x38)) = ar6;
    (*(undefined4 *)(fr0_ - 0x2c)) = ar7;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c10ca58(ar5,ar6,piVar8,&(*(int * *)(fr0_ - 0x64))));
    if (iVar1 == 0) {
      piVar6 = (int *)(unsigned)0x0;
      if ((*(int * *)(fr0_ - 0x64)) != (int *)(unsigned)0x0) {
        do {
          uVar2 = 0;
          if (*(int *)(unsigned)(0x8c + -4 + ar5_01) + *(int *)(unsigned)(0x8c + ar5_01) != 0) {
LAB_8c122778:
            if ((uint)(*(ushort *)(unsigned)(uVar2 * 2 + (int)ar5_00) >> 8) !=
                *(uint *)(unsigned)((*(int *)(fr0_ - 0x54)) + (int)piVar6 * 4)) goto LAB_8c12282a;
            uVar4 = 0;
            if (*(int *)(unsigned)(0x98 + ar5_01) != 0) {
              do {
                iVar1 = iVar7 + uVar4;
                uVar4 = uVar4 + 1;
                if (piVar10[iVar1] == uVar2) {
                  iVar5 = iVar5 + 1;
                }
              } while (uVar4 < *(uint *)(unsigned)(0x98 + ar5_01));
            }
            piVar8 = piVar10 + uVar2 + 1;
            uVar4 = piVar10[uVar2] - *piVar10;
            if (uVar4 < (uint)(*piVar8 - *piVar10)) {
              do {
                iVar1 = iVar7 + uVar4;
                uVar4 = uVar4 + 1;
                if (piVar10[iVar1] == uVar2) {
                  iVar5 = iVar5 + 1;
                }
              } while (uVar4 < (uint)(*piVar8 - *piVar10));
            }
            iVar5 = iVar5 + (piVar10[uVar2 + 1] - piVar10[uVar2]);
            if ((*(ushort *)(unsigned)(uVar2 * 2 + (int)ar5_00) & 1) != 0) {
              (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + 1;
            }
            if ((*(ushort *)(unsigned)(uVar2 * 2 + (int)ar5_00) & 2) != 0) {
              (*(int *)(fr0_ - 0x30)) = (*(int *)(fr0_ - 0x30)) + 1;
            }
          }
LAB_8c12283a:
          piVar6 = (int *)(unsigned)((int)piVar6 + 1);
        } while (piVar6 < (*(int * *)(fr0_ - 0x64)));
      }
      iVar1 = (int)0xa8;
      uVar2 = *(int *)(unsigned)(iVar1 + -0x20 + ar5_01) + *(int *)(unsigned)(iVar1 + -0x1c + ar5_01);
      (*(int *)(fr0_ - 0x38)) = (s0 + 0xe) * (int)(*(int * *)(fr0_ - 0x64)) + *(int *)(unsigned)(ar5_01 + 4) + iVar5 * 4 +
                  ((*(uint *)(unsigned)(iVar1 + ar5_01) & 1) + (uVar2 & 1)) * -2 +
                  ((((uint)(s0 * (int)(*(int * *)(fr0_ - 0x64))) >> 1) + *(uint *)(unsigned)(iVar1 + ar5_01) & 1) +
                  (uVar2 + (int)(*(int * *)(fr0_ - 0x64)) & 1)) * 2;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x40)) + 8))))((*(int *)(fr0_ - 0x38)),&(*(undefined4 *)(fr0_ - 0x28)),piVar8,piVar6));
      (*(int * *)(fr0_ - 0x50)) = (int *)(unsigned)iVar5;
      if (iVar5 == 0) {
        (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x40)) + 0xc))))((*(int *)(fr0_ - 0x54)),&(*(undefined4 *)(fr0_ - 0x28)),piVar8,piVar6));
LAB_8c122b8e:
        iVar1 = 1;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 104)), memmove(iVar5,ar5_01,(int)0xb4,piVar6));
        iVar1 = (int)0xb4;
        (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
                  (iVar5 + iVar1,(*(int * *)(fr0_ - 0x5c)),*(int *)(unsigned)(0xa4 + ar5_01) << 1,piVar6));
        uVar2 = iVar5 + iVar1 + *(int *)(unsigned)(0xa4 + ar5_01) * 2 + 3U & 0xfffffffc;
        (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
                  (uVar2,(*(int * *)(fr0_ - 0x48)),(*(int *)(unsigned)(0xa4 + -0x1c + ar5_01) + 1) * 4,piVar6));
        iVar5 = uVar2 + (*(int *)(unsigned)(0x88 + ar5_01) + 1) * 4;
        (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
                  (iVar5,(*(int * *)(fr0_ - 0x58)),(*(int *)(unsigned)(0x88 + 8 + ar5_01) + 1) * 4,piVar6));
        iVar5 = iVar5 + (*(int *)(unsigned)(0x90 + ar5_01) + 1) * 4;
        (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
                  (iVar5,(*(int * *)(fr0_ - 0x4c)),*(int *)(unsigned)(0x90 + 0x18 + ar5_01) << 1,piVar6));
        (*(int * *)(fr0_ - 0x5c)) = (int *)(unsigned)0x0;
        iVar5 = iVar5 + *(int *)(unsigned)(0xa8 + ar5_01) * 2;
        if ((*(int * *)(fr0_ - 0x64)) != (int *)(unsigned)0x0) {
          do {
            (vsp = ((unsigned long)(fr0_ - 104)), memmove(iVar5,(*(undefined4 *)(fr0_ - 0x2c)),s0,piVar6));
            (*(int * *)(fr0_ - 0x5c)) = (int *)(unsigned)((int)(*(int * *)(fr0_ - 0x5c)) + 1);
            iVar5 = iVar5 + s0;
          } while ((*(int * *)(fr0_ - 0x5c)) < (*(int * *)(fr0_ - 0x64)));
        }
        piVar8 = (int *)(unsigned)(iVar5 + 3U & 0xfffffffc);
        uVar2 = 0;
        if (*(int *)(unsigned)(0x8c + ar5_01) != 0) {
          do {
            iVar1 = uVar2 * 4;
            uVar2 = uVar2 + 1;
            iVar5 = (int)0x8c;
            *piVar8 = *(int *)(unsigned)((*(uint *)(fr0_ - 0x60)) + iVar1) + (int)(*(int * *)(fr0_ - 0x64));
            piVar8 = piVar8 + 1;
          } while (uVar2 < *(uint *)(unsigned)(iVar5 + ar5_01));
        }
        uVar2 = 0;
        if ((*(int * *)(fr0_ - 0x64)) != (int *)(unsigned)0xffffffff) {
          do {
            iVar5 = uVar2 + *(int *)(unsigned)(0x8c + 8 + ar5_01) + *(int *)(unsigned)(0x8c + ar5_01);
            uVar2 = uVar2 + 1;
            *piVar8 = (int)(*(int * *)(fr0_ - 0x64)) + iVar5 + 1;
            piVar8 = piVar8 + 1;
          } while (uVar2 < (int)(*(int * *)(fr0_ - 0x64)) + 1U);
        }
        (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
                  (piVar8,(*(int * *)(fr0_ - 0x44)),*(int *)(unsigned)(0x94 + ar5_01) << 2,piVar6));
        piVar8 = piVar8 + *(int *)(unsigned)(0x94 + ar5_01);
        uVar2 = 0;
        if ((*(int * *)(fr0_ - 0x64)) != (int *)(unsigned)0xffffffff) {
          do {
            uVar4 = s0 * uVar2;
            uVar2 = uVar2 + 1;
            *piVar8 = (uVar4 >> 1) + *(int *)(unsigned)(0xa8 + ar5_01);
            piVar8 = piVar8 + 1;
          } while (uVar2 < (int)(*(int * *)(fr0_ - 0x64)) + 1U);
        }
        ar6_00 = (int *)(unsigned)((*(int *)(unsigned)(0x8c + -4 + ar5_01) + *(int *)(unsigned)(0x8c + ar5_01)) *
                        2);
        (vsp = ((unsigned long)(fr0_ - 104)), memmove(piVar8,ar5_00,ar6_00,piVar6));
        piVar6 = 0xffbf;
        puVar9 = (ushort *)(unsigned)
                 ((int)piVar8 +
                 (*(int *)(unsigned)(0x8c + -4 + ar5_01) + *(int *)(unsigned)(0x8c + ar5_01)) * 2);
        piVar8 = (int *)(unsigned)0x0;
        if ((*(int * *)(fr0_ - 0x64)) != (int *)(unsigned)0x0) {
          do {
            uVar2 = 0;
            ar6_00 = (int *)(unsigned)((int)piVar8 * 4);
            if (*(int *)(unsigned)(0x8c + -4 + ar5_01) + *(int *)(unsigned)(0x8c + ar5_01) != 0) {
              do {
                if ((uint)(*(ushort *)(unsigned)(uVar2 * 2 + (int)ar5_00) >> 8) ==
                    *(uint *)(unsigned)((*(int *)(fr0_ - 0x54)) + (int)ar6_00)) {
                  *puVar9 = *(ushort *)(unsigned)(uVar2 * 2 + (int)ar5_00) & (ushort)piVar6;
                  puVar9 = puVar9 + 1;
                  break;
                }
                uVar2 = uVar2 + 1;
              } while (uVar2 < (uint)(*(int *)(unsigned)(0x8c + -4 + ar5_01) +
                                     *(int *)(unsigned)(0x8c + ar5_01)));
            }
            piVar8 = (int *)(unsigned)((int)piVar8 + 1);
          } while (piVar8 < (*(int * *)(fr0_ - 0x64)));
        }
        piVar8 = (int *)(unsigned)((int)puVar9 + 3U & 0xfffffffc);
        iVar5 = (int)0x8c;
        *piVar8 = *piVar10 + (int)(*(int * *)(fr0_ - 0x64));
        piVar8 = piVar8 + 1;
        (*(int * *)(fr0_ - 0x48)) = piVar8 + *(int *)(unsigned)(iVar5 + -4 + ar5_01) + *(int *)(unsigned)(iVar5 + ar5_01) +
                              (int)(*(int * *)(fr0_ - 0x64));
        (*(uint *)(fr0_ - 0x60)) = 0;
        iVar5 = 0;
        if (*(int *)(unsigned)(0x8c + -4 + ar5_01) + *(int *)(unsigned)(0x8c + ar5_01) != 0) {
          do {
            if (piVar10[(*(uint *)(fr0_ - 0x60)) + 1] != piVar10[(*(uint *)(fr0_ - 0x60))]) {
              (*(int * *)(fr0_ - 0x4c)) = piVar10 + (*(uint *)(fr0_ - 0x60));
              (*(int * *)(fr0_ - 0x58)) = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x40)) + 8))))
                                            ((piVar10[(*(uint *)(fr0_ - 0x60)) + 1] - *(*(int * *)(fr0_ - 0x4c))) * 4,&(*(undefined4 *)(fr0_ - 0x28)),
                                             ar6_00,piVar6));
              if ((*(int * *)(fr0_ - 0x58)) == (int *)(unsigned)0x0) {
                (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x40)) + 0xc))))((*(int *)(fr0_ - 0x54)),&(*(undefined4 *)(fr0_ - 0x28)),ar6_00,piVar6));
                (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x40)) + 0xc))))((*(int * *)(fr0_ - 0x50)),&(*(undefined4 *)(fr0_ - 0x28)),ar6_00,piVar6));
                goto LAB_8c122b8e;
              }
              ar6_00 = piVar10 + (*(uint *)(fr0_ - 0x60)) + 1;
              uVar2 = *(*(int * *)(fr0_ - 0x4c)) - *piVar10;
              iVar1 = 0;
              if (uVar2 < (uint)(*ar6_00 - *piVar10)) {
                do {
                  piVar6 = piVar10 + iVar7 + uVar2;
                  iVar3 = uVar2 + iVar5;
                  uVar2 = uVar2 + 1;
                  (*(int * *)(fr0_ - 0x48))[iVar3] = *piVar6;
                  *(uint *)(unsigned)((int)(*(int * *)(fr0_ - 0x58)) + iVar1 * 4) =
                       (uint)(*(ushort *)(unsigned)(*piVar6 * 2 + (int)ar5_00) >> 8);
                  iVar1 = iVar1 + 1;
                } while (uVar2 < (uint)(*ar6_00 - *piVar10));
              }
              (*(int * *)(fr0_ - 0x5c)) = (int *)(unsigned)0x0;
              (*(int * *)(fr0_ - 0x44)) = piVar10 + (*(uint *)(fr0_ - 0x60)) + 1;
              if ((*(int * *)(fr0_ - 0x64)) != (int *)(unsigned)0x0) {
                do {
                  ar6_00 = ((int *)(unsigned long)*(unsigned *)(unsigned)((*(int *)(fr0_ - 0x54)) + (int)(*(int * *)(fr0_ - 0x5c)) * 4));
                  iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c10cb4c))))
                                    ((*(int * *)(fr0_ - 0x58)),*(*(int * *)(fr0_ - 0x44)) - *(*(int * *)(fr0_ - 0x4c)),ar6_00,piVar6));
                  if (iVar1 != 0) {
                    iVar1 = (*(*(int * *)(fr0_ - 0x44)) - *piVar10) + iVar5;
                    iVar5 = iVar5 + 1;
                    (*(int * *)(fr0_ - 0x48))[iVar1] =
                         *(int *)(unsigned)(0x88 + ar5_01) + *(int *)(unsigned)(0x8c + ar5_01) +
                         (int)(*(int * *)(fr0_ - 0x5c));
                  }
                  (*(int * *)(fr0_ - 0x5c)) = (int *)(unsigned)((int)(*(int * *)(fr0_ - 0x5c)) + 1);
                } while ((*(int * *)(fr0_ - 0x5c)) < (*(int * *)(fr0_ - 0x64)));
              }
              (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x40)) + 0xc))))((*(int * *)(fr0_ - 0x58)),&(*(undefined4 *)(fr0_ - 0x28)),ar6_00,piVar6));
            }
            iVar1 = (int)0x8c;
            *piVar8 = (int)(*(int * *)(fr0_ - 0x64)) + iVar5 + piVar10[(*(uint *)(fr0_ - 0x60)) + 1];
            (*(uint *)(fr0_ - 0x60)) = (*(uint *)(fr0_ - 0x60)) + 1;
            piVar8 = piVar8 + 1;
          } while ((*(uint *)(fr0_ - 0x60)) < (uint)(*(int *)(unsigned)(iVar1 + -4 + ar5_01) + *(int *)(unsigned)(iVar1 + ar5_01)));
        }
        (*(int * *)(fr0_ - 0x58)) = (int *)(unsigned)0x0;
        if ((*(int * *)(fr0_ - 0x64)) != (int *)(unsigned)0x0) {
          do {
            iVar1 = (int)0x88;
            *piVar8 = piVar8[-1];
            (*(uint *)(fr0_ - 0x60)) = 0;
            if (*(int *)(unsigned)(iVar1 + ar5_01) != 0) {
              do {
                if ((uint)(*(ushort *)(unsigned)((*(uint *)(fr0_ - 0x60)) * 2 + (int)ar5_00) >> 8) ==
                    *(uint *)(unsigned)((*(int *)(fr0_ - 0x54)) + (int)(*(int * *)(fr0_ - 0x58)) * 4)) {
                  (*(int * *)(fr0_ - 0x5c)) = piVar10 + (*(uint *)(fr0_ - 0x60)) + 1;
                  (*(int * *)(fr0_ - 0x4c)) = piVar10 + (*(uint *)(fr0_ - 0x60));
                  (*(int * *)(fr0_ - 0x44)) = (int *)(unsigned)*(*(int * *)(fr0_ - 0x4c));
                  ar6_00 = (int *)(unsigned)((*(*(int * *)(fr0_ - 0x5c)) - (int)(*(int * *)(fr0_ - 0x44))) * 4);
                  (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
                            ((*(int * *)(fr0_ - 0x48)) + *(int *)(unsigned)(0x98 + ar5_01) + iVar5,
                             piVar10 + (int)(*(int * *)(fr0_ - 0x44)) + (iVar7 - *piVar10),ar6_00,piVar6));
                  iVar1 = *(*(int * *)(fr0_ - 0x4c));
                  iVar3 = *(*(int * *)(fr0_ - 0x5c));
                  *piVar8 = *piVar8 + (iVar3 - iVar1);
                  iVar5 = iVar5 + (iVar3 - iVar1);
                  uVar2 = *(*(int * *)(fr0_ - 0x4c)) - *piVar10;
                  iVar1 = iVar5;
                  if (uVar2 < (uint)(*(*(int * *)(fr0_ - 0x5c)) - *piVar10)) {
                    do {
                      iVar3 = iVar7 + uVar2;
                      uVar2 = uVar2 + 1;
                      iVar5 = iVar1;
                      if (piVar10[iVar3] == (*(uint *)(fr0_ - 0x60))) {
                        iVar5 = iVar1 + 1;
                        (*(int * *)(fr0_ - 0x48))[iVar1 + *(int *)(unsigned)(0x98 + ar5_01)] =
                             *(int *)(unsigned)(0x88 + ar5_01) + *(int *)(unsigned)(0x8c + ar5_01) +
                             (int)(*(int * *)(fr0_ - 0x58));
                        *piVar8 = *piVar8 + 1;
                      }
                      iVar1 = iVar5;
                    } while (uVar2 < (uint)(*(*(int * *)(fr0_ - 0x5c)) - *piVar10));
                  }
                  break;
                }
                (*(uint *)(fr0_ - 0x60)) = (*(uint *)(fr0_ - 0x60)) + 1;
              } while ((*(uint *)(fr0_ - 0x60)) < *(uint *)(unsigned)(0x88 + ar5_01));
            }
            (*(int * *)(fr0_ - 0x58)) = (int *)(unsigned)((int)(*(int * *)(fr0_ - 0x58)) + 1);
            piVar8 = piVar8 + 1;
          } while ((*(int * *)(fr0_ - 0x58)) < (*(int * *)(fr0_ - 0x64)));
        }
        (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x40)) + 0xc))))((*(int *)(fr0_ - 0x54)),&(*(undefined4 *)(fr0_ - 0x28)),ar6_00,piVar6));
        iVar7 = (int)0x8c;
        *(int *)(unsigned)((int)(*(int * *)(fr0_ - 0x50)) + 4) = (*(int *)(fr0_ - 0x38));
        *(int *)(unsigned)(iVar7 + (int)(*(int * *)(fr0_ - 0x50))) = *(int *)(unsigned)(iVar7 + (int)(*(int * *)(fr0_ - 0x50))) + (int)(*(int * *)(fr0_ - 0x64));
        *(int *)(unsigned)(iVar7 + 8 + (int)(*(int * *)(fr0_ - 0x50))) =
             *(int *)(unsigned)(iVar7 + 8 + (int)(*(int * *)(fr0_ - 0x50))) + (int)(*(int * *)(fr0_ - 0x64));
        *(int *)(unsigned)(iVar7 + 0xc + (int)(*(int * *)(fr0_ - 0x50))) = *(int *)(unsigned)(iVar7 + 0xc + (int)(*(int * *)(fr0_ - 0x50))) + iVar5;
        *(int *)(unsigned)(iVar7 + 0x10 + (int)(*(int * *)(fr0_ - 0x50))) =
             *(int *)(unsigned)(iVar7 + 0x10 + (int)(*(int * *)(fr0_ - 0x50))) + (*(int *)(fr0_ - 0x34));
        *(int *)(unsigned)(iVar7 + 0x14 + (int)(*(int * *)(fr0_ - 0x50))) =
             *(int *)(unsigned)(iVar7 + 0x14 + (int)(*(int * *)(fr0_ - 0x50))) + (*(int *)(fr0_ - 0x30));
        iVar5 = 0x80000000;
        *(uint *)(unsigned)(iVar7 + 0x1c + (int)(*(int * *)(fr0_ - 0x50))) =
             *(int *)(unsigned)(iVar7 + 0x1c + (int)(*(int * *)(fr0_ - 0x50))) + ((uint)(s0 * (int)(*(int * *)(fr0_ - 0x64))) >> 1);
        *s4 = *(int *)(unsigned)(0x8c + ar5_01) + iVar5;
        *s8 = (*(int * *)(fr0_ - 0x64));
        if ((*(int * *)(fr0_ - 0x3c))[2] != 0) {
          (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x40)) + 0xc))))(*(*(int * *)(fr0_ - 0x3c)),&(*(undefined4 *)(fr0_ - 0x28)),ar6_00,piVar6));
        }
        iVar1 = 0;
        *(*(int * *)(fr0_ - 0x3c)) = (int)(*(int * *)(fr0_ - 0x50));
        (*(int * *)(fr0_ - 0x3c))[2] = 1;
      }
    }
  }
  else {
    iVar1 = 5;
  }
  return iVar1;
LAB_8c12282a:
  uVar2 = uVar2 + 1;
  if ((uint)(*(int *)(unsigned)(0x8c + -4 + ar5_01) + *(int *)(unsigned)(0x8c + ar5_01)) <= uVar2)
  goto LAB_8c12283a;
  goto LAB_8c122778;
}

__asm__(".globl _FUN_8c122664\n.set _FUN_8c122664, _FUN_8c122664_def\n");
