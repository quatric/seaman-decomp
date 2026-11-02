#include "../decls.h"
undefined4 FUN_8c26bbe2_def(int ar4,int ar5,int *ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *a6;
  undefined4 ar7_00;
  
  if ((ar5 < 0) || (3 < ar5)) {
    if (*(int *)(ar4 + 0x28) != 0) {
                    
                    
      uVar1 = (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd);
      return uVar1;
    }
  }
  else if ((0 < ar6[1]) && (*ar6 != 0)) {
    a6 = ar6;
    uVar1 = FUN_8c26b960(ar4,ar5,ar6,ar7);
    ar7_00 = 0;
    piVar2 = (int *)(ar5 * 4 + ar4 + 0x18);
    piVar3 = (int *)0x0;
    while (*piVar2 != 0) {
      piVar2 = (int *)*piVar2;
      piVar3 = piVar2;
      a6 = piVar2;
    }
    if (((*(char *)(ar4 + 5) == '\x01') && (piVar3 != (int *)0x0)) &&
       (piVar3[2] + piVar3[3] == *ar6)) {
      piVar3[3] = piVar3[3] + ar6[1];
    }
    else {
      puVar4 = *(undefined4 **)(ar4 + 0x14);
      if (puVar4 == (undefined4 *)0x0) {
        if (*(int *)(ar4 + 0x28) != 0) {
          (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,a6,0);
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x14) = *puVar4;
        *puVar4 = 0;
        FUN_8c010794(8,puVar4 + 2,ar6);
        *piVar2 = (int)puVar4;
      }
    }
    uVar1 = FUN_8c26b978(ar4,uVar1,a6,ar7_00);
    return uVar1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c26bbe2\n.set _FUN_8c26bbe2, _FUN_8c26bbe2_def\n");
