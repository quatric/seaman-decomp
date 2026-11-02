#include "../decls.h"
int FUN_8c0f79b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(ar4 + 100);
  for (iVar2 = ar4 + 0x4c; iVar2 != ar4 + iVar1 * 8 + 0x4c; iVar2 = iVar2 + 8) {
    FUN_8c0f78cc(iVar2,ar5,ar6,ar7);
  }
  *(undefined4 *)(ar4 + 100) = 0;
  *(undefined4 *)(ar4 + 0x68) = 0;
  vec3_clear(ar4 + 0x8c,ar5,ar6,ar7);
  *(undefined4 *)(0x9c + ar4) = 0xffffffff;
  vec3_clear(ar4 + 0xa0,ar5,ar6,ar7);
  iVar1 = *(int *)(0x84 + ar4);
  for (iVar2 = ar4 + 0x6c; iVar2 != ar4 + iVar1 * 8 + 0x6c; iVar2 = iVar2 + 8) {
    FUN_8c0f78cc(iVar2,ar5,ar6,ar7);
  }
  *(undefined4 *)(0x84 + ar4) = 0;
  iVar1 = 0x88;
  *(undefined4 *)(0x88 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0f79b8\n.set _FUN_8c0f79b8, _FUN_8c0f79b8_def\n");
