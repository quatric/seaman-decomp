#include "../decls.h"
undefined4
FUN_8c0b9afc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            )

{
  if (0x17 < (byte)s4) {
    return 8;
  }
                    
  switch((byte)s4) {
  case 0:
  case 1:
    return 6;
  default:
    return 7;
  case 5:
  case 6:
  case 7:
    return 0;
  case 8:
  case 9:
  case 10:
    return 1;
  case 0xb:
  case 0xc:
  case 0xd:
    return 2;
  case 0xe:
  case 0xf:
  case 0x10:
    return 3;
  case 0x11:
  case 0x12:
  case 0x13:
    return 4;
  case 0x14:
    return 5;
  }
}

__asm__(".globl _FUN_8c0b9afc\n.set _FUN_8c0b9afc, _FUN_8c0b9afc_def\n");
