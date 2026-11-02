#include "../decls.h"
int FUN_8c0b9fb4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint in_fr1;
  char cVar4;
  
  cVar4 = '\0';
  FUN_8c0243b0(ar4 + 0xb0,ar5,ar6,ar7);
  FUN_8c010120(ar4 + 0x1bc,Vec3_ctor_zero,Vec3_dtor,0x10,3);
  uVar3 = 0xf0;
  pcVar2 = FUN_8c0ba180;
  pcVar1 = FUN_8c0243b0;
  FUN_8c010120(ar4 + 0x1ec,FUN_8c0243b0,FUN_8c0ba180,0xf0,0x14);
  FUN_8c0e9910(ar4 + 0x14ac,pcVar1,pcVar2,uVar3);
  uVar3 = 0xf0;
  pcVar2 = FUN_8c0ba180;
  pcVar1 = FUN_8c0243b0;
  FUN_8c010120(ar4 + 0x14c4,FUN_8c0243b0,FUN_8c0ba180,0xf0,0x14);
  FUN_8c0e9910(ar4 + 0x2784,pcVar1,pcVar2,uVar3);
  uVar3 = 0xf0;
  pcVar2 = FUN_8c0ba180;
  pcVar1 = FUN_8c0243b0;
  FUN_8c010120(ar4 + 0x2794,FUN_8c0243b0,FUN_8c0ba180,0xf0,10);
  FUN_8c0fdc20(ar4 + 0x30f4,pcVar1,pcVar2,uVar3);
  FUN_8c01e4dc(ar4 + 0x4104,pcVar1,pcVar2,uVar3);
  FUN_8c014334(ar4,pcVar1,pcVar2,uVar3,s_SM2000US_USR_8c13c026);
  *(undefined2 *)(ar4 + 0x28) = 0;
  *(undefined1 *)(ar4 + 0xa8) = DAT_8c436548;
  *(undefined4 *)(ar4 + 0xac) = 0;
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x1b0) = 0;
    *(undefined4 *)(ar4 + 0x1a0) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x1b0) = (ulonglong)in_fr1;
    *(ulonglong *)(ar4 + 0x1a0) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(ar4 + 0x1ac) = 0;
  *(undefined4 *)(ar4 + 0x1a8) = 0;
  *(undefined1 *)(ar4 + 0x1b4) = 0;
  *(undefined4 *)(ar4 + 0x1b8) = 0;
  *(undefined4 *)(ar4 + 0x14b8) = 0;
  *(undefined4 *)(ar4 + 0x14b4) = 0;
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x14bc) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x14bc) = (ulonglong)in_fr1;
  }
  *(undefined1 *)(ar4 + 0x14c0) = 0;
  *(undefined4 *)(ar4 + 0x278c) = 0;
  *(undefined1 *)(ar4 + 0x2790) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0b9fb4\n.set _FUN_8c0b9fb4, _FUN_8c0b9fb4_def\n");
