#include "../decls.h"
int FUN_8c2669f4_def(int ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int ar5_00;
  int *piVar4;
  int ar4_00;
  
  ar4_00 = 0;
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    piVar3 = *(int **)(ar4 + 8);
    if (*piVar3 == 0x544c4d53) {
      FUN_8c265704(&stack0xffffffdc,ar5,ar6,ar7);
      iVar1 = piVar3[2];
      piVar4 = piVar3 + 8;
      if ((char)piVar3[1] < '\x01') {
        if (piVar3[4] != -1) {
          piVar4 = piVar3 + 4;
        }
        ar5_00 = 0x9000002;
      }
      iVar2 = 0;
      if (0 < iVar1) {
        do {
          if (-1 < piVar4[3]) {
            ar5 = piVar4[1];
            ar7 = piVar4[3];
            ar6 = piVar4[2];
            ar5_00 = FUN_8c268320(*piVar4,ar5,ar6,ar7);
            if (ar5_00 != 0) break;
          }
          if (0 < piVar4[5]) {
            ar7 = -1;
            ar6 = piVar4[5];
            ar5 = piVar4[4] + (int)piVar3;
            ar5_00 = FUN_8c265ea0(ar4_00,ar5,ar6,0xffffffff,0);
            if (ar5_00 != 0) break;
            ar5 = *piVar4;
            ar6 = piVar4[1];
            ar5_00 = FUN_8c265374(ar4_00,ar5,ar6,ar7);
            if (ar5_00 != 0) break;
          }
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 8;
        } while (iVar2 < iVar1);
      }
    }
    else {
      ar5_00 = 0x9000001;
    }
  }
  if (ar4_00 != 0) {
    FUN_8c265784(ar4_00,ar5,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2669f4,ar5_00,ar6,ar7,ar4_00);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2669f4\n.set _FUN_8c2669f4, _FUN_8c2669f4_def\n");
