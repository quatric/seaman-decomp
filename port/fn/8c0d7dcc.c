#include "../decls.h"
undefined4 FUN_8c0d7dcc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint in_fr1;
  uint extraout_fr1;
  char cVar2;
  
  cVar2 = '\0';
  for (uVar1 = 0; uVar1 < (uint)ar4[4]; uVar1 = uVar1 + 1) {
    FUN_8c0149d4(uVar1 * 0x38 + ar4[3],ar5,ar6,ar7);
    in_fr1 = extraout_fr1;
  }
  ar4[2] = 4100000000;
  *ar4 = 0;
  ar4[1] = 0;
  if (cVar2 == '\0') {
    ar4[5] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 5) = (ulonglong)in_fr1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0d7dcc\n.set _FUN_8c0d7dcc, _FUN_8c0d7dcc_def\n");
