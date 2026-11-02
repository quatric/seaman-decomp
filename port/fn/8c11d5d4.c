#include "../decls.h"
undefined4 FUN_8c11d5d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 a4;
  uint a5;
  int iVar4;
  undefined4 uVar5;
  undefined4 ar7_00;
  
  sVar1 = *(short *)(ar4 + 0x3e);
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 0;
    if (((sVar1 != 3) && (sVar1 != 4)) && (sVar1 != 7)) {
      return 0;
    }
    ar7_00 = 0;
    uVar5 = 0;
    uVar3 = FUN_8c120348(ar4 + 0x48,3,0,0);
    if (((uVar3 & 0xff) == 0) &&
       (uVar3 = FUN_8c120284(ar4,0,uVar5,ar7_00), (uVar3 & 0xff) == 0)) {
      a5 = (uint)*(ushort *)(0x244 + ar4);
      uVar3 = FUN_8c11d488(ar4,a5,uVar5,ar7_00);
      if (((uVar3 & 0xff) == 0) &&
         (((*(short *)(0x144 + ar4) == 0 ||
           (((*(short *)(0x144 + ar4) != 1 ||
             (uVar3 = FUN_8c11eb8c(ar4,a5,uVar5,ar7_00), (uVar3 & 0xff) == 0)) &&
            ((*(short *)(0x144 + ar4) != 2 ||
             (uVar3 = FUN_8c11ec7c(ar4,a5,uVar5,ar7_00), (uVar3 & 0xff) == 0)))))) &&
          (*(int *)(0x148 + ar4) != 4)))) {
        iVar2 = (int)0x148;
        iVar4 = (int)0xf4;
        a4 = *(undefined4 *)(iVar2 + ar4);
        *(undefined4 *)(iVar2 + ar4) = 4;
        uVar3 = (**(code **)(iVar2 + -0x7c + ar4))(a4,iVar4 + ar4,uVar5,ar7_00);
        if ((uVar3 & 0xff) != 0) goto LAB_8c11d6c2;
      }
    }
    uVar5 = *(undefined4 *)(ar4 + 0x40);
  }
  else {
LAB_8c11d6c2:
    uVar5 = 1;
  }
  return uVar5;
}

__asm__(".globl _FUN_8c11d5d4\n.set _FUN_8c11d5d4, _FUN_8c11d5d4_def\n");
