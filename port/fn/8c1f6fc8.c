#include "../decls.h"
undefined4 FUN_8c1f6fc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_98 [2];
  undefined1 auStack_96 [58];
  undefined1 auStack_5c [52];
  ushort uStack_28;
  
  if (DAT_8c273a10 == '\0') {
    _DAT_8c4748a8 = 5;
  }
  else {
    iVar3 = 0;
    do {
      iVar1 = FUN_8c1f6e0c(iVar3 * 4 + 0x18,0,ar6,ar7);
      if (iVar1 == 1) {
        ar6 = 10;
        iVar1 = FUN_8c013ec0(_DAT_8c4748b0 + 2,ar4,10,ar7);
        if (iVar1 == 0) {
          ar6 = 0x3c;
          memmove(auStack_98,_DAT_8c4748b0,0x3c,ar7);
          iVar1 = FUN_8c1f6e0c(iVar3 * 4 + 0x19,0,ar6,ar7);
          if (iVar1 == 1) {
            ar6 = 0x3c;
            memmove(auStack_5c,_DAT_8c4748b0,0x3c,ar7);
            uVar2 = FUN_8c1f109c(0x6e,auStack_96,ar6,ar7);
            if ((uint)uStack_28 == (uVar2 & 0xffff)) {
              return iVar3;
            }
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 100);
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f6fc8\n.set _FUN_8c1f6fc8, _FUN_8c1f6fc8_def\n");
