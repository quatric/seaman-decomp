#include "../decls.h"
int FUN_8c1f8462_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *a4;
  int aiStack_24 [3];
  
  piVar3 = aiStack_24;
  piVar4 = piVar3;
  for (a4 = piVar3; a4 < aiStack_24 + 2; a4 = a4 + 1) {
    iVar2 = aica_reg_1f8544(a4,ar5,ar6,ar7);
    if (iVar2 != 0) {
      *piVar4 = ar4;
    }
    piVar4 = piVar4 + 1;
  }
  bVar1 = false;
  piVar4 = aiStack_24 + 1;
  do {
    if (aiStack_24 + 1 <= piVar3) {
LAB_8c1f84bc:
      if (!bVar1) {
        ar4 = aiStack_24[0];
      }
      return ar4;
    }
    if (*piVar3 != *piVar4) {
      bVar1 = true;
      goto LAB_8c1f84bc;
    }
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c1f8462\n.set _FUN_8c1f8462, _FUN_8c1f8462_def\n");
