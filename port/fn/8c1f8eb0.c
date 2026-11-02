#include "../decls.h"
undefined4 FUN_8c1f8eb0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  DAT_8c273a28[*ar4 * 0xd + 1] = *ar4;
  DAT_8c273a28[*ar4 * 0xd + 0xb] = 0;
  DAT_8c273a28[*ar4 * 0xd + 0xc] = 0;
  DAT_8c273a28[*ar4 * 0xd + 0xd] = 0;
  DAT_8c273a28[*ar4 * 0xd + 2] = 0;
  DAT_8c273a28[*ar4 * 0xd + 3] = 0;
  DAT_8c273a28[*ar4 * 0xd + 4] = 0;
  DAT_8c273a28[*ar4 * 0xd + 5] = 0;
  DAT_8c273a28[*ar4 * 0xd + 6] = 0;
  DAT_8c273a28[*ar4 * 0xd + 7] = 3;
  DAT_8c273a28[*ar4 * 0xd + 8] = 0;
  DAT_8c273a28[*ar4 * 0xd + 9] = 0;
  *(undefined4 *)(*ar4 * 0x20 + *DAT_8c273a28 + 0x14) = 0;
  return 0;
}

__asm__(".globl _FUN_8c1f8eb0\n.set _FUN_8c1f8eb0, _FUN_8c1f8eb0_def\n");
