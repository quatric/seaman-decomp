#include "../decls.h"
undefined4 FUN_8c111adc_def(int *ar4,int ar5,uint ar6,uint ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint a6;
  uint a7;
  int a5;
  undefined8 in_dr0;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  short in_stack_00000000;
  char in_stack_00000004;
  
  fVar4 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar7 = '\0';
  a6 = ar6;
  a7 = ar7;
  a5 = ar5;
  if (ar5 == 0) {
    ar5 = 1;
    FUN_8c120550(ar4,1,ar6,ar7);
    if (cVar7 == '\0') {
      fVar6 = 2.1474836e+09;
    }
    else {
      fVar6 = -NAN;
    }
    fVar5 = fVar4;
    if (fVar6 < fVar4) {
      fVar5 = fVar4 + -4.2949673e+09;
    }
    a5 = (int)fVar5;
  }
  if (ar6 == 0) {
    ar5 = 2;
    FUN_8c120550(ar4,2,a6,a7);
    ar6 = (uint)fVar4;
  }
  if (ar4[7] != 0) {
    ar5 = ar4[7];
    (**(code **)(*ar4 + 0x18))(*ar4,ar5,a6,a7);
  }
  if ((ar6 & 0xffff) == 0) {
    ar4[7] = 0;
  }
  else {
    a6 = ar6 & 0xffff;
    ar5 = a5;
    iVar1 = (**(code **)(*ar4 + 0x14))(*ar4,a5,a6,a7);
    ar4[7] = iVar1;
    if (iVar1 == 0) {
      FUN_8c1204c4(ar4,2,a6,a7);
      return 0;
    }
  }
  ar4[2] = a5;
  *(short *)(ar4 + 3) = (short)ar6;
  ar4[4] = (ar6 & 0xffff) * a5;
  ar4[9] = ar4[7];
  ar4[8] = ar4[7] + ar4[4];
  FUN_8c112234(ar4,ar5,a6,a7);
  if ((ar7 & 0xff) == 0xff) {
    FUN_8c120550(ar4,3,a6,a7);
    ar7 = (uint)fVar4;
  }
  if ((ar7 & 0xff) == 0) {
    ar4[6] = 0;
    uVar2 = 0;
    if (ar4[5] != 0) {
      do {
        uVar3 = uVar2 + 1;
        *(undefined4 *)(uVar2 * 4 + ar4[0xb]) = 0;
        uVar2 = uVar3;
      } while (uVar3 < (uint)ar4[5]);
    }
  }
  else {
    ar4[6] = ar4[5];
  }
  if (in_stack_00000000 == -1) {
    FUN_8c120550(ar4,4,a6,a7);
    in_stack_00000000 = (short)(int)fVar4;
  }
  *(short *)((int)ar4 + 0xe) = in_stack_00000000;
  if (in_stack_00000004 == -1) {
    FUN_8c120550(ar4,5,a6,a7);
    *(char *)((int)ar4 + 0x31) = (char)(int)fVar4;
  }
  else {
    *(char *)((int)ar4 + 0x31) = in_stack_00000004;
  }
  return ar4;
}

__asm__(".globl _FUN_8c111adc\n.set _FUN_8c111adc, _FUN_8c111adc_def\n");
