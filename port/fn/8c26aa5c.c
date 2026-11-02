#include "../decls.h"
int s_E1239_sdPstmSetPitch_return__26aa62_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  int a5;
  int a6;
  undefined4 a7;
  int a5_00;
  int unaff_r14;
  char in_T;
  
  if (in_T != '\0') {
    ar5 = ar4;
  }
  if (ar5 < -0x17) {
    ar5 = -0x18;
  }
  *(int *)(unaff_r14 + 0x4c) = ar5;
  iVar2 = ar5 << 8;
  if (0x62 < ar6) {
    ar6 = 99;
  }
  if (ar6 < -0x62) {
    ar6 = -99;
  }
  *(int *)(unaff_r14 + 0x50) = ar6;
  iVar1 = libgcc_divide_helper_010468(ar6 << 8,100);
  iVar2 = iVar2 + iVar1;
  for (a5_00 = 0; a5_00 < *(int *)(unaff_r14 + 0xc); a5_00 = a5_00 + 1) {
    a7 = 0;
    a5 = a5_00;
    a6 = iVar2;
    a4 = FUN_8c267d74(*(undefined4 *)(unaff_r14 + 0x30),a5_00,iVar2,0);
    iVar1 = 0;
    if (a4 != 0) {
      iVar1 = debug_printf(a4,a5,a6,a7);
    }
  }
  return iVar1;
}

__asm__(".globl _s_E1239_sdPstmSetPitch_return__26aa62\n.set _s_E1239_sdPstmSetPitch_return__26aa62, _s_E1239_sdPstmSetPitch_return__26aa62_def\n");
