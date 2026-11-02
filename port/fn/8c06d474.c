#include "../decls.h"
undefined4 s_GRAPHICS_HERBLINE_06d482_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    iVar3 = *(int *)(0x224 + ar4) + iVar2 * 0x124;
    for (iVar4 = 0; iVar4 < *(short *)(0xa4 + iVar3); iVar4 = iVar4 + 1) {
      if (**(char **)(iVar4 * 4 + *(int *)(iVar3 + 4)) != '\0') {
        ar7 = ar4 + iVar2;
        ar6 = *(undefined4 *)(&DATA_8c136f4c);
        FUN_8c020c60(ar5,*(undefined4 *)(iVar4 * 4 + *(int *)(iVar3 + 4)),ar6,ar7);
      }
      if (**(char **)(iVar4 * 4 + *(int *)(iVar3 + 8)) != '\0') {
        ar7 = ar4 + iVar2;
        ar6 = *(undefined4 *)(&DATA_8c136f4c);
        FUN_8c020d58(ar5,*(undefined4 *)(iVar4 * 4 + *(int *)(iVar3 + 8)),ar6,ar7);
      }
    }
    if (*(int *)(iVar3 + 0x18) != 0) {
      ar7 = ar4 + iVar2;
      ar6 = *(undefined4 *)(&DATA_8c136f4c);
      FUN_8c020e48(ar5,*(undefined4 *)(iVar3 + 0x18),ar6,ar7);
    }
  }
  iVar2 = (*(code *)(&libgcc_divide_helper_01031c))
                    (*(undefined4 *)(0x210 + ar4),4,ar6,ar7);
  (*(code *)(&FUN_8c020a70))
            (ar5,*(undefined4 *)((&DATA_8c136f54) + iVar2 * 4),*(undefined4 *)(&DATA_8c136f4c),
             ar4 + 1);
  (*(code *)(&FUN_8c020a70))
            (ar5,*(undefined4 *)(&DATA_8c136f50),*(undefined4 *)(&DATA_8c136f4c),ar4);
  iVar2 = ar4;
  (*(code *)(&FUN_8c020b68))
            (ar5,*(undefined4 *)(&DATA_8c136f50),*(undefined4 *)(&DATA_8c136f4c),ar4);
  uVar1 = (**(code **)(0xf0 + *(int *)(ar4 + 8)))(ar4,ar5,0,iVar2);
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_HERBLINE_06d482\n.set _s_GRAPHICS_HERBLINE_06d482, _s_GRAPHICS_HERBLINE_06d482_def\n");
