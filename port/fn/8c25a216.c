#include "../decls.h"
undefined4 FUN_8c25a216_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_34;
  int *piStack_30;
  undefined1 auStack_2c [4];
  uint uStack_28;
  undefined1 auStack_20 [8];
  int iStack_18;
  
  piStack_30 = ar4;
  FUN_8c25a122(0,0,ar6,ar7);
  iStack_18 = -1;
  do {
    iVar1 = FUN_8c259c48(&iStack_34,4,ar6,ar7);
    if (iVar1 < 0) {
      return 0xfffffffc;
    }
    if (iStack_34 == 0x58494247) {
      FUN_8c25a122(0xfffffffc,1,ar6,ar7);
      iVar1 = FUN_8c259c48(auStack_20,0xc,ar6,ar7);
joined_r0x8c25a25e:
      if (iVar1 < 0) {
        return 0xfffffffc;
      }
    }
    else if (iStack_34 == 0x54525650) {
      iVar1 = FUN_8c259c48(auStack_2c,0xc,ar6,ar7);
      goto joined_r0x8c25a25e;
    }
    if (iStack_34 == 0x54525650) {
      FUN_8c25a122(0,0,ar6,ar7);
      if (iStack_18 == -1) {
        while (iVar1 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,DAT_8c277b18,ar7), iVar1 != -1) {
          DAT_8c277b18 = DAT_8c277b18 + -1;
        }
        *piStack_30 = DAT_8c277b18;
      }
      else {
        *piStack_30 = iStack_18;
      }
      uStack_28 = uStack_28 & 0xff00;
      if ((((uStack_28 == 0x500) || (uStack_28 == 0x600)) || (uStack_28 == 0x700)) ||
         (uStack_28 == 0x800)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
  } while( true );
}

__asm__(".globl _FUN_8c25a216\n.set _FUN_8c25a216, _FUN_8c25a216_def\n");
