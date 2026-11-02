#include "../decls.h"
int FUN_8c2630cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *ar4_00;
  
  iVar3 = (int)0x9c;
  pcVar2 = 0x8c4b9348 + 0x4e0;
  ar4_00 = 0x8c4b9348;
  do {
    iVar1 = (int)*ar4_00;
    if (iVar1 == 1) {
      iVar1 = FUN_8c26307e(ar4_00,ar5,ar6,ar7);
    }
    ar4_00 = ar4_00 + iVar3;
  } while (ar4_00 < pcVar2);
  return iVar1;
}

__asm__(".globl _FUN_8c2630cc\n.set _FUN_8c2630cc, _FUN_8c2630cc_def\n");
