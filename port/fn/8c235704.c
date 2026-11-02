#include "../decls.h"
undefined4 FUN_8c235704_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < ar5 + 1) {
    do {
      _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + 6;
      *_DAT_8c4aa3e4 = *(undefined4 *)(iVar1 * 4 + ar4[1]);
      _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -3;
      *_DAT_8c4aa3e4 = _DAT_8c4aa3e0;
      _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
      *_DAT_8c4aa3e4 = *(undefined4 *)(*ar4 + iVar1 * 8 + 4);
      _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
      *_DAT_8c4aa3e4 = *(undefined4 *)(iVar1 * 8 + *ar4);
      _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
      *_DAT_8c4aa3e4 = 0xe0000000;
      iVar1 = iVar1 + 1;
      _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + 8;
    } while (iVar1 < ar5 + 1);
  }
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + 6;
  *_DAT_8c4aa3e4 = *(undefined4 *)(iVar1 * 4 + ar4[1]);
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -3;
  *_DAT_8c4aa3e4 = _DAT_8c4aa3e0;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = *(undefined4 *)(*ar4 + iVar1 * 8 + 4);
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = *(undefined4 *)(iVar1 * 8 + *ar4);
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = 0xf0000000;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + 8;
  return 4;
}

__asm__(".globl _FUN_8c235704\n.set _FUN_8c235704, _FUN_8c235704_def\n");
