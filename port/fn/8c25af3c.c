#include "../decls.h"
int FUN_8c25af3c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = ar5;
  uStack_c = ar6;
  iVar1 = FUN_8c25ae38(&uStack_18,&uStack_14,&uStack_1c,ar6);
  if (iVar1 < 0) {
    return iVar1;
  }
  if ((uStack_1c == (int)0xe00) && ((uStack_10 & 0x400000) != 0)) {
    uStack_1c = uStack_1c & 0xff | (int)0xf00;
  }
  iVar1 = FUN_8c233e10(ar4 + 4,uStack_18,uStack_14,uStack_1c);
  if (iVar1 != 0) {
    *(undefined4 *)0x8c4aa6b4 = 6;
    return 0xfffffffa;
  }
  *(uint *)(ar4 + 4) =
       *(uint *)(ar4 + 4) | uStack_1c << 0x10 & 0xffff0000 | *(uint *)(ar4 + 4) & 0xffff;
  return 1;
}

__asm__(".globl _FUN_8c25af3c\n.set _FUN_8c25af3c, _FUN_8c25af3c_def\n");
