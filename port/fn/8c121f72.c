#include "../decls.h"
undefined4 FUN_8c121f72_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 a5;
  int ar6_00;
  undefined4 uVar3;
  int a4;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  uVar3 = 1;
  a4 = *(int *)(0x108 + ar4);
  ar6_00 = 0x248 + ar4;
  uVar1 = FUN_8c120348(ar4 + 0x48,0xe,ar6_00,1);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = (int)0x234;
    a5 = 0;
    *(undefined1 *)(iVar2 + ar4) = 1;
    *(undefined2 *)(iVar2 + 0x10 + ar4) = 0;
    *(undefined **)(0xdc + ar4) = (&FUN_8c121e40);
    iVar2 = (int)0x240;
    uVar1 = 0;
    if (*(int *)(iVar2 + ar4) != 0) {
      do {
        *(undefined4 *)(uVar1 * 8 + 0x268 + ar4 + 4) = 0;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(iVar2 + ar4));
    }
    iVar2 = (**(code **)(a4 + 0x50))(a4,0,ar6_00,uVar3);
    uStack_18 = (**(code **)(0x94 + a4))(a4,a5,ar6_00,uVar3);
    iStack_1c = 1;
    iStack_20 = iVar2;
    uVar3 = (**(code **)(a4 + 0x2c))(a4,a5,ar6_00,uVar3);
    iStack_14 = (int)0x280;
    *(short *)(0x280 + ar4) = (short)uVar3;
    iStack_14 = iStack_14 + ar4;
    uVar1 = FUN_8c120348(ar4 + 0x48,0xf,&iStack_20,(iStack_1c + iVar2) * 2 + 0x10);
    if ((uVar1 & 0xff) == 0) {
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c121f72\n.set _FUN_8c121f72, _FUN_8c121f72_def\n");
