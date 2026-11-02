#include "../decls.h"
undefined4 FUN_8c1f6516_def(int ar4,undefined2 *ar5,code *ar6,undefined4 ar7)

{
  int iVar1;
  code *a6;
  undefined4 a7;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  iVar1 = (uint)(byte)(&DAT_8c26c80c)[ar4] * 0xc;
  *(undefined2 **)(iVar1 + -0x73b8d2c0) = ar5;
  *(undefined4 *)(iVar1 + -0x73b8d2bc) = ar7;
  *(code **)(iVar1 + -0x73b8d2b8) = ar6;
  a6 = ar6;
  a7 = ar7;
  iVar1 = FUN_8c1f6494(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = -2;
  }
  else {
    uStack_18 = *(undefined1 *)ar5;
    uStack_17 = (undefined1)((ushort)*ar5 >> 8);
    uStack_16 = *(undefined1 *)(ar5 + 1);
    uStack_15 = *(undefined1 *)((int)ar5 + 3);
    uStack_14 = *(undefined1 *)(ar5 + 2);
    uStack_13 = *(undefined1 *)((int)ar5 + 5);
    uStack_12 = *(undefined1 *)(ar5 + 3);
    uStack_11 = (&DAT_8c26c824)[*(byte *)((int)ar5 + 7) & 7];
    a6 = (code *)0x0;
    a7 = 0;
    iVar1 = s_FATAL_ERROR_Cannot_get_semap_1f070e(ar4,8,0,0,0,&uStack_18,2,&LAB_8c1f64b6);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = 0;
    }
  }
  if ((iVar1 < 0) && (ar6 != (code *)0x0)) {
    (*ar6)(iVar1,ar7,a6,a7);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f6516\n.set _FUN_8c1f6516, _FUN_8c1f6516_def\n");
