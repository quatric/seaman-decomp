#include "../decls.h"
undefined4 FUN_8c032cb8_def(undefined4 ar4,float *ar5,float *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float *pfStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  pfStack_1c = &fStack_34;
  puStack_18 = &uStack_3c;
  uStack_14 = 0;
  uStack_10 = 2;
  fStack_34 = *ar5;
  fStack_30 = ar5[1];
  fStack_2c = ar5[2];
  fStack_28 = fStack_34 + *ar6;
  fStack_24 = fStack_30 + ar6[1];
  fStack_20 = fStack_2c + ar6[2];
  uStack_3c = ar7;
  uStack_38 = ar7;
  uVar1 = FUN_8c234d68(&pfStack_1c,1,0,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c032cb8\n.set _FUN_8c032cb8, _FUN_8c032cb8_def\n");
