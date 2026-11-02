#include "../decls.h"
undefined4 FUN_8c23793c_def(int *ar4,int ar5,undefined4 ar6,uint ar7)

{
  int *ar5_00;
  int iVar1;
  uint uVar2;
  int *ar6_00;
  int *piVar3;
  int *ar4_00;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  int **ar5_01;
  int ar5_02;
  int ar5_03;
  undefined *ar6_01;
  int *piVar7;
  uint ar6_02;
  undefined4 ar6_03;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *ar4_01;
  uint *ar5_04;
  undefined1 auStack_16c [4];
  undefined1 auStack_168 [48];
  int iStack_138;
  uint uStack_134;
  int *piStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int aiStack_120 [56];
  int *piStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 auStack_30 [4];
  int iStack_2c;
  uint uStack_28;
  ushort uStack_24;
  ushort uStack_22;
  int iStack_20;
  
  switch((*(uint *)(ar5 * 0xc + *ar4 + 4) & 0x40000000) != 0) {
  case false:
    iStack_12c = 0;
    uStack_134 = 0xffffffff;
    piVar3 = (int *)(ar5 * 0xc + *ar4);
    piVar7 = piVar3 + 2;
    if (((piVar3[1] & 0x10000U) != 0) && (ar5 != 0)) {
      iVar1 = *ar4;
      uStack_134 = (uint)piVar3[2] >> 0x1a;
      iStack_124 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piStack_130,ar7);
      if ((*(uint *)(iStack_124 * 0x44 + DAT_8c277b08 + 0x10) & 1) == 0) {
        uVar8 = 2;
      }
      else {
        uVar8 = 3;
      }
      iVar1 = (ar5 + -1) * 0xc + iVar1 + 0x1c;
      FUN_8c25a380(piVar7,iVar1,piStack_130,uVar8,uStack_134);
      *(undefined2 *)(*piVar7 + 0x42) = 0;
      FUN_8c2571fe(*piVar7,iVar1,piStack_130,uVar8);
      return 1;
    }
    ar6_01 = &DAT_8c26d960;
    iVar1 = *piVar3;
    FUN_8c25a174(aiStack_120,iVar1,&DAT_8c26d960,ar7);
    piVar6 = DAT_8c277b0c;
    if ((*(uint *)(ar5 * 0xc + *ar4 + 4) & 0x800000) == 0) {
      if ((*(uint *)(ar5 * 0xc + *ar4 + 4) & 0x1000000) == 0) {
        iStack_20 = FUN_8c259be8(aiStack_120,iVar1,ar6_01,ar7);
        if (iStack_20 < 0) {
          FUN_8c23c814(auStack_168,&DAT_8c4ab10c,0x28,ar7);
          FUN_8c25a380(piVar7,auStack_16c,piStack_130,0,0xffffffff);
          *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
          *(undefined2 *)(*piVar7 + 0x40) = 0;
          return 0xffffffff;
        }
        iStack_12c = FUN_8c25a216(&piStack_130,iVar1,ar6_01,ar7);
        if (iStack_12c < 0) {
          FUN_8c23c814(auStack_168,&DAT_8c4ab10c,0x28,ar7);
          uVar8 = 0;
          puVar5 = auStack_16c;
          FUN_8c25a380(piVar7,puVar5,piStack_130,0,0xffffffff);
          _DAT_8c4aa6b4 = -iStack_12c;
          FUN_8c259c40(piVar7,puVar5,piStack_130,uVar8);
          return 0xffffffff;
        }
        ar4_00 = (int *)DAT_8c277b08;
        piVar6 = DAT_8c277b0c;
        ar6_00 = piStack_130;
        iStack_124 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piStack_130,ar7);
        if (iStack_12c == 1) {
          uVar9 = (uint)piVar3[2] >> 0x1a;
          uStack_134 = uVar9;
          if (iStack_124 < 0) {
            iStack_138 = 2;
          }
          else {
            ar4_00 = (int *)DAT_8c277b08;
            piVar6 = DAT_8c277b0c;
            ar6_00 = piStack_130;
            iStack_128 = FUN_8c25a5c0(DAT_8c277b08,DAT_8c277b0c,piStack_130,uVar9);
            ar7 = uVar9;
            if (iStack_128 < 0) {
              iStack_138 = 0;
            }
            else {
              iStack_138 = 1;
            }
          }
        }
        else if (iStack_124 < 0) {
          iStack_138 = 2;
        }
        else {
          iStack_138 = 1;
        }
      }
      else {
        ar6_00 = (int *)(piVar3[2] & 0x3ffffff);
        uStack_134 = (uint)piVar3[2] >> 0x1a;
        piStack_130 = ar6_00;
        iStack_124 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,ar6_00,ar7);
        if (iStack_124 < 0) {
          iStack_138 = 2;
        }
        else {
          piVar6 = DAT_8c277b0c;
          ar6_00 = piStack_130;
          ar7 = uStack_134;
          iStack_128 = FUN_8c25a5c0(DAT_8c277b08,DAT_8c277b0c,piStack_130,uStack_134);
          if (iStack_128 < 0) {
            iStack_138 = 0;
          }
          else {
            iStack_138 = 1;
          }
        }
        iStack_12c = 1;
        ar4_00 = aiStack_120;
        iStack_20 = FUN_8c259be8(ar4_00,piVar6,ar6_00,ar7);
        if (iStack_20 < 0) {
          FUN_8c23c814(auStack_168,&DAT_8c4ab10c,0x28,ar7);
          FUN_8c25a380(piVar7,auStack_16c,piStack_130,0,uStack_134);
          *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
          *(undefined2 *)(*piVar7 + 0x40) = 0;
          return 0xffffffff;
        }
      }
    }
    else {
      ar6_00 = *(int **)(ar5 * 0xc + *ar4 + 8);
      piStack_130 = ar6_00;
      iStack_124 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,ar6_00,ar7);
      if (iStack_124 < 0) {
        iStack_138 = 2;
      }
      else {
        iStack_138 = 1;
      }
      ar4_00 = aiStack_120;
      iStack_20 = FUN_8c259be8(ar4_00,piVar6,ar6_00,ar7);
      if (iStack_20 < 0) {
        FUN_8c23c814(auStack_168,&DAT_8c4ab10c,0x28,ar7);
        FUN_8c25a380(piVar7,auStack_16c,piStack_130,0,0xffffffff);
        *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
        *(undefined2 *)(*piVar7 + 0x40) = 0;
        return 0xffffffff;
      }
    }
    if (iStack_138 == 0) {
      iVar1 = iStack_124 * 0x44 + DAT_8c277b08;
      if ((*(uint *)(iVar1 + 0x10) & 2) == 0) {
        uVar9 = piVar3[1] & 0xa0000000;
        if ((uVar9 == 0) || (uVar9 == 0x20000000)) {
          iStack_20 = FUN_8c25a914(piVar3,iVar1 + 0x14,ar6_00,ar7);
          if (iStack_20 < 0) {
            uVar8 = 1;
            iVar1 = iVar1 + 0x14;
            piVar3 = piVar7;
            piVar6 = piStack_130;
            FUN_8c25a380(piVar7,iVar1,piStack_130,1,uStack_134);
            *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
            _DAT_8c4aa6b0 = piStack_130;
            _DAT_8c4aa6ac = ar5;
            FUN_8c259c40(piVar3,iVar1,piVar6,uVar8);
            return 0xffffffff;
          }
          ar7 = 1;
          FUN_8c25a380(piVar7,iVar1 + 0x14,piStack_130,1,uStack_134);
          piVar6 = (int *)0x2;
          *(undefined2 *)(*piVar7 + 0x42) = 0;
          ar6_00 = *(int **)(*piVar7 + 0x14);
          ar4_00 = piStack_130;
          FUN_8c25a608(piStack_130,2,ar6_00,ar7,0x40);
          *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 8;
        }
        else if (uVar9 == 0x80000000) {
          ar7 = 1;
          piVar6 = (int *)(iVar1 + 0x14);
          ar4_00 = piVar7;
          ar6_00 = piStack_130;
          FUN_8c25a380(piVar7,piVar6,piStack_130,1,uStack_134);
          *(undefined2 *)(*piVar7 + 0x42) = 0;
        }
      }
      else {
        uVar9 = piVar3[1] & 0xa0000000;
        if (uVar9 == 0) {
          ar7 = *(uint *)(iVar1 + 0x10);
          piVar6 = (int *)(iVar1 + 0x14);
          ar6_00 = piStack_130;
          FUN_8c25a380(piVar7,piVar6,piStack_130,ar7,uStack_134);
          *(undefined2 *)(*piVar7 + 0x40) = *(undefined2 *)(iVar1 + 0x40);
          *(undefined2 *)(*piVar7 + 0x42) = 0;
          ar4_00 = piStack_130;
          FUN_8c25a6ea(piStack_130,piVar6,ar6_00,ar7,0x40);
        }
        else if (uVar9 == 0x80000000) {
          if ((*(uint *)(iVar1 + 0x10) & 1) == 0) {
            iStack_20 = FUN_8c25a838(piVar3,iVar1 + 0x14,ar6_00,ar7);
            if (iStack_20 < 0) {
              uVar8 = 2;
              iVar4 = iVar1 + 0x14;
              piVar3 = piVar7;
              piVar6 = piStack_130;
              FUN_8c25a380(piVar7,iVar4,piStack_130,2,uStack_134);
              *(undefined2 *)(*piVar7 + 0x40) = *(undefined2 *)(iVar1 + 0x40);
              *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
              _DAT_8c4aa6b0 = piStack_130;
              _DAT_8c4aa6ac = ar5;
              FUN_8c259c40(piVar3,iVar4,piVar6,uVar8);
              return 0xffffffff;
            }
            ar7 = 2;
            FUN_8c25a380(piVar7,iVar1 + 0x14,piStack_130,2,uStack_134);
            piVar6 = (int *)0x1;
            *(undefined2 *)(*piVar7 + 0x40) = *(undefined2 *)(iVar1 + 0x40);
            *(undefined2 *)(*piVar7 + 0x42) = 0;
            ar6_00 = *(int **)(*piVar7 + 0x14);
            ar4_00 = piStack_130;
            FUN_8c25a608(piStack_130,1,ar6_00,ar7,0x40);
          }
          else {
            ar7 = 3;
            piVar6 = (int *)(iVar1 + 0x14);
            ar4_00 = piVar7;
            ar6_00 = piStack_130;
            FUN_8c25a380(piVar7,piVar6,piStack_130,3,uStack_134);
            *(undefined2 *)(*piVar7 + 0x40) = *(undefined2 *)(iVar1 + 0x40);
            *(undefined2 *)(*piVar7 + 0x42) = 0;
          }
        }
        else if (uVar9 == 0x20000000) {
          if ((*(uint *)(iVar1 + 0x10) & 1) == 0) {
            iStack_20 = FUN_8c25a838(piVar3,iVar1 + 0x14,ar6_00,ar7);
            if (iStack_20 < 0) {
              uVar8 = 2;
              iVar4 = iVar1 + 0x14;
              piVar3 = piVar7;
              piVar6 = piStack_130;
              FUN_8c25a380(piVar7,iVar4,piStack_130,2,uStack_134);
              *(undefined2 *)(*piVar7 + 0x40) = *(undefined2 *)(iVar1 + 0x40);
              *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
              _DAT_8c4aa6b0 = piStack_130;
              _DAT_8c4aa6ac = ar5;
              FUN_8c259c40(piVar3,iVar4,piVar6,uVar8);
              return 0xffffffff;
            }
            ar7 = 2;
            FUN_8c25a380(piVar7,iVar1 + 0x14,piStack_130,2,uStack_134);
            piVar6 = (int *)0x3;
            *(undefined2 *)(*piVar7 + 0x40) = *(undefined2 *)(iVar1 + 0x40);
            *(undefined2 *)(*piVar7 + 0x42) = 0;
            ar6_00 = *(int **)(*piVar7 + 0x14);
            ar4_00 = piStack_130;
            FUN_8c25a608(piStack_130,3,ar6_00,ar7,0x40);
          }
          else {
            ar7 = 3;
            piVar6 = (int *)(iVar1 + 0x14);
            ar6_00 = piStack_130;
            FUN_8c25a380(piVar7,piVar6,piStack_130,3,uStack_134);
            *(undefined2 *)(*piVar7 + 0x40) = *(undefined2 *)(iVar1 + 0x40);
            *(undefined2 *)(*piVar7 + 0x42) = 0;
            ar4_00 = piStack_130;
            FUN_8c25a6ea(piStack_130,piVar6,ar6_00,ar7,0x40);
          }
        }
      }
      FUN_8c259c40(ar4_00,piVar6,ar6_00,ar7);
      return 1;
    }
    if (iStack_138 != 1) {
      if (iStack_138 != 2) {
        return 1;
      }
      ar4_00 = piStack_130;
      ar5_00 = (int *)FUN_8c25a710(piStack_130,piVar6,ar6_00,ar7);
      uVar9 = piVar3[1] & 0xa0000000;
      if (uVar9 == 0) {
        iStack_20 = FUN_8c25a770(piVar3,ar5_00,ar6_00,ar7);
        if (iStack_20 < 0) {
          uVar8 = 0;
          piVar3 = piVar7;
          piVar6 = piStack_130;
          FUN_8c25a380(piVar7,ar5_00,piStack_130,0,uStack_134);
          *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
          *(undefined2 *)(*piVar7 + 0x40) = 0;
          _DAT_8c4aa6b0 = piStack_130;
          _DAT_8c4aa6ac = ar5;
          FUN_8c259c40(piVar3,ar5_00,piVar6,uVar8);
          return 0xffffffff;
        }
        ar7 = 2;
        ar4_00 = piVar7;
        ar6_00 = piStack_130;
        FUN_8c25a380(piVar7,ar5_00,piStack_130,2,uStack_134);
        *(undefined2 *)(*piVar7 + 0x42) = 0;
        piVar6 = ar5_00;
        if (iStack_12c != 0) {
          *(uint *)(*piVar7 + 0x10) = *(uint *)(*piVar7 + 0x10) | 8;
        }
      }
      else if (uVar9 == 0x80000000) {
        iStack_20 = FUN_8c25a838(piVar3,ar5_00,ar6_00,ar7);
        if (iStack_20 < 0) {
          uVar8 = 0;
          piVar3 = piVar7;
          piVar6 = piStack_130;
          FUN_8c25a380(piVar7,ar5_00,piStack_130,0,uStack_134);
          *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
          _DAT_8c4aa6b0 = piStack_130;
          _DAT_8c4aa6ac = ar5;
          FUN_8c259c40(piVar3,ar5_00,piVar6,uVar8);
          return 0xffffffff;
        }
        ar7 = 1;
        ar4_00 = piVar7;
        ar6_00 = piStack_130;
        FUN_8c25a380(piVar7,ar5_00,piStack_130,1,uStack_134);
        *(undefined2 *)(*piVar7 + 0x42) = 0;
        piVar6 = ar5_00;
      }
      else if (uVar9 == 0x20000000) {
        iStack_20 = FUN_8c25a838(piVar3,ar5_00,ar6_00,ar7);
        if (iStack_20 < 0) {
          uVar8 = 0;
          puVar5 = auStack_16c;
          piVar3 = piVar7;
          piVar6 = piStack_130;
          FUN_8c25a380(piVar7,puVar5,piStack_130,0,uStack_134);
          *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
          *(undefined2 *)(*piVar7 + 0x40) = 0;
          _DAT_8c4aa6b0 = piStack_130;
          _DAT_8c4aa6ac = ar5;
          FUN_8c259c40(piVar3,puVar5,piVar6,uVar8);
          return 0xffffffff;
        }
        iStack_20 = FUN_8c25a914(piVar3,ar5_00,ar6_00,ar7);
        if (iStack_20 < 0) {
          uVar8 = 1;
          piVar3 = piVar7;
          piVar6 = piStack_130;
          FUN_8c25a380(piVar7,ar5_00,piStack_130,1,uStack_134);
          *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
          _DAT_8c4aa6b0 = piStack_130;
          _DAT_8c4aa6ac = ar5;
          FUN_8c259c40(piVar3,ar5_00,piVar6,uVar8);
          return 0xffffffff;
        }
        ar7 = 3;
        ar4_00 = piVar7;
        ar6_00 = piStack_130;
        FUN_8c25a380(piVar7,ar5_00,piStack_130,3,uStack_134);
        *(undefined2 *)(*piVar7 + 0x42) = 0;
        piVar6 = ar5_00;
        if (iStack_12c != 0) {
          *(uint *)(*piVar7 + 0x10) = *(uint *)(*piVar7 + 0x10) | 8;
        }
      }
      goto LAB_8c23878e;
    }
    piVar7 = (int *)(iStack_124 * 0x44 + DAT_8c277b08);
    piVar3[2] = (int)piVar7;
    uVar9 = piVar3[1] & 0xa0000000;
    if (uVar9 == 0) {
      if ((piVar7[4] & 2U) == 0) {
        piVar6 = piVar7 + 5;
        iStack_20 = FUN_8c25a914(piVar3,piVar6,ar6_00,ar7);
        if (iStack_20 < 0) {
          *(short *)((int)piVar7 + 0x42) = -(short)iStack_20;
          _DAT_8c4aa6b0 = piStack_130;
          _DAT_8c4aa6ac = ar5;
          FUN_8c259c40(piVar3,piVar6,ar6_00,ar7);
          return 0xffffffff;
        }
        *(undefined2 *)((int)piVar7 + 0x42) = 0;
        if (iStack_12c == 0) {
          ar4_00 = piVar7;
          FUN_8c2571fe(piVar7,piVar6,ar6_00,ar7);
          piVar7[4] = piVar7[4] | 2;
          *(short *)(piVar7 + 0x10) = (short)piVar7[0x10] + 1;
        }
        else {
          piVar6 = (int *)0x2;
          ar6_00 = (int *)piVar7[5];
          ar4_00 = piStack_130;
          FUN_8c25a608(piStack_130,2,ar6_00,ar7,0x40);
          piVar7[4] = piVar7[4] | 8;
        }
        goto LAB_8c23878e;
      }
      if (iStack_12c == 0) {
        *(short *)(piVar7 + 0x10) = (short)piVar7[0x10] + 1;
        goto LAB_8c23878e;
      }
LAB_8c238436:
      ar4_00 = piStack_130;
      FUN_8c25a6ea(piStack_130,piVar6,ar6_00,ar7,0x40);
    }
    else {
      if (uVar9 == 0x80000000) {
        if ((piVar7[4] & 1U) != 0) goto LAB_8c23878e;
        piVar6 = piVar7 + 5;
        iStack_20 = FUN_8c25a838(piVar3,piVar6,ar6_00,ar7);
        if (iStack_20 < 0) {
          *(short *)((int)piVar7 + 0x42) = -(short)iStack_20;
          _DAT_8c4aa6b0 = piStack_130;
          _DAT_8c4aa6ac = ar5;
          FUN_8c259c40(piVar3,piVar6,ar6_00,ar7);
          return 0xffffffff;
        }
        *(undefined2 *)((int)piVar7 + 0x42) = 0;
        if (iStack_12c == 0) {
          piVar7[4] = piVar7[4] | 1;
          ar4_00 = piVar3;
          goto LAB_8c23878e;
        }
        ar6_00 = (int *)piVar7[5];
        piVar6 = (int *)0x1;
      }
      else {
        if (uVar9 != 0x20000000) goto LAB_8c23878e;
        if ((piVar7[4] & 2U) == 0) {
          piVar6 = piVar7 + 5;
          iStack_20 = FUN_8c25a914(piVar3,piVar6,ar6_00,ar7);
          if (iStack_20 < 0) {
            *(short *)((int)piVar7 + 0x42) = -(short)iStack_20;
            _DAT_8c4aa6b0 = piStack_130;
            _DAT_8c4aa6ac = ar5;
            FUN_8c259c40(piVar3,piVar6,ar6_00,ar7);
            return 0xffffffff;
          }
          *(undefined2 *)((int)piVar7 + 0x42) = 0;
          if (iStack_12c == 0) {
            ar4_00 = piVar7;
            FUN_8c2571fe(piVar7,piVar6,ar6_00,ar7);
            piVar7[4] = piVar7[4] | 2;
            *(undefined2 *)(piVar7 + 0x10) = 1;
          }
          else {
            piVar6 = (int *)0x2;
            ar6_00 = (int *)piVar7[5];
            ar4_00 = piStack_130;
            FUN_8c25a608(piStack_130,2,ar6_00,ar7,0x40);
            piVar7[4] = piVar7[4] | 8;
          }
          goto LAB_8c23878e;
        }
        if ((piVar7[4] & 1U) != 0) {
          if (iStack_12c == 0) {
            *(short *)(piVar7 + 0x10) = (short)piVar7[0x10] + 1;
            goto LAB_8c23878e;
          }
          goto LAB_8c238436;
        }
        piVar6 = piVar7 + 5;
        iStack_20 = FUN_8c25a838(piVar3,piVar6,ar6_00,ar7);
        if (iStack_20 < 0) {
          *(short *)((int)piVar7 + 0x42) = -(short)iStack_20;
          _DAT_8c4aa6b0 = piStack_130;
          _DAT_8c4aa6ac = ar5;
          FUN_8c259c40(piVar3,piVar6,ar6_00,ar7);
          return 0xffffffff;
        }
        *(undefined2 *)((int)piVar7 + 0x42) = 0;
        if (iStack_12c == 0) {
          piVar7[4] = piVar7[4] | 1;
          *(short *)(piVar7 + 0x10) = (short)piVar7[0x10] + 1;
          ar4_00 = piVar3;
          goto LAB_8c23878e;
        }
        piVar6 = (int *)0x3;
        ar6_00 = (int *)piVar7[5];
      }
      ar4_00 = piStack_130;
      FUN_8c25a608(piStack_130,piVar6,ar6_00,ar7,0x40);
    }
