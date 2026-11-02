#include "../decls.h"
undefined4 FUN_8c12462c_def(undefined4 ar4,undefined4 ar5,uint *ar6,int *ar7,int ain0)

{
  uint uVar1;
  uint a5;
  uint *ar6_00;
  int unaff_r14;
  float fVar2;
  char in_T;
  byte in_FPSCR_DN;
  
  if (in_T == '\x01') {
    if ((char)((in_FPSCR_DN & 4) >> 2) == '\0') {
      fVar2 = 100.0;
    }
    else {
      fVar2 = 0.0;
    }
    *(short *)ar6 = (short)(int)(*(float *)(unaff_r14 + 0x494) * 4.3429446 * fVar2);
  }
  else if (ain0 == 2) {
    *(undefined1 *)(unaff_r14 + 0x4bc) = 0;
    *(short *)(unaff_r14 + 0x4b8) = (short)ar6;
  }
  else if (ain0 == 3) {
    a5 = *ar6;
    ar6_00 = ar6;
    uVar1 = FUN_8c12394c(unaff_r14,a5,ar6,ar7);
    if ((uVar1 & 0xff) != 0) {
      return 0;
    }
    if ((uint)*(byte *)(unaff_r14 + 0x4c8) != (ar6[1] & 0xff)) {
      *(char *)(unaff_r14 + 0x4c8) = (char)ar6[1];
      if (ar6[1] == 0) {
        *(undefined2 *)(unaff_r14 + 0x4c2) = 0x1eb8;
      }
      else {
        *(undefined2 *)(unaff_r14 + 0x4c2) = 0x3333;
      }
      FUN_8c12356c(unaff_r14,a5,ar6_00,ar7);
    }
    *(uint *)(unaff_r14 + 0x4dc) = ar6[2] * 100;
  }
  else if (ain0 == 4) {
    *ar6 = (uint)*(byte *)(unaff_r14 + 0x4ac);
    ar6[1] = (uint)*(byte *)(unaff_r14 + 0x4c8);
    fVar2 = (float)*(int *)(unaff_r14 + 0x4dc);
    if (*(int *)(unaff_r14 + 0x4dc) < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar2 = fVar2 / 100.0;
    if (2.1474836e+09 < fVar2) {
      fVar2 = fVar2 + -4.2949673e+09;
    }
    ar6[2] = (int)fVar2;
  }
  else {
    if (ain0 == 5) {
      if (ar6 == (uint *)0x0) {
        FUN_8c123e4c(unaff_r14,ar5,0,ar7);
        return 1;
      }
      FUN_8c123d00(unaff_r14,*ar7 + (int)ar6,ar6,ar7);
    }
    else {
      if (ain0 != 6) {
        if (ain0 == 7) {
          *(short *)(unaff_r14 + 0x4d4) = *(short *)(unaff_r14 + 0x4d4) + 1;
          return 1;
        }
        if (ain0 == 0xff) {
          FUN_8c120668(unaff_r14,ar5,ar6,ar7);
          return 1;
        }
        return 0;
      }
      if (ar6 != (uint *)0x0) {
        FUN_8c123bac(unaff_r14,*ar7 + (int)ar6,ar6,ar7);
      }
    }
    *ar7 = *ar7 + 0x204;
  }
  return 1;
}

__asm__(".globl _FUN_8c12462c\n.set _FUN_8c12462c, _FUN_8c12462c_def\n");
