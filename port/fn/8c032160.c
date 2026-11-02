#include "../decls.h"
undefined4 FUN_8c032160_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_PR;
  
  *(undefined4 *)(ar4 + 300) = 0;
  *(undefined4 *)(ar4 + 0x40) = 5;
  *(undefined4 *)(ar4 + 0x134) = 0;
  FUN_8c031b58(ar4 + 0xb0,ar5,ar6,ar7);
  FUN_8c032204(ar4 + 0xb0,ar5,ar6,ar7,in_PR);
  ar5_00 = 1;
  FUN_8c0321fc(ar4 + 0xb0,1,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x138) = 0;
  FUN_8c030eb8(ar4 + 0x1fc,ar5_00,ar6,ar7);
  *(undefined4 *)(ar4 + 0x214) = 1;
  *(undefined4 *)(ar4 + 0x218) = 0;
  *(undefined4 *)(ar4 + 0x1e8) = 0;
  return 0x1e8;
}

__asm__(".globl _FUN_8c032160\n.set _FUN_8c032160, _FUN_8c032160_def\n");
