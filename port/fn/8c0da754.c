#include "../decls.h"
undefined4 FUN_8c0da754_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  int iVar1;
  int iVar2;
  undefined1 *ar5_00;
  float *ar6_00;
  undefined1 *ar7_00;
  int iVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar4_00 = FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7);
  iVar1 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    if (_DAT_8c437550 < iVar1) {
      iVar1 = _DAT_8c437550;
    }
    for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
      ar7_00 = auStack_18;
      FUN_8c0507a4(ar4_00,auStack_20,auStack_1c,ar7_00);
      ar6_00 = &fStack_28;
      ar5_00 = auStack_20;
      FUN_8c256294(0,ar5_00,ar6_00,ar7_00);
      if (cVar7 == '\0') {
        fVar5 = -150.0;
        fVar4 = fStack_28;
      }
      else {
        fVar4 = -150.0;
        fVar5 = 800.0;
      }
      if (cVar6 == '\0' && fVar4 < fVar5) {
LAB_8c0da802:
        iVar2 = get_field_24_05c284(ar4_00,ar5_00,ar6_00,ar7_00);
        if (iVar2 == 0xe) goto LAB_8c0da812;
      }
      else {
        if (cVar7 == '\0') {
          fVar5 = 800.0;
          fVar4 = fStack_28;
        }
        else {
          fVar4 = 800.0;
          fVar5 = -100.0;
        }
        if (cVar6 == '\0' && fVar5 < fVar4) goto LAB_8c0da802;
        if (cVar7 == '\0') {
          fVar5 = -100.0;
          fVar4 = fStack_24;
        }
        else {
          fVar4 = -100.0;
          fVar5 = 600.0;
        }
        if (cVar6 == '\0' && fVar4 < fVar5) goto LAB_8c0da802;
        if (cVar7 == '\0') {
          fVar5 = 600.0;
          fVar4 = fStack_24;
        }
        else {
          fVar4 = 600.0;
          fVar5 = 3.52567e-42;
        }
        if ((cVar6 == '\0' && fVar5 < fVar4) || (ar4_00 == *(int *)(ar4 + 0x9d4)))
        goto LAB_8c0da802;
LAB_8c0da812:
        FUN_8c0f4b44(ar4_00,ar5_00,ar6_00,ar7_00);
        (**(code **)(*(int *)(ar4_00 + 8) + 0x34))(ar4_00,ar5_00,ar6_00,ar7_00);
      }
      ar4_00 = list_node_next(ar4_00,ar5_00,ar6_00,ar7_00);
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c0da754\n.set _FUN_8c0da754, _FUN_8c0da754_def\n");
