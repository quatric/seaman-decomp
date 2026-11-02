#include "../decls.h"
undefined4 FUN_8c1fd626_def(undefined4 ar4,uint ar5,int ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined1 *ar4_00;
  undefined4 uVar2;
  int iVar3;
  undefined4 a6;
  uint uVar4;
  
  _DAT_8c4783dc = -0x73b87c38;
  puVar1 = (undefined4 *)&DAT_8c478e20;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 < (undefined4 *)0x8c478e40);
  memset(0x8c4783c8,0,0x14,ar7);
  a6 = 0xa40;
  uVar2 = 0;
  memset(&DAT_8c4783e0,0,0xa40,ar7);
  FUN_8c1fd5f8(0,uVar2,a6,ar7);
  iVar3 = 0;
  uVar4 = 1;
  _DAT_8c47d2e8 = 0;
  do {
    iVar3 = iVar3 + 1;
    if ((ar5 & uVar4) != 0) {
      _DAT_8c47d2e8 = _DAT_8c47d2e8 + 1;
    }
    uVar4 = uVar4 << 1;
  } while (iVar3 < 8);
  if (ar6 == 0) {
    FUN_8c1fd720(ar4,ar5,0,ar7);
    *(undefined4 *)(_DAT_8c4783dc + 8) = 1;
  }
  else {
    FUN_8c1fd75c(ar4,ar5,ar6,ar7);
    *(undefined4 *)(_DAT_8c4783dc + 8) = 0;
  }
  _DAT_8c47d2e0 = 8;
  _DAT_8c47d2e4 = 0;
  FUN_8c1fba90(10,ar5,ar6,ar7);
  ar4_00 = &DAT_8c47d0a0;
  iVar3 = _DAT_8c47d2e0 * 0x48;
  uVar2 = 0;
  memset(&DAT_8c47d0a0,0,iVar3,ar7);
  FUN_8c1fcffc(ar4_00,uVar2,iVar3,ar7,ar4);
  return 0;
}

__asm__(".globl _FUN_8c1fd626\n.set _FUN_8c1fd626, _FUN_8c1fd626_def\n");
