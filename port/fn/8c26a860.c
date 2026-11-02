#include "../decls.h"
int FUN_8c26a860_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int ar4_00;
  int ar5_00;
  int iVar2;
  int ar6_00;
  undefined4 uVar3;
  undefined4 in_PR;
  
  iVar2 = -0x7f;
  if (-0x3bf < ar5) {
    if (-1 < ar5) {
      iVar1 = 0x7f;
      goto LAB_8c26a8aa;
    }
    iVar1 = libgcc_divide_helper_010468(ar5 * -0xff + 0x80,0xfffffc41);
    in_r0 = libgcc_divide_helper_010468(iVar1 * 10,0x12);
    iVar1 = in_r0;
    if (iVar2 <= in_r0) goto LAB_8c26a8aa;
  }
  iVar1 = iVar2;
LAB_8c26a8aa:
  iVar2 = 0;
  while( true ) {
    if (*(int *)(ar4 + 0xc) <= iVar2) {
      return in_r0;
    }
    uVar3 = 0;
    ar5_00 = iVar2;
    ar6_00 = iVar1;
    ar4_00 = thunk_FUN_8c267e54(*(undefined4 *)(ar4 + 0x30),iVar2,iVar1,0);
    if (ar4_00 != 0) break;
    iVar2 = iVar2 + 1;
    in_r0 = 0;
  }
  uVar3 = debug_printf(ar4_00,ar5_00,ar6_00,uVar3,s_E1237_sdPstmSetVol_return_error_i_8c27377c,in_PR
                      );
  return uVar3;
}

__asm__(".globl _FUN_8c26a860\n.set _FUN_8c26a860, _FUN_8c26a860_def\n");
