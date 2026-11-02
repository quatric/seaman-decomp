#include "../decls.h"
int FUN_8c0e62cc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(0x88 + *ar4))(ar4,ar5,ar6,ar7);
  s_GRAPHICS_ENV_0d819c((int)ar4 + 0x10dc,ar5,ar6,ar7);
  (*(code *)(&s_64_JUNGLE_NIGHT_0e7062))
            (ar4,*(undefined4 *)(0x10dc + (int)ar4),ar6,ar7);
  iVar1 = *(int *)(0x83fc + (int)ar4);
  if (iVar1 == -1) {
    uVar2 = (*(code *)(&pack_find_by_name_buffered))
                      (0x8c2b59d0,*(undefined4 *)(0x83f8 + (int)ar4),ar6,ar7);
    iVar1 = 0x83fc;
    *(undefined4 *)(0x83fc + (int)ar4) = uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0e62cc\n.set _FUN_8c0e62cc, _FUN_8c0e62cc_def\n");
