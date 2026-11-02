#include "../decls.h"
undefined4 FUN_8c1f7c40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  uVar1 = 0;
  if (DAT_8c273a10 == '\0') {
    _DAT_8c4748a8 = 5;
  }
  else {
    uVar1 = 3;
    FUN_8c1f6dcc(3,ar5,ar6,ar7);
    FUN_8c1f875c(uVar1,ar5,ar6,ar7);
    uVar1 = 0x44c;
    memset(ar4,0xff,0x44c,ar7);
    if (DAT_8c474a2b == '\0') {
      iVar3 = 100;
      puVar2 = (undefined1 *)(ar4 + 10);
      do {
        iVar3 = iVar3 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + 0xb;
      } while (iVar3 != 0);
      _DAT_8c4748a8 = 3;
      uVar1 = 0;
    }
    else {
      iVar3 = 0x18;
      do {
        FUN_8c1f6e0c(iVar3,0,uVar1,ar7);
        uVar1 = 10;
        FUN_8c23c814(ar4,_DAT_8c4748b0 + 2,10,ar7);
        iVar3 = iVar3 + 4;
        *(undefined1 *)(ar4 + 10) = 0;
        ar4 = ar4 + 0xb;
      } while (iVar3 < 0x1a8);
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f7c40\n.set _FUN_8c1f7c40, _FUN_8c1f7c40_def\n");
