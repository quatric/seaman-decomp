#include "../decls.h"
undefined4 FUN_8c0d46cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  char cVar7;
  char cVar8;
  undefined4 in_stack_ffffffa8;
  float fStack_24;
  float fStack_20;
  
  cVar8 = '\0';
  cVar7 = '\0';
  piVar1 = (int *)get_field_4_0253e4(ar4 + 8,ar5,ar6,ar7);
  uVar2 = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8) = uVar2;
  FUN_8c01538c(ar4 + 8,ar5,ar6,ar7);
  FUN_8c233dac(ar4 + 0x5ec,ar5,ar6,ar7);
  FUN_8c015af8(ar4 + 0x1c,ar5,ar6,ar7);
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    FUN_8c0d43cc(&fStack_24,ar5,ar6,ar7);
    if (cVar8 == '\0') {
      fVar5 = -150.0;
      fVar4 = fStack_24;
    }
    else {
      fVar4 = -150.0;
      fVar5 = 800.0;
    }
    if (cVar7 != '\0' || fVar5 <= fVar4) {
      if (cVar8 == '\0') {
        fVar5 = 800.0;
        fVar4 = fStack_24;
      }
      else {
        fVar4 = 800.0;
        fVar5 = -100.0;
      }
      if (cVar7 != '\0' || fVar4 <= fVar5) {
        if (cVar8 == '\0') {
          fVar5 = -100.0;
          fVar4 = fStack_20;
        }
        else {
          fVar4 = -100.0;
          fVar5 = 600.0;
        }
        if (cVar7 != '\0' || fVar5 <= fVar4) {
          if (cVar8 == '\0') {
            pcVar6 = (code *)0x44160000;
            fVar4 = fStack_20;
          }
          else {
            fVar4 = 600.0;
            pcVar6 = FUN_8c256328;
          }
          if (cVar7 != '\0' || fVar4 <= (float)(uint)pcVar6) {
            uVar2 = 0;
            FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffffa8);
            FUN_8c019058(uVar2,ar5,ar6,ar7);
            FUN_8c019160(uVar2,ar5,ar6,ar7);
            FUN_8c015af8(ar4 + iVar3 * 4 + 0x20,ar5,ar6,ar7);
            FUN_8c256210(1,ar5,ar6,ar7);
          }
        }
      }
    }
  }
  uVar2 = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8) = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = uVar2;
  FUN_8c233dac(&DAT_8c13f320,ar5,ar6,ar7);
  FUN_8c0d49cc(ar4,ar5,ar6,ar7);
  FUN_8c0d4a90(ar4,ar5,ar6,ar7);
  uVar2 = FUN_8c0d5d28(ar4,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0d46cc\n.set _FUN_8c0d46cc, _FUN_8c0d46cc_def\n");
