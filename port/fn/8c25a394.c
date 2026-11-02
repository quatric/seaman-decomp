#include "../decls.h"
undefined4
FUN_8c25a394_def(int *ar4,undefined4 *ar5,undefined4 ar6,uint ar7,undefined4 s0,undefined4 s4,
            undefined4 s8,undefined4 s12,undefined4 s16,undefined4 s20,undefined4 s24,undefined4 s28
            )

{
  undefined4 uVar1;
  uint unaff_r8;
  uint *unaff_r9;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *unaff_r14;
  
  uVar2 = *unaff_r9;
  uVar3 = unaff_r8;
  if (*(int *)(uVar2 * 0x44 + *unaff_r14) != -1) {
    for (; (uVar2 = uVar3, uVar3 < DAT_8c277b0c && (*(int *)(uVar3 * 0x44 + *unaff_r14) != -1));
        uVar3 = uVar3 + 1) {
    }
  }
  if (uVar2 == DAT_8c277b0c - 1) {
    *unaff_r9 = unaff_r8;
  }
  else {
    *unaff_r9 = uVar2 + 1;
  }
  iVar4 = uVar2 * 0x44;
  *ar4 = *unaff_r14 + iVar4;
  *(undefined4 *)(*unaff_r14 + iVar4 + 0x18) = ar5[1];
  *(undefined4 *)(*unaff_r14 + iVar4 + 0x1c) = ar5[2];
  *(undefined4 *)(*unaff_r14 + iVar4 + 0x20) = ar5[3];
  *(undefined4 *)(*unaff_r14 + iVar4 + 0x24) = ar5[4];
  *(undefined4 *)(*unaff_r14 + iVar4 + 0x28) = ar5[5];
  *(undefined4 *)(*unaff_r14 + iVar4 + 0x2c) = ar5[6];
  *(undefined4 *)(*unaff_r14 + iVar4 + 0x30) = ar5[7];
  *(undefined4 *)(*unaff_r14 + iVar4 + 0x34) = ar5[8];
  *(undefined4 *)(*unaff_r14 + iVar4 + 0x14) = *ar5;
  *(undefined4 *)(*unaff_r14 + iVar4) = ar6;
  *(undefined4 *)(*unaff_r14 + iVar4 + 4) = s28;
  *(uint *)(*unaff_r14 + iVar4 + 0x10) = ar7;
  *(uint *)(*unaff_r14 + iVar4 + 0x10) = *(uint *)(*unaff_r14 + iVar4 + 0x10) & 0xfffffff7;
  if ((ar7 & 6) == 0) {
    uVar1 = 0x40;
    *(short *)(*unaff_r14 + iVar4 + 0x40) = (short)unaff_r8;
  }
  else {
    *(undefined2 *)(*unaff_r14 + iVar4 + 0x40) = 1;
    uVar1 = FUN_8c2571fe(*unaff_r14 + iVar4,ar5,ar6,ar7);
  }
  if (_DAT_8c4aa5a4 <= uVar2) {
    _DAT_8c4aa5a4 = _DAT_8c4aa5a4 + 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c25a394\n.set _FUN_8c25a394, _FUN_8c25a394_def\n");
