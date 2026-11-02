#include "../decls.h"
int FUN_8c26371e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char *pcVar2;
  char *ar4_00;
  
  pcVar2 = 0x8c4b9828 + 0xc80;
  ar4_00 = 0x8c4b9828;
  do {
    iVar1 = (int)*ar4_00;
    if (iVar1 == 1) {
      iVar1 = FUN_8c263702(ar4_00,ar5,ar6,ar7);
    }
    ar4_00 = ar4_00 + 100;
  } while (ar4_00 < pcVar2);
  return iVar1;
}

__asm__(".globl _FUN_8c26371e\n.set _FUN_8c26371e, _FUN_8c26371e_def\n");
