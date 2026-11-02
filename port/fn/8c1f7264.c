#include "../decls.h"
undefined4 FUN_8c1f7264_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *ar5_00;
  undefined4 uVar1;
  
  uVar1 = 1;
  if (_DAT_8c47497c == -1) {
    _DAT_8c47497c = _DAT_8c4749fc;
  }
  _DAT_8c474980 = _DAT_8c4749fc;
  FUN_8c1f8176(0x8c4749f2,ar5,ar6,ar7);
  ar5_00 = &DAT_8c474a00;
  FUN_8c1f826c(0x8c4749f2,&DAT_8c474a00,ar6,ar7);
  if (_DAT_8c474984 == -1) {
    _DAT_8c474984 = 1;
  }
  else {
    FUN_8c1f7158(&DAT_8c474984,ar5_00,ar6,ar7,ar4);
  }
  if (1 < _DAT_8c4748c0) {
    uVar1 = FUN_8c1f6e5e(ar4 + 3,&DAT_8c474978,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f7264\n.set _FUN_8c1f7264, _FUN_8c1f7264_def\n");
