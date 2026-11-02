#include "../decls.h"
int FUN_8c12381c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x4b8;
  if ((*(short *)(ar4 + 0x4b8) != 0) && (iVar1 = *(int *)(ar4 + 0x4cc), iVar1 == 1)) {
    *(undefined4 *)(ar4 + 0x4cc) = 0;
    if (*(short *)(ar4 + 0x4c0) == 0) {
      iVar1 = FUN_8c013adc((uint)*(ushort *)(ar4 + 0x4b8) - (uint)*(ushort *)(ar4 + 0x4ba),ar5,ar6,
                           ar7);
      if ((int)((int)((float)*(ushort *)(ar4 + 0x4ba) * 0.01) & 0xffffU) < iVar1) {
        *(undefined2 *)(ar4 + 0x4b4) = 0;
      }
      iVar1 = 0x4b4;
      if (10 < *(ushort *)(ar4 + 0x4b4)) {
        *(undefined2 *)(ar4 + 0x4c0) = *(undefined2 *)(ar4 + 0x4b8);
        iVar1 = 0x4b4;
        *(undefined2 *)(ar4 + 0x4b4) = 0;
      }
    }
    else {
      iVar1 = 0x4b4;
      *(undefined2 *)(ar4 + 0x4b4) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c12381c\n.set _FUN_8c12381c, _FUN_8c12381c_def\n");
