#include "../decls.h"
undefined4 FUN_8c11cc2c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int a4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(int *)(0x108 + ar4) != 0) {
    a4 = *(int *)(0x108 + ar4);
    uVar4 = ar5;
    uVar1 = (**(code **)(a4 + 0x3c))(a4,ar5,ar6,ar7);
    puVar2 = (uint *)(**(code **)(*(int *)(0x108 + ar4) + 0x6c))
                               (*(int *)(0x108 + ar4),uVar4,ar6,ar7);
    uVar4 = 0;
    puVar3 = puVar2;
    if (uVar1 != 0) {
      do {
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 | *puVar3;
        puVar3 = puVar3 + 2;
      } while (uVar4 < uVar1);
    }
    if (((ar5 & uVar5) == 0) || ((ar5 != 0xffffffff && ((~uVar5 & ar5) != 0)))) {
      return 1;
    }
    uVar5 = 0;
    do {
      uVar4 = (uint)((puVar2[uVar5 * 2] & ar5) != 0);
      if ((uVar4 != *(byte *)(0xe4 + ar4 + uVar5)) &&
         (uVar4 = FUN_8c11cbbc(ar4,uVar5,uVar4,ar7), (uVar4 & 0xff) != 0)) {
        return 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 3);
  }
  return 0;
}

__asm__(".globl _FUN_8c11cc2c\n.set _FUN_8c11cc2c, _FUN_8c11cc2c_def\n");
