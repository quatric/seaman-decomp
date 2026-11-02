#include "../decls.h"
uint FUN_8c23728c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (ar4 == DAT_8c277b10) {
    iVar2 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,ar4,ar7);
    if (DAT_8c277b14 != *(int *)(iVar2 * 0x44 + DAT_8c277b08 + 4)) {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
    FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,ar4,ar7);
  }
  if (bVar1) {
    iVar2 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,ar4,ar7);
    iVar2 = iVar2 * 0x44 + DAT_8c277b08;
    DAT_8c277b14 = *(int *)(iVar2 + 4);
    _DAT_8c4ab240 = _DAT_8c4ab240 & 0xffffffc0 | *(uint *)(iVar2 + 8) & 0x3f;
    _DAT_8c4ab244 = *(undefined4 *)(iVar2 + 0xc);
    DAT_8c277b1c = *(uint *)(iVar2 + 0x18) >> 0x10;
    DAT_8c277b10 = ar4;
  }
  return DAT_8c277b1c;
}

__asm__(".globl _FUN_8c23728c\n.set _FUN_8c23728c, _FUN_8c23728c_def\n");
