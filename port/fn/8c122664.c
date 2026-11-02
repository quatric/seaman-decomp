#include "../decls.h"
int FUN_8c122664_def(undefined4 *ar4,int *ar5,undefined4 ar6,undefined4 ar7,int s0,int *s4,
                undefined4 *s8)

{
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
  int *piStack_64;
  uint uStack_60;
  int *piStack_5c;
  int *piStack_58;
  int iStack_54;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int iStack_40;
  int *piStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  piStack_3c = (int *)*ar4;
  ar5_01 = *piStack_3c;
  piStack_5c = (int *)(0xb4 + ar5_01);
  piStack_48 = (int *)((int)piStack_5c + *(int *)(0xa4 + ar5_01) * 2 + 3U & 0xfffffffc);
  piStack_58 = (int *)((*(int *)(0x88 + ar5_01) + 1) * 4 + (int)piStack_48);
  piStack_4c = (int *)((int)piStack_58 + (*(int *)(0x90 + ar5_01) + 1) * 4);
  uStack_60 = (int)piStack_4c + *(int *)(0xa8 + ar5_01) * 2 + 3 & 0xfffffffc;
  iVar5 = *(int *)(0x8c + ar5_01) + *(int *)(0x88 + ar5_01);
  piStack_44 = (int *)(uStack_60 + (*(int *)(0x8c + ar5_01) + 1) * 4);
  iVar7 = iVar5 + 1;
  iStack_34 = 0;
  ar5_00 = piStack_44 + *(int *)(0x94 + ar5_01) + 1;
  piVar10 = (int *)((int)ar5_00 + iVar5 * 2 + 3 & 0xfffffffc);
  iStack_30 = 0;
  iStack_40 = *ar5;
  uStack_28 = *(undefined4 *)(iStack_40 + 4);
  uStack_24 = 0;
  iVar5 = 0;
  if (piStack_3c[1] == 0) {
    piVar8 = &iStack_54;
    piStack_50 = ar5;
    iStack_38 = ar6;
    uStack_2c = ar7;
    iVar1 = FUN_8c10ca58(ar5,ar6,piVar8,&piStack_64);
    if (iVar1 == 0) {
      piVar6 = (int *)0x0;
      if (piStack_64 != (int *)0x0) {
        do {
          uVar2 = 0;
          if (*(int *)(0x8c + -4 + ar5_01) + *(int *)(0x8c + ar5_01) != 0) {
LAB_8c122778:
            if ((uint)(*(ushort *)(uVar2 * 2 + (int)ar5_00) >> 8) !=
                *(uint *)(iStack_54 + (int)piVar6 * 4)) goto LAB_8c12282a;
            uVar4 = 0;
            if (*(int *)(0x98 + ar5_01) != 0) {
              do {
                iVar1 = iVar7 + uVar4;
                uVar4 = uVar4 + 1;
                if (piVar10[iVar1] == uVar2) {
                  iVar5 = iVar5 + 1;
                }
              } while (uVar4 < *(uint *)(0x98 + ar5_01));
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
            if ((*(ushort *)(uVar2 * 2 + (int)ar5_00) & 1) != 0) {
              iStack_34 = iStack_34 + 1;
            }
            if ((*(ushort *)(uVar2 * 2 + (int)ar5_00) & 2) != 0) {
              iStack_30 = iStack_30 + 1;
            }
          }
LAB_8c12283a:
          piVar6 = (int *)((int)piVar6 + 1);
        } while (piVar6 < piStack_64);
      }
      iVar1 = (int)0xa8;
      uVar2 = *(int *)(iVar1 + -0x20 + ar5_01) + *(int *)(iVar1 + -0x1c + ar5_01);
      iStack_38 = (s0 + 0xe) * (int)piStack_64 + *(int *)(ar5_01 + 4) + iVar5 * 4 +
                  ((*(uint *)(iVar1 + ar5_01) & 1) + (uVar2 & 1)) * -2 +
                  ((((uint)(s0 * (int)piStack_64) >> 1) + *(uint *)(iVar1 + ar5_01) & 1) +
                  (uVar2 + (int)piStack_64 & 1)) * 2;
      iVar5 = (**(code **)(iStack_40 + 8))(iStack_38,&uStack_28,piVar8,piVar6);
      piStack_50 = (int *)iVar5;
      if (iVar5 == 0) {
        (**(code **)(iStack_40 + 0xc))(iStack_54,&uStack_28,piVar8,piVar6);
LAB_8c122b8e:
        iVar1 = 1;
      }
      else {
        memmove(iVar5,ar5_01,(int)0xb4,piVar6);
        iVar1 = (int)0xb4;
        (*(code *)(&memmove))
                  (iVar5 + iVar1,piStack_5c,*(int *)(0xa4 + ar5_01) << 1,piVar6);
        uVar2 = iVar5 + iVar1 + *(int *)(0xa4 + ar5_01) * 2 + 3U & 0xfffffffc;
        (*(code *)(&memmove))
                  (uVar2,piStack_48,(*(int *)(0xa4 + -0x1c + ar5_01) + 1) * 4,piVar6);
        iVar5 = uVar2 + (*(int *)(0x88 + ar5_01) + 1) * 4;
        (*(code *)(&memmove))
                  (iVar5,piStack_58,(*(int *)(0x88 + 8 + ar5_01) + 1) * 4,piVar6);
        iVar5 = iVar5 + (*(int *)(0x90 + ar5_01) + 1) * 4;
        (*(code *)(&memmove))
                  (iVar5,piStack_4c,*(int *)(0x90 + 0x18 + ar5_01) << 1,piVar6);
        piStack_5c = (int *)0x0;
        iVar5 = iVar5 + *(int *)(0xa8 + ar5_01) * 2;
        if (piStack_64 != (int *)0x0) {
          do {
            memmove(iVar5,uStack_2c,s0,piVar6);
            piStack_5c = (int *)((int)piStack_5c + 1);
            iVar5 = iVar5 + s0;
          } while (piStack_5c < piStack_64);
        }
        piVar8 = (int *)(iVar5 + 3U & 0xfffffffc);
        uVar2 = 0;
        if (*(int *)(0x8c + ar5_01) != 0) {
          do {
            iVar1 = uVar2 * 4;
            uVar2 = uVar2 + 1;
            iVar5 = (int)0x8c;
            *piVar8 = *(int *)(uStack_60 + iVar1) + (int)piStack_64;
            piVar8 = piVar8 + 1;
          } while (uVar2 < *(uint *)(iVar5 + ar5_01));
        }
        uVar2 = 0;
        if (piStack_64 != (int *)0xffffffff) {
          do {
            iVar5 = uVar2 + *(int *)(0x8c + 8 + ar5_01) + *(int *)(0x8c + ar5_01);
            uVar2 = uVar2 + 1;
            *piVar8 = (int)piStack_64 + iVar5 + 1;
            piVar8 = piVar8 + 1;
          } while (uVar2 < (int)piStack_64 + 1U);
        }
        (*(code *)(&memmove))
                  (piVar8,piStack_44,*(int *)(0x94 + ar5_01) << 2,piVar6);
        piVar8 = piVar8 + *(int *)(0x94 + ar5_01);
        uVar2 = 0;
        if (piStack_64 != (int *)0xffffffff) {
          do {
            uVar4 = s0 * uVar2;
            uVar2 = uVar2 + 1;
            *piVar8 = (uVar4 >> 1) + *(int *)(0xa8 + ar5_01);
            piVar8 = piVar8 + 1;
          } while (uVar2 < (int)piStack_64 + 1U);
        }
        ar6_00 = (int *)((*(int *)(0x8c + -4 + ar5_01) + *(int *)(0x8c + ar5_01)) *
                        2);
        memmove(piVar8,ar5_00,ar6_00,piVar6);
        piVar6 = 0xffbf;
        puVar9 = (ushort *)
                 ((int)piVar8 +
                 (*(int *)(0x8c + -4 + ar5_01) + *(int *)(0x8c + ar5_01)) * 2);
        piVar8 = (int *)0x0;
        if (piStack_64 != (int *)0x0) {
          do {
            uVar2 = 0;
            ar6_00 = (int *)((int)piVar8 * 4);
            if (*(int *)(0x8c + -4 + ar5_01) + *(int *)(0x8c + ar5_01) != 0) {
              do {
                if ((uint)(*(ushort *)(uVar2 * 2 + (int)ar5_00) >> 8) ==
                    *(uint *)(iStack_54 + (int)ar6_00)) {
                  *puVar9 = *(ushort *)(uVar2 * 2 + (int)ar5_00) & (ushort)piVar6;
                  puVar9 = puVar9 + 1;
                  break;
                }
                uVar2 = uVar2 + 1;
              } while (uVar2 < (uint)(*(int *)(0x8c + -4 + ar5_01) +
                                     *(int *)(0x8c + ar5_01)));
            }
            piVar8 = (int *)((int)piVar8 + 1);
          } while (piVar8 < piStack_64);
        }
        piVar8 = (int *)((int)puVar9 + 3U & 0xfffffffc);
        iVar5 = (int)0x8c;
        *piVar8 = *piVar10 + (int)piStack_64;
        piVar8 = piVar8 + 1;
        piStack_48 = piVar8 + *(int *)(iVar5 + -4 + ar5_01) + *(int *)(iVar5 + ar5_01) +
                              (int)piStack_64;
        uStack_60 = 0;
        iVar5 = 0;
        if (*(int *)(0x8c + -4 + ar5_01) + *(int *)(0x8c + ar5_01) != 0) {
          do {
            if (piVar10[uStack_60 + 1] != piVar10[uStack_60]) {
              piStack_4c = piVar10 + uStack_60;
              piStack_58 = (int *)(**(code **)(iStack_40 + 8))
                                            ((piVar10[uStack_60 + 1] - *piStack_4c) * 4,&uStack_28,
                                             ar6_00,piVar6);
              if (piStack_58 == (int *)0x0) {
                (**(code **)(iStack_40 + 0xc))(iStack_54,&uStack_28,ar6_00,piVar6);
                (**(code **)(iStack_40 + 0xc))(piStack_50,&uStack_28,ar6_00,piVar6);
                goto LAB_8c122b8e;
              }
              ar6_00 = piVar10 + uStack_60 + 1;
              uVar2 = *piStack_4c - *piVar10;
              iVar1 = 0;
              if (uVar2 < (uint)(*ar6_00 - *piVar10)) {
                do {
                  piVar6 = piVar10 + iVar7 + uVar2;
                  iVar3 = uVar2 + iVar5;
                  uVar2 = uVar2 + 1;
                  piStack_48[iVar3] = *piVar6;
                  *(uint *)((int)piStack_58 + iVar1 * 4) =
                       (uint)(*(ushort *)(*piVar6 * 2 + (int)ar5_00) >> 8);
                  iVar1 = iVar1 + 1;
                } while (uVar2 < (uint)(*ar6_00 - *piVar10));
              }
              piStack_5c = (int *)0x0;
              piStack_44 = piVar10 + uStack_60 + 1;
              if (piStack_64 != (int *)0x0) {
                do {
                  ar6_00 = *(int **)(iStack_54 + (int)piStack_5c * 4);
                  iVar1 = (*(code *)(&FUN_8c10cb4c))
                                    (piStack_58,*piStack_44 - *piStack_4c,ar6_00,piVar6);
                  if (iVar1 != 0) {
                    iVar1 = (*piStack_44 - *piVar10) + iVar5;
                    iVar5 = iVar5 + 1;
                    piStack_48[iVar1] =
                         *(int *)(0x88 + ar5_01) + *(int *)(0x8c + ar5_01) +
                         (int)piStack_5c;
                  }
                  piStack_5c = (int *)((int)piStack_5c + 1);
                } while (piStack_5c < piStack_64);
              }
              (**(code **)(iStack_40 + 0xc))(piStack_58,&uStack_28,ar6_00,piVar6);
            }
            iVar1 = (int)0x8c;
            *piVar8 = (int)piStack_64 + iVar5 + piVar10[uStack_60 + 1];
            uStack_60 = uStack_60 + 1;
            piVar8 = piVar8 + 1;
          } while (uStack_60 < (uint)(*(int *)(iVar1 + -4 + ar5_01) + *(int *)(iVar1 + ar5_01)));
        }
        piStack_58 = (int *)0x0;
        if (piStack_64 != (int *)0x0) {
          do {
            iVar1 = (int)0x88;
            *piVar8 = piVar8[-1];
            uStack_60 = 0;
            if (*(int *)(iVar1 + ar5_01) != 0) {
              do {
                if ((uint)(*(ushort *)(uStack_60 * 2 + (int)ar5_00) >> 8) ==
                    *(uint *)(iStack_54 + (int)piStack_58 * 4)) {
                  piStack_5c = piVar10 + uStack_60 + 1;
                  piStack_4c = piVar10 + uStack_60;
                  piStack_44 = (int *)*piStack_4c;
                  ar6_00 = (int *)((*piStack_5c - (int)piStack_44) * 4);
                  (*(code *)(&memmove))
                            (piStack_48 + *(int *)(0x98 + ar5_01) + iVar5,
                             piVar10 + (int)piStack_44 + (iVar7 - *piVar10),ar6_00,piVar6);
                  iVar1 = *piStack_4c;
                  iVar3 = *piStack_5c;
                  *piVar8 = *piVar8 + (iVar3 - iVar1);
                  iVar5 = iVar5 + (iVar3 - iVar1);
                  uVar2 = *piStack_4c - *piVar10;
                  iVar1 = iVar5;
                  if (uVar2 < (uint)(*piStack_5c - *piVar10)) {
                    do {
                      iVar3 = iVar7 + uVar2;
                      uVar2 = uVar2 + 1;
                      iVar5 = iVar1;
                      if (piVar10[iVar3] == uStack_60) {
                        iVar5 = iVar1 + 1;
                        piStack_48[iVar1 + *(int *)(0x98 + ar5_01)] =
                             *(int *)(0x88 + ar5_01) + *(int *)(0x8c + ar5_01) +
                             (int)piStack_58;
                        *piVar8 = *piVar8 + 1;
                      }
                      iVar1 = iVar5;
                    } while (uVar2 < (uint)(*piStack_5c - *piVar10));
                  }
                  break;
                }
                uStack_60 = uStack_60 + 1;
              } while (uStack_60 < *(uint *)(0x88 + ar5_01));
            }
            piStack_58 = (int *)((int)piStack_58 + 1);
            piVar8 = piVar8 + 1;
          } while (piStack_58 < piStack_64);
        }
        (**(code **)(iStack_40 + 0xc))(iStack_54,&uStack_28,ar6_00,piVar6);
        iVar7 = (int)0x8c;
        *(int *)((int)piStack_50 + 4) = iStack_38;
        *(int *)(iVar7 + (int)piStack_50) = *(int *)(iVar7 + (int)piStack_50) + (int)piStack_64;
        *(int *)(iVar7 + 8 + (int)piStack_50) =
             *(int *)(iVar7 + 8 + (int)piStack_50) + (int)piStack_64;
        *(int *)(iVar7 + 0xc + (int)piStack_50) = *(int *)(iVar7 + 0xc + (int)piStack_50) + iVar5;
        *(int *)(iVar7 + 0x10 + (int)piStack_50) =
             *(int *)(iVar7 + 0x10 + (int)piStack_50) + iStack_34;
        *(int *)(iVar7 + 0x14 + (int)piStack_50) =
             *(int *)(iVar7 + 0x14 + (int)piStack_50) + iStack_30;
        iVar5 = 0x80000000;
        *(uint *)(iVar7 + 0x1c + (int)piStack_50) =
             *(int *)(iVar7 + 0x1c + (int)piStack_50) + ((uint)(s0 * (int)piStack_64) >> 1);
        *s4 = *(int *)(0x8c + ar5_01) + iVar5;
        *s8 = piStack_64;
        if (piStack_3c[2] != 0) {
          (**(code **)(iStack_40 + 0xc))(*piStack_3c,&uStack_28,ar6_00,piVar6);
        }
        iVar1 = 0;
        *piStack_3c = (int)piStack_50;
        piStack_3c[2] = 1;
      }
    }
  }
  else {
    iVar1 = 5;
  }
  return iVar1;
LAB_8c12282a:
  uVar2 = uVar2 + 1;
  if ((uint)(*(int *)(0x8c + -4 + ar5_01) + *(int *)(0x8c + ar5_01)) <= uVar2)
  goto LAB_8c12283a;
  goto LAB_8c122778;
}

__asm__(".globl _FUN_8c122664\n.set _FUN_8c122664, _FUN_8c122664_def\n");
