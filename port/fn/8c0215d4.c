#include "../decls.h"
undefined4 pack_close_and_flush_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*ar4 != 0) {
    FUN_8c022384(ar4 + 1,ar5,ar6,ar7);
    iVar1 = FUN_8c01f780(0x8c3eb334,ar5,ar6,ar7);
    uVar2 = 1;
    if (iVar1 != 1) {
      if (-1 < *(int *)(0x9ec94 + (int)ar4)) {
        FUN_8c0228e4(ar4 + 1,*(undefined4 *)(0x9ec94 + (int)ar4),ar6,ar7);
        FUN_8c022128(ar4,0x3e8,ar6,ar7);
        *(undefined4 *)(0x9ec94 + (int)ar4) = 0xffffffff;
      }
      for (iVar1 = 0; uVar2 = 3, iVar1 < 3; iVar1 = iVar1 + 1) {
        if (-1 < *(int *)((int)ar4 + 0x9ec98 + iVar1 * 8)) {
          (*(code *)(&FUN_8c022894))
                    (ar4 + 1,*(undefined4 *)((int)ar4 + 0x9ec98 + iVar1 * 8),
                     *(undefined4 *)((int)ar4 + 0x9ec9c + iVar1 * 8),
                     *(int *)(0x9ec10 + (int)ar4) +
                     (*(uint *)(*(int *)((int)ar4 + 0x9ec9c + iVar1 * 8) * 0x28 +
                                *(int *)(0x9ec0c + (int)ar4) + 0x20) & 0xfffffffe));
          *(undefined4 *)((int)ar4 + 0x9ec98 + iVar1 * 8) = 0xffffffff;
        }
      }
    }
  }
  return uVar2;
}

__asm__(".globl _pack_close_and_flush\n.set _pack_close_and_flush, _pack_close_and_flush_def\n");
