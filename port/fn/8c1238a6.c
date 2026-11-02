#include "../decls.h"
undefined4 FUN_8c1238a6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  uint ar5_00;
  
  if ((*(char *)(0x4bc + ar4) != '\0') &&
     (sVar2 = *(short *)(0x4be + ar4) + -1, *(short *)(0x4be + ar4) = sVar2,
     sVar2 == 0)) {
    iVar1 = (int)0x4bc;
    *(undefined1 *)(iVar1 + ar4) = 0;
    *(undefined4 *)(iVar1 + 0x10 + ar4) = 0;
    *(undefined2 *)(iVar1 + -8 + ar4) = 0;
  }
  if (*(short *)(0x4c0 + ar4) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  ar5_00 = (uint)*(ushort *)(0x4b4 + ar4);
  if ((uVar3 <= ar5_00) && (ar5_00 != *(ushort *)(0x4b6 + ar4))) {
    if (*(int *)(0x4cc + ar4) == 0) {
      uVar3 = FUN_8c1235fc(ar4,ar5_00,ar6,ar7);
      if ((uVar3 & 0xff) != 0) {
        return 1;
      }
    }
    else {
      FUN_8c12381c(ar4,ar5_00,ar6,ar7);
    }
  }
  *(undefined2 *)(0x4b4 + 2 + ar4) = *(undefined2 *)(0x4b4 + ar4);
  return 0;
}

__asm__(".globl _FUN_8c1238a6\n.set _FUN_8c1238a6, _FUN_8c1238a6_def\n");
