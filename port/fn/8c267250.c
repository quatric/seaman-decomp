#include "../decls.h"
int FUN_8c267250_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = 0xd000001;
  if ((*(int *)(&DATA_8c2784c0) != 0) && (iVar2 = 0x7000103, ar4 != 0)) {
    FUN_8c266ea8(ar4,ar5,ar6 + 0x14);
    FUN_8c266f38(ar4,ar5,ar6 + 0x18);
    puVar1 = (&FUN_8c2673f0);
    *ar6 = 0;
    ar6[1] = 0;
    (*(code *)puVar1)(ar4,ar5,ar6 + 2);
    FUN_8c267058(ar4,ar5,ar6 + 3);
    FUN_8c267130(ar4,ar5,ar6 + 6);
    FUN_8c2671c0(ar4,ar5,ar6 + 8);
    FUN_8c266fc8(ar4,ar5,ar6 + 4);
    FUN_8c266e2c(ar4,ar5,ar6 + 5);
    FUN_8c266d28(ar4,ar5,ar6 + 0x10);
    FUN_8c267360(ar4,ar5,ar6 + 0xc);
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    FUN_8c2688a0((&FUN_8c2664c4),iVar2);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c267250\n.set _FUN_8c267250, _FUN_8c267250_def\n");
