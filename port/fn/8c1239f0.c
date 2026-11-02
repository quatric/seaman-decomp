#include "../decls.h"
undefined4 FUN_8c1239f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float fVar2;
  undefined8 in_dr4;
  float fVar3;
  float in_PR;
  byte in_FPSCR_DN;
  char cVar4;
  
  fVar3 = (float)((ulonglong)in_dr4 >> 0x20);
  if (((*(char *)(ar4 + 0x4ac) != '\0') && (*(short *)(ar4 + 0x4c0) != 0)) ||
     (*(char *)(ar4 + 0x4ac) == '\0')) {
    cVar4 = (char)((in_FPSCR_DN & 4) >> 2);
    if (cVar4 == '\0') {
      fVar2 = 5.7564626;
    }
    else {
      fVar2 = 0.0;
    }
    if ((*(float *)(ar4 + 0x494) < fVar2) &&
       (3 < (int)((uint)*(ushort *)(ar4 + 0x4d4) - (uint)*(ushort *)(ar4 + 0x4d6)))) {
      cVar4 = '\0';
      uVar1 = FUN_8c12357c(ar4,0,ar6,ar7);
      if ((uVar1 & 0xff) != 0) {
        return 1;
      }
      *(undefined2 *)(ar4 + 0x4d6) = *(undefined2 *)(ar4 + 0x4d4);
    }
    fVar2 = fVar3;
    if (cVar4 == '\0') {
      fVar2 = *(float *)(ar4 + 0x4a8);
      in_PR = fVar3;
    }
    if ((in_PR - fVar2 <= 0.69077545) || (*(short *)(ar4 + 0x4d6) == *(short *)(ar4 + 0x4d4))) {
      fVar3 = *(float *)(ar4 + 0x2c);
      if (*(char *)(ar4 + 0x4ac) != '\0') {
        fVar3 = fVar3 + *(float *)(ar4 + 0x38) + *(float *)(ar4 + 0x3c);
      }
      if ((fVar3 - *(float *)(ar4 + 0x4a8) < -6.9077544) &&
         (3 < (int)((uint)*(ushort *)(ar4 + 0x4d4) - (uint)*(ushort *)(ar4 + 0x4d6)))) {
        uVar1 = FUN_8c12357c(ar4,2,ar6,ar7);
        if ((uVar1 & 0xff) != 0) {
          return 1;
        }
        *(undefined2 *)(ar4 + 0x4d6) = *(undefined2 *)(ar4 + 0x4d4);
      }
    }
    else {
      *(undefined2 *)(ar4 + 0x4d6) = *(undefined2 *)(ar4 + 0x4d4);
      uVar1 = FUN_8c12357c(ar4,1,ar6,ar7);
      if ((uVar1 & 0xff) != 0) {
        return 1;
      }
    }
  }
  if ((((*(char *)(ar4 + 0x4ac) != '\0') && (*(int *)(ar4 + 0x4dc) != 0)) &&
      (*(uint *)(ar4 + 0x4dc) < *(uint *)(ar4 + 0x4d0))) && (*(short *)(ar4 + 0x4d4) == 0)) {
    uVar1 = FUN_8c12357c(ar4,3,ar6,ar7);
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
    if ((*(char *)(ar4 + 0x4c9) == '\0') && (*(char *)(ar4 + 0x4ac) != '\0')) {
      *(undefined1 *)(ar4 + 0x4c9) = 1;
      uVar1 = FUN_8c123594(ar4,0xbfff,ar6,ar7);
      if ((uVar1 & 0xffff) != 0) {
        return 1;
      }
    }
    *(undefined4 *)(ar4 + 0x4d0) = 0;
  }
  return 0;
}

__asm__(".globl _FUN_8c1239f0\n.set _FUN_8c1239f0, _FUN_8c1239f0_def\n");
