#include "../decls.h"
void FUN_8c024010_def(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 in_PR;
  char in_FPSCR_SZ = 0;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_18 = *(undefined4 *)param_3;
    uStack_14 = *(undefined4 *)((int)param_3 + 4);
    uStack_10 = *(undefined4 *)(param_3 + 1);
    uStack_c = in_PR;
  }
  else {
    uStack_18 = (undefined4)*param_3;
    uStack_14 = (undefined4)*(undefined8 *)((int)param_3 + 4);
    uStack_10 = (undefined4)param_3[1];
    uStack_c = (undefined4)((ulonglong)param_3[1] >> 0x20);
  }
  FUN_8c21279c(param_1,&uStack_18,&uStack_24);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)param_2 = uStack_24;
    *(undefined4 *)((int)param_2 + 4) = uStack_20;
    *(undefined4 *)(param_2 + 1) = uStack_1c;
  }
  else {
    *param_2 = CONCAT44(uStack_20,uStack_24);
    *(ulonglong *)((int)param_2 + 4) = CONCAT44(uStack_1c,uStack_20);
    param_2[1] = CONCAT44(uStack_18,uStack_1c);
  }
  return;
}

__asm__(".globl _FUN_8c024010\n.set _FUN_8c024010, _FUN_8c024010_def\n");
