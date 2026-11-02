#include "../decls.h"
undefined4 FUN_8c0afb1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  *(undefined4 *)(ar4 + 0x31c) = 0;
  *(undefined4 *)(ar4 + 0x314) = 0;
  *(undefined4 *)(ar4 + 0x324) = 0;
  FUN_8c031748(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x328) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x32c) = 0;
  *(undefined4 *)(ar4 + 0x220) = 0;
  *(undefined4 *)(ar4 + 0x240) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x334) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x334) = (ulonglong)extraout_fr1;
  }
  vec3_clear(ar4 + 0x338,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x348) = 0;
  _DAT_8c286dec = 0;
  *(undefined ***)(ar4 + 0x1c8) = &PTR_DAT_8c13ba24;
  *(undefined4 *)(ar4 + 0x1cc) = 9;
  return 0x1cc;
}

__asm__(".globl _FUN_8c0afb1c\n.set _FUN_8c0afb1c, _FUN_8c0afb1c_def\n");
