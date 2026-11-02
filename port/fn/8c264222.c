#include "../decls.h"
undefined4 FUN_8c264222_def(ushort *ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  short asStack_28 [2];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [8];
  int *piStack_8;
  
  if (((1 < ar5) &&
      (((int)(uint)*ar4 >> 8 | (uint)*ar4 << 8 & 0xff00 & 0xffff) == 0x8000)) &&
     (piStack_8 = ar6,
     iVar1 = (*(code *)(&FUN_8c260d7c))
                       (ar4,ar5,asStack_28,auStack_24,auStack_20,auStack_1c,auStack_18,auStack_14,
                        auStack_10), -1 < iVar1)) {
    *piStack_8 = (int)asStack_28[0];
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c264222\n.set _FUN_8c264222, _FUN_8c264222_def\n");
