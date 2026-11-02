#include "../decls.h"
undefined4 FUN_8c1f4f82_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte bVar5;
  byte bStack_3;
  byte abStack_2 [2];
  
  pbVar4 = (byte *)(_DAT_8c4727b4 + 4 + ar4 * 8);
  iVar1 = **(int **)(_DAT_8c4727b4 + 0xfe8 + (1 - *(int *)(_DAT_8c4727b4 + 0x10b4)) * 0x60 +
                    (&DAT_8c26c728)[ar4] * 4);
  if ((iVar1 == -1) || (iVar1 == -0x100)) {
    *(int *)(pbVar4 + 4) = *(int *)(pbVar4 + 4) + 1;
    if (*(uint *)(pbVar4 + 4) <= *(uint *)(_DAT_8c4727b4 + 0x10dc)) {
      return 0;
    }
    bVar5 = 0;
    uVar3 = 0xffffffff;
  }
  else {
    if (*(int *)(_DAT_8c4727b4 + 0x10c4) == 1) {
      pbVar2 = &bStack_3;
    }
    else {
      pbVar2 = abStack_2;
    }
    bVar5 = *pbVar2;
    uVar3 = 0;
    pbVar4[4] = 0;
    pbVar4[5] = 0;
    pbVar4[6] = 0;
    pbVar4[7] = 0;
  }
  pbVar4[1] = *pbVar4;
  *pbVar4 = bVar5;
  pbVar4[2] = (pbVar4[1] ^ *pbVar4) & *pbVar4;
  pbVar4[3] = (pbVar4[1] ^ *pbVar4) & ~*pbVar4;
  return uVar3;
}

__asm__(".globl _FUN_8c1f4f82\n.set _FUN_8c1f4f82, _FUN_8c1f4f82_def\n");
