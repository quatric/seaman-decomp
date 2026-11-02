#include "../decls.h"
undefined4 FUN_8c20b7a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 **ar5_00;
  undefined4 **ar6_00;
  undefined4 **a7;
  int iVar5;
  uint uStack_78;
  uint uStack_74;
  undefined4 *puStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int aiStack_48 [5];
  undefined4 *apuStack_34 [6];
  
  puStack_68 = DAT_8c26d400;
  uStack_64 = DAT_8c26d404;
  uStack_60 = DAT_8c26d408;
  uStack_5c = DAT_8c26d40c;
  uStack_58 = DAT_8c26d410;
  uStack_54 = DAT_8c26d414;
  uStack_50 = DAT_8c26d418;
  uStack_4c = DAT_8c26d41c;
  if (((((_DAT_8c4a9bb0 & 0x40) != 0) && (_DAT_8c4aa05c != 0)) && (_DAT_8c4aa064 != 0)) &&
     (_DAT_8c4a9d70 != 0)) {
    FUN_8c20af20(ar4,ar5,ar6,ar7);
  }
  iVar5 = _DAT_8c4a9f08 * 4;
  apuStack_34[0] = (undefined4 *)(iVar5 + -0x73b560d4);
  ar5_00 = apuStack_34 + 2;
  ar6_00 = apuStack_34 + 1;
  apuStack_34[1] = (undefined4 *)(iVar5 + -0x73b560c4);
  apuStack_34[2] = (undefined4 *)(iVar5 + -0x73b560b4);
  a7 = apuStack_34 + 4;
  apuStack_34[3] = (undefined4 *)(iVar5 + -0x73b560a4);
  apuStack_34[4] = (undefined4 *)(iVar5 + -0x73b56094);
  aiStack_48[0] = iVar5 + -0x73b56084;
  aiStack_48[1] = iVar5 + -0x73b56074;
  aiStack_48[2] = iVar5 + -0x73b56064;
  aiStack_48[3] = iVar5 + -0x73b56054;
  aiStack_48[4] = iVar5 + -0x73b56044;
  *(undefined4 *)(iVar5 + -0x73b560d4) = *_DAT_8c4aa218;
  *(undefined4 *)(iVar5 + -0x73b560c4) = _DAT_8c4aa218[1];
  *(undefined4 *)(iVar5 + -0x73b560b4) = _DAT_8c4aa218[2];
  *(undefined4 *)(iVar5 + -0x73b560a4) = _DAT_8c4aa218[3];
  *(undefined4 *)(iVar5 + -0x73b56094) = _DAT_8c4aa218[4];
  if (_DAT_8c4a9ef0 == 0) {
    uStack_74 = 0;
    do {
      if ((int)uStack_74 < 0) {
        uVar2 = 1 >> (~uStack_74 & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << (uStack_74 & 0x1f);
      }
      if ((uVar2 & _DAT_8c4aa014) != 0) {
        iVar5 = uStack_74 * 4;
        iVar1 = *(int *)(iVar5 + _DAT_8c4aa21c) - *apuStack_34[uStack_74];
        if (iVar1 < 0) {
          iVar1 = iVar1 + 3;
        }
        ar5_00 = (undefined4 **)&DAT_8c26d3f8;
        *(int *)aiStack_48[uStack_74] = (iVar1 >> 2) << 2;
        ar6_00 = (undefined4 **)0x4;
        FUN_8c20731e(*(undefined4 *)(iVar5 + _DAT_8c4aa21c),&DAT_8c26d3f8,4,a7);
        *(int *)(iVar5 + _DAT_8c4aa21c) = *(int *)(iVar5 + _DAT_8c4aa21c) + 0x20;
      }
      uStack_74 = uStack_74 + 1;
    } while ((int)uStack_74 < 5);
    uVar2 = 0;
    do {
      if ((int)uVar2 < 0) {
        uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar2 & 0x1f);
      }
      if ((uVar4 & _DAT_8c4aa014) == 0) {
        *(undefined4 *)aiStack_48[uVar2] = 0;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 5);
    uVar2 = 0;
LAB_8c20b91a:
    if ((int)uVar2 < 0) {
      uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
    }
    else {
      uVar4 = 1 << (uVar2 & 0x1f);
    }
    if ((uVar4 & _DAT_8c4aa014) == 0) goto LAB_8c20b9b4;
    if (*(uint *)(uVar2 * 4 + -0x73b55f20) < *(uint *)aiStack_48[uVar2]) {
      *(undefined4 *)(uVar2 * 4 + -0x73b55f20) = *(undefined4 *)aiStack_48[uVar2];
    }
    ar5_00 = (undefined4 **)(uVar2 * 4);
    if ((undefined4 *)**(uint **)((int)ar5_00 + (int)aiStack_48) <= ar5_00[-0x1ced57e4])
    goto LAB_8c20b9b4;
    uVar2 = 0;
    do {
      if ((int)uVar2 < 0) {
        uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar2 & 0x1f);
      }
      if ((uVar4 & _DAT_8c4aa014) != 0) {
        puStack_68 = (undefined4 *)((uint)puStack_68 & 0xf0ffffff | uVar2 << 0x18);
        FUN_8c20731e(*apuStack_34[uVar2],&puStack_68,0x20,a7);
        ar6_00 = (undefined4 **)0x4;
        ar5_00 = (undefined4 **)&DAT_8c26d3f8;
        FUN_8c20731e(*apuStack_34[uVar2] + 0x20,&DAT_8c26d3f8,4,a7);
        *(undefined4 *)aiStack_48[uVar2] = 0x20;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 5);
    goto LAB_8c20bd1e;
  }
  if ((_DAT_8c4a9fcc & 0x20) == 0) {
    FUN_8c210dfc(&DAT_8c4aa218,ar5_00,ar6_00,a7);
    uStack_78 = 0;
    do {
      iVar5 = uStack_78 * 4;
      iVar1 = *(int *)(iVar5 + _DAT_8c4aa21c) - *apuStack_34[uStack_78];
      if (iVar1 < 0) {
        iVar1 = iVar1 + 3;
      }
      ar5_00 = (undefined4 **)&DAT_8c26d3f8;
      *(int *)aiStack_48[uStack_78] = (iVar1 >> 2) << 2;
      ar6_00 = (undefined4 **)0x4;
      FUN_8c20731e(*(undefined4 *)(iVar5 + _DAT_8c4aa21c),&DAT_8c26d3f8,4,a7);
      *(int *)(iVar5 + _DAT_8c4aa21c) = *(int *)(iVar5 + _DAT_8c4aa21c) + 0x20;
      if ((int)uStack_78 < 0) {
        uVar2 = 1 >> (~uStack_78 & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << (uStack_78 & 0x1f);
      }
      if ((uVar2 & _DAT_8c4aa014) == 0) {
        *(undefined4 *)aiStack_48[uStack_78] = 0;
      }
      if ((int)uStack_78 < 0) {
        uVar2 = 1 >> (~uStack_78 & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << (uStack_78 & 0x1f);
      }
      if ((uVar2 & _DAT_8c4aa014) != 0) {
        iVar5 = uStack_78 * 4;
        if (*(uint *)(iVar5 + -0x73b55f20) < *(uint *)aiStack_48[uStack_78]) {
          *(undefined4 *)(iVar5 + -0x73b55f20) = *(undefined4 *)aiStack_48[uStack_78];
        }
        if (*(uint *)(&DAT_8c4aa070 + iVar5) < *(uint *)aiStack_48[uStack_78]) {
          uVar2 = 0;
          do {
            if ((int)uVar2 < 0) {
              uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
            }
            else {
              uVar4 = 1 << (uVar2 & 0x1f);
            }
            if ((uVar4 & _DAT_8c4aa014) == 0) {
              *(undefined4 *)aiStack_48[uVar2] = 0;
            }
            else {
              puStack_68 = (undefined4 *)((uint)puStack_68 & 0xf0ffffff | uVar2 << 0x18);
              FUN_8c20731e(*apuStack_34[uVar2],&puStack_68,0x20,a7);
              ar6_00 = (undefined4 **)0x4;
              ar5_00 = (undefined4 **)&DAT_8c26d3f8;
              FUN_8c20731e(*apuStack_34[uVar2] + 0x20,&DAT_8c26d3f8,4,a7);
              *(undefined4 *)aiStack_48[uVar2] = 0x20;
            }
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < 5);
LAB_8c20bd1e:
          FUN_8c2062c8(2,ar5_00,ar6_00,a7);
          break;
        }
      }
      uStack_78 = uStack_78 + 1;
    } while ((int)uStack_78 < 5);
    goto LAB_8c20bd36;
  }
  uStack_78 = 0;
  do {
    if (uStack_78 != _DAT_8c4a9fd0) {
      if ((int)uStack_78 < 0) {
        uVar2 = 1 >> (~uStack_78 & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << (uStack_78 & 0x1f);
      }
      if ((uVar2 & _DAT_8c4aa014) == 0) {
        *(undefined4 *)aiStack_48[uStack_78] = 0;
      }
      else {
        iVar5 = uStack_78 * 4;
        piVar3 = aiStack_48 + uStack_78;
        iVar1 = *(int *)(iVar5 + _DAT_8c4aa21c) - *apuStack_34[uStack_78];
        if (iVar1 < 0) {
          iVar1 = iVar1 + 3;
        }
        ar5_00 = (undefined4 **)&DAT_8c26d3f8;
        *(int *)*piVar3 = (iVar1 >> 2) << 2;
        ar6_00 = (undefined4 **)0x4;
        FUN_8c20731e(*(undefined4 *)(iVar5 + _DAT_8c4aa21c),&DAT_8c26d3f8,4,a7);
        *(int *)(iVar5 + _DAT_8c4aa21c) = *(int *)(iVar5 + _DAT_8c4aa21c) + 0x20;
        if (*(uint *)(iVar5 + -0x73b55f20) < *(uint *)*piVar3) {
          *(undefined4 *)(uStack_78 * 4 + -0x73b55f20) = *(undefined4 *)aiStack_48[uStack_78];
        }
        if (*(uint *)(&DAT_8c4aa070 + uStack_78 * 4) < *(uint *)aiStack_48[uStack_78]) {
          uVar2 = 0;
          goto LAB_8c20bae4;
        }
      }
    }
    uStack_78 = uStack_78 + 1;
  } while ((int)uStack_78 < 5);
  goto LAB_8c20bb6c;
LAB_8c20b9b4:
  uVar2 = uVar2 + 1;
  if (4 < (int)uVar2) goto LAB_8c20bd36;
  goto LAB_8c20b91a;
LAB_8c20bae4:
  do {
    if (uVar2 == _DAT_8c4a9fd0) {
LAB_8c20bb3e:
      *(undefined4 *)aiStack_48[uVar2] = 0;
    }
    else {
      if ((int)uVar2 < 0) {
        uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar2 & 0x1f);
      }
      if ((uVar4 & _DAT_8c4aa014) == 0) goto LAB_8c20bb3e;
      puStack_68 = (undefined4 *)((uint)puStack_68 & 0xf0ffffff | uVar2 << 0x18);
      FUN_8c20731e(*apuStack_34[uVar2],&puStack_68,0x20,a7);
      ar6_00 = (undefined4 **)0x4;
      ar5_00 = (undefined4 **)&DAT_8c26d3f8;
      FUN_8c20731e(*apuStack_34[uVar2] + 0x20,&DAT_8c26d3f8,4,a7);
      *(undefined4 *)aiStack_48[uVar2] = 0x20;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 5);
  FUN_8c2062c8(2,ar5_00,ar6_00,a7);
LAB_8c20bb6c:
  if (*(int *)(_DAT_8c4aa21c + _DAT_8c4a9fd0 * 4) == *apuStack_34[_DAT_8c4a9fd0]) {
    _DAT_ff000038 = 0x10;
    _DAT_ff00003c = 0x10;
    puStack_68 = (undefined4 *)((uint)puStack_68 & 0xf0ffffff | (_DAT_8c4a9fd0 & 7) << 0x18);
    ar5_00 = &puStack_68;
    ar6_00 = (undefined4 **)0x20;
    FUN_8c20731e(*(uint *)(_DAT_8c4aa21c + _DAT_8c4a9fd0 * 4) & 0x3ffffff | 0xe0000000,ar5_00,0x20,
                 a7);
  }
LAB_8c20bd36:
  DAT_8c275710 = 0;
  DAT_8c27570c = DAT_8c27570c + 1 & 1;
  FUN_8c210cc0(DAT_8c27570c,ar5_00,ar6_00,a7);
  return 0;
}

__asm__(".globl _FUN_8c20b7a0\n.set _FUN_8c20b7a0, _FUN_8c20b7a0_def\n");
