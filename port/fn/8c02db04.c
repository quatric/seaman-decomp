#include "../decls.h"
uint FUN_8c02db04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  bool bVar2;
  
  if (*(short *)(ar4 + 0x20) <= *(short *)(ar4 + 0x16)) {
    if ((int)*(short *)(ar4 + 0x14) != *(int *)(ar4 + 0x30)) {
      *(undefined2 *)(ar4 + 0x1e) = 1;
      return 1;
    }
    uVar1 = FUN_8c02d1c8(ar4,ar5,ar6,ar7);
    if ((char)uVar1 == '\x01') {
      *(undefined2 *)(ar4 + 0x1e) = 1;
      return 1;
    }
  }
  bVar2 = *(int *)(ar4 + 0x3c) == 1;
  if (bVar2) {
    *(undefined2 *)(ar4 + 0x1e) = 1;
  }
  return (uint)bVar2;
}

__asm__(".globl _FUN_8c02db04\n.set _FUN_8c02db04, _FUN_8c02db04_def\n");