LAB_8c23878e:
    FUN_8c259c40(ar4_00,piVar6,ar6_00,ar7);
    return 1;
  }
  ar5_01 = &piStack_3c;
  ar4_01 = (undefined4 *)(*ar4 + ar5 * 0xc);
  uVar9 = 0xffffffff;
  piVar3 = ar4_01 + 2;
  iStack_34 = ar5;
  if (((ar4_01[1] & 0x10000) != 0) && (ar5 != 0)) {
    iVar4 = *ar4;
    uVar9 = ar4_01[2];
    iVar1 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piStack_3c,ar7);
    if ((*(uint *)(iVar1 * 0x44 + DAT_8c277b08 + 0x10) & 1) == 0) {
      uVar8 = 2;
    }
    else {
      uVar8 = 3;
    }
    iVar1 = iVar4 + (ar5 + -1) * 0xc + 0x1c;
    FUN_8c25a380(piVar3,iVar1,piStack_3c,uVar8,uVar9 >> 0x1a);
    *(undefined2 *)(*piVar3 + 0x42) = 0;
    FUN_8c2571fe(*piVar3,iVar1,piStack_3c,uVar8);
    goto LAB_8c238e44;
  }
  if ((ar4_01[1] & 0x800000) == 0) {
    if ((*(uint *)(ar5 * 0xc + *ar4 + 4) & 0x1000000) != 0) {
      piStack_3c = (int *)(ar4_01[2] & 0x3ffffff);
      uVar9 = (uint)ar4_01[2] >> 0x1a;
      iStack_38 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piStack_3c,ar7);
      ar5_04 = (uint *)*ar4_01;
      piVar7 = (int *)*ar5_04;
      uVar2 = FUN_8c25abf0(&uStack_28,auStack_30,piVar7,ar7);
      if (uVar2 != 0) {
        *ar5_04 = uVar2;
        ar5_04[4] = (uint)uStack_24;
        ar5_04[5] = (uint)uStack_22;
        ar5_04[1] = uStack_28 << 0x10;
      }
      if (iStack_38 < 0) {
        iVar1 = 2;
      }
      else {
        piVar7 = piStack_3c;
        ar7 = uVar9;
        iVar1 = FUN_8c25a5c0(DAT_8c277b08,DAT_8c277b0c,piStack_3c,uVar9);
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = 1;
        }
      }
      iVar4 = 1;
      goto LAB_8c238a34;
    }
    ar5_04 = (uint *)*ar4_01;
    ar6_02 = *ar5_04;
    uVar2 = FUN_8c25abf0(&uStack_28,&piStack_3c,ar6_02,ar7);
    if (uVar2 != 0) {
      *ar5_04 = uVar2;
      ar5_04[4] = (uint)uStack_24;
      ar5_04[5] = (uint)uStack_22;
      ar5_04[1] = uStack_28 << 0x10;
    }
    if (piStack_3c == (int *)0xffffffff) {
      while (piVar6 = DAT_8c277b0c, piVar7 = (int *)DAT_8c277b18,
            iStack_38 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,DAT_8c277b18,ar7), iStack_38 != -1) {
        DAT_8c277b18 = DAT_8c277b18 - 1;
      }
      piStack_3c = (int *)DAT_8c277b18;
      iVar4 = FUN_8c25a1ee(uStack_28 & 0xff00,piVar6,piVar7,ar7);
      if (iVar4 == 1) {
        uVar9 = (uint)ar4_01[2] >> 0x1a;
      }
