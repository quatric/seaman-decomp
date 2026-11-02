#include "../decls.h"
undefined4 FUN_8c0d6c9c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  float in_fr1;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined8 in_xd0;
  char cVar1;
  char cVar2;
  
  cVar2 = '\0';
  cVar1 = '\0';
  *ar4 = (int)((ulonglong)in_dr4 >> 0x20);
  ar4[1] = (int)in_dr4;
  ar4[2] = (int)((ulonglong)in_dr6 >> 0x20);
  ar5_00 = Vec3_assign(ar4 + 0xc,ar4,ar6,ar7);
  Vec3_assign(ar4 + 8,ar5_00,ar6,ar7);
  if (cVar2 == '\0') {
    in_fr1 = (float)ar4[10];
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 10);
  }
  if (cVar1 == '\0') {
    in_fr1 = in_fr1 - 1.0;
  }
  else {
    in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) - (double)CONCAT44(0x3f800000,in_fr1),0);
  }
  if (cVar2 == '\0') {
    ar4[10] = in_fr1;
  }
  else {
    *(undefined8 *)(ar4 + 10) = in_xd0;
  }
  FUN_8c022d04(ar4 + 4,ar5_00,ar6,ar7);
  FUN_8c022d04(ar4 + 0x10,ar5_00,ar6,ar7);
  ar4[0x18] = 0;
  if (cVar2 == '\0') {
    ar4[0x14] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x14) = (ulonglong)(uint)in_fr1;
  }
  ar4[0x19] = 0;
  return 100;
}

__asm__(".globl _FUN_8c0d6c9c\n.set _FUN_8c0d6c9c, _FUN_8c0d6c9c_def\n");
