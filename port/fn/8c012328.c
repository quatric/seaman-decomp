#include "../decls.h"
uint FUN_8c012328_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ain0;
  undefined1 *ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  double in_dr0;
  float extraout_fr3;
  float fVar1;
  undefined4 extraout_fr2;
  undefined4 uVar2;
  undefined8 in_dr4;
  bool bVar3;
  char cVar4;
  char cVar5;
  uint in_stack_ffffffec;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar4_00 = &stack0xffffffec;
  ain0 = 4;
  fVar1 = (float)((ulonglong)in_dr4 >> 0x20);
  ar6_00 = 0;
  ar5_00 = 8;
  bVar3 = false;
  if (fVar1 == 0.0) {
    bVar3 = false;
  }
  else if (ABS(fVar1) == INFINITY) {
    ain0 = 2;
    bVar3 = true;
  }
  if (!bVar3) {
    uVar2 = 0x3f490fdb;
    ain0 = FUN_8c011c5c(&stack0xffffffec,8,0,ar7,in_stack_ffffffec);
    fVar1 = extraout_fr3;
    if (cVar5 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),uVar2);
      fVar1 = 0.7853982;
    }
    if (cVar4 == '\0') {
      bVar3 = fVar1 < (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      bVar3 = (double)CONCAT44(extraout_fr2,fVar1) < in_dr0;
    }
    if (!bVar3) {
      ain0 = in_stack_ffffffec & 7;
      if ((ain0 == 0) || (ain0 == 7)) {
        ain0 = FUN_8c010ad4(ar4_00,ar5_00,ar6_00,ar7,ain0);
      }
      else if ((ain0 == 1) || (ain0 == 2)) {
        ain0 = FUN_8c010ab4(ar4_00,ar5_00,ar6_00,ar7,ain0);
      }
      else if ((ain0 == 3) || (ain0 == 4)) {
        ain0 = FUN_8c010ad4(ar4_00,ar5_00,ar6_00,ar7,ain0);
      }
      else if ((ain0 == 5) || (ain0 == 6)) {
        ain0 = FUN_8c010ab4(ar4_00,ar5_00,ar6_00,ar7,ain0);
      }
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c012328\n.set _FUN_8c012328, _FUN_8c012328_def\n");
