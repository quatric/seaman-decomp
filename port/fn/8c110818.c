#include "../decls.h"
undefined4 FUN_8c110818_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *unaff_r14;
  float extraout_fr0;
  float extraout_fr0_00;
  float extraout_fr0_01;
  char cVar2;
  
  iVar1 = *unaff_r14;
  FUN_8c120550(ar4,1,ar6,ar7);
  unaff_r14[0xb] = (int)extraout_fr0 & 0xffff;
  FUN_8c120550(unaff_r14,2,ar6,ar7);
  unaff_r14[0xc] = (int)extraout_fr0_00 & 0xffff;
  FUN_8c120550(unaff_r14,3,ar6,ar7);
  cVar2 = '\0';
  unaff_r14[0xd] = (int)(float)(int)(short)(int)extraout_fr0_01;
  *(undefined2 *)(*(int *)unaff_r14[4] + 0xc) = 1;
  iVar1 = (**(code **)(iVar1 + 0x14))(iVar1,unaff_r14[0xc],4,ar7);
  unaff_r14[0xe] = iVar1;
  unaff_r14[0xf] = iVar1;
  unaff_r14[0x10] = unaff_r14[0xc] * 4 + unaff_r14[0xe];
  if (cVar2 == '\0') {
    unaff_r14[0x11] = 0;
  }
  else {
    unaff_r14[0x11] = 0;
    unaff_r14[0x12] = 0x41700000;
  }
  unaff_r14[0x12] = 0;
  return 0;
}

__asm__(".globl _FUN_8c110818\n.set _FUN_8c110818, _FUN_8c110818_def\n");
