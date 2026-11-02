#include "../decls.h"
uint FUN_8c011e10_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *ar4_00;
  undefined4 ar5_00;
  double in_dr0;
  float extraout_fr3;
  float fVar3;
  undefined4 extraout_fr2;
  undefined4 uVar4;
  longlong in_dr4;
  bool bVar5;
  char cVar6;
  char cVar7;
  uint in_stack_fffffff4;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar4_00 = &stack0xfffffff4;
  fVar3 = (float)((ulonglong)in_dr4 >> 0x20);
  uVar2 = 0;
  ar5_00 = 8;
  if (in_dr4 < 0) {
    uVar2 = 8;
  }
  if (fVar3 == 0.0) {
    uVar2 = uVar2 | 4;
  }
  else if (ABS(fVar3) == INFINITY) {
    uVar2 = uVar2 | 2;
  }
  if ((uVar2 & 3) != 0) {
    return uVar2;
  }
  uVar4 = 0x3f490fdb;
  uVar1 = FUN_8c011c5c(&stack0xfffffff4,8,ar6,ar7,in_stack_fffffff4);
  fVar3 = extraout_fr3;
  if (cVar7 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),uVar4);
    fVar3 = 0.7853982;
  }
  if (cVar6 == '\0') {
    bVar5 = fVar3 < (float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    bVar5 = (double)CONCAT44(extraout_fr2,fVar3) < in_dr0;
  }
  if (bVar5) {
    return uVar1;
  }
  uVar2 = in_stack_fffffff4 & 7;
  if ((uVar2 == 0) || (uVar2 == 7)) {
    uVar2 = FUN_8c010ab4(ar4_00,ar5_00,ar6,ar7,uVar2);
  }
  else if ((uVar2 == 1) || (uVar2 == 2)) {
    uVar2 = FUN_8c010ad4(ar4_00,ar5_00,ar6,ar7,uVar2);
  }
  else if ((uVar2 == 3) || (uVar2 == 4)) {
    uVar2 = FUN_8c010ab4(ar4_00,ar5_00,ar6,ar7,uVar2);
  }
  else if ((uVar2 == 5) || (uVar2 == 6)) {
    uVar2 = FUN_8c010ad4(ar4_00,ar5_00,ar6,ar7,uVar2);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c011e10\n.set _FUN_8c011e10, _FUN_8c011e10_def\n");
