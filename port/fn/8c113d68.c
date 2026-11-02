#include "../decls.h"
int FUN_8c113d68_def(int *ar4,int *ar5,int *ar6,undefined4 ar7,ushort *s0,ushort *s4,int s8)

{
  short sVar1;
  int in_r0;
  int iVar2;
  ushort *puVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  short sStack_1a;
  
  puVar3 = (ushort *)*ar6;
  piVar4 = (int *)*ar4;
  psVar6 = (short *)((uint)*s0 * 2 + s8);
  while (s0 < s4) {
    s0 = s0 + 1;
    *piVar4 = *ar5;
    piVar4 = piVar4 + 1;
    iVar5 = (uint)*s0 * 2 + s8;
    iVar2 = iVar5 - (int)psVar6;
    *ar5 = *ar5 + ((int)(iVar2 + (uint)(iVar2 < 0)) >> 1) + 2;
    for (; psVar6 < (short *)(iVar5 + -2); psVar6 = psVar6 + 1) {
      *puVar3 = *psVar6 << 2 | 2;
      puVar3 = puVar3 + 1;
    }
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
    *puVar3 = sVar1 << 2 | 1;
    sStack_1a = (short)((uint)ar7 >> 0x10);
    in_r0 = (int)sStack_1a;
    *(undefined4 *)(puVar3 + 1) = ar7;
    puVar3 = puVar3 + 3;
  }
  *ar6 = (int)puVar3;
  *ar4 = (int)piVar4;
  return in_r0;
}

__asm__(".globl _FUN_8c113d68\n.set _FUN_8c113d68, _FUN_8c113d68_def\n");
