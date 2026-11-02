#include "../decls.h"
undefined4 FUN_8c035ca8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined8 in_dr0;
  code *pcVar4;
  char cVar5;
  char cVar6;
  
  fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar6 = '\0';
  cVar5 = '\0';
  uVar1 = FUN_8c035d64(ar4[5],ar5,ar6,ar7);
  if (((char)uVar1 < '\x02') && (uVar1 = FUN_8c035b50(ar4[5],ar5,ar6,ar7), (char)uVar1 < '\x03')) {
    uVar1 = 0xb;
    iVar2 = (**(code **)(*(int *)*ar4 + 0x11c))((int *)*ar4,0xb,ar6,ar7);
    if (iVar2 < 2) {
      (**(code **)(*(int *)*ar4 + 0x188))((int *)*ar4,uVar1,ar6,ar7);
      if (cVar6 == '\0') {
        pcVar4 = (code *)0x42200000;
      }
      else {
        fVar3 = 40.0;
        pcVar4 = FUN_8c035d4c;
      }
      if (cVar5 == '\0' && (float)(uint)pcVar4 < fVar3) {
        FUN_8c035d4c(ar4[5],uVar1,ar6,ar7);
        FUN_8c035d4c(ar4[5],uVar1,ar6,ar7);
        return 1;
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c035ca8\n.set _FUN_8c035ca8, _FUN_8c035ca8_def\n");
