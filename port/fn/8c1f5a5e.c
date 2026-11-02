#include "../decls.h"
int FUN_8c1f5a5e_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (_DAT_8c00fff0 == 0) {
    FUN_8c1f5b1a(0x8c00fc00,0x78,ar6,ar7,ar4);
  }
  iVar1 = _DAT_8c00fff0;
  *ar4 = _DAT_8c00fff4;
  return iVar1;
}

__asm__(".globl _FUN_8c1f5a5e\n.set _FUN_8c1f5a5e, _FUN_8c1f5a5e_def\n");
