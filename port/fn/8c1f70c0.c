#include "../decls.h"
undefined4 FUN_8c1f70c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  char *in_r2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = 0x8c4748a8;
  if (*in_r2 == '\0') {
    *(undefined4 *)0x8c4748a8 = 5;
LAB_8c1f7102:
    uVar4 = 0;
  }
  else {
    if ((*(undefined4 *)0x8c4748b4 == 0) || (*(undefined4 *)0x8c4748b8 == 0)) {
      uVar4 = 0;
      uVar3 = 0xb;
    }
    else {
      iVar2 = FUN_8c1f6b14(*(undefined4 *)0x8c4748ac,*(undefined4 *)0x8c4748b0,*(undefined4 *)0x8c4748b4,*(undefined4 *)0x8c4748b8);
      if (iVar2 != 0) goto LAB_8c1f7102;
      uVar3 = 0xd;
      uVar4 = 1;
    }
    *puVar1 = uVar3;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c1f70c0\n.set _FUN_8c1f70c0, _FUN_8c1f70c0_def\n");
