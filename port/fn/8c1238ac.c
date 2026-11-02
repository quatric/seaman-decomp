#include "../decls.h"
undefined4 FUN_8c1238ac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  short sVar2;
  uint uVar3;
  uint a5;
  int unaff_r14;
  
  if ((*(char *)(in_r0 + unaff_r14) != '\0') &&
     (sVar2 = *(short *)(0x4be + unaff_r14) + -1,
     *(short *)(0x4be + unaff_r14) = sVar2, sVar2 == 0)) {
    iVar1 = (int)0x4bc;
    *(undefined1 *)(iVar1 + unaff_r14) = 0;
    *(undefined4 *)(iVar1 + 0x10 + unaff_r14) = 0;
    *(undefined2 *)(iVar1 + -8 + unaff_r14) = 0;
  }
  if (*(short *)(0x4c0 + unaff_r14) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  a5 = (uint)*(ushort *)(0x4b4 + unaff_r14);
  if ((uVar3 <= a5) && (a5 != *(ushort *)(0x4b6 + unaff_r14))) {
    if (*(int *)(0x4cc + unaff_r14) == 0) {
      uVar3 = FUN_8c1235fc(unaff_r14,a5,ar6,ar7);
      if ((uVar3 & 0xff) != 0) {
        return 1;
      }
    }
    else {
      FUN_8c12381c(unaff_r14,a5,ar6,ar7);
    }
  }
  *(undefined2 *)(0x4b4 + 2 + unaff_r14) = *(undefined2 *)(0x4b4 + unaff_r14);
  return 0;
}

__asm__(".globl _FUN_8c1238ac\n.set _FUN_8c1238ac, _FUN_8c1238ac_def\n");
