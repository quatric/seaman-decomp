#include "../decls.h"
undefined4 FUN_8c239212_def(undefined4 ar4,int *ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int **ppiVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined *ar6_00;
  int *in_stack_fffffe78;
  int iStack_158;
  int iStack_154;
  uint uStack_150;
  int *piStack_14c;
  undefined4 uStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int *piStack_138;
  int iStack_134;
  int iStack_130;
  int *piStack_128;
  int *piStack_124;
  int *piStack_120;
  int iStack_11c;
  short sStack_118;
  short sStack_116;
  short sStack_114;
  short sStack_112;
  int iStack_110;
  undefined1 auStack_10c [256];
  int *piStack_c;
  undefined4 uStack_8;
  
  uStack_150 = 0xffffffff;
  piStack_c = ar5;
  uStack_8 = ar4;
  FUN_8c25b5b4(ar4,ar5,ar6,ar7,in_stack_fffffe78);
  ar6_00 = &DAT_8c26d968;
  uVar6 = uStack_8;
  FUN_8c25a174(auStack_10c,uStack_8,&DAT_8c26d968,ar7);
  iStack_13c = FUN_8c259be8(auStack_10c,uVar6,ar6_00,ar7);
  if (-1 < iStack_13c) {
    uVar6 = 4;
    piVar4 = &iStack_110;
    iVar1 = FUN_8c259c48(piVar4,4,ar6_00,ar7);
    if (iVar1 < 0) {
      FUN_8c259c40(piVar4,uVar6,ar6_00,ar7);
    }
    else if (iStack_110 == 0x484d5650) {
      uVar6 = 8;
      piVar4 = &iStack_11c;
      iVar1 = FUN_8c259c48(piVar4,8,ar6_00,ar7);
      if (iVar1 < 0) {
        FUN_8c259c40(piVar4,uVar6,ar6_00,ar7);
      }
      else {
        sStack_114 = sStack_118;
        sStack_112 = sStack_116;
        piStack_c[1] = (int)sStack_116;
        uStack_148 = FUN_8c238f02((int)sStack_118,uVar6,ar6_00,ar7);
        piVar3 = &iStack_11c;
        FUN_8c238f2a(piStack_c,uStack_148,piVar3,ar7);
        FUN_8c25a122(0,0,piVar3,ar7);
        piVar7 = (int *)0x1;
        piVar4 = (int *)(iStack_11c + 8);
        FUN_8c25a122(piVar4,1,piVar3,ar7);
        iVar1 = FUN_8c239012(piVar4,piVar7,piVar3,ar7);
        if (iVar1 < 0) {
          FUN_8c259c40(piVar4,piVar7,piVar3,ar7);
        }
        else {
          piStack_c[1] = (int)sStack_112;
          iVar1 = 0;
          while( true ) {
            iStack_140 = iVar1;
            if (sStack_112 <= iVar1) {
              FUN_8c259c40(piVar4,piVar7,piVar3,ar7);
              return 1;
            }
            piVar4 = piStack_c;
            iStack_144 = FUN_8c239150(piStack_c,iVar1,piVar3,ar7);
            piStack_128 = (int *)(iStack_144 * 0xc + *piStack_c);
            piStack_120 = piStack_128 + 2;
            if ((piStack_128[1] & 0x1000000U) != 0) {
              piVar3 = (int *)(piStack_128[2] & 0x3ffffff);
              uStack_150 = (uint)piStack_128[2] >> 0x1a;
              piVar4 = DAT_8c277b08;
              piVar7 = DAT_8c277b0c;
              piStack_138 = piVar3;
              iStack_130 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piVar3,ar7);
              if (iStack_130 < 0) {
                iStack_158 = 2;
              }
              else {
                piVar4 = DAT_8c277b08;
                piVar7 = DAT_8c277b0c;
                piVar3 = piStack_138;
                ar7 = uStack_150;
                iStack_134 = FUN_8c25a5c0(DAT_8c277b08,DAT_8c277b0c,piStack_138,uStack_150);
                if (iStack_134 < 0) {
                  iStack_158 = 0;
                }
                else {
                  iStack_158 = 1;
                }
              }
              iStack_154 = 1;
              goto LAB_8c2394ac;
            }
            iStack_154 = FUN_8c2391a8(piVar4,iVar1,piVar3,ar7);
            if (iStack_154 < 0) break;
            piVar4 = DAT_8c277b08;
            piVar7 = DAT_8c277b0c;
            if (iStack_154 == 1) {
              piVar3 = (int *)(piStack_128[2] & 0x3ffffff);
              uStack_150 = (uint)piStack_128[2] >> 0x1a;
              piStack_138 = piVar3;
              iStack_130 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piVar3,ar7);
              if (iStack_130 < 0) {
LAB_8c239438:
                iStack_158 = 2;
              }
              else {
                piVar4 = DAT_8c277b08;
                piVar7 = DAT_8c277b0c;
                piVar3 = piStack_138;
                ar7 = uStack_150;
                iStack_134 = FUN_8c25a5c0(DAT_8c277b08,DAT_8c277b0c,piStack_138,uStack_150);
                if (iStack_134 < 0) {
                  iStack_158 = 0;
                }
                else {
                  iStack_158 = 1;
                }
              }
            }
            else {
              piVar3 = (int *)piStack_128[2];
              piStack_138 = piVar3;
              iStack_130 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piVar3,ar7);
              if (iStack_130 < 0) goto LAB_8c239438;
              iStack_158 = 1;
            }
LAB_8c2394ac:
            if (iStack_158 == 0) {
              piStack_124 = DAT_8c277b08 + iStack_130 * 0x11;
              FUN_8c25a122(4,1,piVar3,ar7);
              iVar1 = FUN_8c259c48(&piStack_14c,4,piVar3,ar7);
              if (iVar1 < 0) {
                uVar6 = 0;
                piVar3 = piStack_124 + 5;
                piVar4 = piStack_120;
                piVar7 = piStack_138;
                FUN_8c25a380(piStack_120,piVar3,piStack_138,0,uStack_150);
                *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                _DAT_8c4aa6ac = iStack_144;
                _DAT_8c4aa6b0 = piStack_138;
                FUN_8c259c40(piVar4,piVar3,piVar7,uVar6);
                return 0xffffffff;
              }
              piVar7 = (int *)0x1;
              piVar4 = piStack_14c;
              FUN_8c25a122(piStack_14c,1,piVar3,ar7);
              if ((piStack_124[4] & 2U) == 0) {
                uVar2 = piStack_128[1] & 0xa0000000;
                if ((uVar2 == 0) || (uVar2 == 0x20000000)) {
                  iStack_13c = FUN_8c25a914(piStack_128,piStack_124 + 5,piVar3,ar7);
                  if (iStack_13c < 0) {
                    uVar6 = 1;
                    piVar3 = piStack_124 + 5;
                    piVar4 = piStack_120;
                    piVar7 = piStack_138;
                    FUN_8c25a380(piStack_120,piVar3,piStack_138,1,uStack_150);
                    *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                    _DAT_8c4aa6ac = iStack_144;
                    _DAT_8c4aa6b0 = piStack_138;
                    FUN_8c259c40(piVar4,piVar3,piVar7,uVar6);
                    return 0xffffffff;
                  }
                  ar7 = 1;
                  FUN_8c25a380(piStack_120,piStack_124 + 5,piStack_138,1,uStack_150);
                  piVar7 = (int *)0x2;
                  *(undefined2 *)(*piStack_120 + 0x42) = 0;
                  piVar3 = (int *)piStack_124[5];
                  piVar4 = piStack_138;
                  FUN_8c25a608(piStack_138,2,piVar3,ar7,in_stack_fffffe78);
                  piStack_124[4] = piStack_124[4] | 8;
                }
                else if (uVar2 == 0x80000000) {
                  ar7 = 1;
                  piVar7 = piStack_124 + 5;
                  piVar4 = piStack_120;
                  piVar3 = piStack_138;
                  FUN_8c25a380(piStack_120,piVar7,piStack_138,1,uStack_150);
                  *(undefined2 *)(*piStack_120 + 0x42) = 0;
                }
              }
              else {
                uVar2 = piStack_128[1] & 0xa0000000;
                if (uVar2 == 0) {
                  ar7 = piStack_124[4];
                  piVar7 = piStack_124 + 5;
                  piVar3 = piStack_138;
                  FUN_8c25a380(piStack_120,piVar7,piStack_138,ar7,uStack_150);
                  *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                  *(undefined2 *)(*piStack_120 + 0x42) = 0;
LAB_8c239986:
                  piVar4 = piStack_138;
                  FUN_8c25a6ea(piStack_138,piVar7,piVar3,ar7,in_stack_fffffe78);
                }
                else if (uVar2 == 0x80000000) {
                  if ((piStack_124[4] & 1U) == 0) {
                    iStack_13c = FUN_8c25a838(piStack_128,piStack_124 + 5,piVar3,ar7);
                    if (iStack_13c < 0) {
                      uVar6 = 2;
                      piVar3 = piStack_124 + 5;
                      piVar4 = piStack_120;
                      piVar7 = piStack_138;
                      FUN_8c25a380(piStack_120,piVar3,piStack_138,2,uStack_150);
                      *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                      *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                      _DAT_8c4aa6ac = iStack_144;
                      _DAT_8c4aa6b0 = piStack_138;
                      FUN_8c259c40(piVar4,piVar3,piVar7,uVar6);
                      return 0xffffffff;
                    }
                    ar7 = 2;
                    FUN_8c25a380(piStack_120,piStack_124 + 5,piStack_138,2,uStack_150);
                    piVar7 = (int *)0x1;
                    *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                    *(undefined2 *)(*piStack_120 + 0x42) = 0;
                    piVar3 = *(int **)(*piStack_120 + 0x14);
                    piVar4 = piStack_138;
                    FUN_8c25a608(piStack_138,1,piVar3,ar7,in_stack_fffffe78);
                  }
                  else {
                    ar7 = 3;
                    piVar7 = piStack_124 + 5;
                    piVar4 = piStack_120;
                    piVar3 = piStack_138;
                    FUN_8c25a380(piStack_120,piVar7,piStack_138,3,uStack_150);
                    *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                    *(undefined2 *)(*piStack_120 + 0x42) = 0;
                  }
                }
                else if (uVar2 == 0x20000000) {
                  if ((piStack_124[4] & 1U) == 0) {
                    iStack_13c = FUN_8c25a838(piStack_128,piStack_124 + 5,piVar3,ar7);
                    if (iStack_13c < 0) {
                      uVar6 = 2;
                      piVar3 = piStack_124 + 5;
                      piVar4 = piStack_120;
                      piVar7 = piStack_138;
                      FUN_8c25a380(piStack_120,piVar3,piStack_138,2,uStack_150);
                      *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                      *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                      _DAT_8c4aa6ac = iStack_144;
                      _DAT_8c4aa6b0 = piStack_138;
                      FUN_8c259c40(piVar4,piVar3,piVar7,uVar6);
                      return 0xffffffff;
                    }
                    ar7 = 2;
                    FUN_8c25a380(piStack_120,piStack_124 + 5,piStack_138,2,uStack_150);
                    piVar7 = (int *)0x3;
                    *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                    *(undefined2 *)(*piStack_120 + 0x42) = 0;
                    piVar3 = (int *)piStack_124[5];
                    piVar4 = piStack_138;
                    FUN_8c25a608(piStack_138,3,piVar3,ar7,in_stack_fffffe78);
                  }
                  else {
                    ar7 = 3;
                    piVar7 = piStack_124 + 5;
                    piVar3 = piStack_138;
                    FUN_8c25a380(piStack_120,piVar7,piStack_138,3,uStack_150);
                    *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                    *(undefined2 *)(*piStack_120 + 0x42) = 0;
                    piVar4 = piStack_138;
                    FUN_8c25a6ea(piStack_138,piVar7,piVar3,ar7,in_stack_fffffe78);
                  }
                }
              }
            }
            else if (iStack_158 == 1) {
              piStack_124 = DAT_8c277b08 + iStack_130 * 0x11;
              piStack_128[2] = (int)piStack_124;
              uVar2 = piStack_128[1] & 0xa0000000;
              if (uVar2 == 0) {
                FUN_8c25a122(4,1,piVar3,ar7);
                uVar6 = 4;
                ppiVar5 = &piStack_14c;
                iVar1 = FUN_8c259c48(ppiVar5,4,piVar3,ar7);
                if (iVar1 < 0) {
                  _DAT_8c4aa6ac = iStack_144;
                  _DAT_8c4aa6b0 = piStack_138;
                  FUN_8c259c40(ppiVar5,uVar6,piVar3,ar7);
                  return 0xffffffff;
                }
                piVar7 = (int *)0x1;
                piVar4 = piStack_14c;
                FUN_8c25a122(piStack_14c,1,piVar3,ar7);
                if ((piStack_124[4] & 2U) == 0) {
                  piVar7 = piStack_124 + 5;
                  piVar4 = piStack_128;
                  iStack_13c = FUN_8c25a914(piStack_128,piVar7,piVar3,ar7);
                  if (iStack_13c < 0) {
                    *(short *)((int)piStack_124 + 0x42) = -(short)iStack_13c;
                    _DAT_8c4aa6ac = iStack_144;
                    _DAT_8c4aa6b0 = piStack_138;
                    FUN_8c259c40(piVar4,piVar7,piVar3,ar7);
                    return 0xffffffff;
                  }
                  *(undefined2 *)((int)piStack_124 + 0x42) = 0;
                  if (iStack_154 == 0) {
                    piVar4 = piStack_124;
                    FUN_8c2571fe(piStack_124,piVar7,piVar3,ar7);
                    piStack_124[4] = piStack_124[4] | 2;
                    *(short *)(piStack_124 + 0x10) = (short)piStack_124[0x10] + 1;
                  }
                  else {
                    piVar7 = (int *)0x2;
                    piVar3 = (int *)piStack_124[5];
                    piVar4 = piStack_138;
                    FUN_8c25a608(piStack_138,2,piVar3,ar7,in_stack_fffffe78);
                    piStack_124[4] = piStack_124[4] | 8;
                  }
                }
                else {
                  if (iStack_154 != 0) goto LAB_8c239986;
                  *(short *)(piStack_124 + 0x10) = (short)piStack_124[0x10] + 1;
                }
              }
              else if (uVar2 == 0x80000000) {
                if ((piStack_124[4] & 1U) == 0) {
                  piVar7 = piStack_124 + 5;
                  piVar4 = piStack_128;
                  iStack_13c = FUN_8c25a838(piStack_128,piVar7,piVar3,ar7);
                  if (iStack_13c < 0) {
                    *(short *)((int)piStack_124 + 0x42) = -(short)iStack_13c;
                    _DAT_8c4aa6ac = iStack_144;
                    _DAT_8c4aa6b0 = piStack_138;
                    FUN_8c259c40(piVar4,piVar7,piVar3,ar7);
                    return 0xffffffff;
                  }
                  *(undefined2 *)((int)piStack_124 + 0x42) = 0;
                  if (iStack_154 == 0) {
                    piStack_124[4] = piStack_124[4] | 1;
                  }
                  else {
                    piVar7 = (int *)0x1;
                    piVar3 = (int *)piStack_124[5];
                    piVar4 = piStack_138;
                    FUN_8c25a608(piStack_138,1,piVar3,ar7,in_stack_fffffe78);
                  }
                }
                else {
                  FUN_8c25a122(4,1,piVar3,ar7);
                  uVar6 = 4;
                  ppiVar5 = &piStack_14c;
                  iVar1 = FUN_8c259c48(ppiVar5,4,piVar3,ar7);
                  if (iVar1 < 0) {
                    _DAT_8c4aa6ac = iStack_144;
                    _DAT_8c4aa6b0 = piStack_138;
                    FUN_8c259c40(ppiVar5,uVar6,piVar3,ar7);
                    return 0xffffffff;
                  }
                  piVar7 = (int *)0x1;
                  piVar4 = piStack_14c;
                  FUN_8c25a122(piStack_14c,1,piVar3,ar7);
                }
              }
              else if (uVar2 == 0x20000000) {
                if ((piStack_124[4] & 2U) == 0) {
                  FUN_8c25a122(4,1,piVar3,ar7);
                  uVar6 = 4;
                  ppiVar5 = &piStack_14c;
                  iVar1 = FUN_8c259c48(ppiVar5,4,piVar3,ar7);
                  if (iVar1 < 0) {
                    _DAT_8c4aa6ac = iStack_144;
                    _DAT_8c4aa6b0 = piStack_138;
                    FUN_8c259c40(ppiVar5,uVar6,piVar3,ar7);
                    return 0xffffffff;
                  }
                  FUN_8c25a122(piStack_14c,1,piVar3,ar7);
                  piVar7 = piStack_124 + 5;
                  piVar4 = piStack_128;
                  iStack_13c = FUN_8c25a914(piStack_128,piVar7,piVar3,ar7);
                  if (iStack_13c < 0) {
                    *(short *)((int)piStack_124 + 0x42) = -(short)iStack_13c;
                    _DAT_8c4aa6ac = iStack_144;
                    _DAT_8c4aa6b0 = piStack_138;
                    FUN_8c259c40(piVar4,piVar7,piVar3,ar7);
                    return 0xffffffff;
                  }
                  *(undefined2 *)((int)piStack_124 + 0x42) = 0;
                  if (iStack_154 == 0) {
                    piVar4 = piStack_124;
                    FUN_8c2571fe(piStack_124,piVar7,piVar3,ar7);
                    piStack_124[4] = piStack_124[4] | 2;
                    *(undefined2 *)(piStack_124 + 0x10) = 1;
                  }
                  else {
                    piVar7 = (int *)0x2;
                    piVar3 = (int *)piStack_124[5];
                    piVar4 = piStack_138;
                    FUN_8c25a608(piStack_138,2,piVar3,ar7,in_stack_fffffe78);
                    piStack_124[4] = piStack_124[4] | 8;
                  }
                }
                else if ((piStack_124[4] & 1U) == 0) {
                  piVar7 = piStack_124 + 5;
                  piVar4 = piStack_128;
                  iStack_13c = FUN_8c25a838(piStack_128,piVar7,piVar3,ar7);
                  if (iStack_13c < 0) {
                    *(short *)((int)piStack_124 + 0x42) = -(short)iStack_13c;
                    _DAT_8c4aa6ac = iStack_144;
                    _DAT_8c4aa6b0 = piStack_138;
                    FUN_8c259c40(piVar4,piVar7,piVar3,ar7);
                    return 0xffffffff;
                  }
                  *(undefined2 *)((int)piStack_124 + 0x42) = 0;
                  if (iStack_154 == 0) {
                    piStack_124[4] = piStack_124[4] | 1;
                    *(short *)(piStack_124 + 0x10) = (short)piStack_124[0x10] + 1;
                  }
                  else {
                    piVar7 = (int *)0x3;
                    piVar3 = (int *)piStack_124[5];
                    piVar4 = piStack_138;
                    FUN_8c25a608(piStack_138,3,piVar3,ar7,in_stack_fffffe78);
                  }
                }
                else {
                  if (iStack_154 == 0) {
                    *(short *)(piStack_124 + 0x10) = (short)piStack_124[0x10] + 1;
                  }
                  else {
                    FUN_8c25a6ea(piStack_138,piVar7,piVar3,ar7,in_stack_fffffe78);
                  }
                  FUN_8c25a122(4,1,piVar3,ar7);
                  uVar6 = 4;
                  ppiVar5 = &piStack_14c;
                  iVar1 = FUN_8c259c48(ppiVar5,4,piVar3,ar7);
                  if (iVar1 < 0) {
                    _DAT_8c4aa6ac = iStack_144;
                    _DAT_8c4aa6b0 = piStack_138;
                    FUN_8c259c40(ppiVar5,uVar6,piVar3,ar7);
                    return 0xffffffff;
                  }
                  piVar7 = (int *)0x1;
                  piVar4 = piStack_14c;
                  FUN_8c25a122(piStack_14c,1,piVar3,ar7);
                }
              }
            }
            else if (iStack_158 == 2) {
              piVar4 = piStack_138;
              in_stack_fffffe78 = (int *)FUN_8c25a710(piStack_138,piVar7,piVar3,ar7);
              uVar2 = piStack_128[1] & 0xa0000000;
              if (uVar2 == 0) {
                piVar7 = in_stack_fffffe78;
                iStack_13c = FUN_8c25a770(piStack_128,in_stack_fffffe78,piVar3,ar7);
                if (iStack_13c < 0) {
                  uVar6 = 0;
                  piVar4 = piStack_120;
                  piVar3 = piStack_138;
                  FUN_8c25a380(piStack_120,piVar7,piStack_138,0,uStack_150);
                  *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                  _DAT_8c4aa6ac = iStack_144;
                  _DAT_8c4aa6b0 = piStack_138;
                  FUN_8c259c40(piVar4,piVar7,piVar3,uVar6);
                  return 0xffffffff;
                }
                ar7 = 2;
                piVar4 = piStack_120;
                piVar3 = piStack_138;
                in_stack_fffffe78 = piVar7;
                FUN_8c25a380(piStack_120,piVar7,piStack_138,2,uStack_150);
                *(undefined2 *)(*piStack_120 + 0x42) = 0;
                if (iStack_154 != 0) {
                  *(uint *)(*piStack_120 + 0x10) = *(uint *)(*piStack_120 + 0x10) | 8;
                }
              }
              else if (uVar2 == 0x80000000) {
                piVar7 = in_stack_fffffe78;
                iStack_13c = FUN_8c25a838(piStack_128,in_stack_fffffe78,piVar3,ar7);
                if (iStack_13c < 0) {
                  uVar6 = 0;
                  piVar4 = piStack_120;
                  piVar3 = piStack_138;
                  FUN_8c25a380(piStack_120,piVar7,piStack_138,0,uStack_150);
                  *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                  _DAT_8c4aa6ac = iStack_144;
                  _DAT_8c4aa6b0 = piStack_138;
                  FUN_8c259c40(piVar4,piVar7,piVar3,uVar6);
                  return 0xffffffff;
                }
                ar7 = 1;
                piVar4 = piStack_120;
                piVar3 = piStack_138;
                in_stack_fffffe78 = piVar7;
                FUN_8c25a380(piStack_120,piVar7,piStack_138,1,uStack_150);
                *(undefined2 *)(*piStack_120 + 0x42) = 0;
              }
              else if (uVar2 == 0x20000000) {
                iStack_13c = FUN_8c25a838(piStack_128,in_stack_fffffe78,piVar3,ar7);
                if (iStack_13c < 0) {
                  uVar6 = 0;
                  piVar4 = piStack_120;
                  piVar7 = piStack_138;
                  FUN_8c25a380(piStack_120,in_stack_fffffe78,piStack_138,0,uStack_150);
                  *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                  _DAT_8c4aa6ac = iStack_144;
                  _DAT_8c4aa6b0 = piStack_138;
                  FUN_8c259c40(piVar4,in_stack_fffffe78,piVar7,uVar6);
                  return 0xffffffff;
                }
                piVar7 = in_stack_fffffe78;
                iStack_13c = FUN_8c25a914(piStack_128,in_stack_fffffe78,piVar3,ar7);
                if (iStack_13c < 0) {
                  uVar6 = 1;
                  piVar4 = piStack_120;
                  piVar3 = piStack_138;
                  FUN_8c25a380(piStack_120,piVar7,piStack_138,1,uStack_150);
                  *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                  _DAT_8c4aa6ac = iStack_144;
                  _DAT_8c4aa6b0 = piStack_138;
                  FUN_8c259c40(piVar4,piVar7,piVar3,uVar6);
                  return 0xffffffff;
                }
                ar7 = 3;
                piVar4 = piStack_120;
                piVar3 = piStack_138;
                in_stack_fffffe78 = piVar7;
                FUN_8c25a380(piStack_120,piVar7,piStack_138,3,uStack_150);
                *(undefined2 *)(*piStack_120 + 0x42) = 0;
                if (iStack_154 != 0) {
                  *(uint *)(*piStack_120 + 0x10) = *(uint *)(*piStack_120 + 0x10) | 8;
                }
              }
            }
            iVar1 = iStack_140 + 1;
          }
          _DAT_8c4aa6ac = iStack_144;
          FUN_8c259c40(piVar4,iVar1,piVar3,ar7);
        }
      }
    }
    else {
      _DAT_8c4aa6b4 = 4;
      FUN_8c259c40(piVar4,uVar6,ar6_00,ar7);
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c239212\n.set _FUN_8c239212, _FUN_8c239212_def\n");
