#include "../decls.h"
undefined4 FUN_8c1f0a2a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *unaff_r13;
  
  uVar2 = 0xff;
  pbVar6 = (byte *)(ar5 + 2);
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    if (bVar1 != 0xff) goto LAB_8c1f0a54;
    ar4 = ar4 + -1;
  } while (0 < ar4);
  uVar3 = FUN_8c1f109c(0x3e,unaff_r13,ar6,ar7);
  if ((uint)*(ushort *)(unaff_r13 + 0x3e) == (uVar3 & 0xffff)) {
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *unaff_r13 = (char)uVar2;
      unaff_r13 = unaff_r13 + 1;
    }
    uVar4 = 1;
  }
  else {
LAB_8c1f0a54:
    uVar4 = 0;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c1f0a2a\n.set _FUN_8c1f0a2a, _FUN_8c1f0a2a_def\n");
