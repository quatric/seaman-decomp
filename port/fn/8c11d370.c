#include "../decls.h"
uint FUN_8c11d370_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar3 == 0) {
    if (*(short *)(ar4 + 0x3e) == 2) {
      iVar3 = (int)0x118;
      *(undefined4 *)(iVar3 + 0xc + ar4) = *(undefined4 *)(iVar3 + ar4);
      *(undefined4 *)(iVar3 + 0x24 + ar4) = 0;
      *(undefined4 *)(iVar3 + 0x28 + ar4) = 0;
      *(undefined2 *)(iVar3 + 0x2c + ar4) = 0;
      puVar1 = (&FUN_8c120348);
      iVar3 = (int)0x22a;
      *(undefined2 *)(iVar3 + ar4) = 0;
      *(undefined2 *)(iVar3 + 0x1a + ar4) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0;
      *(undefined4 *)(0x10c + ar4) = 3;
      cVar2 = (*(code *)puVar1)(ar4 + 0x48,1,0);
      if ((cVar2 == '\0') && (*(int *)(0x88 + ar4) == 0)) {
        FUN_8c120348(ar4 + 0x48,2,0);
      }
      uVar4 = *(uint *)(ar4 + 0x40);
    }
    else {
      uVar4 = FUN_8c1204c4(ar4 + 0x48,7);
      uVar4 = uVar4 & 0xff;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c11d370\n.set _FUN_8c11d370, _FUN_8c11d370_def\n");
