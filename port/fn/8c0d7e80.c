#include "../decls.h"
undefined4 FUN_8c0d7e80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int s0,int s4)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  double dVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  FUN_8c102974(ar4 + 0x1c,ar5,ar6,ar7);
  uVar1 = FUN_8c102974(ar4 + 0x30,ar5,ar6,ar7);
  if (cVar3 == '\0') {
    dVar2 = (double)CONCAT44((float)s4,in_fr1);
  }
  else {
    dVar2 = (double)s4;
  }
  if (cVar4 == '\0') {
    *(int *)(ar4 + 0x18) = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x18) = dVar2;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0d7e80\n.set _FUN_8c0d7e80, _FUN_8c0d7e80_def\n");
