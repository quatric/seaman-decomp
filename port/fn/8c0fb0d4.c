#include "../decls.h"
undefined4 s_ERROR_0fb0de_def(undefined4 *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  char *ar4_00;
  
  if (*ar5 == '\0') {
    uVar1 = 2;
    *ar4 = 2;
  }
  else if (**(char **)(0x84 + (int)ar4) == '\0') {
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    iVar2 = FUN_8c0faf30(ar5,(&DATA_8c141dd0) + 0x13,ar6,ar7);
    if (iVar2 == 0) {
      uVar1 = 2;
      *ar4 = 2;
    }
    else if (*ar5 == '#') {
      *(undefined4 *)(0x88 + (int)ar4) = *(undefined4 *)(0x84 + (int)ar4);
      uVar1 = 6;
      *ar4 = 6;
    }
    else if (*ar5 == '$') {
      iVar2 = *(int *)(0x88 + (int)ar4) +
              *(int *)(*(int *)(0x88 + (int)ar4) + 0x24) + 0x28;
      if (*(int *)(iVar2 + 0x20) == 0) {
        uVar1 = 2;
        *ar4 = 2;
      }
      else {
        *(int *)(0x88 + (int)ar4) = iVar2;
        uVar1 = 6;
        *ar4 = 6;
      }
    }
    else {
      for (ar4_00 = *(char **)(0x84 + (int)ar4);
          (*(int *)(ar4_00 + 0x20) != 0 && (*ar4_00 != '\0'));
          ar4_00 = ar4_00 + *(int *)(ar4_00 + 0x24) + 0x28) {
        iVar2 = FUN_8c0faf30(ar4_00,ar5,ar6,ar7);
        if (iVar2 == 0) {
          *(char **)(0x88 + (int)ar4) = ar4_00;
          *ar4 = 6;
          return 6;
        }
      }
      uVar1 = 2;
      *ar4 = 2;
    }
  }
  return uVar1;
}

__asm__(".globl _s_ERROR_0fb0de\n.set _s_ERROR_0fb0de, _s_ERROR_0fb0de_def\n");
