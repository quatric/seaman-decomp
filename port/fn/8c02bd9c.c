#include "../decls.h"
undefined4 FUN_8c02bd9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c02bea4(ar4,ar5,ar6,ar7);
  if ((iVar1 < 1) && (uVar2 = FUN_8c025f68(ar4,ar5,ar6,ar7), (char)uVar2 == '\x01'))
  {
    return 0;
  }
  iVar1 = FUN_8c02bea4(ar4 + 0x18,ar5,ar6,ar7);
  if ((iVar1 < 1) &&
     (uVar2 = FUN_8c025f68(ar4 + 0x18,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
    return 0;
  }
  iVar1 = FUN_8c02bea4(ar4 + 0x30,ar5,ar6,ar7);
  if ((iVar1 < 1) &&
     (uVar2 = FUN_8c025f68(ar4 + 0x30,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
    return 0;
  }
  iVar1 = FUN_8c02bea4(ar4 + 0x48,ar5,ar6,ar7);
  if ((iVar1 < 1) &&
     (uVar2 = FUN_8c025f68(ar4 + 0x48,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
    return 0;
  }
  iVar1 = get_field_4_02be9c(ar4 + 0x60,ar5,ar6,ar7);
  if ((iVar1 == 0x2710) &&
     (uVar2 = FUN_8c025f68(ar4 + 0x60,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c02bd9c\n.set _FUN_8c02bd9c, _FUN_8c02bd9c_def\n");
