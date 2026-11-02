#include "../decls.h"
undefined4 FUN_8c264784_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_8c263156(*(undefined4 *)(ar4 + 4));
  puVar1 = (&DATA_8c262a12);
  if (iVar2 == 1) {
    if (*(short *)(ar4 + 0x42) == -0x80) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(short *)(ar4 + 0x42);
    }
    uVar3 = FUN_8c262a12(*(undefined4 *)(ar4 + 0xc),0,iVar2);
  }
  else {
    if (*(short *)(ar4 + 0x42) == -0x80) {
      iVar2 = -0xf;
    }
    else {
      iVar2 = (int)*(short *)(ar4 + 0x42);
    }
    FUN_8c262a12(*(undefined4 *)(ar4 + 0xc),0,iVar2);
    if (*(short *)(ar4 + 0x44) == -0x80) {
      iVar2 = 0xf;
    }
    else {
      iVar2 = (int)*(short *)(ar4 + 0x44);
    }
    uVar3 = (*(code *)puVar1)(*(undefined4 *)(ar4 + 0xc),1,iVar2);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c264784\n.set _FUN_8c264784, _FUN_8c264784_def\n");
