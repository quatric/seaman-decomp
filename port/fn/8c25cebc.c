#include "../decls.h"
undefined4 FUN_8c25cebc_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint a6;
  int iVar4;
  
  puVar1 = (&pvr_20a844);
  iVar4 = ar6 * 0x20;
  (*(code *)(&pvr_20a844))
            ((int)0x124,*(undefined4 *)(0x8c4aa024 + iVar4),ar6,ar7);
  (*(code *)puVar1)((int)0x12c,*(undefined4 *)(0x8c4aa028 + iVar4),ar6,ar7);
  (*(code *)puVar1)((int)0x128,*(undefined4 *)(0x8c4aa030 + iVar4),ar6,ar7);
  (*(code *)puVar1)((int)0x130,*(undefined4 *)(0x8c4aa034 + iVar4),ar6,ar7);
  (*(code *)puVar1)((int)0x13c,(ar5 + -1) * 0x10000 + ar4 + -1,ar6,ar7);
  uVar3 = *(undefined4 *)0x8c4aa05c & 3 | (*(undefined4 *)0x8c4aa060 & 3) << 4 | (*(undefined4 *)0x8c4aa064 & 3) << 8 |
          (*(undefined4 *)0x8c4aa068 & 3) << 0xc;
  if (*(undefined4 *)0x8c4a9bac == 6) {
    a6 = (*(undefined4 *)0x8c4aa058 & 1) << 0x14;
    uVar3 = uVar3 | a6 | (*(undefined4 *)0x8c4aa06c & 3) << 0x10;
  }
  else {
    a6 = (*(undefined4 *)0x8c4aa058 & 1) << 0x10;
    uVar3 = uVar3 | a6;
  }
  (*(code *)puVar1)((int)0x140,uVar3,a6,ar7);
  uVar2 = (*(code *)puVar1)((int)0x144,0x80000000,a6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c25cebc\n.set _FUN_8c25cebc, _FUN_8c25cebc_def\n");
