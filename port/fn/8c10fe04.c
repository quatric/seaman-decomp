#include "../decls.h"
undefined4 FUN_8c10fe04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0x48;
  if ((*(int *)(ar4 + 0x48) != 0) &&
     (iVar2 = FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),ar5,ar6,ar7), uVar1 = 0, iVar2 != 0)) {
    if ((*(char *)(ar4 + 0x32) == '\0') &&
       ((*(int *)(ar4 + 0x28) == 0 || ((float)*(int *)(ar4 + 0x88) < *(float *)(ar4 + 0x54))))) {
      uVar1 = FUN_8c10fd82(ar4,ar5,ar6,ar7);
      *(short *)(ar4 + 0x30) = (short)uVar1;
    }
    memmove(iVar2,(*(ushort *)(ar4 + 0x30) - 1) * *(int *)(ar4 + 0x70) * 4 + *(int *)(ar4 + 0x3c),
            *(int *)(ar4 + 0x70) << 2,ar7);
    iVar2 = *(int *)(ar4 + 0x3c) + *(int *)(ar4 + 0x80) * 4;
    *(int *)(ar4 + 0x3c) = iVar2;
    uVar1 = 0x48;
    if (iVar2 == *(int *)(ar4 + 0x38)) {
      *(undefined4 *)(ar4 + 0x3c) = *(undefined4 *)(ar4 + 0x34);
    }
    *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + -1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c10fe04\n.set _FUN_8c10fe04, _FUN_8c10fe04_def\n");
