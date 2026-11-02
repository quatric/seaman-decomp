#include "../decls.h"
int FUN_8c035028_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(ar4 + 0x24);
  for (iVar3 = 0; iVar1 = (int)*(short *)(*(int *)(ar4 + 0x1c) + 2), iVar3 < iVar1;
      iVar3 = iVar3 + 1) {
    if ((((*(short *)(*(int *)(*(int *)(ar4 + 0x1c) + iVar3 * 4 + 4) + 0xc) == -1) ||
         ('\x04' < *(char *)(*(short *)(*(int *)(*(int *)(ar4 + 0x1c) + iVar3 * 4 + 4) + 0xc) + ar4
                            + 0xc))) &&
        (*(uint *)(*(int *)(*(int *)(ar4 + 0x1c) + iVar3 * 4 + 4) + 8) <= ar5)) &&
       ((*(short *)(*(int *)(*(int *)(ar4 + 0x1c) + iVar3 * 4 + 4) + 0xe) <= iVar2 &&
        (*(char *)(ar4 + iVar3 + 0xc) == '\x01')))) {
      *(undefined4 *)(ar4 + 0x24) = 0;
      *(undefined1 *)(ar4 + iVar3 + 0xc) = 2;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c035028\n.set _FUN_8c035028, _FUN_8c035028_def\n");
