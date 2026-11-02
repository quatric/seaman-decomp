#include "../decls.h"
undefined4 Class_1297f4_m0_014cf0_def(float ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr1;
  float fVar2;
  float fVar3;
  float in_fr4;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  pure_virtual_stub(ar4,ar5,ar6,ar7);
  *(short *)((int)ar4 + 0x6c) = *(short *)((int)ar4 + 0x6c) + 1;
  if (cVar5 == '\0') {
    in_fr1 = *(float *)((int)ar4 + 8);
  }
  uVar1 = 0;
  fVar2 = in_fr4;
  fVar3 = ar4;
  if (cVar5 == '\0') {
    fVar2 = in_fr1;
    fVar3 = in_fr4;
  }
  if (cVar4 == '\0' && fVar2 < fVar3) {
    uVar1 = FUN_8c014d90(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _Class_1297f4_m0_014cf0\n.set _Class_1297f4_m0_014cf0, _Class_1297f4_m0_014cf0_def\n");
