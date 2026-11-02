#include "../decls.h"
uint FUN_8c11217e_def(int *ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  int unaff_r13;
  int *piVar3;
  bool bVar4;
  
  piVar3 = (int *)(unaff_r13 + (int)ar6);
  bVar4 = true;
  for (; ar6 < piVar3; ar6 = ar6 + 2) {
    if (*(int *)(*(int *)(*ar6 + 0x2c) + ar6[1] * 4) != 0) {
      bVar4 = *(int *)(*(int *)(*ar6 + 0x40) + ar6[1] * 4) == *(int *)(*ar6 + 0x3c);
      break;
    }
  }
  do {
    piVar1 = ar6;
    ar6 = piVar1 + 2;
    if (piVar3 <= ar6) break;
  } while ((*(int *)(*(int *)(*ar6 + 0x2c) + piVar1[3] * 4) == 0) ||
          (bVar4 == (*(int *)(*(int *)(*ar6 + 0x40) + piVar1[3] * 4) == *(int *)(*ar6 + 0x3c))));
  if (ar6 == piVar3) {
    if (bVar4 != false) {
      for (; ar4 < piVar3; ar4 = ar4 + 2) {
        if ((*(int *)(*ar4 + 0x38) != 0) && (*(int *)(*(int *)(*ar4 + 0x2c) + ar4[1] * 4) != 0)) {
          FUN_8c111208(*ar4,ar4[1],0,ar7);
        }
      }
    }
    uVar2 = (uint)(bVar4 == false);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11217e\n.set _FUN_8c11217e, _FUN_8c11217e_def\n");
