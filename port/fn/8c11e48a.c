#include "../decls.h"
uint FUN_8c11e48a_def(int ar4,undefined4 *ar5,uint *ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *a6;
  
  a6 = ar6;
  iVar1 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if ((ar5 == (undefined4 *)0x0) || (ar6 == (uint *)0x0)) {
      uVar2 = FUN_8c1204c4(ar4 + 0x48,0x13,a6,ar7);
      uVar2 = uVar2 & 0xff;
    }
    else {
      iVar1 = *(int *)(0xfc + ar4);
      uVar2 = (uint)(*(int *)(0x100 + ar4) != 0);
      *ar6 = uVar2;
      if (uVar2 == 0) {
        *ar5 = 0;
      }
      else {
        puVar3 = (undefined4 *)(**(code **)(iVar1 + 0x14))(8,0xf4 + ar4,a6,ar7);
        *ar5 = puVar3;
        if (*(int *)(0x100 + ar4) != 0) {
          *puVar3 = *(undefined4 *)(0x100 + ar4);
        }
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11e48a\n.set _FUN_8c11e48a, _FUN_8c11e48a_def\n");
