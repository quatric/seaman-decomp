#include "../decls.h"
undefined4 FUN_8c11d14c_def(int ar4,undefined4 *ar5,int *ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 a6;
  int *a7;
  int iStack_20;
  undefined4 *puStack_1c;
  int *piStack_18;
  int iStack_14;
  
  a7 = &iStack_20;
  a6 = 0;
  iStack_20 = 0;
  iStack_14 = *(int *)(0xfc + ar4);
  puStack_1c = ar5;
  piStack_18 = ar6;
  uVar1 = FUN_8c120348(ar4 + 0x48,0x27,0,&iStack_20);
  if ((uVar1 & 0xff) == 0) {
    iStack_20 = iStack_20 + 0x88;
    puVar2 = (undefined4 *)(**(code **)(iStack_14 + 0x14))(iStack_20,0xf4 + ar4,a6,a7);
    iVar3 = (int)0x100;
    puVar2[1] = iStack_20;
    *puVar2 = 4;
    memmove(puVar2 + 2,**(int **)(iVar3 + ar4) + 8,(int)0x80,a7);
    iStack_20 = 0;
    uVar1 = (*(code *)(&FUN_8c120348))
                      (ar4 + 0x48,0x27,(int)(puVar2 + 2) + (int)0x80,&iStack_20);
    if ((uVar1 & 0xff) == 0) {
      *piStack_18 = iStack_20 + 0x88;
      *puStack_1c = puVar2;
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11d14c\n.set _FUN_8c11d14c, _FUN_8c11d14c_def\n");