LAB_8c238a2e:
      iVar1 = 2;
      goto LAB_8c238a34;
    }
    iVar4 = FUN_8c25a1ee(uStack_28 & 0xff00,ar5_01,ar6_02,ar7);
    piVar7 = piStack_3c;
    iStack_38 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piStack_3c,ar7);
    if (iVar4 == 1) {
      uVar9 = (uint)ar4_01[2] >> 0x1a;
      if (iStack_38 < 0) goto LAB_8c238a2e;
      piVar7 = piStack_3c;
      ar7 = uVar9;
      iVar1 = FUN_8c25a5c0(DAT_8c277b08,DAT_8c277b0c,piStack_3c,uVar9);
      if (-1 < iVar1) goto LAB_8c238a32;
      iVar1 = 0;
      goto LAB_8c238a34;
    }
    if (piStack_3c != (int *)0xffffffff) {
      if (iStack_38 < 0) goto LAB_8c238a2e;
LAB_8c238a32:
      iVar1 = 1;
      goto LAB_8c238a34;
    }
    FUN_8c25a380(piVar3,ar5_04,0xffffffff,0,0xffffffff);
    *(undefined2 *)(*piVar3 + 0x42) = 9;
    *(undefined2 *)(*piVar3 + 0x40) = 0;
    _DAT_8c4aa6b4 = 9;
