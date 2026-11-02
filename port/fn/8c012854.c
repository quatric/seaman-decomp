#include "../decls.h"
undefined4 FUN_8c012854_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  ushort uVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  
  uVar1 = 0x80;
  uVar2 = 0;
  pbVar3 = ar4 + ar5 + -1;
  pbVar4 = pbVar3;
  for (; ar4 <= pbVar3; pbVar3 = pbVar3 + -1) {
    bVar5 = uVar2 != 0;
    uVar2 = *pbVar3 & uVar1;
    *pbVar3 = *pbVar3 << 1;
    if (bVar5) {
      *pbVar4 = *pbVar4 | 1;
    }
    pbVar4 = pbVar4 + -1;
  }
  if (uVar2 == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c012854\n.set _FUN_8c012854, _FUN_8c012854_def\n");
