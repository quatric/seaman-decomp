#include "../decls.h"
undefined4 FUN_8c0dba50_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  int iVar2;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  iVar2 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  while( true ) {
    if (7 < iVar2) {
      return 0;
    }
    iVar1 = FUN_8c0f6ab0(ar4 + iVar2 * 0x68 + 0xc0c,ar5_00,ar6_00,ar7);
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
  }
  Vec3_ctor_copy(auStack_28,ar5,ar6_00,ar7);
  Vec3_ctor_copy(auStack_38,ar6,ar6_00,ar7);
  ar6_01 = auStack_38;
  FUN_8c0f69ec(ar4 + iVar2 * 0x68 + 0xc0c,auStack_28,ar6_01,ar7);
  Vec3_dtor(auStack_38,0xffffffff,ar6_01,ar7);
  Vec3_dtor(auStack_28,0xffffffff,ar6_01,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0dba50\n.set _FUN_8c0dba50, _FUN_8c0dba50_def\n");
