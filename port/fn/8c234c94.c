#include "../decls.h"
undefined4 FUN_8c234c94_def(undefined4 *ar4,int ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 uVar4;
  
  if (ar7 == 0) {
    iVar1 = ar5;
    uVar3 = ar6;
    FUN_8c236454(ar4,ar5,ar6,0);
    FUN_8c237124(0x8000a,iVar1,ar6,ar7,uVar3);
    FUN_8c23732a(uVar3,iVar1,ar6,ar7);
    iVar1 = FUN_8c23666c(uVar3,iVar1,ar6,ar7);
  }
  else {
    iVar1 = ar5;
    uVar3 = ar6;
    FUN_8c236454(ar4,ar5,ar6,ar7);
    FUN_8c237124(0x210000a,iVar1,ar6,ar7,uVar3);
    FUN_8c23732a(uVar3,iVar1,ar6,ar7);
    iVar1 = FUN_8c236718(uVar3,iVar1,ar6,ar7);
  }
  iVar1 = iVar1 + 0x1c;
  while( true ) {
    uVar3 = *ar4;
    ar5_00 = ar4[1];
    ar6_00 = ar4[2];
    ar7_00 = ar4[3];
    uVar4 = ar4[4];
    puVar2 = ar4 + 5;
    ar4 = ar4 + 6;
    ar5 = ar5 + -1;
    if (ar5 == 0) break;
    *(undefined4 *)(iVar1 + -4) = *puVar2;
    *(undefined4 *)(iVar1 + -8) = uVar4;
    *(undefined4 *)(iVar1 + -0xc) = ar7_00;
    *(undefined4 *)(iVar1 + -0x10) = ar6_00;
    *(undefined4 *)(iVar1 + -0x14) = ar5_00;
    *(undefined4 *)(iVar1 + -0x18) = uVar3;
    *(undefined4 *)(iVar1 + -0x1c) = 0xe0000000;
    iVar1 = iVar1 + 0x20;
  }
  *(undefined4 *)(iVar1 + -4) = *puVar2;
  *(undefined4 *)(iVar1 + -8) = uVar4;
  *(undefined4 *)(iVar1 + -0xc) = ar7_00;
  *(undefined4 *)(iVar1 + -0x10) = ar6_00;
  *(undefined4 *)(iVar1 + -0x14) = ar5_00;
  *(undefined4 *)(iVar1 + -0x18) = uVar3;
  *(undefined4 *)(iVar1 + -0x1c) = 0xf0000000;
  iVar1 = iVar1 + 4;
  FUN_8c2370dc(iVar1,ar5_00,ar6_00,ar7_00);
  uVar3 = FUN_8c2364b2(iVar1,ar5_00,ar6_00,ar7_00);
  return uVar3;
}

__asm__(".globl _FUN_8c234c94\n.set _FUN_8c234c94, _FUN_8c234c94_def\n");
