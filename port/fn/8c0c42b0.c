#include "../decls.h"
int FUN_8c0c42b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  int ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  
  iVar1 = 0;
  if (*(short *)(ar4 + 0x380) != 0) {
    ar7_00 = 4;
    ar6_00 = ar4 + 0x370;
    FUN_8c016318(ar4 + 0xc,ar4 + 0x350,ar6_00,4,in_stack_fffffff4);
    iVar1 = ar4 + 0x174;
    FUN_8c016324(ar4 + 0xc,iVar1,ar6_00,ar7_00);
    FUN_8c01538c(ar4 + 4,iVar1,ar6_00,ar7_00);
    ar5_00 = 8;
    FUN_8c014a94(ar4 + 4,8,ar6_00,ar7_00);
    FUN_8c01636c(ar4 + 0xc,ar5_00,ar6_00,ar7_00);
    *(short *)(ar4 + 0x380) = *(short *)(ar4 + 0x380) + -1;
    iVar1 = (int)*(short *)(ar4 + 0x380);
    if (iVar1 < 0) {
      iVar1 = 0x380;
      *(undefined2 *)(ar4 + 0x380) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0c42b0\n.set _FUN_8c0c42b0, _FUN_8c0c42b0_def\n");
