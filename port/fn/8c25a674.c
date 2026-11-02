#include "../decls.h"
undefined4 FUN_8c25a674_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  uint uVar1;
  int *a4;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar2 = ~ar5;
  for (uVar3 = 0; uVar3 < DAT_8c277b0c; uVar3 = uVar3 + 1) {
    a4 = (int *)(DAT_8c277b08 + iVar4);
    if (*a4 == ar4) {
      uVar1 = a4[4];
      a4[4] = uVar1 & uVar2;
      if ((uVar1 & uVar2 & 2) == 0) {
        ain0 = 0x40;
        a4[0xd] = 0;
        *(undefined2 *)(a4 + 0x10) = 0;
      }
      if ((a4[4] & 1U) == 0) {
        a4[5] = 0;
      }
      if ((a4[4] & 3U) == 0) {
        ain0 = FUN_8c25a49e(a4,ar5,ar6,ar7);
      }
    }
    iVar4 = iVar4 + 0x44;
  }
  return ain0;
}

__asm__(".globl _FUN_8c25a674\n.set _FUN_8c25a674, _FUN_8c25a674_def\n");
