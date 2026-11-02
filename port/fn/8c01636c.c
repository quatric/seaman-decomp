#include "../decls.h"
undefined4 FUN_8c01636c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 in_dr4;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  fStack_1c = (float)((ulonglong)in_dr4 >> 0x20);
  fStack_18 = (float)in_dr4;
  fStack_34 = *(float *)*ar4 + fStack_1c;
  fStack_30 = *(float *)(*ar4 + 4) + fStack_18;
  fStack_2c = *(float *)(*ar4 + 8) + fStack_1c;
  fStack_28 = *(float *)(*ar4 + 0xc) + fStack_18;
  fStack_24 = *(float *)(*ar4 + 0x10) + fStack_1c;
  fStack_20 = *(float *)(*ar4 + 0x14) + fStack_18;
  fStack_1c = *(float *)(*ar4 + 0x18) + fStack_1c;
  fStack_18 = *(float *)(*ar4 + 0x1c) + fStack_18;
  iVar2 = *ar4;
  *ar4 = (int)&fStack_34;
  uVar1 = FUN_8c235b6c(ar4,ar4[3],ar4[4],ar7);
  *ar4 = iVar2;
  return uVar1;
}

__asm__(".globl _FUN_8c01636c\n.set _FUN_8c01636c, _FUN_8c01636c_def\n");
