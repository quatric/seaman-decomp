#include "../decls.h"
int FUN_8c0f58a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  ar6_00 = 3;
  ar5_00 = 0xf;
  FUN_8c0f4040(ar4,0xf,3,ar5,ar6);
  *(undefined **)(ar4 + 8) = (&DATA_8c12bec0);
  FUN_8c016410(ar4 + 0x170,ar5_00,ar6_00,ar5);
  FUN_8c015224(ar4 + 0x1b4,ar5_00,ar6_00,ar5);
  Vec3_ctor_zero(ar4 + 0x1bc,ar5_00,ar6_00,ar5);
  FUN_8c016fcc(ar4 + 0x1dc,ar5_00,ar6_00,ar5);
  *(undefined1 *)(0x1d8 + ar4) = 0;
  *(undefined4 *)0x8c43b338 = 0;
  ((undefined1 *)1)[0x8c43b338] = 0;
  ((undefined1 *)2)[0x8c43b338] = 0x7f;
  ((undefined1 *)3)[0x8c43b338] = 0;
  ((undefined1 *)4)[0x8c43b338] = 0x7f;
  ((undefined1 *)5)[0x8c43b338] = 0x7f;
  ((undefined1 *)6)[0x8c43b338] = 0;
  ((undefined1 *)7)[0x8c43b338] = 0x7f;
  ((undefined1 *)8)[0x8c43b338] = 0x7f;
  ((undefined1 *)9)[0x8c43b338] = 0;
  ((undefined1 *)10)[0x8c43b338] = (short)0xff;
  ((undefined1 *)0xb)[0x8c43b338] = 0;
  ((undefined1 *)0xc)[0x8c43b338] = (short)0xff;
  ((undefined1 *)0xd)[0x8c43b338] = 0x7f;
  ((undefined1 *)0xe)[0x8c43b338] = 0x7f;
  ((undefined1 *)0xf)[0x8c43b338] = 0x7f;
  ((undefined1 *)0x10)[0x8c43b338] = 0;
  ((undefined1 *)0x11)[0x8c43b338] = (short)0x80;
  ((undefined1 *)0x12)[0x8c43b338] = (short)0x80;
  ((undefined1 *)0x13)[0x8c43b338] = (short)0x80;
  ((undefined1 *)0x14)[0x8c43b338] = (short)0x80;
  ((undefined1 *)0x15)[0x8c43b338] = (short)0xff;
  ((undefined1 *)0x16)[0x8c43b338] = 0;
  ((undefined1 *)0x17)[0x8c43b338] = (short)0xff;
  ((undefined1 *)0x18)[0x8c43b338] = (short)0x80;
  ((undefined1 *)0x19)[0x8c43b338] = (short)0x80;
  ((undefined1 *)0x1a)[0x8c43b338] = (short)0xff;
  ((undefined1 *)0x1b)[0x8c43b338] = (short)0x80;
  ((undefined1 *)0x1c)[0x8c43b338] = (short)0xff;
  ((undefined1 *)0x1d)[0x8c43b338] = (short)0xff;
  ((undefined1 *)0x1e)[0x8c43b338] = (short)0x80;
  ((undefined1 *)0x1f)[0x8c43b338] = (short)0xff;
  FUN_8c0f5ad0(ar4,ar5_00,ar6_00,ar5);
  FUN_8c0f532c(ar4,0x8c43b47c,ar4 + 0x1dc,ar5);
  return ar4;
}

__asm__(".globl _FUN_8c0f58a4\n.set _FUN_8c0f58a4, _FUN_8c0f58a4_def\n");
