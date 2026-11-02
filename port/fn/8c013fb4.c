#include "../decls.h"
undefined1 * FUN_8c013fb4_def(undefined1 *ar4,undefined1 *ar5,uint ar6,undefined4 ar7)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  if (ar4 != ar5) {
    if (ar4 < ar5) {
      uVar2 = 0;
      puVar3 = ar4;
      if (ar6 != 0) {
        do {
          uVar1 = *ar5;
          ar5 = ar5 + 1;
          uVar2 = uVar2 + 1;
          *puVar3 = uVar1;
          puVar3 = puVar3 + 1;
        } while (uVar2 < ar6);
      }
    }
    else {
      uVar2 = 0;
      puVar4 = ar4 + ar6;
      puVar3 = ar5 + ar6;
      if (ar6 != 0) {
        do {
          puVar3 = puVar3 + -1;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + -1;
          *puVar4 = *puVar3;
        } while (uVar2 < ar6);
      }
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c013fb4\n.set _FUN_8c013fb4, _FUN_8c013fb4_def\n");
