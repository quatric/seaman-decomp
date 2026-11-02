#include "../decls.h"
int FUN_8c11c86c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = ar7;
  FUN_8c11c5e4(ar4,&uStack_10,ar7,s0);
  uVar1 = (**(code **)(0xc4 + ar4))(uStack_10,0xf4 + ar4,ar7,s0);
  uStack_c = CONCAT31((*(uint*)((uchar*)&uStack_c+1)),(char)uVar1);
  FUN_8c11c7b8(ar4,uStack_10,ar7,s0);
  return (int)(char)uStack_c;
}

__asm__(".globl _FUN_8c11c86c\n.set _FUN_8c11c86c, _FUN_8c11c86c_def\n");
