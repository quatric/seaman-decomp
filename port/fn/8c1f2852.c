#include "../decls.h"
undefined4 FUN_8c1f2852_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  code *pcVar3;
  
  a7 = 0;
  a6 = 0;
  a5 = 0;
  piVar1 = (int *)FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,0,0);
  if (piVar1 == (int *)0x0) {
    return 0xfffffff3;
  }
  if ((*(short *)(DAT_8c2739e0 + 0x3a) != 0) && (_DAT_8c470fb0 != _DAT_8c470fb4)) {
    *(undefined2 *)(DAT_8c2739e0 + 0x3a) = 0;
  }
  if ((*(short *)(DAT_8c2739e0 + 0x3a) == 0) || (*(int *)(DAT_8c2739e0 + 0x2c) < 0x10001)) {
    iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x34))(ar4,a5,a6,a7);
    if (iVar2 == 0) goto LAB_8c1f2948;
    piVar1[0xf] = iVar2;
    *(undefined2 *)(piVar1 + 0x14) = 4;
    *(undefined2 *)(piVar1 + 0x12) = 6;
  }
  else {
    if (_DAT_8c470fa0 == 1) {
      pcVar3 = *(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x28);
    }
    else {
      pcVar3 = *(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x2c);
    }
    ar4 = _DAT_8c470fa4;
    a5 = _DAT_8c470fa8;
    a6 = _DAT_8c470fac;
    iVar2 = (*pcVar3)(_DAT_8c470fa4,_DAT_8c470fa8,_DAT_8c470fac,a7);
    if (iVar2 == 0) goto LAB_8c1f2948;
    piVar1[0xf] = iVar2;
    *(undefined2 *)(piVar1 + 0x14) = 4;
    piVar1[1] = (int)&DAT_8c470fb0;
    *(undefined2 *)(piVar1 + 0x12) = 8;
  }
  *(int **)(*piVar1 + 0x1c) = piVar1;
  (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))(ar4,a5,a6,a7);
LAB_8c1f2948:
  if (iVar2 == 0) {
    return 0xfffffff3;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f2852\n.set _FUN_8c1f2852, _FUN_8c1f2852_def\n");
