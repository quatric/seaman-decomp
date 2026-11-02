#include "../decls.h"
undefined4 FUN_8c237964_def(int *ar4,int ar5,undefined4 ar6,uint ar7)

{
  uint uVar1;
  int *ar5_00;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined *ar6_00;
  undefined4 uVar7;
  undefined4 in_stack_fffffe90;
  undefined1 auStack_16c [4];
  undefined1 auStack_168 [48];
  int iStack_138;
  uint uStack_134;
  int *piStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int aiStack_120 [64];
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  int *piStack_14;
  int *piStack_10;
  int iStack_c;
  int *piStack_8;
  
  iStack_12c = 0;
  uStack_134 = 0xffffffff;
  piStack_18 = (int *)(ar5 * 0xc + *ar4);
  piStack_10 = piStack_18 + 2;
  iStack_c = ar5;
  piStack_8 = ar4;
  if (((piStack_18[1] & 0x10000U) != 0) && (ar5 != 0)) {
    iStack_1c = (ar5 + -1) * 0xc + *ar4;
    piStack_14 = (int *)(iStack_1c + 8);
    uStack_134 = (uint)piStack_18[2] >> 0x1a;
    iStack_124 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piStack_130,ar7);
    if ((DAT_8c277b08[iStack_124 * 0x11 + 4] & 1U) == 0) {
      uVar7 = 2;
    }
    else {
      uVar7 = 3;
    }
    iVar4 = (int)piStack_14 + 0x14;
    FUN_8c25a380(piStack_10,iVar4,piStack_130,uVar7,uStack_134);
    *(undefined2 *)(*piStack_10 + 0x42) = 0;
    FUN_8c2571fe(*piStack_10,iVar4,piStack_130,uVar7);
    return 1;
  }
  ar6_00 = &DAT_8c26d960;
  iVar4 = *piStack_18;
  FUN_8c25a174(aiStack_120,iVar4,&DAT_8c26d960,ar7);
  piVar6 = DAT_8c277b0c;
  if ((*(uint *)(iStack_c * 0xc + *piStack_8 + 4) & 0x800000) == 0) {
    if ((*(uint *)(iStack_c * 0xc + *piStack_8 + 4) & 0x1000000) == 0) {
      iStack_20 = FUN_8c259be8(aiStack_120,iVar4,ar6_00,ar7);
      if (iStack_20 < 0) {
        FUN_8c23c814(auStack_168,&DAT_8c4ab10c,0x28,ar7);
        FUN_8c25a380(piStack_10,auStack_16c,piStack_130,0,0xffffffff);
        *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
        *(undefined2 *)(*piStack_10 + 0x40) = 0;
        return 0xffffffff;
      }
      iStack_12c = FUN_8c25a216(&piStack_130,iVar4,ar6_00,ar7);
      if (iStack_12c < 0) {
        FUN_8c23c814(auStack_168,&DAT_8c4ab10c,0x28,ar7);
        uVar7 = 0;
        puVar5 = auStack_16c;
        piVar6 = piStack_10;
        FUN_8c25a380(piStack_10,puVar5,piStack_130,0,0xffffffff);
        _DAT_8c4aa6b4 = -iStack_12c;
        FUN_8c259c40(piVar6,puVar5,piStack_130,uVar7);
        return 0xffffffff;
      }
      piVar3 = DAT_8c277b08;
      piVar6 = DAT_8c277b0c;
      piVar2 = piStack_130;
      iStack_124 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piStack_130,ar7);
      if (iStack_12c == 1) {
        uVar1 = (uint)piStack_18[2] >> 0x1a;
        uStack_134 = uVar1;
        if (iStack_124 < 0) {
          iStack_138 = 2;
        }
        else {
          piVar3 = DAT_8c277b08;
          piVar6 = DAT_8c277b0c;
          piVar2 = piStack_130;
          iStack_128 = FUN_8c25a5c0(DAT_8c277b08,DAT_8c277b0c,piStack_130,uVar1);
          ar7 = uVar1;
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
      piVar2 = (int *)(piStack_18[2] & 0x3ffffff);
      uStack_134 = (uint)piStack_18[2] >> 0x1a;
      piStack_130 = piVar2;
      iStack_124 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piVar2,ar7);
      if (iStack_124 < 0) {
        iStack_138 = 2;
      }
      else {
        piVar6 = DAT_8c277b0c;
        piVar2 = piStack_130;
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
      piVar3 = aiStack_120;
      iStack_20 = FUN_8c259be8(piVar3,piVar6,piVar2,ar7);
      if (iStack_20 < 0) {
        FUN_8c23c814(auStack_168,&DAT_8c4ab10c,0x28,ar7);
        FUN_8c25a380(piStack_10,auStack_16c,piStack_130,0,uStack_134);
        *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
        *(undefined2 *)(*piStack_10 + 0x40) = 0;
        return 0xffffffff;
      }
    }
  }
  else {
    piVar2 = *(int **)(iStack_c * 0xc + *piStack_8 + 8);
    piStack_130 = piVar2;
    iStack_124 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piVar2,ar7);
    if (iStack_124 < 0) {
      iStack_138 = 2;
    }
    else {
      iStack_138 = 1;
    }
    piVar3 = aiStack_120;
    iStack_20 = FUN_8c259be8(piVar3,piVar6,piVar2,ar7);
    if (iStack_20 < 0) {
      FUN_8c23c814(auStack_168,&DAT_8c4ab10c,0x28,ar7);
      FUN_8c25a380(piStack_10,auStack_16c,piStack_130,0,0xffffffff);
      *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
      *(undefined2 *)(*piStack_10 + 0x40) = 0;
      return 0xffffffff;
    }
  }
  if (iStack_138 == 0) {
    piStack_14 = DAT_8c277b08 + iStack_124 * 0x11;
    if ((piStack_14[4] & 2U) == 0) {
      uVar1 = piStack_18[1] & 0xa0000000;
      if ((uVar1 == 0) || (uVar1 == 0x20000000)) {
        iStack_20 = FUN_8c25a914(piStack_18,piStack_14 + 5,piVar2,ar7);
        if (iStack_20 < 0) {
          uVar7 = 1;
          piVar3 = piStack_14 + 5;
          piVar6 = piStack_10;
          piVar2 = piStack_130;
          FUN_8c25a380(piStack_10,piVar3,piStack_130,1,uStack_134);
          *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
          _DAT_8c4aa6ac = iStack_c;
          _DAT_8c4aa6b0 = piStack_130;
          FUN_8c259c40(piVar6,piVar3,piVar2,uVar7);
          return 0xffffffff;
        }
        ar7 = 1;
        FUN_8c25a380(piStack_10,piStack_14 + 5,piStack_130,1,uStack_134);
        piVar6 = (int *)0x2;
        *(undefined2 *)(*piStack_10 + 0x42) = 0;
        piVar2 = *(int **)(*piStack_10 + 0x14);
        piVar3 = piStack_130;
        FUN_8c25a608(piStack_130,2,piVar2,ar7,in_stack_fffffe90);
        piStack_14[4] = piStack_14[4] | 8;
      }
      else if (uVar1 == 0x80000000) {
        ar7 = 1;
        piVar6 = piStack_14 + 5;
        piVar3 = piStack_10;
        piVar2 = piStack_130;
        FUN_8c25a380(piStack_10,piVar6,piStack_130,1,uStack_134);
        *(undefined2 *)(*piStack_10 + 0x42) = 0;
      }
    }
    else {
      uVar1 = piStack_18[1] & 0xa0000000;
      if (uVar1 == 0) {
        ar7 = piStack_14[4];
        piVar6 = piStack_14 + 5;
        piVar2 = piStack_130;
        FUN_8c25a380(piStack_10,piVar6,piStack_130,ar7,uStack_134);
        *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
        *(undefined2 *)(*piStack_10 + 0x42) = 0;
        piVar3 = piStack_130;
        FUN_8c25a6ea(piStack_130,piVar6,piVar2,ar7,in_stack_fffffe90);
      }
      else if (uVar1 == 0x80000000) {
        if ((piStack_14[4] & 1U) == 0) {
          iStack_20 = FUN_8c25a838(piStack_18,piStack_14 + 5,piVar2,ar7);
          if (iStack_20 < 0) {
            uVar7 = 2;
            piVar3 = piStack_14 + 5;
            piVar6 = piStack_10;
            piVar2 = piStack_130;
            FUN_8c25a380(piStack_10,piVar3,piStack_130,2,uStack_134);
            *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
            *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
            _DAT_8c4aa6ac = iStack_c;
            _DAT_8c4aa6b0 = piStack_130;
            FUN_8c259c40(piVar6,piVar3,piVar2,uVar7);
            return 0xffffffff;
          }
          ar7 = 2;
          FUN_8c25a380(piStack_10,piStack_14 + 5,piStack_130,2,uStack_134);
          piVar6 = (int *)0x1;
          *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
          *(undefined2 *)(*piStack_10 + 0x42) = 0;
          piVar2 = *(int **)(*piStack_10 + 0x14);
          piVar3 = piStack_130;
          FUN_8c25a608(piStack_130,1,piVar2,ar7,in_stack_fffffe90);
        }
        else {
          ar7 = 3;
          piVar6 = piStack_14 + 5;
          piVar3 = piStack_10;
          piVar2 = piStack_130;
          FUN_8c25a380(piStack_10,piVar6,piStack_130,3,uStack_134);
          *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
          *(undefined2 *)(*piStack_10 + 0x42) = 0;
        }
      }
      else if (uVar1 == 0x20000000) {
        if ((piStack_14[4] & 1U) == 0) {
          iStack_20 = FUN_8c25a838(piStack_18,piStack_14 + 5,piVar2,ar7);
          if (iStack_20 < 0) {
            uVar7 = 2;
            piVar3 = piStack_14 + 5;
            piVar6 = piStack_10;
            piVar2 = piStack_130;
            FUN_8c25a380(piStack_10,piVar3,piStack_130,2,uStack_134);
            *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
            *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
            _DAT_8c4aa6ac = iStack_c;
            _DAT_8c4aa6b0 = piStack_130;
            FUN_8c259c40(piVar6,piVar3,piVar2,uVar7);
            return 0xffffffff;
          }
          ar7 = 2;
          FUN_8c25a380(piStack_10,piStack_14 + 5,piStack_130,2,uStack_134);
          piVar6 = (int *)0x3;
          *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
          *(undefined2 *)(*piStack_10 + 0x42) = 0;
          piVar2 = *(int **)(*piStack_10 + 0x14);
          piVar3 = piStack_130;
          FUN_8c25a608(piStack_130,3,piVar2,ar7,in_stack_fffffe90);
        }
        else {
          ar7 = 3;
          piVar6 = piStack_14 + 5;
          piVar2 = piStack_130;
          FUN_8c25a380(piStack_10,piVar6,piStack_130,3,uStack_134);
          *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
          *(undefined2 *)(*piStack_10 + 0x42) = 0;
          piVar3 = piStack_130;
          FUN_8c25a6ea(piStack_130,piVar6,piVar2,ar7,in_stack_fffffe90);
        }
      }
    }
    FUN_8c259c40(piVar3,piVar6,piVar2,ar7);
    return 1;
  }
  if (iStack_138 != 1) {
    if (iStack_138 != 2) {
      return 1;
    }
    piVar3 = piStack_130;
    ar5_00 = (int *)FUN_8c25a710(piStack_130,piVar6,piVar2,ar7);
    uVar1 = piStack_18[1] & 0xa0000000;
    if (uVar1 == 0) {
      piVar6 = ar5_00;
      iStack_20 = FUN_8c25a770(piStack_18,ar5_00,piVar2,ar7);
      if (iStack_20 < 0) {
        uVar7 = 0;
        piVar2 = piStack_10;
        piVar3 = piStack_130;
        FUN_8c25a380(piStack_10,piVar6,piStack_130,0,uStack_134);
        *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
        *(undefined2 *)(*piStack_10 + 0x40) = 0;
        _DAT_8c4aa6ac = iStack_c;
        _DAT_8c4aa6b0 = piStack_130;
        FUN_8c259c40(piVar2,piVar6,piVar3,uVar7);
        return 0xffffffff;
      }
      ar7 = 2;
      piVar3 = piStack_10;
      piVar2 = piStack_130;
      FUN_8c25a380(piStack_10,piVar6,piStack_130,2,uStack_134);
      *(undefined2 *)(*piStack_10 + 0x42) = 0;
      if (iStack_12c != 0) {
        *(uint *)(*piStack_10 + 0x10) = *(uint *)(*piStack_10 + 0x10) | 8;
      }
    }
    else if (uVar1 == 0x80000000) {
      piVar6 = ar5_00;
      iStack_20 = FUN_8c25a838(piStack_18,ar5_00,piVar2,ar7);
      if (iStack_20 < 0) {
        uVar7 = 0;
        piVar2 = piStack_10;
        piVar3 = piStack_130;
        FUN_8c25a380(piStack_10,piVar6,piStack_130,0,uStack_134);
        *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
        _DAT_8c4aa6ac = iStack_c;
        _DAT_8c4aa6b0 = piStack_130;
        FUN_8c259c40(piVar2,piVar6,piVar3,uVar7);
        return 0xffffffff;
      }
      ar7 = 1;
      piVar3 = piStack_10;
      piVar2 = piStack_130;
      FUN_8c25a380(piStack_10,piVar6,piStack_130,1,uStack_134);
      *(undefined2 *)(*piStack_10 + 0x42) = 0;
    }
    else if (uVar1 == 0x20000000) {
      iStack_20 = FUN_8c25a838(piStack_18,ar5_00,piVar2,ar7);
      if (iStack_20 < 0) {
        uVar7 = 0;
        puVar5 = auStack_16c;
        piVar6 = piStack_10;
        piVar2 = piStack_130;
        FUN_8c25a380(piStack_10,puVar5,piStack_130,0,uStack_134);
        *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
        *(undefined2 *)(*piStack_10 + 0x40) = 0;
        _DAT_8c4aa6ac = iStack_c;
        _DAT_8c4aa6b0 = piStack_130;
        FUN_8c259c40(piVar6,puVar5,piVar2,uVar7);
        return 0xffffffff;
      }
      piVar6 = ar5_00;
      iStack_20 = FUN_8c25a914(piStack_18,ar5_00,piVar2,ar7);
      if (iStack_20 < 0) {
        uVar7 = 1;
        piVar2 = piStack_10;
        piVar3 = piStack_130;
        FUN_8c25a380(piStack_10,piVar6,piStack_130,1,uStack_134);
        *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
        _DAT_8c4aa6ac = iStack_c;
        _DAT_8c4aa6b0 = piStack_130;
        FUN_8c259c40(piVar2,piVar6,piVar3,uVar7);
        return 0xffffffff;
      }
      ar7 = 3;
      piVar3 = piStack_10;
      piVar2 = piStack_130;
      FUN_8c25a380(piStack_10,piVar6,piStack_130,3,uStack_134);
      *(undefined2 *)(*piStack_10 + 0x42) = 0;
      if (iStack_12c != 0) {
        *(uint *)(*piStack_10 + 0x10) = *(uint *)(*piStack_10 + 0x10) | 8;
      }
    }
    goto LAB_8c23878e;
  }
  piStack_14 = DAT_8c277b08 + iStack_124 * 0x11;
  piStack_18[2] = (int)piStack_14;
  uVar1 = piStack_18[1] & 0xa0000000;
  if (uVar1 == 0) {
    if ((piStack_14[4] & 2U) == 0) {
      piVar6 = piStack_14 + 5;
      piVar3 = piStack_18;
      iStack_20 = FUN_8c25a914(piStack_18,piVar6,piVar2,ar7);
      if (iStack_20 < 0) {
        *(short *)((int)piStack_14 + 0x42) = -(short)iStack_20;
        _DAT_8c4aa6ac = iStack_c;
        _DAT_8c4aa6b0 = piStack_130;
        FUN_8c259c40(piVar3,piVar6,piVar2,ar7);
        return 0xffffffff;
      }
      *(undefined2 *)((int)piStack_14 + 0x42) = 0;
      if (iStack_12c == 0) {
        piVar3 = piStack_14;
        FUN_8c2571fe(piStack_14,piVar6,piVar2,ar7);
        piStack_14[4] = piStack_14[4] | 2;
        *(short *)(piStack_14 + 0x10) = (short)piStack_14[0x10] + 1;
      }
      else {
        piVar6 = (int *)0x2;
        piVar2 = (int *)piStack_14[5];
        piVar3 = piStack_130;
        FUN_8c25a608(piStack_130,2,piVar2,ar7,in_stack_fffffe90);
        piStack_14[4] = piStack_14[4] | 8;
      }
      goto LAB_8c23878e;
    }
    if (iStack_12c == 0) {
      *(short *)(piStack_14 + 0x10) = (short)piStack_14[0x10] + 1;
      goto LAB_8c23878e;
    }
LAB_8c238436:
    piVar3 = piStack_130;
    FUN_8c25a6ea(piStack_130,piVar6,piVar2,ar7,in_stack_fffffe90);
  }
  else {
    if (uVar1 == 0x80000000) {
      if ((piStack_14[4] & 1U) != 0) goto LAB_8c23878e;
      piVar6 = piStack_14 + 5;
      piVar3 = piStack_18;
      iStack_20 = FUN_8c25a838(piStack_18,piVar6,piVar2,ar7);
      if (iStack_20 < 0) {
        *(short *)((int)piStack_14 + 0x42) = -(short)iStack_20;
        _DAT_8c4aa6ac = iStack_c;
        _DAT_8c4aa6b0 = piStack_130;
        FUN_8c259c40(piVar3,piVar6,piVar2,ar7);
        return 0xffffffff;
      }
      *(undefined2 *)((int)piStack_14 + 0x42) = 0;
      if (iStack_12c == 0) {
        piStack_14[4] = piStack_14[4] | 1;
        goto LAB_8c23878e;
      }
      piVar2 = (int *)piStack_14[5];
      piVar6 = (int *)0x1;
    }
    else {
      if (uVar1 != 0x20000000) goto LAB_8c23878e;
      if ((piStack_14[4] & 2U) == 0) {
        piVar6 = piStack_14 + 5;
        piVar3 = piStack_18;
        iStack_20 = FUN_8c25a914(piStack_18,piVar6,piVar2,ar7);
        if (iStack_20 < 0) {
          *(short *)((int)piStack_14 + 0x42) = -(short)iStack_20;
          _DAT_8c4aa6ac = iStack_c;
          _DAT_8c4aa6b0 = piStack_130;
          FUN_8c259c40(piVar3,piVar6,piVar2,ar7);
          return 0xffffffff;
        }
        *(undefined2 *)((int)piStack_14 + 0x42) = 0;
        if (iStack_12c == 0) {
          piVar3 = piStack_14;
          FUN_8c2571fe(piStack_14,piVar6,piVar2,ar7);
          piStack_14[4] = piStack_14[4] | 2;
          *(undefined2 *)(piStack_14 + 0x10) = 1;
        }
        else {
          piVar6 = (int *)0x2;
          piVar2 = (int *)piStack_14[5];
          piVar3 = piStack_130;
          FUN_8c25a608(piStack_130,2,piVar2,ar7,in_stack_fffffe90);
          piStack_14[4] = piStack_14[4] | 8;
        }
        goto LAB_8c23878e;
      }
      if ((piStack_14[4] & 1U) != 0) {
        if (iStack_12c == 0) {
          *(short *)(piStack_14 + 0x10) = (short)piStack_14[0x10] + 1;
          goto LAB_8c23878e;
        }
        goto LAB_8c238436;
      }
      piVar6 = piStack_14 + 5;
      piVar3 = piStack_18;
      iStack_20 = FUN_8c25a838(piStack_18,piVar6,piVar2,ar7);
      if (iStack_20 < 0) {
        *(short *)((int)piStack_14 + 0x42) = -(short)iStack_20;
        _DAT_8c4aa6ac = iStack_c;
        _DAT_8c4aa6b0 = piStack_130;
        FUN_8c259c40(piVar3,piVar6,piVar2,ar7);
        return 0xffffffff;
      }
      *(undefined2 *)((int)piStack_14 + 0x42) = 0;
      if (iStack_12c == 0) {
        piStack_14[4] = piStack_14[4] | 1;
        *(short *)(piStack_14 + 0x10) = (short)piStack_14[0x10] + 1;
        goto LAB_8c23878e;
      }
      piVar6 = (int *)0x3;
      piVar2 = (int *)piStack_14[5];
    }
    piVar3 = piStack_130;
    FUN_8c25a608(piStack_130,piVar6,piVar2,ar7,in_stack_fffffe90);
  }
LAB_8c23878e:
  FUN_8c259c40(piVar3,piVar6,piVar2,ar7);
  return 1;
}

__asm__(".globl _FUN_8c237964\n.set _FUN_8c237964, _FUN_8c237964_def\n");
