#include "../decls.h"
int FUN_8c1212d4_def(int *ar4,byte *ar5,int ar6,int ar7,ushort *s0,uint s4,uint s8)

{
  byte bVar1;
  undefined *puVar2;
  int in_r0;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piStack_24;
  int *piStack_20;
  
  puVar2 = (&DATA_8c1293e4);
  uVar5 = ar7 + 1U >> 1;
  uVar6 = (uint)0xf0;
  iVar8 = *(int *)(&DATA_8c1293e0);
  if (ar6 == 0) {
    piStack_24 = (int *)0x0;
    if (s8 != 0) {
      do {
        bVar1 = *ar5;
        ar5 = ar5 + uVar5;
        uVar4 = bVar1 & uVar6;
        iVar8 = iVar8 + uVar4 * -2;
        uVar7 = 0;
        piStack_20 = ar4;
        if (s4 != 0) {
          do {
            uVar7 = uVar7 + 1;
            puVar3 = s0 + 1;
            in_r0 = ((int)*(short *)((uint)*s0 * 2 + iVar8) + uVar4) * 4;
            *piStack_20 = *piStack_20 + *(int *)(puVar2 + in_r0);
            s0 = puVar3;
            piStack_20 = piStack_20 + 1;
          } while (uVar7 < s4);
        }
        iVar8 = iVar8 + uVar4 * 2;
        piStack_24 = (int *)((int)piStack_24 + 1);
      } while (piStack_24 < s8);
    }
  }
  else {
    piStack_20 = (int *)0x0;
    if (s8 != 0) {
      do {
        bVar1 = *ar5;
        ar5 = ar5 + uVar5;
        uVar4 = (uint)bVar1 << 4 & uVar6;
        iVar8 = iVar8 + uVar4 * -2;
        uVar7 = 0;
        piStack_24 = ar4;
        if (s4 != 0) {
          do {
            uVar7 = uVar7 + 1;
            puVar3 = s0 + 1;
            in_r0 = ((int)*(short *)((uint)*s0 * 2 + iVar8) + uVar4) * 4;
            *piStack_24 = *piStack_24 + *(int *)(puVar2 + in_r0);
            s0 = puVar3;
            piStack_24 = piStack_24 + 1;
          } while (uVar7 < s4);
        }
        iVar8 = iVar8 + uVar4 * 2;
        piStack_20 = (int *)((int)piStack_20 + 1);
      } while (piStack_20 < s8);
    }
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1212d4\n.set _FUN_8c1212d4, _FUN_8c1212d4_def\n");
