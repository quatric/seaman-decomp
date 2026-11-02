#include "../decls.h"
undefined4 FUN_8c12394c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float fVar2;
  undefined8 uVar3;
  char cVar4;
  
  if (*(char *)(ar4 + 0x4ac) != (char)ar5) {
    *(char *)(ar4 + 0x4ac) = (char)ar5;
    if ((char)ar5 == '\0') {
      fVar2 = *(float *)(ar4 + 0x2c) + *(float *)(ar4 + 0x38) + *(float *)(ar4 + 0x3c);
    }
    else {
      *(undefined2 *)(ar4 + 0x4b8) = 0;
      ar7_00 = 0;
      ar6_00 = 0;
      *(undefined1 *)(ar4 + 0x4bc) = 0;
      ar5_00 = 10;
      uVar1 = FUN_8c120348(ar4,10,0,0);
      if ((uVar1 & 0xff) != 0) {
        return 1;
      }
      cVar4 = '\0';
      FUN_8c12356c(ar4,ar5_00,ar6_00,ar7_00);
      if (cVar4 == '\0') {
        uVar3 = CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x3c));
      }
      else {
        uVar3 = *(undefined8 *)(ar4 + 0x38);
      }
      fVar2 = *(float *)(ar4 + 0x2c) - ((float)((ulonglong)uVar3 >> 0x20) + (float)uVar3);
    }
    *(float *)(ar4 + 0x2c) = fVar2;
  }
  return 0;
}

__asm__(".globl _FUN_8c12394c\n.set _FUN_8c12394c, _FUN_8c12394c_def\n");
