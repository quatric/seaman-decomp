#include "../decls.h"
undefined4 FUN_8c25ae38_def(uint *ar4,uint *ar5,undefined4 *ar6,undefined4 *ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iStack_2c;
  undefined4 uStack_28;
  uint *puStack_24;
  uint *puStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  ushort uStack_c;
  ushort uStack_a;
  
  puStack_24 = ar4;
  puStack_20 = ar5;
  puStack_1c = ar6;
  puStack_18 = ar7;
  do {
    puVar1 = (&FUN_8c259c48);
    iVar2 = FUN_8c259c48(&iStack_2c,4,ar6,ar7);
    if (iVar2 < 0) {
      return 0xffffffff;
    }
    if (iStack_2c == 0x54525650) {
      iVar2 = (*(code *)puVar1)(&uStack_14,0xc,ar6,ar7);
      if (iVar2 < 0) {
        return 0xffffffff;
      }
    }
    else {
      iVar2 = (*(code *)puVar1)(&uStack_28,4,ar6,ar7);
      if (iVar2 < 0) {
        return 0xffffffff;
      }
      FUN_8c25a122(uStack_28,1,ar6,ar7);
    }
    iVar2 = 0x8c4aa6ac;
  } while (iStack_2c != 0x54525650);
  *puStack_18 = uStack_14;
  *puStack_24 = (uint)uStack_c;
  uVar3 = *puStack_24;
  if ((((uVar3 == 8) || (uVar3 == 0x10)) || (uVar3 == 0x20)) ||
     (((uVar3 == 0x40 || (uVar3 == (int)0x80)) ||
      ((uVar3 == (int)0x100 || ((uVar3 == (int)0x200 || (uVar3 == (int)0x400)))
       ))))) {
    *puStack_20 = (uint)uStack_a;
    uVar3 = *puStack_20;
    if ((uVar3 == 8) ||
       (((((uVar3 == 0x10 || (uVar3 == 0x20)) || (uVar3 == 0x40)) ||
         ((uVar3 == (int)0x80 || (uVar3 == (int)0x100)))) ||
        ((uVar3 == (int)0x200 || (uVar3 == (int)0x400)))))) {
      *puStack_1c = uStack_10;
      return 1;
    }
  }
  *(undefined4 *)(iVar2 + 8) = 4;
  return 0xfffffffc;
}

__asm__(".globl _FUN_8c25ae38\n.set _FUN_8c25ae38, _FUN_8c25ae38_def\n");
