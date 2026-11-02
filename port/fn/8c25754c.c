#include "../decls.h"
undefined4 FUN_8c25754c_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  undefined4 uVar2;
  undefined *a4;
  code *pcVar3;
  uint ar6_00;
  code *pcVar4;
  
  iVar1 = ar5;
  ar6_00 = ar6;
  FUN_8c236454(ar4,ar5,ar6,ar7);
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 0x18),iVar1,ar6_00,ar7);
  FUN_8c2371be((int)*(short *)(*(int *)(ar4 + 0x1c) + ar5 * 0x14 + 0x10),iVar1,ar6_00,ar7);
  if ((ar6 & 0x20) == 0) {
    uVar2 = 0x80028;
    pcVar3 = FUN_8c236b3c;
  }
  else {
    uVar2 = 0x2100028;
    pcVar3 = FUN_8c236c38;
  }
  pcVar4 = pcVar3;
  FUN_8c237124(uVar2,pcVar3,ar6_00,ar7,pcVar3);
  a4 = &DAT_8c4aa52c;
  if ((ar6 & 2) == 0) {
    a4 = &DAT_8c271de8;
  }
  (*pcVar4)(a4,pcVar3,ar6_00,ar7);
  pcVar3 = FUN_8c257610;
  if ((ar6 & 0x10) == 0) {
    pcVar3 = FUN_8c2578ac;
  }
  iVar1 = (*pcVar3)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    ar4 = ar4_00;
    FUN_8c2370dc(ar4_00,ar5,ar6,ar7);
  }
  uVar2 = FUN_8c2364b2(ar4,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c25754c\n.set _FUN_8c25754c, _FUN_8c25754c_def\n");
