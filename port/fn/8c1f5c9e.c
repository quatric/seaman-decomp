#include "../decls.h"
undefined4 FUN_8c1f5c9e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *ar5_00;
  int ar4_00;
  
  iVar1 = FUN_8c013ec0(ar4 + 0x30,s_Lib_Handle_StartLib_Handle_End_o_8c26c744,0x10,ar7);
  if (iVar1 == 0) {
    iVar1 = 1;
    while( true ) {
      ar5_00 = s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10;
      ar4_00 = iVar1 * 0x20 + ar4 + 0x20;
      uVar2 = 0x10;
      iVar3 = FUN_8c013ec0(ar4_00 + 0x10,s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10,0x10,ar7
                          );
      if (iVar3 == 0) break;
      FUN_8c1f5bb4(ar4_00,ar5_00,uVar2,ar7);
      iVar1 = iVar1 + 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f5c9e\n.set _FUN_8c1f5c9e, _FUN_8c1f5c9e_def\n");
