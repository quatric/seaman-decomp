#include "../decls.h"
undefined4 FUN_8c213ee4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  undefined8 in_dr4;
  
  fVar1 = (float)((ulonglong)in_dr4 >> 0x20);
  if (-1.0 < fVar1) {
    in_dr4 = CONCAT44(0xbf800000,(int)in_dr4);
  }
  fVar2 = (float)in_dr4;
  if (fVar1 < -65535.0) {
    in_dr4 = CONCAT44(0xc77fff00,fVar2);
  }
  fVar1 = (float)in_dr4;
  if (-1.0 < fVar2) {
    in_dr4 = CONCAT44((int)((ulonglong)in_dr4 >> 0x20),0xbf800000);
  }
  fVar2 = (float)in_dr4;
  if (fVar1 < -65535.0) {
    fVar2 = -65535.0;
  }
  _DAT_8c4aa4d4 = -(float)((ulonglong)in_dr4 >> 0x20);
  _DAT_8c4aa4d8 = -fVar2;
  return 0x8c213f18;
}

__asm__(".globl _FUN_8c213ee4\n.set _FUN_8c213ee4, _FUN_8c213ee4_def\n");
