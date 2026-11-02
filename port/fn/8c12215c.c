#include "../decls.h"
undefined4 FUN_8c12215c_def(int ar4,undefined4 ar5,int ar6,int ar7,int s0)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint a5;
  
  puVar3 = (&FUN_8c111cdc);
  puVar2 = (&FUN_8c1204c4);
  puVar1 = (&FUN_8c120284);
  iVar8 = ar6 * 4;
  uVar6 = (uint)*(ushort *)(*(int *)(ar4 + 0x6c) + 0xc);
  iVar5 = *(int *)(0x118 + ar4 + iVar8);
  a5 = ar7 * uVar6 + iVar5;
  uVar6 = uVar6 * s0 + iVar5;
  if (*(uint *)(0x124 + ar4 + iVar8) < a5) {
    a5 = *(uint *)(0x124 + ar4 + iVar8);
  }
  if (*(uint *)(0x124 + ar4 + iVar8) < uVar6) {
    uVar6 = *(uint *)(0x124 + ar4 + iVar8);
  }
  while( true ) {
    if (uVar6 <= a5) {
      return 0;
    }
    uVar7 = 1;
    uVar4 = (*(code *)puVar3)(*(undefined4 *)(ar4 + 0x6c),a5,1,ar7);
    if ((uVar4 & 0xff) == 0) break;
    a5 = a5 + *(ushort *)(*(int *)(ar4 + 0x6c) + 0xc);
    uVar4 = (*(code *)puVar1)(ar4,ar5,uVar7,ar7);
    if ((uVar4 & 0xff) != 0) {
      return 1;
    }
  }
  uVar7 = (*(code *)puVar2)(ar4 + 0x48,1,uVar7,ar7);
  return uVar7;
}

__asm__(".globl _FUN_8c12215c\n.set _FUN_8c12215c, _FUN_8c12215c_def\n");
