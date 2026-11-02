#include "../decls.h"
undefined4
s_Lib_Handle_StartLib_Handle_E_1f5d04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *a5;
  int unaff_r10;
  int a4;
  
  iVar1 = FUN_8c013ec0(ar4 + 0x30,s_Lib_Handle_StartLib_Handle_End_o_8c26c744,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = 1;
    while( true ) {
      a5 = s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10;
      a4 = iVar1 * 0x20 + unaff_r10 + 0x20;
      uVar2 = 0x10;
      iVar3 = FUN_8c013ec0(a4 + 0x10,s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10,0x10,ar7);
      if (iVar3 == 0) break;
      FUN_8c1f5c04(a4,a5,uVar2,ar7);
      iVar1 = iVar1 + 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _s_Lib_Handle_StartLib_Handle_E_1f5d04\n.set _s_Lib_Handle_StartLib_Handle_E_1f5d04, _s_Lib_Handle_StartLib_Handle_E_1f5d04_def\n");
