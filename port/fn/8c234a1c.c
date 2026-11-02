#include "../decls.h"
undefined4
FUN_8c234a1c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            )

{
  int iVar1;
  undefined4 uVar2;
  int ar6_00;
  undefined4 uStack_4;
  
  iVar1 = (int)(int)0xffffff7c;
  *(undefined4 *)((int)&uStack_4 + iVar1) = ar4;
  if (((int)&s0 + 0x88 + iVar1 & 3U) == 0) {
    ar6_00 = (int)&s0 + 0x88 + iVar1;
  }
  else {
    ar6_00 = (int)&s4 + 0x88 + iVar1;
  }
  (*(code *)(&vsprintf_like))
            ((int)&s0 + iVar1,*(undefined4 *)((int)&uStack_4 + 0x88 + iVar1),ar6_00,ar7);
  uVar2 = FUN_8c2341d6(*(undefined4 *)((int)&uStack_4 + iVar1),(int)&s0 + iVar1,ar6_00,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c234a1c\n.set _FUN_8c234a1c, _FUN_8c234a1c_def\n");
