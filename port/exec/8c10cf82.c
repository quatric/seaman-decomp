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
undefined4 FUN_8c10cf82_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10cf82";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  ushort unaff_r8 = 0;
  int iVar2;
  undefined4 *unaff_r10 = 0;
  int unaff_r11 = 0;
  ushort *unaff_r12 = 0;
  int *piVar3;
  int a4;
  
  piVar3 = (int *)(unsigned)*unaff_r10;
  a4 = *ar4;
  iVar2 = unaff_r11;
  if (*unaff_r12 != 0) {
    do {
      if (*piVar3 != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*piVar3,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,piVar3[2],ar6,ar7));
        *piVar3 = unaff_r11;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar2 < (int)(uint)*unaff_r12);
  }
  if (*unaff_r12 != unaff_r8) {
    if (*unaff_r12 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*unaff_r10,ar6,ar7));
    }
    if (unaff_r8 != 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,(uint)unaff_r8,0xc,ar7));
      *unaff_r10 = uVar1;
    }
    *unaff_r12 = unaff_r8;
  }
  return *unaff_r10 = 0;
}

__asm__(".globl _FUN_8c10cf82\n.set _FUN_8c10cf82, _FUN_8c10cf82_def\n");
