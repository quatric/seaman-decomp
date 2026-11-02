#include "../decls.h"
undefined4 FUN_8c25a380_def(int *ar4,undefined4 *ar5,undefined4 ar6,uint ar7,undefined4 s0)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = DAT_8c277cb0;
  if (*(int *)(DAT_8c277cb0 * 0x44 + DAT_8c277b08) != -1) {
    for (uVar2 = 0; (uVar2 < DAT_8c277b0c && (*(int *)(uVar2 * 0x44 + DAT_8c277b08) != -1));
        uVar2 = uVar2 + 1) {
    }
  }
  if (uVar2 == DAT_8c277b0c - 1) {
    DAT_8c277cb0 = 0;
  }
  else {
    DAT_8c277cb0 = uVar2 + 1;
  }
  iVar3 = uVar2 * 0x44;
  *ar4 = DAT_8c277b08 + iVar3;
  *(undefined4 *)(DAT_8c277b08 + iVar3 + 0x18) = ar5[1];
  *(undefined4 *)(DAT_8c277b08 + iVar3 + 0x1c) = ar5[2];
  *(undefined4 *)(DAT_8c277b08 + iVar3 + 0x20) = ar5[3];
  *(undefined4 *)(DAT_8c277b08 + iVar3 + 0x24) = ar5[4];
  *(undefined4 *)(DAT_8c277b08 + iVar3 + 0x28) = ar5[5];
  *(undefined4 *)(DAT_8c277b08 + iVar3 + 0x2c) = ar5[6];
  *(undefined4 *)(DAT_8c277b08 + iVar3 + 0x30) = ar5[7];
  *(undefined4 *)(DAT_8c277b08 + iVar3 + 0x34) = ar5[8];
  *(undefined4 *)(DAT_8c277b08 + iVar3 + 0x14) = *ar5;
  *(undefined4 *)(DAT_8c277b08 + iVar3) = ar6;
  *(undefined4 *)(DAT_8c277b08 + iVar3 + 4) = s0;
  *(uint *)(DAT_8c277b08 + iVar3 + 0x10) = ar7;
  *(uint *)(DAT_8c277b08 + iVar3 + 0x10) = *(uint *)(DAT_8c277b08 + iVar3 + 0x10) & 0xfffffff7;
  if ((ar7 & 6) == 0) {
    uVar1 = 0x40;
    *(undefined2 *)(DAT_8c277b08 + iVar3 + 0x40) = 0;
  }
  else {
    *(undefined2 *)(DAT_8c277b08 + iVar3 + 0x40) = 1;
    uVar1 = FUN_8c2571fe(DAT_8c277b08 + iVar3,ar5,ar6,ar7);
  }
  if (_DAT_8c4aa5a4 <= uVar2) {
    _DAT_8c4aa5a4 = _DAT_8c4aa5a4 + 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c25a380\n.set _FUN_8c25a380, _FUN_8c25a380_def\n");
