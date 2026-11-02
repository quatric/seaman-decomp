#include "../decls.h"
undefined4 FUN_8c035af8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  float fVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  
  fVar2 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar5 = '\0';
  cVar4 = '\0';
  uVar1 = FUN_8c035b50(ar4[5],ar5,ar6,ar7);
  if ((char)uVar1 < '\x04') {
    (**(code **)(*(int *)*ar4 + 0x188))((int *)*ar4,ar5,ar6,ar7);
    if (cVar5 == '\0') {
      fVar3 = 40.0;
    }
    else {
      fVar2 = 40.0;
      fVar3 = 5.547118e+19;
    }
    if (cVar4 == '\0' && fVar3 < fVar2) {
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c035af8\n.set _FUN_8c035af8, _FUN_8c035af8_def\n");
