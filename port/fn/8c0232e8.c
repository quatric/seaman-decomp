#include "../decls.h"
undefined4 FUN_8c0232e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float extraout_fr1;
  float extraout_fr0;
  float extraout_fr0_00;
  float in_fr15;
  float fVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  uVar1 = 2;
  FUN_8c0231c8(ar5,ar5,ar6,ar7);
  if (cVar4 == '\0') {
    in_fr15 = extraout_fr0;
  }
  FUN_8c0231c8(ar4,ar5,ar6,ar7);
  fVar2 = extraout_fr1;
  if (cVar4 == '\0') {
    fVar2 = in_fr15;
  }
  if (cVar3 == '\0' && fVar2 < extraout_fr0_00) {
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0232e8\n.set _FUN_8c0232e8, _FUN_8c0232e8_def\n");
