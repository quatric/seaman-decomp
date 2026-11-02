#include "../decls.h"
undefined4 FUN_8c035c00_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 in_dr0;
  code *pcVar3;
  char cVar4;
  char cVar5;
  
  fVar2 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar5 = '\0';
  cVar4 = '\0';
  uVar1 = FUN_8c035ca0(ar4[5],ar5,ar6,ar7);
  if ((char)uVar1 < '\x04') {
    (**(code **)(*(int *)*ar4 + 0x188))((int *)*ar4,ar5,ar6,ar7);
    if (cVar5 == '\0') {
      pcVar3 = (code *)0x42200000;
    }
    else {
      fVar2 = 40.0;
      pcVar3 = FUN_8c035c88;
    }
    if (cVar4 == '\0' && (float)(uint)pcVar3 < fVar2) {
      FUN_8c035c88(ar4[5],ar5,ar6,ar7);
      FUN_8c035c70(ar4[5],ar5,ar6,ar7);
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c035c00\n.set _FUN_8c035c00, _FUN_8c035c00_def\n");
