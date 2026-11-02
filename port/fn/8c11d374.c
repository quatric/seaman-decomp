#include "../decls.h"
uint FUN_8c11d374_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_r14;
  
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    if (*(short *)(ar4 + 0x3e) == 2) {
      iVar2 = (int)0x118;
      *(undefined4 *)(iVar2 + 0xc + unaff_r14) = *(undefined4 *)(iVar2 + unaff_r14);
      *(undefined4 *)(iVar2 + 0x24 + unaff_r14) = 0;
      *(undefined4 *)(iVar2 + 0x28 + unaff_r14) = 0;
      *(undefined2 *)(iVar2 + 0x2c + unaff_r14) = 0;
      puVar1 = (&FUN_8c120348);
      iVar2 = (int)0x22a;
      *(undefined2 *)(iVar2 + unaff_r14) = 0;
      *(undefined2 *)(iVar2 + 0x1a + unaff_r14) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0;
      *(undefined4 *)(0x10c + unaff_r14) = 3;
      uVar3 = (*(code *)puVar1)(unaff_r14 + 0x48,1,0,0);
      if (((uVar3 & 0xff) == 0) && (*(int *)(0x88 + unaff_r14) == 0)) {
        FUN_8c120348(unaff_r14 + 0x48,2,0,0);
      }
      uVar3 = *(uint *)(ar4 + 0x40);
    }
    else {
      uVar3 = FUN_8c1204c4(unaff_r14 + 0x48,7,ar6,ar7);
      uVar3 = uVar3 & 0xff;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11d374\n.set _FUN_8c11d374, _FUN_8c11d374_def\n");
