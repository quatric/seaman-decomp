#include "../decls.h"
undefined4 FUN_8c25fdb2_def(undefined4 ar4,ushort *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((int)(uint)*ar5 >> 8 | (uint)*ar5 << 8 & 0xff00 & 0xffff) == 0x8000) {
    uVar1 = FUN_8c25fca4(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  iVar2 = FUN_8c260636(ar5,&DAT_8c4b9828);
  if (iVar2 != 0) {
    uVar1 = FUN_8c26045c(ar4,ar5,ar6);
    return uVar1;
  }
  iVar2 = FUN_8c260c2c(ar5);
  if (iVar2 != 0) {
    uVar1 = FUN_8c260810(ar4,ar5,ar6);
    return uVar1;
  }
  iVar2 = FUN_8c25f01e(ar5);
  if (iVar2 == 0) {
    iVar2 = FUN_8c25f64c(ar5);
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = FUN_8c25f742(ar4,ar5,ar6);
    return uVar1;
  }
  uVar1 = FUN_8c25f0ea(ar4,ar5,ar6);
  return uVar1;
}

__asm__(".globl _FUN_8c25fdb2\n.set _FUN_8c25fdb2, _FUN_8c25fdb2_def\n");
