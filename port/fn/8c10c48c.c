#include "../decls.h"
undefined4 FUN_8c10c48c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *unaff_r14;
  float extraout_fr0;
  
  iVar3 = *unaff_r14;
  FUN_8c120550(ar4,2,ar6,ar7);
  *(short *)((int)unaff_r14 + 0x2e) = (short)(int)extraout_fr0;
  *(short *)(unaff_r14 + 0xc) = *(short *)((int)unaff_r14 + 0x2e) * 3 + 3;
  *(short *)(*(int *)unaff_r14[4] + 0xc) = ((short)unaff_r14[0xc] + -1) * 4;
  iVar3 = (**(code **)(iVar3 + 0x14))(iVar3,(uint)*(ushort *)(unaff_r14 + 0xc) << 3,4,ar7);
  unaff_r14[0x15] = iVar3;
  if (unaff_r14[0x15] == 0) {
    uVar1 = 2;
  }
  else {
    iVar2 = unaff_r14[0x15];
    iVar3 = 0;
    do {
      unaff_r14[iVar3 + 0xd] = iVar2;
      iVar2 = iVar2 + (uint)*(ushort *)(unaff_r14 + 0xc) * 4;
      unaff_r14[iVar3 + 0xe] = iVar2;
      iVar3 = iVar3 + 2;
      iVar2 = iVar2 + (uint)*(ushort *)(unaff_r14 + 0xc) * 4;
    } while (iVar3 < 8);
    *(undefined2 *)(unaff_r14 + 0xb) = 0;
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c10c48c\n.set _FUN_8c10c48c, _FUN_8c10c48c_def\n");
