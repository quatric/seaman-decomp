#include "../decls.h"
uint FUN_8c10ea62_def(int ar4,uint ar5,undefined2 *ar6,int *ar7)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 ar6_00;
  undefined2 *ar6_01;
  undefined4 *puStack_1c;
  
  uVar1 = ar5 & 0xff;
  if (uVar1 == 2) {
    uVar5 = 1;
  }
  else {
    if (uVar1 != 3) {
      if (uVar1 == 10) {
        if (ar6 == (undefined2 *)0x0) {
          FUN_8c10d29c(ar4,ar5,0,ar7);
          FUN_8c10d1bc(ar4,ar5,ar6,ar7);
          return 1;
        }
        FUN_8c10d2f0(ar4,*ar7 + (int)ar6,ar6,ar7);
        iVar2 = (int)0x90;
        *ar7 = *ar7 + 8;
        iVar4 = 0;
        if (*(short *)(iVar2 + ar4) == 0) {
          return 1;
        }
        do {
          iVar2 = iVar4 * 0xc;
          iVar4 = iVar4 + 1;
          *ar7 = (uint)*(ushort *)(iVar2 + *(int *)(0x84 + ar4) + 4) * 2 + *ar7;
        } while (iVar4 < (int)(uint)*(ushort *)(0x90 + ar4));
        return 1;
      }
      if (uVar1 == 0xb) {
        if (ar6 != (undefined2 *)0x0) {
          FUN_8c10d366(ar4,*ar7 + (int)ar6,ar6,ar7);
        }
        iVar2 = (int)0x90;
        *ar7 = *ar7 + 8;
        iVar4 = 0;
        if (*(short *)(iVar2 + ar4) == 0) {
          return 1;
        }
        do {
          iVar2 = iVar4 * 0xc;
          iVar4 = iVar4 + 1;
          *ar7 = (uint)*(ushort *)(iVar2 + *(int *)(0x84 + ar4) + 4) * 2 + *ar7;
        } while (iVar4 < (int)(uint)*(ushort *)(0x90 + ar4));
        return 1;
      }
      if (uVar1 == 0xd) {
        ar6[1] = *(undefined2 *)(0x96 + ar4);
        *ar6 = *(undefined2 *)(0x94 + ar4);
        return 1;
      }
      if (uVar1 == 0xf) {
        *(undefined2 *)(0x96 + ar4) = ar6[1];
        iVar2 = (int)0x94;
        *(undefined2 *)(iVar2 + ar4) = *ar6;
        if (*(int *)(iVar2 + 0x20 + ar4) == 0) {
          return 1;
        }
        FUN_8c10d3ec(ar4,ar5,ar6,ar7);
        return 1;
      }
      if (uVar1 == 0x10) {
        ar6_01 = ar6;
        uVar1 = FUN_8c10d458(ar4,ar6,ar6,ar7);
        puVar3 = (&DATA_8c10dda0);
        if ((uVar1 & 0xff) == 0) {
          FUN_8c10d29c(ar4,ar6,ar6_01,ar7);
          puVar3 = (&FUN_8c10e818);
        }
        *(undefined **)(ar4 + 0x18) = puVar3;
        return 1;
      }
      if (uVar1 == 0x16) {
        FUN_8c10d29c(ar4,ar5,ar6,ar7);
        return 1;
      }
      if (uVar1 == 0x17) {
        puStack_1c = *(undefined4 **)(ar4 + 0xc);
        ar6_00 = puStack_1c[1];
        uVar5 = 7;
LAB_8c10eaee:
        uVar5 = FUN_8c1113d0(*puStack_1c,uVar5,ar6_00,ar6);
        return uVar5;
      }
      if (uVar1 == 0x18) {
        puStack_1c = *(undefined4 **)(ar4 + 0xc);
        uVar5 = 6;
        ar6 = (undefined2 *)0x0;
        ar6_00 = puStack_1c[1];
        goto LAB_8c10eaee;
      }
      if (uVar1 != (int)0xff) {
        return 0;
      }
      uVar1 = FUN_8c10ddaa(ar4,ar5,ar6,ar7);
      goto LAB_8c10ec56;
    }
    uVar5 = 0;
  }
  uVar1 = FUN_8c10ea24(ar4,uVar5,ar6,ar7);
LAB_8c10ec56:
  return (uint)((uVar1 & 0xff) == 0);
}

__asm__(".globl _FUN_8c10ea62\n.set _FUN_8c10ea62, _FUN_8c10ea62_def\n");
