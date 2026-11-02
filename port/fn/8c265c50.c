#include "../decls.h"
int FUN_8c265c50_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar7_00;
  int ar5_00;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  ar7_00 = DAT_8c2784c0;
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    *ar4 = *(undefined4 *)(*(int *)(DAT_8c2784c0 + 0x1a0) * 8 + *(int *)(DAT_8c2784c0 + 0x194));
    *ar5 = *(undefined4 *)(*(int *)(DAT_8c2784c0 + 0x1a0) * 8 + *(int *)(DAT_8c2784c0 + 0x194) + 4);
    *(undefined4 *)(*(int *)(DAT_8c2784c0 + 0x1a0) * 8 + *(int *)(DAT_8c2784c0 + 0x194)) = 0;
    *(undefined4 *)(*(int *)(DAT_8c2784c0 + 0x1a0) * 8 + *(int *)(DAT_8c2784c0 + 0x194) + 4) = 0;
    *(int *)(DAT_8c2784c0 + 0x1a0) = *(int *)(DAT_8c2784c0 + 0x1a0) + 1;
    if (*(int *)(DAT_8c2784c0 + 0x1a0) == *(int *)(DAT_8c2784c0 + 0x198)) {
      *(undefined4 *)(DAT_8c2784c0 + 0x1a0) = 0;
    }
    *(int *)(DAT_8c2784c0 + 0x1a4) = *(int *)(DAT_8c2784c0 + 0x1a4) + -1;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265c50,ar5_00,&DAT_8c2784c0,ar7_00,
                 (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265c50\n.set _FUN_8c265c50, _FUN_8c265c50_def\n");
