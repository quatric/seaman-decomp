#include "../decls.h"
undefined4 FUN_8c25a33c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  DAT_8c277b08 = ar4;
  DAT_8c277b0c = ar5;
  for (uVar1 = 0; uVar1 < DAT_8c277b0c; uVar1 = uVar1 + 1) {
    ain0 = 0x40;
    *(undefined4 *)(DAT_8c277b08 + iVar3) = 0xffffffff;
    *(undefined4 *)(DAT_8c277b08 + iVar3 + 4) = 0xffffffff;
    *(undefined4 *)(DAT_8c277b08 + iVar3 + 0x10) = 0;
    iVar2 = DAT_8c277b08 + iVar3;
    iVar3 = iVar3 + 0x44;
    *(undefined2 *)(iVar2 + 0x40) = 0;
  }
  DAT_8c277cb0 = 0;
  _DAT_8c4aa5a4 = 0;
  return ain0;
}

__asm__(".globl _FUN_8c25a33c\n.set _FUN_8c25a33c, _FUN_8c25a33c_def\n");
