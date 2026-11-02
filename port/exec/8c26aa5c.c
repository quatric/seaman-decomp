#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_E1239_sdPstmSetPitch_return__26aa62_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1239_sdPstmSetPitch_return__26aa62";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int a4;
  int iVar2;
  int a5;
  int a6;
  undefined4 a7;
  int a5_00;
  int unaff_r14 = 0;
  char in_T = 0;
  
  if (in_T != '\0') {
    ar5 = ar4;
  }
  if (ar5 < -0x17) {
    ar5 = -0x18;
  }
  *(int *)(unsigned)(unaff_r14 + 0x4c) = ar5;
  iVar2 = ar5 << 8;
  if (0x62 < ar6) {
    ar6 = 99;
  }
  if (ar6 < -0x62) {
    ar6 = -99;
  }
  *(int *)(unsigned)(unaff_r14 + 0x50) = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(ar6 << 8,100,vr6,vr7));
  iVar2 = iVar2 + iVar1;
  for (a5_00 = 0; a5_00 < *(int *)(unsigned)(unaff_r14 + 0xc); a5_00 = a5_00 + 1) {
    a7 = 0;
    a5 = a5_00;
    a6 = iVar2;
    a4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c267d74(*(undefined4 *)(unsigned)(unaff_r14 + 0x30),a5_00,iVar2,0));
    iVar1 = 0;
    if (a4 != 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), debug_printf(a4,a5,a6,a7));
    }
  }
  return iVar1;
}

__asm__(".globl _s_E1239_sdPstmSetPitch_return__26aa62\n.set _s_E1239_sdPstmSetPitch_return__26aa62, _s_E1239_sdPstmSetPitch_return__26aa62_def\n");
