#include "../decls.h"
undefined4 FUN_8c0b7920_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 != 2) {
    _DAT_8c4365ec = ar4;
  }
  if (ar4 == 0) {
    s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,0xb,0,&DAT_8c13c025);
    return 1;
  }
  if (_DAT_8c4365ec == 1) {
    s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,1,0,&DAT_8c13c025);
    return 0;
  }
  if (_DAT_8c4365ec != 3) {
    if (_DAT_8c4365ec == 4) {
      uVar1 = get_field_a524_01f514(0x8c3dd7dc,ar5,ar6,ar7);
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,4,uVar1,&DAT_8c13c025);
      return 0;
    }
    if (_DAT_8c4365ec != 5) {
      return 0;
    }
  }
  uVar1 = get_field_a524_01f514(0x8c3dd7dc,ar5,ar6,ar7);
  s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,2,uVar1,&DAT_8c13c025);
  return 0;
}

__asm__(".globl _FUN_8c0b7920\n.set _FUN_8c0b7920, _FUN_8c0b7920_def\n");
