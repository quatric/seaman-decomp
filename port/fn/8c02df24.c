#include "../decls.h"
undefined4 FUN_8c02df24_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c02dfa0(ar4,ar5,ar6,ar7);
  if (*ar4 == '\x01') {
    if (ar4[10] == '\x01') {
      if (ar4[0xb] == '\x05') {
        FUN_8c02e38c(ar4,1,ar6,ar7);
      }
      else {
        *(int *)(ar4 + 4) = *(int *)(ar4 + 4) + 1;
      }
    }
    if ((ar4[0xb] == '\x05') && (2 < *(int *)(ar4 + 4))) {
      *ar4 = '\0';
      ar4[4] = '\0';
      ar4[5] = '\0';
      ar4[6] = '\0';
      ar4[7] = '\0';
    }
  }
  else {
    ar4[4] = '\0';
    ar4[5] = '\0';
    ar4[6] = '\0';
    ar4[7] = '\0';
  }
  ar4[10] = '\0';
  return 0;
}

__asm__(".globl _FUN_8c02df24\n.set _FUN_8c02df24, _FUN_8c02df24_def\n");
