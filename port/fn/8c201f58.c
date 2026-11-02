#include "../decls.h"
undefined4 FUN_8c201f58_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  uint *puVar2;
  
  pcVar1 = (char *)FUN_8c1efd14(ar4,ar5,ar6,ar7);
  if ((*pcVar1 != '\0') &&
     (puVar2 = (uint *)FUN_8c1efd26(ar4,ar5,ar6,ar7), (*puVar2 & 0x10) != 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c201f58\n.set _FUN_8c201f58, _FUN_8c201f58_def\n");