LAB_8c238e20:
    uVar8 = 0xffffffff;
  }
  else {
    piStack_3c = (int *)ar4_01[2];
    ar5_04 = (uint *)*ar4_01;
    uVar2 = FUN_8c25abf0(&uStack_28,auStack_30,*ar5_04,ar7);
    if (uVar2 != 0) {
      *ar5_04 = uVar2;
      ar5_04[4] = (uint)uStack_24;
      ar5_04[5] = (uint)uStack_22;
      ar5_04[1] = uStack_28 << 0x10;
    }
    piVar7 = piStack_3c;
    iStack_38 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piStack_3c,ar7);
    if (iStack_38 < 0) {
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
    iVar4 = 0;
LAB_8c238a34:
    ar5_02 = iStack_38 * 0x44 + DAT_8c277b08;
    if (iVar1 == 0) {
      if ((*(uint *)(ar5_02 + 0x10) & 2) == 0) {
        uVar2 = ar4_01[1] & 0xa0000000;
        if ((uVar2 != 0) && (uVar2 != 0x20000000)) {
          if (uVar2 == 0x80000000) {
            FUN_8c25a380(piVar3,ar5_02 + 0x14,piStack_3c,1,uVar9);
LAB_8c238dc6:
            *(undefined2 *)(*piVar3 + 0x42) = 0;
          }
          goto LAB_8c238e44;
        }
        iStack_2c = FUN_8c25a914(ar4_01,ar5_02 + 0x14,piVar7,ar7);
        if (-1 < iStack_2c) {
          ar7 = 1;
          FUN_8c25a380(piVar3,ar5_02 + 0x14,piStack_3c,1,uVar9);
          *(undefined2 *)(*piVar3 + 0x42) = 0;
          goto LAB_8c238d18;
        }
        FUN_8c25a380(piVar3,ar5_02 + 0x14,piStack_3c,1,uVar9);
LAB_8c238e0a:
        *(short *)(*piVar3 + 0x42) = -(short)iStack_2c;
        _DAT_8c4aa6ac = iStack_34;
        _DAT_8c4aa6b0 = piStack_3c;
        goto LAB_8c238e20;
      }
      uVar2 = ar4_01[1] & 0xa0000000;
      if (uVar2 == 0) {
        ar7 = *(uint *)(ar5_02 + 0x10);
LAB_8c238b9e:
        iVar1 = ar5_02 + 0x14;
        piVar7 = piStack_3c;
        FUN_8c25a380(piVar3,iVar1,piStack_3c,ar7,uVar9);
        *(undefined2 *)(*piVar3 + 0x40) = *(undefined2 *)(ar5_02 + 0x40);
        uVar9 = 0x42;
        *(undefined2 *)(*piVar3 + 0x42) = 0;
LAB_8c238cee:
        FUN_8c25a6ea(piStack_3c,iVar1,piVar7,ar7,uVar9);
      }
      else {
        if (uVar2 == 0x80000000) {
          if ((*(uint *)(ar5_02 + 0x10) & 1) != 0) {
            FUN_8c25a380(piVar3,ar5_02 + 0x14,piStack_3c,3,uVar9);
            *(undefined2 *)(*piVar3 + 0x40) = *(undefined2 *)(ar5_02 + 0x40);
            goto LAB_8c238dc6;
          }
          iStack_38 = FUN_8c25a8c0(ar4_01,ar5_02 + 0x14,piVar7,ar7);
          if (-1 < iStack_38) {
            ar7 = 2;
            FUN_8c25a380(piVar3,ar5_02 + 0x14,piStack_3c,2,uVar9);
            *(undefined2 *)(*piVar3 + 0x40) = *(undefined2 *)(ar5_02 + 0x40);
            *(undefined2 *)(*piVar3 + 0x42) = 0;
            *(uint *)(*piVar3 + 0x10) = *(uint *)(*piVar3 + 0x10) & 0xfffffff7;
LAB_8c238c8e:
            ar6_03 = *(undefined4 *)(ar5_02 + 0x14);
            uVar8 = 1;
            goto LAB_8c238cd8;
          }
          FUN_8c25a380(piVar3,ar5_02 + 0x14,piStack_3c,2,uVar9);
          *(undefined2 *)(*piVar3 + 0x40) = *(undefined2 *)(ar5_02 + 0x40);
          *(short *)(*piVar3 + 0x42) = -(short)iStack_38;
          *(uint *)(*piVar3 + 0x10) = *(uint *)(*piVar3 + 0x10) & 0xfffffff7;
LAB_8c238d7e:
          _DAT_8c4aa6ac = iStack_34;
          _DAT_8c4aa6b0 = piStack_3c;
          goto LAB_8c238e20;
        }
        if (uVar2 == 0x20000000) {
          if ((*(uint *)(ar5_02 + 0x10) & 1) != 0) {
            ar7 = 3;
            goto LAB_8c238b9e;
          }
          iStack_2c = FUN_8c25a8c0(ar4_01,ar5_02 + 0x14,piVar7,ar7);
          if (iStack_2c < 0) {
            FUN_8c25a380(piVar3,ar5_02 + 0x14,piStack_3c,2,uVar9);
            *(undefined2 *)(*piVar3 + 0x40) = *(undefined2 *)(ar5_02 + 0x40);
            goto LAB_8c238e0a;
          }
          ar7 = 2;
          FUN_8c25a380(piVar3,ar5_02 + 0x14,piStack_3c,2,uVar9);
          *(undefined2 *)(*piVar3 + 0x40) = *(undefined2 *)(ar5_02 + 0x40);
          *(undefined2 *)(*piVar3 + 0x42) = 0;
LAB_8c238cd4:
          ar6_03 = *(undefined4 *)(ar5_02 + 0x14);
          uVar8 = 3;
LAB_8c238cd8:
          FUN_8c25a608(piStack_3c,uVar8,ar6_03,ar7,0x42);
        }
      }
    }
    else if (iVar1 == 1) {
      ar4_01[2] = ar5_02;
      uVar9 = ar4_01[1] & 0xa0000000;
      if (uVar9 == 0) {
        uVar9 = *(uint *)(ar5_02 + 0x10);
        if ((uVar9 & 2) == 0) {
          ar5_03 = ar5_02 + 0x14;
          iVar1 = FUN_8c25a914(ar4_01,ar5_03,piVar7,ar7);
          if (iVar1 < 0) goto LAB_8c238d08;
          *(undefined2 *)(ar5_02 + 0x42) = 0;
          if (iVar4 != 0) {
LAB_8c238d18:
            FUN_8c25a608(piStack_3c,2,*(undefined4 *)(ar5_02 + 0x14),ar7,0x42);
            *(uint *)(ar5_02 + 0x10) = *(uint *)(ar5_02 + 0x10) | 8;
            goto LAB_8c238e44;
          }
LAB_8c238d2a:
          FUN_8c2571fe(ar5_02,ar5_03,piVar7,ar7);
          *(uint *)(ar5_02 + 0x10) = *(uint *)(ar5_02 + 0x10) | 2;
        }
        else {
joined_r0x8c238c46:
          iVar1 = ar5_02;
          if (iVar4 != 0) goto LAB_8c238cee;
        }
LAB_8c238d36:
        *(short *)(ar5_02 + 0x40) = *(short *)(ar5_02 + 0x40) + 1;
      }
      else if (uVar9 == 0x80000000) {
        if ((*(uint *)(ar5_02 + 0x10) & 1) == 0) {
          iVar1 = FUN_8c25a8c0(ar4_01,ar5_02 + 0x14,piVar7,ar7);
          if (iVar1 < 0) goto LAB_8c238d08;
          *(undefined2 *)(ar5_02 + 0x42) = 0;
          if (iVar4 != 0) goto LAB_8c238c8e;
          *(uint *)(ar5_02 + 0x10) = *(uint *)(ar5_02 + 0x10) | 1;
        }
      }
      else if (uVar9 == 0x20000000) {
        if ((*(uint *)(ar5_02 + 0x10) & 2) == 0) {
          ar5_03 = ar5_02 + 0x14;
          iVar1 = FUN_8c25a914(ar4_01,ar5_03,piVar7,ar7);
          if (-1 < iVar1) {
            *(undefined2 *)(ar5_02 + 0x42) = 0;
            if (iVar4 == 0) goto LAB_8c238d2a;
            goto LAB_8c238d18;
          }
        }
        else {
          uVar9 = *(uint *)(ar5_02 + 0x10);
          if ((uVar9 & 1) != 0) goto joined_r0x8c238c46;
          iVar1 = FUN_8c25a8c0(ar4_01,ar5_02 + 0x14,piVar7,ar7);
          if (-1 < iVar1) {
            *(undefined2 *)(ar5_02 + 0x42) = 0;
            if (iVar4 != 0) goto LAB_8c238cd4;
            *(uint *)(ar5_02 + 0x10) = *(uint *)(ar5_02 + 0x10) | 1;
            goto LAB_8c238d36;
          }
        }
LAB_8c238d08:
        *(short *)(ar5_02 + 0x42) = -(short)iVar1;
        goto LAB_8c238d7e;
      }
    }
    else if (iVar1 == 2) {
      iStack_38 = FUN_8c25a710(piStack_3c,ar5_02,piVar7,ar7);
      uVar8 = 0x2c;
      FUN_8c23c814(iStack_38,ar5_04,0x2c,ar7);
      uVar2 = ar4_01[1] & 0xa0000000;
      if (uVar2 == 0) {
        iStack_2c = FUN_8c25a914(ar4_01,iStack_38,uVar8,ar7);
        if (-1 < iStack_2c) {
          FUN_8c25a380(piVar3,iStack_38,piStack_3c,2,uVar9);
          *(undefined2 *)(*piVar3 + 0x42) = 0;
joined_r0x8c238da2:
          if (iVar4 != 0) {
            *(uint *)(*piVar3 + 0x10) = *(uint *)(*piVar3 + 0x10) | 8;
          }
          goto LAB_8c238e44;
        }
      }
      else if (uVar2 == 0x80000000) {
        iStack_2c = FUN_8c25a8c0(ar4_01,iStack_38,uVar8,ar7);
        if (-1 < iStack_2c) {
          FUN_8c25a380(piVar3,iStack_38,piStack_3c,1,uVar9);
          goto LAB_8c238dc6;
        }
      }
      else {
        if (uVar2 != 0x20000000) goto LAB_8c238e44;
        iStack_2c = FUN_8c25a8c0(ar4_01,iStack_38,uVar8,ar7);
        if (-1 < iStack_2c) {
          iStack_2c = FUN_8c25a914(ar4_01,iStack_38,uVar8,ar7);
          if (iStack_2c < 0) {
            FUN_8c25a380(piVar3,iStack_38,piStack_3c,1,uVar9);
            goto LAB_8c238e0a;
          }
          FUN_8c25a380(piVar3,iStack_38,piStack_3c,3,uVar9);
          *(undefined2 *)(*piVar3 + 0x42) = 0;
          goto joined_r0x8c238da2;
        }
      }
      FUN_8c25a380(piVar3,iStack_38,piStack_3c,0,uVar9);
      goto LAB_8c238e0a;
    }
LAB_8c238e44:
    uVar8 = 1;
  }
  return uVar8;
}

__asm__(".globl _FUN_8c23793c\n.set _FUN_8c23793c, _FUN_8c23793c_def\n");
