#include "../decls.h"
undefined4 FUN_8c031684_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  ar7_00 = 0;
  ar6_00 = 0xffffffff;
  ar5_00 = 0;
  s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0);
  s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ar5_00,ar6_00,ar7_00);
  if (cVar1 == '\0') {
    ar4[10] = 0;
    ar4[9] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 10) = (ulonglong)extraout_fr1;
    *(ulonglong *)(ar4 + 9) = (ulonglong)extraout_fr1;
  }
  FUN_8c031748(ar4,ar5_00,ar6_00,ar7_00);
  FUN_8c031700(ar4,ar5_00,ar6_00,ar7_00);
  (**(code **)(*ar4 + 0x2c))(ar4,ar5_00,ar6_00,ar7_00);
  ar4[0x1a] = 0;
  return 0x68;
}

__asm__(".globl _FUN_8c031684\n.set _FUN_8c031684, _FUN_8c031684_def\n");
