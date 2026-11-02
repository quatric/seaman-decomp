#include "../decls.h"
undefined4 FUN_8c1f6e5e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 uVar4;
  
  puVar1 = 0x8c4748b0;
  uVar4 = 1;
  memset(*(undefined4 *)0x8c4748b0,(int)0xff,0x3c,ar7);
  ar6_00 = 0xf;
  FUN_8c23c7f4(*puVar1,ar5,0xf,ar7);
  piVar2 = 0x8c4748c0;
  ar5_00 = *puVar1;
  iVar3 = FUN_8c1f884c(ar4,ar5_00,ar6_00,ar7);
  if (iVar3 == 0) {
    *piVar2 = *piVar2 + -1;
  }
  else if (iVar3 != 3) {
    FUN_8c1f6dcc(0xfffffffd,ar5_00,ar6_00,ar7);
    iVar3 = FUN_8c1f884c(ar4,*puVar1,ar6_00,ar7);
    if (iVar3 == 0) {
      *piVar2 = *piVar2 + -1;
    }
    else if (iVar3 != 3) {
      uVar4 = 0;
      *(undefined4 *)0x8c4748a8 = 8;
    }
  }
  return uVar4;
}

__asm__(".globl _FUN_8c1f6e5e\n.set _FUN_8c1f6e5e, _FUN_8c1f6e5e_def\n");
