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
int s_E1237_sdPstmSetVol_return_er_26a870_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1237_sdPstmSetVol_return_er_26a870";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int a4;
  int a5;
  int iVar2;
  int a6;
  undefined4 uVar3;
  int unaff_r12 = 0;
  
  iVar2 = -0x7f;
  if (ar4 < ar5) {
    if (-1 < ar5) {
      iVar1 = 0x7f;
      goto LAB_8c26a8aa;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(ar5 * -0xff + 0x80,ar4,vr6,vr7));
    ain0 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(iVar1 * 10,0x12,vr6,vr7));
    iVar1 = ain0;
    if (iVar2 <= ain0) goto LAB_8c26a8aa;
  }
  iVar1 = iVar2;
LAB_8c26a8aa:
  iVar2 = 0;
  while( true ) {
    if (*(int *)(unsigned)(unaff_r12 + 0xc) <= iVar2) {
      return ain0;
    }
    uVar3 = 0;
    a5 = iVar2;
    a6 = iVar1;
    a4 = (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c267e54(*(undefined4 *)(unsigned)(unaff_r12 + 0x30),iVar2,iVar1,0));
    if (a4 != 0) break;
    iVar2 = iVar2 + 1;
    ain0 = 0;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), debug_printf(a4,a5,a6,uVar3));
  return uVar3;
}

__asm__(".globl _s_E1237_sdPstmSetVol_return_er_26a870\n.set _s_E1237_sdPstmSetVol_return_er_26a870, _s_E1237_sdPstmSetVol_return_er_26a870_def\n");
