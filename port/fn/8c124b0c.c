#include "../decls.h"
int FUN_8c124b0c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar7_00;
  float extraout_fr0;
  undefined4 uStack_10;
  char cStack_c;
  
  uStack_10 = ar4;
  cStack_c = (char)ar5;
  FUN_8c120550(&uStack_10,0x25,ar6,ar7);
  if (((int)extraout_fr0 & 0xffU) == 0) {
    ar7_00 = 1;
  }
  else {
    ar7_00 = 2;
  }
  iVar1 = FUN_8c120580(ar4,(int)(char)ar5,1,ar7_00,FUN_8c1244f8,&LAB_8c1247cc,&LAB_8c124620,0x4e0);
  *(char *)(iVar1 + 0x48c) = (char)(int)extraout_fr0;
  return iVar1;
}

__asm__(".globl _FUN_8c124b0c\n.set _FUN_8c124b0c, _FUN_8c124b0c_def\n");
