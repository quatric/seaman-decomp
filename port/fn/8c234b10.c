#include "../decls.h"
undefined4 FUN_8c234b10_def(undefined4 *ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  iVar2 = ar5;
  if (ar6 == 0) {
    FUN_8c236454(ar4,ar5,0,ar7);
    uVar3 = 0x80002;
    FUN_8c237124(0x80002,ar5,ar6,ar7,iVar2);
    iVar1 = FUN_8c236510(uVar3,ar5,ar6,ar7);
  }
  else {
    FUN_8c236454(ar4,ar5,ar6,ar7);
    uVar3 = 0x2100002;
    FUN_8c237124(0x2100002,ar5,ar6,ar7,iVar2);
    iVar1 = FUN_8c2365e2(uVar3,ar5,ar6,ar7);
  }
  iVar1 = iVar1 + 0x1c;
  while( true ) {
    uVar3 = *ar4;
    ar5_00 = ar4[1];
    ar6_00 = ar4[2];
    ar7_00 = ar4[3];
    ar4 = ar4 + 4;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) break;
    *(undefined4 *)(iVar1 + -4) = ar7_00;
    *(undefined4 *)(iVar1 + -0x10) = ar6_00;
    *(undefined4 *)(iVar1 + -0x14) = ar5_00;
    *(undefined4 *)(iVar1 + -0x18) = uVar3;
    *(undefined4 *)(iVar1 + -0x1c) = 0xe0000000;
    iVar1 = iVar1 + 0x20;
  }
  *(undefined4 *)(iVar1 + -4) = ar7_00;
  *(undefined4 *)(iVar1 + -0x10) = ar6_00;
  *(undefined4 *)(iVar1 + -0x14) = ar5_00;
  *(undefined4 *)(iVar1 + -0x18) = uVar3;
  *(undefined4 *)(iVar1 + -0x1c) = 0xf0000000;
  iVar1 = iVar1 + 4;
  FUN_8c2370dc(iVar1,ar5_00,ar6_00,ar7_00);
  uVar3 = FUN_8c2364b2(iVar1,ar5_00,ar6_00,ar7_00);
  return uVar3;
}

__asm__(".globl _FUN_8c234b10\n.set _FUN_8c234b10, _FUN_8c234b10_def\n");
