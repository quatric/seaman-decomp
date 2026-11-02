#include "../decls.h"
undefined4 FUN_8c02f20c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar5 + 4);
  FUN_8c02ee20(ar4 + 0x44,uVar1,ar6,ar7);
  uVar1 = get_field_4_02eb24(ar4 + 0x44,uVar1,ar6,ar7);
  FUN_8c02f298(ar4,uVar1,ar6,ar7);
  FUN_8c02f2c8(ar4,uVar1,ar6,ar7);
  *(undefined1 *)(0x9b + ar4) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x24) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  *(undefined4 *)(ar4 + 0x1c) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  return 0;
}

__asm__(".globl _FUN_8c02f20c\n.set _FUN_8c02f20c, _FUN_8c02f20c_def\n");
