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
undefined4 FUN_8c268a36_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c268a36";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int a6;
  undefined4 *a7;
  int unaff_r9 = 0;
  int unaff_r10 = 0;
  char *unaff_r11 = 0;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = (int)0x90;
  pcVar2 = unaff_r11;
  pcVar3 = unaff_r11;
  do {
    if (*pcVar3 == '\x01') {
      (vsp = ((unsigned long)(fr0_ - 0)), s_E1205_Illigal_parameter_MWRN_268d66(pcVar2,ar5,ar6,ar7));
    }
    pcVar3 = pcVar3 + iVar5;
    pcVar2 = pcVar2 + iVar5;
  } while (pcVar3 < (char *)(unsigned)(unaff_r9 + unaff_r10));
  pcVar2 = unaff_r11;
  pcVar3 = unaff_r11;
  pcVar4 = unaff_r11;
  do {
    if (*pcVar4 == '\x01') {
      (vsp = ((unsigned long)(fr0_ - 0)), s_E1205_Illigal_parameter_MWRN_268c80(pcVar3,pcVar2,ar6,ar7));
    }
    pcVar4 = pcVar4 + iVar5;
    pcVar3 = pcVar3 + iVar5;
  } while (pcVar4 < unaff_r11 + unaff_r10);
  (vsp = ((unsigned long)(fr0_ - 0)), memset(unaff_r11,0,unaff_r10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), memset(0x8c4bda00,0,(int)0x820,ar7));
  uVar1 = 0x80808080;
  iVar5 = 0;
  a6 = (int)0x200;
  a7 = 0x8c4be220;
  do {
    iVar5 = iVar5 + 1;
    *a7 = uVar1;
    a7 = a7 + 1;
  } while (iVar5 < a6);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2785cc)) + 0x10))))(iVar5,uVar1,a6,a7));
  return uVar1;
}

__asm__(".globl _FUN_8c268a36\n.set _FUN_8c268a36, _FUN_8c268a36_def\n");
