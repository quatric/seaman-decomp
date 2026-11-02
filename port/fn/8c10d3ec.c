#include "../decls.h"
uint FUN_8c10d3ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  short sVar4;
  ushort *puVar5;
  short *psVar6;
  
  iVar1 = (int)0xb4;
  puVar3 = *(ushort **)(iVar1 + ar4);
  puVar5 = *(ushort **)(iVar1 + -0xc + ar4);
  uVar2 = (uint)0xb0;
  psVar6 = *(short **)(uVar2 + ar4);
  puVar5 = puVar3 + ((uint)puVar5[*(ushort *)(iVar1 + -0x18 + ar4)] - (uint)*puVar5);
  for (; puVar3 < puVar5; puVar3 = puVar3 + 1) {
    uVar2 = (uint)(short)*puVar3;
    sVar4 = (short)((int)uVar2 >> 2);
    if ((uVar2 & 1) != 0) {
      uVar2 = (uint)0x96;
      sVar4 = sVar4 + *(short *)(uVar2 + ar4);
    }
    if ((*puVar3 & 2) != 0) {
      uVar2 = (uint)0x94;
      sVar4 = sVar4 + *(short *)(uVar2 + ar4);
    }
    *psVar6 = sVar4;
    psVar6 = psVar6 + 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10d3ec\n.set _FUN_8c10d3ec, _FUN_8c10d3ec_def\n");
