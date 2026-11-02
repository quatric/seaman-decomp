#include "../decls.h"
undefined4 FUN_8c207da0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 ar4_00;
  int ar4_01;
  int ar5_00;
  uint ar5_01;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  FUN_8c21214e(ar4,ar5,ar6,ar7);
  *(undefined4 *)0x8c4a9bd4 = (uint)(ar4 != 0);
  *(undefined4 *)0x8c4a9bd8 = (uint)(ar5 != 0);
  ar4_01 = (int)0x280;
  if (*(undefined4 *)0x8c4a9bcc == 1) {
    ar5_00 = (int)0x1e0;
    ar7_00 = 0;
  }
  else {
    if (((*(undefined4 *)0x8c4a9bcc & 1) == 1) || ((*(undefined4 *)0x8c4a9bcc & 0x2c) == 0)) {
      ar7_00 = 0;
    }
    else {
      ar7_00 = 1;
    }
    if ((*(undefined4 *)0x8c4a9bcc & 0x10) == 0) {
      ar4_01 = (int)0x140;
    }
    if ((*(undefined4 *)0x8c4a9bcc & 0x20) == 0) {
      ar5_00 = (int)0xf0;
    }
    else {
      ar5_00 = (int)0x1e0;
    }
  }
  do {
  } while (*(undefined4 *)0x8c4a9f1c == *(undefined4 *)0x8c4a9f1c);
  ar6_00 = *(undefined4 *)0x8c4a9bd0;
  FUN_8c25dc60(ar4_01,ar5_00,ar6_00,ar7_00);
  FUN_8c2079a0(ar4_01,ar5_00,ar6_00,ar7_00);
  puVar1 = (&pvr_20a844);
  pvr_20a844(0x44,*(undefined4 *)0x8c4a9e74 & 0xfffffffe,ar6_00,ar7_00);
  (*(code *)puVar1)((int)0xe8,*(undefined4 *)0x8c4a9eb0,ar6_00,ar7_00);
  ar5_01 = *(undefined4 *)0x8c4a9e74;
  ar4_00 = 0x44;
  (*(code *)puVar1)(0x44,ar5_01,ar6_00,ar7_00);
  FUN_8c205a40(ar4_00,ar5_01,ar6_00,ar7_00);
  (*(code *)(&FUN_8c25d7c6))
            (*(undefined4 *)0x8c4a9c18 >> 7,((undefined1 *)1)[0x8c4a9c18] >> 7,((undefined1 *)2)[0x8c4a9c18] >> 7,((undefined1 *)3)[0x8c4a9c18] >> 7,
             *(undefined4 *)0x8c4a9c14);
  *(undefined4 *)0x8c4a9e54 = 1;
  do {
  } while (*(undefined4 *)0x8c4a9f1c == *(undefined4 *)0x8c4a9f1c);
  return 0;
}

__asm__(".globl _FUN_8c207da0\n.set _FUN_8c207da0, _FUN_8c207da0_def\n");
